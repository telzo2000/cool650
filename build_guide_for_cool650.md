# Build Guide

## Parts list

|番号| 名前 | 数 | 備考 | 調達先の例 | 参考価格（送料込） |
|:-|:-|:-|--|--|--|
|1|PCB|1枚|macro pad|ALLPCB | ALLPCBの無料クーポンで５枚で０円|
||PCB|2枚|splite keyboard|ALLPCB|ALLPCBの無料クーポンで５枚で０円|
|2|M2ネジ|７本|６mm|DIYショップ等|10本程度で100円|
|3|M2ネジ|３本|８mm|DIYショップ等|10本程度で100円|
|4|M2スペーサー|PCB１枚につき５本|８mm|[ヒロスギネット](https://www.hirosugi-net.co.jp/shop/default.aspx)<br>[遊舎工房](https://shop.yushakobo.jp)等|20個で748円（税込）@ヒロスギネット|
|5|pro micro|PCB１枚につき１個|ピンヘッダが必要|[遊舎工房](https://shop.yushakobo.jp)<br>[TALP keyboard](https://talpkeyboard.net)|750円程度|
|6|スイッチプレート|１枚|アクリル|Elecrow|49.1ドル（送料込み）|
||ミドルプレート|４枚|アクリル|Elecrow|↑同じ|
||ボトムプレート|１枚|アクリル|Elecrow|↑同じ|
|7|スイッチソケット|pcb１枚につき25個|MX|[遊舎工房](https://shop.yushakobo.jp)<br>[TALP keyboard](https://talpkeyboard.net)|10個で165円（税込）|
|8|ダイオード|pcb１枚につき25個|リードタイプ、SMDのどちらでも可|[遊舎工房](https://shop.yushakobo.jp)<br>[TALP keyboard](https://talpkeyboard.net)|100個で220円（税込）|
|9|リセットスイッチ|PCBにつき１個|タクタイルスイッチとも呼ばれる|[遊舎工房](https://shop.yushakobo.jp)<br>[TALP keyboard](https://talpkeyboard.net)|1個で11円（税込）|
|10|MXスイッチ|PCB１枚につき25個||[遊舎工房](https://shop.yushakobo.jp)<br>[TALP keyboard](https://talpkeyboard.net)等|1個で100円前後|
|11|キーキャップ|PCB１枚につき25個||[遊舎工房](https://shop.yushakobo.jp)<br>[TALP keyboard](https://talpkeyboard.net)|1個で100円前後<br>キーキャップセットで3000円程度から|
|12|ゴム足|PCB１枚につき４個|任意|DIYショップ等|100円程度|
|13|TRRSジャック|２本|splite keyboardとして使用する時|[遊舎工房](https://shop.yushakobo.jp)<br>[TALP keyboard](https://talpkeyboard.net)等|１個55円（税込）|
|14|TRRSケーブル|１本|splite keyboardとして使用する時|[遊舎工房](https://shop.yushakobo.jp)<br>[TALP keyboard](https://talpkeyboard.net)等|300円程度から|
|15|マグネットコネクタ|１組|合体して使うのであれば|[Ali Express](https://ja.aliexpress.com/item/1005003150326343.html?spm=a2g0o.9042311.0.0.399f4c4dbOjNiU)|400円程度|

## 作り方

### 1　基板の向きを決める
PCB１枚を使用して、マクロパッドキーボードとして利用する場合は、pro micro設置部分が右側になるか、左側になるか、決定します。
<br>
PCBを２枚使用して、分割キーボードとして利用する場合は、左右それぞれの向きで作成してください。
<br>
<br>

### 2 ダイオードの取り付け
ダイオードをハンダ付けします。
<br>
全体で言えることですが、フラックスを使用してください。失敗を防げます。
<br>
写真ではリードタイプのダイオードのハンダ付けをしています。
<br>
SMDタイプのダイオードも使用できます。
<br>
ダイオードの向きに注意してください。
ダイオードはPCBの下面に取り付けるようにしてください。
<br>
<br>

### 3 スイッチソケットの取り付け
スイッチソケットのハンダ付けをします。
最初にPCBの片側のパッドに、予備ハンダをします。
<br>
次にスイッチソケットを乗せます。
<br>
ハンダゴテで、予備ハンダをした部分を温めて、ハンダ付けをします。
<br>
反対側のパッドとスイッチソケットの間にハンダを流し込むようにハンダ付けをします。
<br>
スイッチソケットの向きに注意してハンダ付けをしてください。
スイッチソケットはPCBの下面に取り付けるようにしてください。
<br>
<br>

### 4 リセットスイッチの取り付け
リセットスイッチ（タクタイルスイッチ）のハンダ付けをします。
リセットスイッチはPCBの上面に取り付けます。
<br>
リセットスイッチをマスキングテープ等で仮固定して、PCBの下面からハンダ付けをします。
<br>
<br>

### 5 TRRSジャックの取り付け
マクロパッドでは、取り付けなくても使用可能です。
<br>
分割キーボードで使用する場合は、左右それぞれぞの基板に１つずつ取り付けます。
<br>
TRRSジャックは、PCBの上面に取り付けます。
<br>
TRRSジャックをマスキングテープ等で仮固定して、PCBの下面からハンダ付けをします。
<br>
<br>
