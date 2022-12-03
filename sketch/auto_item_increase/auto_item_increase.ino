/**
* ミラコラ増殖バグでアイテムを増やし続けるスケッチ
*  *ミラコラ=ミライドン、コライドンの略
*
* 初期条件は以下の通り
* 1. 増殖したミラコラに、増やしたいアイテムを持たせる。
* 2. メニューを開いたときカーソルが一番上のポケモンにあるようにしておく。
* 3. ミラコラは手持ちの上から2番目にしておく。
* 4. ボックス1の左上にカーソルを合わせておく。
* 5.1~4を行ったうえでメニューを閉じた状態でスタート
* 6. 無線コントローラーを使ってる場合はswitchが起動している状態でマイコンを接続しても認識されないので、一度switchをスリープモードにし電源を付けてから接続する。
*/
#include <auto_command_util.h>

void execItemIncreaseSequence()
{
    // ライドフォームに戻す
    pushButton(Button::A, 300);
    pushHatButton(Hat::UP, 300, 2);
    pushButton(Button::A, 1500);
    pushButton(Button::A, 300);
    pushButton(Button::A, 4500);
    pushButton(Button::A, 500);

    // ボックスを開く
    pushHatButton(Hat::RIGHT, 250);
    pushHatButton(Hat::DOWN, 300, 2);
    pushButton(Button::A, 3500);

    // ミラコラボックスのミラコラからアイテムを回収する
    pushButton(Button::X, 300);
    pushButton(Button::X, 600);
    pushButton(Button::L, 500);
    pushButton(Button::A, 400);
    pushHatButton(Hat::UP, 300, 3);
    pushButton(Button::A, 800);
    pushButton(Button::B, 2700);
    pushHatButton(Hat::LEFT, 400);
}

void setup(){
    pushButton(Button::A, 2000, 5);  // 最初の数回の入力はswitchが認識しない場合があるので、無駄打ちをしておく
    pushButton(Button::X, 500);  // メニューを開く
    pushHatButton(Hat::DOWN, 100); // ここでミラコラにカーソルが合う
}
void loop(){
    execItemIncreaseSequence();
}
