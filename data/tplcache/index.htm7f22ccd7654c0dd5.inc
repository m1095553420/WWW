<?php
$z[0]=Array("global","",202,228);
$z[0][4]=array();
$z[0][4]['name']="cfg_webname";
$z[1]=Array("global","",272,302);
$z[1][4]=array();
$z[1][4]['name']="cfg_description";
$z[2]=Array("global","",339,366);
$z[2][4]=array();
$z[2][4]['name']="cfg_keywords";
$z[3]=Array("include","",1319,1354);
$z[3][4]=array();
$z[3][4]['filename']="head.htm";
$z[4]=Array("arclist","\r\n        <li><a><img src=\"[field:picname/]\" /></a></li>\r\n        ",1483,1630);
$z[4][4]=array();
$z[4][4]['typeid']="11";
$z[4][4]['row']="3";
$z[4][4]['titlelen']="50";
$z[4][4]['orderby']="pubdate";
$z[5]=Array("arclist","\r\n        <div class=\"pro_item_list pro1 wow bounceInUp\" data-wow-delay=\".2s\"><a href='[field:arcurl/]'>\r\n          <div class=\"pro_item_left\">\r\n            <div class=\"pro_item_title\">[field:title/]</div>\r\n            <div class=\"pro_item_desc\">[field:description function=\"cn_substr(@me,300)\"/]...</div>\r\n          </div>\r\n          <div class=\"pro_item_right\">\r\n            <div class=\"pro_item_img\"><img src='[field:picname/]' /></div>\r\n          </div>\r\n          </a></div>\r\n        ",2173,2746);
$z[5][4]=array();
$z[5][4]['typeid']="2";
$z[5][4]['limit']="0,1";
$z[5][4]['titlelen']="50";
$z[5][4]['orderby']="pubdate";
$z[6]=Array("arclist","\r\n        <div class=\"pro_item_list pro1 wow bounceInUp\" data-wow-delay=\".4s\"><a href='[field:arcurl/]'>\r\n          <div class=\"pro_item_left\">\r\n            <div class=\"pro_item_title\">[field:title/]</div>\r\n            <div class=\"pro_item_desc\">[field:description function=\"cn_substr(@me,300)\"/]...</div>\r\n          </div>\r\n          <div class=\"pro_item_right\">\r\n            <div class=\"pro_item_img\"><img src='[field:picname/]' /></div>\r\n          </div>\r\n          </a></div>\r\n        ",2766,3339);
$z[6][4]=array();
$z[6][4]['typeid']="2";
$z[6][4]['limit']="2,1";
$z[6][4]['titlelen']="50";
$z[6][4]['orderby']="pubdate";
$z[7]=Array("arclist","\r\n        <div class=\"pro_item_list pro2 wow bounceInUp\" data-wow-delay=\".6s\"><a href='[field:arcurl/]'>\r\n          <div class=\"pro_item_left2\">\r\n            <div class=\"pro_item_title\">[field:title/]</div>\r\n            <div class=\"pro_item_desc\">[field:description function=\"cn_substr(@me,300)\"/]...</div>\r\n          </div>\r\n          <div class=\"pro_item_right2\">\r\n            <div class=\"pro_item_img\"><img src='[field:picname/]' /></div>\r\n          </div>\r\n          </a></div>\r\n        ",3382,3957);
$z[7][4]=array();
$z[7][4]['typeid']="2";
$z[7][4]['limit']="3,1";
$z[7][4]['titlelen']="50";
$z[7][4]['orderby']="pubdate";
$z[8]=Array("sql"," \r\n        \r\n        [field:content  function='cn_substr(html2text(@me),2500)'/]...\r\n        \r\n        ",4703,4877);
$z[8][4]=array();
$z[8][4]['sql']="Select content from dede_arctype where id=1";
$z[9]=Array("type","\r\n      <h3>—— [field:typename/] ——</h3>\r\n      ",5271,5361);
$z[9][4]=array();
$z[9][4]['typeid']="8";
$z[10]=Array("arclist","\r\n        <div class=\"col-lg-4 col-md-6 col-xs-12 wow fadeInUp\" data-wow-delay=\".2s\">\r\n          <div class=\"service_item\">\r\n            <div class=\"service_item_img\"><img src=\"[field:picname/]\" /></div>\r\n            <div class=\"service_right\">\r\n              <div class=\"service_item_title\"><a href=\"[field:arcurl/]\">[field:title/]</a></div>\r\n              <div class=\"service_item_desc\">[field:description function=\"cn_substr(@me,160)\"/]...<a href=\"[field:arcurl/]\" class=\"service_more\">更多>></a></div>\r\n            </div>\r\n          </div>\r\n        </div>\r\n        ",5438,6089);
$z[10][4]=array();
$z[10][4]['typeid']="8";
$z[10][4]['row']="6";
$z[10][4]['titlelen']="50";
$z[10][4]['orderby']="pubdate";
$z[11]=Array("type","\r\n      <h3>—— [field:typename/] ——</h3>\r\n      ",6377,6467);
$z[11][4]=array();
$z[11][4]['typeid']="7";
$z[12]=Array("arclist","\r\n                <li>\r\n                  <div class='artflash_img'><a href=\"[field:arcurl/]\"><img src=\"[field:picname/]\" /></a></div>\r\n                  <div class='artflash_bottom'><a href=\"[field:arcurl/]\"><span class='artflash_title'>[field:title/]</span><span class='artflash_desc'>[field:description function=\"cn_substr(@me,60)\"/]...</span></a></div>\r\n                </li>\r\n                ",6676,7144);
$z[12][4]=array();
$z[12][4]['typeid']="7";
$z[12][4]['row']="3";
$z[12][4]['titlelen']="50";
$z[12][4]['flag']="f";
$z[13]=Array("arclist","\r\n        <div class=\"news_item wow fadeInUp\" data-wow-delay=\".2s\">\r\n          <div class=\"news_item_time\"><span class=\"news_item_day\">[field:pubdate function=\"MyDate('d',@me)\"/]</span><span class=\"news_item_month\">[field:pubdate function=\"MyDate('Y-m',@me)\"/]</span></div>\r\n          <div class=\"news_item_right\">\r\n            <div class=\"news_item_title\"><a href=\"[field:arcurl/]\">[field:title/]</a></div>\r\n            <div class=\"news_item_desc\">[field:description function=\"cn_substr(@me,200)\"/]...<a href=\"[field:arcurl/]\" class=\"news_more\">More>></a></div>\r\n          </div>\r\n        </div>\r\n        ",7406,8085);
$z[13][4]=array();
$z[13][4]['typeid']="7";
$z[13][4]['row']="3";
$z[13][4]['titlelen']="50";
$z[13][4]['noflag']="f";
$z[14]=Array("include","",8207,8244);
$z[14][4]=array();
$z[14][4]['filename']="footer.htm";

?>