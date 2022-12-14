# auto_item_increase
## パッチ1.1.0でミラコラ増殖は出来なくなった為、増殖ミラコラを所有している人向けsketchになりました。

Arduino Leonardo,Arduino Micro等のATmega32U4マイクロチップが搭載されたマイコンを使ってポケモンSV内で自動的にアイテムを増殖するsketchです。  
現状、SV側の問題かマイコン側の問題か分かりませんが、たまに入力が飛んでコマンドがずれることがあるので完全放置は出来ないです。

## 必須モジュール
[NintendoSwitchController](https://github.com/interimadd/NintendoSwitchControll)

## 使用方法
1. 増殖したミラコラに、増やしたいアイテムを持たせる。
2. メニューを開いたときカーソルが一番上のポケモンにあるようにしておく。
3. ミラコラは手持ちの上から2番目にしておく。
4. ボックス1の左上にカーソルを合わせておく。
5. 1~4を行ったうえでメニューを閉じた状態でスタートする。
6. 無線コントローラーを使ってる場合はswitchが起動している状態でマイコンを接続しても認識されないので、一度switchをスリープモードにし電源を付けてから接続する。

## 備考
* 約20秒で1ループ、1時間で約180回実行されます。
* inputスピードが速すぎるとコマンドが飛ぶので遅めに設定している。
* それでもたまに入力が飛ぶので完全放置は出来ない。
* SVがたまに重くなるから入力がずれる可能性あり。天候が変わって処理が重くなる屋外での実行は避け、室内で実行したほうがよさそう。