#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Base64FormattingOptions.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/System/TypeCode.h"
#include "unitysdk/System/DateTime.h"
#include "unitysdk/System/Decimal.h"

namespace System { class IConvertible; }
namespace System { class IFormatProvider; }
namespace System { class RuntimeType; }
namespace System { class String; }
namespace System { class Type; }

#define SYSTEM_CONVERT_CHANGETYPE_1_OFFSET UNITYSDK_OFFSET(0x1CC1BBF0)
#define SYSTEM_CONVERT_CHANGETYPE_2_OFFSET UNITYSDK_OFFSET(0x1CC1BCA0)
#define SYSTEM_CONVERT_CHANGETYPE_OFFSET UNITYSDK_OFFSET(0x1CC1A3A0)
#define SYSTEM_CONVERT_CONVERTTOBASE64ARRAY_OFFSET UNITYSDK_OFFSET(0x1CC235C0)
#define SYSTEM_CONVERT_DEFAULTTOTYPE_OFFSET UNITYSDK_OFFSET(0x1CC1AF10)
#define SYSTEM_CONVERT_FROMBASE64CHARARRAY_OFFSET UNITYSDK_OFFSET(0x1CC23DD0)
#define SYSTEM_CONVERT_FROMBASE64CHARPTR_OFFSET UNITYSDK_OFFSET(0x1CC23CF0)
#define SYSTEM_CONVERT_FROMBASE64STRING_OFFSET UNITYSDK_OFFSET(0x1CC23BA0)
#define SYSTEM_CONVERT_FROMBASE64_COMPUTERESULTLENGTH_OFFSET UNITYSDK_OFFSET(0x1CC24010)
#define SYSTEM_CONVERT_FROMBASE64_DECODE_OFFSET UNITYSDK_OFFSET(0x1CC240C0)
#define SYSTEM_CONVERT_GETTYPECODE_OFFSET UNITYSDK_OFFSET(0x1CC1A2B0)
#define SYSTEM_CONVERT_TOBASE64CHARARRAY_1_OFFSET UNITYSDK_OFFSET(0x1CC237F0)
#define SYSTEM_CONVERT_TOBASE64CHARARRAY_OFFSET UNITYSDK_OFFSET(0x1CC237D0)
#define SYSTEM_CONVERT_TOBASE64STRING_1_OFFSET UNITYSDK_OFFSET(0x1CC23430)
#define SYSTEM_CONVERT_TOBASE64STRING_2_OFFSET UNITYSDK_OFFSET(0x1CC234B0)
#define SYSTEM_CONVERT_TOBASE64STRING_3_OFFSET UNITYSDK_OFFSET(0x1CC230F0)
#define SYSTEM_CONVERT_TOBASE64STRING_OFFSET UNITYSDK_OFFSET(0x1CC23080)
#define SYSTEM_CONVERT_TOBASE64_CALCULATEANDVALIDATEOUTPUTLENGTH_OFFSET UNITYSDK_OFFSET(0x1CC234C0)
#define SYSTEM_CONVERT_TOBOOLEAN_10_OFFSET UNITYSDK_OFFSET(0x1CC1CAD0)
#define SYSTEM_CONVERT_TOBOOLEAN_11_OFFSET UNITYSDK_OFFSET(0x1CC1CB30)
#define SYSTEM_CONVERT_TOBOOLEAN_12_OFFSET UNITYSDK_OFFSET(0x1CC1CB90)
#define SYSTEM_CONVERT_TOBOOLEAN_13_OFFSET UNITYSDK_OFFSET(0x1CC1CBA0)
#define SYSTEM_CONVERT_TOBOOLEAN_14_OFFSET UNITYSDK_OFFSET(0x1CC1CBC0)
#define SYSTEM_CONVERT_TOBOOLEAN_1_OFFSET UNITYSDK_OFFSET(0x1CC1C920)
#define SYSTEM_CONVERT_TOBOOLEAN_2_OFFSET UNITYSDK_OFFSET(0x1CC1CA50)
#define SYSTEM_CONVERT_TOBOOLEAN_3_OFFSET UNITYSDK_OFFSET(0x1CC1CA60)
#define SYSTEM_CONVERT_TOBOOLEAN_4_OFFSET UNITYSDK_OFFSET(0x1CC1CA70)
#define SYSTEM_CONVERT_TOBOOLEAN_5_OFFSET UNITYSDK_OFFSET(0x1CC1CA80)
#define SYSTEM_CONVERT_TOBOOLEAN_6_OFFSET UNITYSDK_OFFSET(0x1CC1CA90)
#define SYSTEM_CONVERT_TOBOOLEAN_7_OFFSET UNITYSDK_OFFSET(0x1CC1CAA0)
#define SYSTEM_CONVERT_TOBOOLEAN_8_OFFSET UNITYSDK_OFFSET(0x1CC1CAB0)
#define SYSTEM_CONVERT_TOBOOLEAN_9_OFFSET UNITYSDK_OFFSET(0x1CC1CAC0)
#define SYSTEM_CONVERT_TOBOOLEAN_OFFSET UNITYSDK_OFFSET(0x1CC1C800)
#define SYSTEM_CONVERT_TOBYTE_10_OFFSET UNITYSDK_OFFSET(0x1CC1E100)
#define SYSTEM_CONVERT_TOBYTE_11_OFFSET UNITYSDK_OFFSET(0x1CC1E170)
#define SYSTEM_CONVERT_TOBYTE_12_OFFSET UNITYSDK_OFFSET(0x1CC1E1F0)
#define SYSTEM_CONVERT_TOBYTE_13_OFFSET UNITYSDK_OFFSET(0x1CC1E270)
#define SYSTEM_CONVERT_TOBYTE_14_OFFSET UNITYSDK_OFFSET(0x1CC1E340)
#define SYSTEM_CONVERT_TOBYTE_15_OFFSET UNITYSDK_OFFSET(0x1CC1E380)
#define SYSTEM_CONVERT_TOBYTE_16_OFFSET UNITYSDK_OFFSET(0x1CC22800)
#define SYSTEM_CONVERT_TOBYTE_1_OFFSET UNITYSDK_OFFSET(0x1CC1DCB0)
#define SYSTEM_CONVERT_TOBYTE_2_OFFSET UNITYSDK_OFFSET(0x1CC1DDE0)
#define SYSTEM_CONVERT_TOBYTE_3_OFFSET UNITYSDK_OFFSET(0x1CC1DDF0)
#define SYSTEM_CONVERT_TOBYTE_4_OFFSET UNITYSDK_OFFSET(0x1CC1DE60)
#define SYSTEM_CONVERT_TOBYTE_5_OFFSET UNITYSDK_OFFSET(0x1CC1DED0)
#define SYSTEM_CONVERT_TOBYTE_6_OFFSET UNITYSDK_OFFSET(0x1CC1DF40)
#define SYSTEM_CONVERT_TOBYTE_7_OFFSET UNITYSDK_OFFSET(0x1CC1DFB0)
#define SYSTEM_CONVERT_TOBYTE_8_OFFSET UNITYSDK_OFFSET(0x1CC1E020)
#define SYSTEM_CONVERT_TOBYTE_9_OFFSET UNITYSDK_OFFSET(0x1CC1E090)
#define SYSTEM_CONVERT_TOBYTE_OFFSET UNITYSDK_OFFSET(0x1CC1DB90)
#define SYSTEM_CONVERT_TOCHAR_10_OFFSET UNITYSDK_OFFSET(0x1CC1D190)
#define SYSTEM_CONVERT_TOCHAR_11_OFFSET UNITYSDK_OFFSET(0x1CC1D1A0)
#define SYSTEM_CONVERT_TOCHAR_1_OFFSET UNITYSDK_OFFSET(0x1CC1CDA0)
#define SYSTEM_CONVERT_TOCHAR_2_OFFSET UNITYSDK_OFFSET(0x1CC1CED0)
#define SYSTEM_CONVERT_TOCHAR_3_OFFSET UNITYSDK_OFFSET(0x1CC1CF40)
#define SYSTEM_CONVERT_TOCHAR_4_OFFSET UNITYSDK_OFFSET(0x1CC1CF50)
#define SYSTEM_CONVERT_TOCHAR_5_OFFSET UNITYSDK_OFFSET(0x1CC1CFC0)
#define SYSTEM_CONVERT_TOCHAR_6_OFFSET UNITYSDK_OFFSET(0x1CC1CFD0)
#define SYSTEM_CONVERT_TOCHAR_7_OFFSET UNITYSDK_OFFSET(0x1CC1D040)
#define SYSTEM_CONVERT_TOCHAR_8_OFFSET UNITYSDK_OFFSET(0x1CC1D0B0)
#define SYSTEM_CONVERT_TOCHAR_9_OFFSET UNITYSDK_OFFSET(0x1CC1D120)
#define SYSTEM_CONVERT_TOCHAR_OFFSET UNITYSDK_OFFSET(0x1CC1CC80)
#define SYSTEM_CONVERT_TODATETIME_1_OFFSET UNITYSDK_OFFSET(0x1CC22200)
#define SYSTEM_CONVERT_TODATETIME_2_OFFSET UNITYSDK_OFFSET(0x1CC222C0)
#define SYSTEM_CONVERT_TODATETIME_OFFSET UNITYSDK_OFFSET(0x1CC220D0)
#define SYSTEM_CONVERT_TODECIMAL_10_OFFSET UNITYSDK_OFFSET(0x1CC21DE0)
#define SYSTEM_CONVERT_TODECIMAL_11_OFFSET UNITYSDK_OFFSET(0x1CC21E60)
#define SYSTEM_CONVERT_TODECIMAL_12_OFFSET UNITYSDK_OFFSET(0x1CC21EE0)
#define SYSTEM_CONVERT_TODECIMAL_13_OFFSET UNITYSDK_OFFSET(0x1CC21F90)
#define SYSTEM_CONVERT_TODECIMAL_14_OFFSET UNITYSDK_OFFSET(0x1CC22060)
#define SYSTEM_CONVERT_TODECIMAL_1_OFFSET UNITYSDK_OFFSET(0x1CC218C0)
#define SYSTEM_CONVERT_TODECIMAL_2_OFFSET UNITYSDK_OFFSET(0x1CC21A20)
#define SYSTEM_CONVERT_TODECIMAL_3_OFFSET UNITYSDK_OFFSET(0x1CC21AA0)
#define SYSTEM_CONVERT_TODECIMAL_4_OFFSET UNITYSDK_OFFSET(0x1CC21B10)
#define SYSTEM_CONVERT_TODECIMAL_5_OFFSET UNITYSDK_OFFSET(0x1CC21B90)
#define SYSTEM_CONVERT_TODECIMAL_6_OFFSET UNITYSDK_OFFSET(0x1CC21C00)
#define SYSTEM_CONVERT_TODECIMAL_7_OFFSET UNITYSDK_OFFSET(0x1CC21C80)
#define SYSTEM_CONVERT_TODECIMAL_8_OFFSET UNITYSDK_OFFSET(0x1CC21CF0)
#define SYSTEM_CONVERT_TODECIMAL_9_OFFSET UNITYSDK_OFFSET(0x1CC21D70)
#define SYSTEM_CONVERT_TODECIMAL_OFFSET UNITYSDK_OFFSET(0x1CC21770)
#define SYSTEM_CONVERT_TODOUBLE_10_OFFSET UNITYSDK_OFFSET(0x1CC21570)
#define SYSTEM_CONVERT_TODOUBLE_11_OFFSET UNITYSDK_OFFSET(0x1CC21580)
#define SYSTEM_CONVERT_TODOUBLE_12_OFFSET UNITYSDK_OFFSET(0x1CC216B0)
#define SYSTEM_CONVERT_TODOUBLE_13_OFFSET UNITYSDK_OFFSET(0x1CC216F0)
#define SYSTEM_CONVERT_TODOUBLE_14_OFFSET UNITYSDK_OFFSET(0x1CC21750)
#define SYSTEM_CONVERT_TODOUBLE_1_OFFSET UNITYSDK_OFFSET(0x1CC213A0)
#define SYSTEM_CONVERT_TODOUBLE_2_OFFSET UNITYSDK_OFFSET(0x1CC214D0)
#define SYSTEM_CONVERT_TODOUBLE_3_OFFSET UNITYSDK_OFFSET(0x1CC214E0)
#define SYSTEM_CONVERT_TODOUBLE_4_OFFSET UNITYSDK_OFFSET(0x1CC214F0)
#define SYSTEM_CONVERT_TODOUBLE_5_OFFSET UNITYSDK_OFFSET(0x1CC21500)
#define SYSTEM_CONVERT_TODOUBLE_6_OFFSET UNITYSDK_OFFSET(0x1CC21510)
#define SYSTEM_CONVERT_TODOUBLE_7_OFFSET UNITYSDK_OFFSET(0x1CC21520)
#define SYSTEM_CONVERT_TODOUBLE_8_OFFSET UNITYSDK_OFFSET(0x1CC21530)
#define SYSTEM_CONVERT_TODOUBLE_9_OFFSET UNITYSDK_OFFSET(0x1CC21540)
#define SYSTEM_CONVERT_TODOUBLE_OFFSET UNITYSDK_OFFSET(0x1CC21270)
#define SYSTEM_CONVERT_TOINT16_10_OFFSET UNITYSDK_OFFSET(0x1CC1E890)
#define SYSTEM_CONVERT_TOINT16_11_OFFSET UNITYSDK_OFFSET(0x1CC1E900)
#define SYSTEM_CONVERT_TOINT16_12_OFFSET UNITYSDK_OFFSET(0x1CC1E980)
#define SYSTEM_CONVERT_TOINT16_13_OFFSET UNITYSDK_OFFSET(0x1CC1E9F0)
#define SYSTEM_CONVERT_TOINT16_14_OFFSET UNITYSDK_OFFSET(0x1CC1EAC0)
#define SYSTEM_CONVERT_TOINT16_15_OFFSET UNITYSDK_OFFSET(0x1CC1EB00)
#define SYSTEM_CONVERT_TOINT16_16_OFFSET UNITYSDK_OFFSET(0x1CC229C0)
#define SYSTEM_CONVERT_TOINT16_1_OFFSET UNITYSDK_OFFSET(0x1CC1E500)
#define SYSTEM_CONVERT_TOINT16_2_OFFSET UNITYSDK_OFFSET(0x1CC1E630)
#define SYSTEM_CONVERT_TOINT16_3_OFFSET UNITYSDK_OFFSET(0x1CC1E640)
#define SYSTEM_CONVERT_TOINT16_4_OFFSET UNITYSDK_OFFSET(0x1CC1E6B0)
#define SYSTEM_CONVERT_TOINT16_5_OFFSET UNITYSDK_OFFSET(0x1CC1E6C0)
#define SYSTEM_CONVERT_TOINT16_6_OFFSET UNITYSDK_OFFSET(0x1CC1E6D0)
#define SYSTEM_CONVERT_TOINT16_7_OFFSET UNITYSDK_OFFSET(0x1CC1E740)
#define SYSTEM_CONVERT_TOINT16_8_OFFSET UNITYSDK_OFFSET(0x1CC1E7B0)
#define SYSTEM_CONVERT_TOINT16_9_OFFSET UNITYSDK_OFFSET(0x1CC1E820)
#define SYSTEM_CONVERT_TOINT16_OFFSET UNITYSDK_OFFSET(0x1CC1E3E0)
#define SYSTEM_CONVERT_TOINT32_10_OFFSET UNITYSDK_OFFSET(0x1CC1F5E0)
#define SYSTEM_CONVERT_TOINT32_11_OFFSET UNITYSDK_OFFSET(0x1CC1F650)
#define SYSTEM_CONVERT_TOINT32_12_OFFSET UNITYSDK_OFFSET(0x1CC1F6C0)
#define SYSTEM_CONVERT_TOINT32_13_OFFSET UNITYSDK_OFFSET(0x1CC1D970)
#define SYSTEM_CONVERT_TOINT32_14_OFFSET UNITYSDK_OFFSET(0x1CC1F6D0)
#define SYSTEM_CONVERT_TOINT32_15_OFFSET UNITYSDK_OFFSET(0x1CC1F730)
#define SYSTEM_CONVERT_TOINT32_16_OFFSET UNITYSDK_OFFSET(0x1CC1F770)
#define SYSTEM_CONVERT_TOINT32_17_OFFSET UNITYSDK_OFFSET(0x1CC22B80)
#define SYSTEM_CONVERT_TOINT32_1_OFFSET UNITYSDK_OFFSET(0x1CC1F3D0)
#define SYSTEM_CONVERT_TOINT32_2_OFFSET UNITYSDK_OFFSET(0x1CC1F500)
#define SYSTEM_CONVERT_TOINT32_3_OFFSET UNITYSDK_OFFSET(0x1CC1F510)
#define SYSTEM_CONVERT_TOINT32_4_OFFSET UNITYSDK_OFFSET(0x1CC1F520)
#define SYSTEM_CONVERT_TOINT32_5_OFFSET UNITYSDK_OFFSET(0x1CC1F530)
#define SYSTEM_CONVERT_TOINT32_6_OFFSET UNITYSDK_OFFSET(0x1CC1F540)
#define SYSTEM_CONVERT_TOINT32_7_OFFSET UNITYSDK_OFFSET(0x1CC1F550)
#define SYSTEM_CONVERT_TOINT32_8_OFFSET UNITYSDK_OFFSET(0x1CC1F560)
#define SYSTEM_CONVERT_TOINT32_9_OFFSET UNITYSDK_OFFSET(0x1CC1F5D0)
#define SYSTEM_CONVERT_TOINT32_OFFSET UNITYSDK_OFFSET(0x1CC1F2B0)
#define SYSTEM_CONVERT_TOINT64_10_OFFSET UNITYSDK_OFFSET(0x1CC20250)
#define SYSTEM_CONVERT_TOINT64_11_OFFSET UNITYSDK_OFFSET(0x1CC202C0)
#define SYSTEM_CONVERT_TOINT64_12_OFFSET UNITYSDK_OFFSET(0x1CC20390)
#define SYSTEM_CONVERT_TOINT64_13_OFFSET UNITYSDK_OFFSET(0x1CC20450)
#define SYSTEM_CONVERT_TOINT64_14_OFFSET UNITYSDK_OFFSET(0x1CC20520)
#define SYSTEM_CONVERT_TOINT64_15_OFFSET UNITYSDK_OFFSET(0x1CC20560)
#define SYSTEM_CONVERT_TOINT64_16_OFFSET UNITYSDK_OFFSET(0x1CC22CC0)
#define SYSTEM_CONVERT_TOINT64_1_OFFSET UNITYSDK_OFFSET(0x1CC200A0)
#define SYSTEM_CONVERT_TOINT64_2_OFFSET UNITYSDK_OFFSET(0x1CC201D0)
#define SYSTEM_CONVERT_TOINT64_3_OFFSET UNITYSDK_OFFSET(0x1CC201E0)
#define SYSTEM_CONVERT_TOINT64_4_OFFSET UNITYSDK_OFFSET(0x1CC201F0)
#define SYSTEM_CONVERT_TOINT64_5_OFFSET UNITYSDK_OFFSET(0x1CC20200)
#define SYSTEM_CONVERT_TOINT64_6_OFFSET UNITYSDK_OFFSET(0x1CC20210)
#define SYSTEM_CONVERT_TOINT64_7_OFFSET UNITYSDK_OFFSET(0x1CC20220)
#define SYSTEM_CONVERT_TOINT64_8_OFFSET UNITYSDK_OFFSET(0x1CC20230)
#define SYSTEM_CONVERT_TOINT64_9_OFFSET UNITYSDK_OFFSET(0x1CC20240)
#define SYSTEM_CONVERT_TOINT64_OFFSET UNITYSDK_OFFSET(0x1CC1FF80)
#define SYSTEM_CONVERT_TOSBYTE_10_OFFSET UNITYSDK_OFFSET(0x1CC1D800)
#define SYSTEM_CONVERT_TOSBYTE_11_OFFSET UNITYSDK_OFFSET(0x1CC1D870)
#define SYSTEM_CONVERT_TOSBYTE_12_OFFSET UNITYSDK_OFFSET(0x1CC1D8F0)
#define SYSTEM_CONVERT_TOSBYTE_13_OFFSET UNITYSDK_OFFSET(0x1CC1DA70)
#define SYSTEM_CONVERT_TOSBYTE_14_OFFSET UNITYSDK_OFFSET(0x1CC1DB40)
#define SYSTEM_CONVERT_TOSBYTE_15_OFFSET UNITYSDK_OFFSET(0x1CC228D0)
#define SYSTEM_CONVERT_TOSBYTE_1_OFFSET UNITYSDK_OFFSET(0x1CC1D3B0)
#define SYSTEM_CONVERT_TOSBYTE_2_OFFSET UNITYSDK_OFFSET(0x1CC1D4E0)
#define SYSTEM_CONVERT_TOSBYTE_3_OFFSET UNITYSDK_OFFSET(0x1CC1D4F0)
#define SYSTEM_CONVERT_TOSBYTE_4_OFFSET UNITYSDK_OFFSET(0x1CC1D560)
#define SYSTEM_CONVERT_TOSBYTE_5_OFFSET UNITYSDK_OFFSET(0x1CC1D5D0)
#define SYSTEM_CONVERT_TOSBYTE_6_OFFSET UNITYSDK_OFFSET(0x1CC1D640)
#define SYSTEM_CONVERT_TOSBYTE_7_OFFSET UNITYSDK_OFFSET(0x1CC1D6B0)
#define SYSTEM_CONVERT_TOSBYTE_8_OFFSET UNITYSDK_OFFSET(0x1CC1D720)
#define SYSTEM_CONVERT_TOSBYTE_9_OFFSET UNITYSDK_OFFSET(0x1CC1D790)
#define SYSTEM_CONVERT_TOSBYTE_OFFSET UNITYSDK_OFFSET(0x1CC1D290)
#define SYSTEM_CONVERT_TOSINGLE_10_OFFSET UNITYSDK_OFFSET(0x1CC21070)
#define SYSTEM_CONVERT_TOSINGLE_11_OFFSET UNITYSDK_OFFSET(0x1CC21080)
#define SYSTEM_CONVERT_TOSINGLE_12_OFFSET UNITYSDK_OFFSET(0x1CC211B0)
#define SYSTEM_CONVERT_TOSINGLE_13_OFFSET UNITYSDK_OFFSET(0x1CC211F0)
#define SYSTEM_CONVERT_TOSINGLE_14_OFFSET UNITYSDK_OFFSET(0x1CC21250)
#define SYSTEM_CONVERT_TOSINGLE_1_OFFSET UNITYSDK_OFFSET(0x1CC20EA0)
#define SYSTEM_CONVERT_TOSINGLE_2_OFFSET UNITYSDK_OFFSET(0x1CC20FD0)
#define SYSTEM_CONVERT_TOSINGLE_3_OFFSET UNITYSDK_OFFSET(0x1CC20FE0)
#define SYSTEM_CONVERT_TOSINGLE_4_OFFSET UNITYSDK_OFFSET(0x1CC20FF0)
#define SYSTEM_CONVERT_TOSINGLE_5_OFFSET UNITYSDK_OFFSET(0x1CC21000)
#define SYSTEM_CONVERT_TOSINGLE_6_OFFSET UNITYSDK_OFFSET(0x1CC21010)
#define SYSTEM_CONVERT_TOSINGLE_7_OFFSET UNITYSDK_OFFSET(0x1CC21020)
#define SYSTEM_CONVERT_TOSINGLE_8_OFFSET UNITYSDK_OFFSET(0x1CC21030)
#define SYSTEM_CONVERT_TOSINGLE_9_OFFSET UNITYSDK_OFFSET(0x1CC21040)
#define SYSTEM_CONVERT_TOSINGLE_OFFSET UNITYSDK_OFFSET(0x1CC20D70)
#define SYSTEM_CONVERT_TOSTRING_10_OFFSET UNITYSDK_OFFSET(0x1CC22760)
#define SYSTEM_CONVERT_TOSTRING_11_OFFSET UNITYSDK_OFFSET(0x1CC22790)
#define SYSTEM_CONVERT_TOSTRING_12_OFFSET UNITYSDK_OFFSET(0x1CC22E00)
#define SYSTEM_CONVERT_TOSTRING_13_OFFSET UNITYSDK_OFFSET(0x1CC22EA0)
#define SYSTEM_CONVERT_TOSTRING_14_OFFSET UNITYSDK_OFFSET(0x1CC22F40)
#define SYSTEM_CONVERT_TOSTRING_15_OFFSET UNITYSDK_OFFSET(0x1CC22FE0)
#define SYSTEM_CONVERT_TOSTRING_1_OFFSET UNITYSDK_OFFSET(0x1CC22380)
#define SYSTEM_CONVERT_TOSTRING_2_OFFSET UNITYSDK_OFFSET(0x1CC22550)
#define SYSTEM_CONVERT_TOSTRING_3_OFFSET UNITYSDK_OFFSET(0x1CC225D0)
#define SYSTEM_CONVERT_TOSTRING_4_OFFSET UNITYSDK_OFFSET(0x1CC22650)
#define SYSTEM_CONVERT_TOSTRING_5_OFFSET UNITYSDK_OFFSET(0x1CC22680)
#define SYSTEM_CONVERT_TOSTRING_6_OFFSET UNITYSDK_OFFSET(0x1CC226A0)
#define SYSTEM_CONVERT_TOSTRING_7_OFFSET UNITYSDK_OFFSET(0x1CC226D0)
#define SYSTEM_CONVERT_TOSTRING_8_OFFSET UNITYSDK_OFFSET(0x1CC22700)
#define SYSTEM_CONVERT_TOSTRING_9_OFFSET UNITYSDK_OFFSET(0x1CC22730)
#define SYSTEM_CONVERT_TOSTRING_OFFSET UNITYSDK_OFFSET(0x1CC22370)
#define SYSTEM_CONVERT_TOUINT16_10_OFFSET UNITYSDK_OFFSET(0x1CC1F010)
#define SYSTEM_CONVERT_TOUINT16_11_OFFSET UNITYSDK_OFFSET(0x1CC1F080)
#define SYSTEM_CONVERT_TOUINT16_12_OFFSET UNITYSDK_OFFSET(0x1CC1F100)
#define SYSTEM_CONVERT_TOUINT16_13_OFFSET UNITYSDK_OFFSET(0x1CC1F180)
#define SYSTEM_CONVERT_TOUINT16_14_OFFSET UNITYSDK_OFFSET(0x1CC1F250)
#define SYSTEM_CONVERT_TOUINT16_15_OFFSET UNITYSDK_OFFSET(0x1CC22AB0)
#define SYSTEM_CONVERT_TOUINT16_1_OFFSET UNITYSDK_OFFSET(0x1CC1EC80)
#define SYSTEM_CONVERT_TOUINT16_2_OFFSET UNITYSDK_OFFSET(0x1CC1EDB0)
#define SYSTEM_CONVERT_TOUINT16_3_OFFSET UNITYSDK_OFFSET(0x1CC1EDC0)
#define SYSTEM_CONVERT_TOUINT16_4_OFFSET UNITYSDK_OFFSET(0x1CC1EDD0)
#define SYSTEM_CONVERT_TOUINT16_5_OFFSET UNITYSDK_OFFSET(0x1CC1EE40)
#define SYSTEM_CONVERT_TOUINT16_6_OFFSET UNITYSDK_OFFSET(0x1CC1EE50)
#define SYSTEM_CONVERT_TOUINT16_7_OFFSET UNITYSDK_OFFSET(0x1CC1EEC0)
#define SYSTEM_CONVERT_TOUINT16_8_OFFSET UNITYSDK_OFFSET(0x1CC1EF30)
#define SYSTEM_CONVERT_TOUINT16_9_OFFSET UNITYSDK_OFFSET(0x1CC1EFA0)
#define SYSTEM_CONVERT_TOUINT16_OFFSET UNITYSDK_OFFSET(0x1CC1EB60)
#define SYSTEM_CONVERT_TOUINT32_10_OFFSET UNITYSDK_OFFSET(0x1CC1FC20)
#define SYSTEM_CONVERT_TOUINT32_11_OFFSET UNITYSDK_OFFSET(0x1CC1FC90)
#define SYSTEM_CONVERT_TOUINT32_12_OFFSET UNITYSDK_OFFSET(0x1CC1FD50)
#define SYSTEM_CONVERT_TOUINT32_13_OFFSET UNITYSDK_OFFSET(0x1CC1FE10)
#define SYSTEM_CONVERT_TOUINT32_14_OFFSET UNITYSDK_OFFSET(0x1CC1FEE0)
#define SYSTEM_CONVERT_TOUINT32_15_OFFSET UNITYSDK_OFFSET(0x1CC22C20)
#define SYSTEM_CONVERT_TOUINT32_1_OFFSET UNITYSDK_OFFSET(0x1CC1F8F0)
#define SYSTEM_CONVERT_TOUINT32_2_OFFSET UNITYSDK_OFFSET(0x1CC1FA20)
#define SYSTEM_CONVERT_TOUINT32_3_OFFSET UNITYSDK_OFFSET(0x1CC1FA30)
#define SYSTEM_CONVERT_TOUINT32_4_OFFSET UNITYSDK_OFFSET(0x1CC1FA40)
#define SYSTEM_CONVERT_TOUINT32_5_OFFSET UNITYSDK_OFFSET(0x1CC1FAB0)
#define SYSTEM_CONVERT_TOUINT32_6_OFFSET UNITYSDK_OFFSET(0x1CC1FAC0)
#define SYSTEM_CONVERT_TOUINT32_7_OFFSET UNITYSDK_OFFSET(0x1CC1FB30)
#define SYSTEM_CONVERT_TOUINT32_8_OFFSET UNITYSDK_OFFSET(0x1CC1FB40)
#define SYSTEM_CONVERT_TOUINT32_9_OFFSET UNITYSDK_OFFSET(0x1CC1FBB0)
#define SYSTEM_CONVERT_TOUINT32_OFFSET UNITYSDK_OFFSET(0x1CC1F7D0)
#define SYSTEM_CONVERT_TOUINT64_10_OFFSET UNITYSDK_OFFSET(0x1CC209B0)
#define SYSTEM_CONVERT_TOUINT64_11_OFFSET UNITYSDK_OFFSET(0x1CC20A20)
#define SYSTEM_CONVERT_TOUINT64_12_OFFSET UNITYSDK_OFFSET(0x1CC20A30)
#define SYSTEM_CONVERT_TOUINT64_13_OFFSET UNITYSDK_OFFSET(0x1CC20B20)
#define SYSTEM_CONVERT_TOUINT64_14_OFFSET UNITYSDK_OFFSET(0x1CC20C00)
#define SYSTEM_CONVERT_TOUINT64_15_OFFSET UNITYSDK_OFFSET(0x1CC20CD0)
#define SYSTEM_CONVERT_TOUINT64_16_OFFSET UNITYSDK_OFFSET(0x1CC20D10)
#define SYSTEM_CONVERT_TOUINT64_17_OFFSET UNITYSDK_OFFSET(0x1CC22D60)
#define SYSTEM_CONVERT_TOUINT64_1_OFFSET UNITYSDK_OFFSET(0x1CC206E0)
#define SYSTEM_CONVERT_TOUINT64_2_OFFSET UNITYSDK_OFFSET(0x1CC20810)
#define SYSTEM_CONVERT_TOUINT64_3_OFFSET UNITYSDK_OFFSET(0x1CC20820)
#define SYSTEM_CONVERT_TOUINT64_4_OFFSET UNITYSDK_OFFSET(0x1CC20830)
#define SYSTEM_CONVERT_TOUINT64_5_OFFSET UNITYSDK_OFFSET(0x1CC208A0)
#define SYSTEM_CONVERT_TOUINT64_6_OFFSET UNITYSDK_OFFSET(0x1CC208B0)
#define SYSTEM_CONVERT_TOUINT64_7_OFFSET UNITYSDK_OFFSET(0x1CC20920)
#define SYSTEM_CONVERT_TOUINT64_8_OFFSET UNITYSDK_OFFSET(0x1CC20930)
#define SYSTEM_CONVERT_TOUINT64_9_OFFSET UNITYSDK_OFFSET(0x1CC209A0)
#define SYSTEM_CONVERT_TOUINT64_OFFSET UNITYSDK_OFFSET(0x1CC205C0)
#define SYSTEM_CONVERT__CCTOR_OFFSET UNITYSDK_OFFSET(0x1CC243A0)

namespace System
{
	inline static constexpr unsigned int Convert_TypeDefinitionIndex = 209;

	class Convert : public ::System::Object
	{
	public:
		static ::Il2CppArray<::System::Char>** StaticGet_base64Table()
		{
			return (::Il2CppArray<::System::Char>**)Il2CppClass::FromTypeDefinitionIndex(Convert_TypeDefinitionIndex)->GetStaticField(0x1490);
		}
		static ::System::RuntimeType** StaticGet_EnumType()
		{
			return (::System::RuntimeType**)Il2CppClass::FromTypeDefinitionIndex(Convert_TypeDefinitionIndex)->GetStaticField(0x1498);
		}
		static ::System::Object** StaticGet_DBNull()
		{
			return (::System::Object**)Il2CppClass::FromTypeDefinitionIndex(Convert_TypeDefinitionIndex)->GetStaticField(0x14A0);
		}
		static ::Il2CppArray<::System::RuntimeType*>** StaticGet_ConvertTypes()
		{
			return (::Il2CppArray<::System::RuntimeType*>**)Il2CppClass::FromTypeDefinitionIndex(Convert_TypeDefinitionIndex)->GetStaticField(0x14A8);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + SYSTEM_CONVERT__CCTOR_OFFSET))();
		}

		static ::System::TypeCode GetTypeCode(::System::Object* value)
		{
			return ((::System::TypeCode(*)(::System::Object*))((::PBYTE)hIl2Cpp + SYSTEM_CONVERT_GETTYPECODE_OFFSET))(value);
		}

		static ::System::Object* ChangeType(::System::Object* value, ::System::TypeCode typeCode, ::System::IFormatProvider* provider)
		{
			return ((::System::Object*(*)(::System::Object*, ::System::TypeCode, ::System::IFormatProvider*))((::PBYTE)hIl2Cpp + SYSTEM_CONVERT_CHANGETYPE_OFFSET))(value, typeCode, provider);
		}

		static ::System::Object* DefaultToType(::System::IConvertible* value, ::System::Type* targetType, ::System::IFormatProvider* provider)
		{
			return ((::System::Object*(*)(::System::IConvertible*, ::System::Type*, ::System::IFormatProvider*))((::PBYTE)hIl2Cpp + SYSTEM_CONVERT_DEFAULTTOTYPE_OFFSET))(value, targetType, provider);
		}

		static ::System::Object* ChangeType_1(::System::Object* value, ::System::Type* conversionType)
		{
			return ((::System::Object*(*)(::System::Object*, ::System::Type*))((::PBYTE)hIl2Cpp + SYSTEM_CONVERT_CHANGETYPE_1_OFFSET))(value, conversionType);
		}

		static ::System::Object* ChangeType_2(::System::Object* value, ::System::Type* conversionType, ::System::IFormatProvider* provider)
		{
			return ((::System::Object*(*)(::System::Object*, ::System::Type*, ::System::IFormatProvider*))((::PBYTE)hIl2Cpp + SYSTEM_CONVERT_CHANGETYPE_2_OFFSET))(value, conversionType, provider);
		}

		static ::System::Boolean ToBoolean(::System::Object* value)
		{
			return ((::System::Boolean(*)(::System::Object*))((::PBYTE)hIl2Cpp + SYSTEM_CONVERT_TOBOOLEAN_OFFSET))(value);
		}

		static ::System::Boolean ToBoolean_1(::System::Object* value, ::System::IFormatProvider* provider)
		{
			return ((::System::Boolean(*)(::System::Object*, ::System::IFormatProvider*))((::PBYTE)hIl2Cpp + SYSTEM_CONVERT_TOBOOLEAN_1_OFFSET))(value, provider);
		}

		static ::System::Boolean ToBoolean_2(::System::SByte value)
		{
			return ((::System::Boolean(*)(::System::SByte))((::PBYTE)hIl2Cpp + SYSTEM_CONVERT_TOBOOLEAN_2_OFFSET))(value);
		}

		static ::System::Boolean ToBoolean_3(::System::Byte value)
		{
			return ((::System::Boolean(*)(::System::Byte))((::PBYTE)hIl2Cpp + SYSTEM_CONVERT_TOBOOLEAN_3_OFFSET))(value);
		}

		static ::System::Boolean ToBoolean_4(::System::Int16 value)
		{
			return ((::System::Boolean(*)(::System::Int16))((::PBYTE)hIl2Cpp + SYSTEM_CONVERT_TOBOOLEAN_4_OFFSET))(value);
		}

		static ::System::Boolean ToBoolean_5(::System::UInt16 value)
		{
			return ((::System::Boolean(*)(::System::UInt16))((::PBYTE)hIl2Cpp + SYSTEM_CONVERT_TOBOOLEAN_5_OFFSET))(value);
		}

		static ::System::Boolean ToBoolean_6(::System::Int32 value)
		{
			return ((::System::Boolean(*)(::System::Int32))((::PBYTE)hIl2Cpp + SYSTEM_CONVERT_TOBOOLEAN_6_OFFSET))(value);
		}

		static ::System::Boolean ToBoolean_7(::System::UInt32 value)
		{
			return ((::System::Boolean(*)(::System::UInt32))((::PBYTE)hIl2Cpp + SYSTEM_CONVERT_TOBOOLEAN_7_OFFSET))(value);
		}

		static ::System::Boolean ToBoolean_8(::System::Int64 value)
		{
			return ((::System::Boolean(*)(::System::Int64))((::PBYTE)hIl2Cpp + SYSTEM_CONVERT_TOBOOLEAN_8_OFFSET))(value);
		}

		static ::System::Boolean ToBoolean_9(::System::UInt64 value)
		{
			return ((::System::Boolean(*)(::System::UInt64))((::PBYTE)hIl2Cpp + SYSTEM_CONVERT_TOBOOLEAN_9_OFFSET))(value);
		}

		static ::System::Boolean ToBoolean_10(::System::String* value)
		{
			return ((::System::Boolean(*)(::System::String*))((::PBYTE)hIl2Cpp + SYSTEM_CONVERT_TOBOOLEAN_10_OFFSET))(value);
		}

		static ::System::Boolean ToBoolean_11(::System::String* value, ::System::IFormatProvider* provider)
		{
			return ((::System::Boolean(*)(::System::String*, ::System::IFormatProvider*))((::PBYTE)hIl2Cpp + SYSTEM_CONVERT_TOBOOLEAN_11_OFFSET))(value, provider);
		}

		static ::System::Boolean ToBoolean_12(::System::Single value)
		{
			return ((::System::Boolean(*)(::System::Single))((::PBYTE)hIl2Cpp + SYSTEM_CONVERT_TOBOOLEAN_12_OFFSET))(value);
		}

		static ::System::Boolean ToBoolean_13(::System::Double value)
		{
			return ((::System::Boolean(*)(::System::Double))((::PBYTE)hIl2Cpp + SYSTEM_CONVERT_TOBOOLEAN_13_OFFSET))(value);
		}

		static ::System::Boolean ToBoolean_14(::System::Decimal value)
		{
			return ((::System::Boolean(*)(::System::Decimal))((::PBYTE)hIl2Cpp + SYSTEM_CONVERT_TOBOOLEAN_14_OFFSET))(value);
		}

		static ::System::Char ToChar(::System::Object* value)
		{
			return ((::System::Char(*)(::System::Object*))((::PBYTE)hIl2Cpp + SYSTEM_CONVERT_TOCHAR_OFFSET))(value);
		}

		static ::System::Char ToChar_1(::System::Object* value, ::System::IFormatProvider* provider)
		{
			return ((::System::Char(*)(::System::Object*, ::System::IFormatProvider*))((::PBYTE)hIl2Cpp + SYSTEM_CONVERT_TOCHAR_1_OFFSET))(value, provider);
		}

		static ::System::Char ToChar_2(::System::SByte value)
		{
			return ((::System::Char(*)(::System::SByte))((::PBYTE)hIl2Cpp + SYSTEM_CONVERT_TOCHAR_2_OFFSET))(value);
		}

		static ::System::Char ToChar_3(::System::Byte value)
		{
			return ((::System::Char(*)(::System::Byte))((::PBYTE)hIl2Cpp + SYSTEM_CONVERT_TOCHAR_3_OFFSET))(value);
		}

		static ::System::Char ToChar_4(::System::Int16 value)
		{
			return ((::System::Char(*)(::System::Int16))((::PBYTE)hIl2Cpp + SYSTEM_CONVERT_TOCHAR_4_OFFSET))(value);
		}

		static ::System::Char ToChar_5(::System::UInt16 value)
		{
			return ((::System::Char(*)(::System::UInt16))((::PBYTE)hIl2Cpp + SYSTEM_CONVERT_TOCHAR_5_OFFSET))(value);
		}

		static ::System::Char ToChar_6(::System::Int32 value)
		{
			return ((::System::Char(*)(::System::Int32))((::PBYTE)hIl2Cpp + SYSTEM_CONVERT_TOCHAR_6_OFFSET))(value);
		}

		static ::System::Char ToChar_7(::System::UInt32 value)
		{
			return ((::System::Char(*)(::System::UInt32))((::PBYTE)hIl2Cpp + SYSTEM_CONVERT_TOCHAR_7_OFFSET))(value);
		}

		static ::System::Char ToChar_8(::System::Int64 value)
		{
			return ((::System::Char(*)(::System::Int64))((::PBYTE)hIl2Cpp + SYSTEM_CONVERT_TOCHAR_8_OFFSET))(value);
		}

		static ::System::Char ToChar_9(::System::UInt64 value)
		{
			return ((::System::Char(*)(::System::UInt64))((::PBYTE)hIl2Cpp + SYSTEM_CONVERT_TOCHAR_9_OFFSET))(value);
		}

		static ::System::Char ToChar_10(::System::String* value)
		{
			return ((::System::Char(*)(::System::String*))((::PBYTE)hIl2Cpp + SYSTEM_CONVERT_TOCHAR_10_OFFSET))(value);
		}

		static ::System::Char ToChar_11(::System::String* value, ::System::IFormatProvider* provider)
		{
			return ((::System::Char(*)(::System::String*, ::System::IFormatProvider*))((::PBYTE)hIl2Cpp + SYSTEM_CONVERT_TOCHAR_11_OFFSET))(value, provider);
		}

		static ::System::SByte ToSByte(::System::Object* value)
		{
			return ((::System::SByte(*)(::System::Object*))((::PBYTE)hIl2Cpp + SYSTEM_CONVERT_TOSBYTE_OFFSET))(value);
		}

		static ::System::SByte ToSByte_1(::System::Object* value, ::System::IFormatProvider* provider)
		{
			return ((::System::SByte(*)(::System::Object*, ::System::IFormatProvider*))((::PBYTE)hIl2Cpp + SYSTEM_CONVERT_TOSBYTE_1_OFFSET))(value, provider);
		}

		static ::System::SByte ToSByte_2(::System::Boolean value)
		{
			return ((::System::SByte(*)(::System::Boolean))((::PBYTE)hIl2Cpp + SYSTEM_CONVERT_TOSBYTE_2_OFFSET))(value);
		}

		static ::System::SByte ToSByte_3(::System::Char value)
		{
			return ((::System::SByte(*)(::System::Char))((::PBYTE)hIl2Cpp + SYSTEM_CONVERT_TOSBYTE_3_OFFSET))(value);
		}

		static ::System::SByte ToSByte_4(::System::Byte value)
		{
			return ((::System::SByte(*)(::System::Byte))((::PBYTE)hIl2Cpp + SYSTEM_CONVERT_TOSBYTE_4_OFFSET))(value);
		}

		static ::System::SByte ToSByte_5(::System::Int16 value)
		{
			return ((::System::SByte(*)(::System::Int16))((::PBYTE)hIl2Cpp + SYSTEM_CONVERT_TOSBYTE_5_OFFSET))(value);
		}

		static ::System::SByte ToSByte_6(::System::UInt16 value)
		{
			return ((::System::SByte(*)(::System::UInt16))((::PBYTE)hIl2Cpp + SYSTEM_CONVERT_TOSBYTE_6_OFFSET))(value);
		}

		static ::System::SByte ToSByte_7(::System::Int32 value)
		{
			return ((::System::SByte(*)(::System::Int32))((::PBYTE)hIl2Cpp + SYSTEM_CONVERT_TOSBYTE_7_OFFSET))(value);
		}

		static ::System::SByte ToSByte_8(::System::UInt32 value)
		{
			return ((::System::SByte(*)(::System::UInt32))((::PBYTE)hIl2Cpp + SYSTEM_CONVERT_TOSBYTE_8_OFFSET))(value);
		}

		static ::System::SByte ToSByte_9(::System::Int64 value)
		{
			return ((::System::SByte(*)(::System::Int64))((::PBYTE)hIl2Cpp + SYSTEM_CONVERT_TOSBYTE_9_OFFSET))(value);
		}

		static ::System::SByte ToSByte_10(::System::UInt64 value)
		{
			return ((::System::SByte(*)(::System::UInt64))((::PBYTE)hIl2Cpp + SYSTEM_CONVERT_TOSBYTE_10_OFFSET))(value);
		}

		static ::System::SByte ToSByte_11(::System::Single value)
		{
			return ((::System::SByte(*)(::System::Single))((::PBYTE)hIl2Cpp + SYSTEM_CONVERT_TOSBYTE_11_OFFSET))(value);
		}

		static ::System::SByte ToSByte_12(::System::Double value)
		{
			return ((::System::SByte(*)(::System::Double))((::PBYTE)hIl2Cpp + SYSTEM_CONVERT_TOSBYTE_12_OFFSET))(value);
		}

		static ::System::SByte ToSByte_13(::System::Decimal value)
		{
			return ((::System::SByte(*)(::System::Decimal))((::PBYTE)hIl2Cpp + SYSTEM_CONVERT_TOSBYTE_13_OFFSET))(value);
		}

		static ::System::SByte ToSByte_14(::System::String* value, ::System::IFormatProvider* provider)
		{
			return ((::System::SByte(*)(::System::String*, ::System::IFormatProvider*))((::PBYTE)hIl2Cpp + SYSTEM_CONVERT_TOSBYTE_14_OFFSET))(value, provider);
		}

		static ::System::Byte ToByte(::System::Object* value)
		{
			return ((::System::Byte(*)(::System::Object*))((::PBYTE)hIl2Cpp + SYSTEM_CONVERT_TOBYTE_OFFSET))(value);
		}

		static ::System::Byte ToByte_1(::System::Object* value, ::System::IFormatProvider* provider)
		{
			return ((::System::Byte(*)(::System::Object*, ::System::IFormatProvider*))((::PBYTE)hIl2Cpp + SYSTEM_CONVERT_TOBYTE_1_OFFSET))(value, provider);
		}

		static ::System::Byte ToByte_2(::System::Boolean value)
		{
			return ((::System::Byte(*)(::System::Boolean))((::PBYTE)hIl2Cpp + SYSTEM_CONVERT_TOBYTE_2_OFFSET))(value);
		}

		static ::System::Byte ToByte_3(::System::Char value)
		{
			return ((::System::Byte(*)(::System::Char))((::PBYTE)hIl2Cpp + SYSTEM_CONVERT_TOBYTE_3_OFFSET))(value);
		}

		static ::System::Byte ToByte_4(::System::SByte value)
		{
			return ((::System::Byte(*)(::System::SByte))((::PBYTE)hIl2Cpp + SYSTEM_CONVERT_TOBYTE_4_OFFSET))(value);
		}

		static ::System::Byte ToByte_5(::System::Int16 value)
		{
			return ((::System::Byte(*)(::System::Int16))((::PBYTE)hIl2Cpp + SYSTEM_CONVERT_TOBYTE_5_OFFSET))(value);
		}

		static ::System::Byte ToByte_6(::System::UInt16 value)
		{
			return ((::System::Byte(*)(::System::UInt16))((::PBYTE)hIl2Cpp + SYSTEM_CONVERT_TOBYTE_6_OFFSET))(value);
		}

		static ::System::Byte ToByte_7(::System::Int32 value)
		{
			return ((::System::Byte(*)(::System::Int32))((::PBYTE)hIl2Cpp + SYSTEM_CONVERT_TOBYTE_7_OFFSET))(value);
		}

		static ::System::Byte ToByte_8(::System::UInt32 value)
		{
			return ((::System::Byte(*)(::System::UInt32))((::PBYTE)hIl2Cpp + SYSTEM_CONVERT_TOBYTE_8_OFFSET))(value);
		}

		static ::System::Byte ToByte_9(::System::Int64 value)
		{
			return ((::System::Byte(*)(::System::Int64))((::PBYTE)hIl2Cpp + SYSTEM_CONVERT_TOBYTE_9_OFFSET))(value);
		}

		static ::System::Byte ToByte_10(::System::UInt64 value)
		{
			return ((::System::Byte(*)(::System::UInt64))((::PBYTE)hIl2Cpp + SYSTEM_CONVERT_TOBYTE_10_OFFSET))(value);
		}

		static ::System::Byte ToByte_11(::System::Single value)
		{
			return ((::System::Byte(*)(::System::Single))((::PBYTE)hIl2Cpp + SYSTEM_CONVERT_TOBYTE_11_OFFSET))(value);
		}

		static ::System::Byte ToByte_12(::System::Double value)
		{
			return ((::System::Byte(*)(::System::Double))((::PBYTE)hIl2Cpp + SYSTEM_CONVERT_TOBYTE_12_OFFSET))(value);
		}

		static ::System::Byte ToByte_13(::System::Decimal value)
		{
			return ((::System::Byte(*)(::System::Decimal))((::PBYTE)hIl2Cpp + SYSTEM_CONVERT_TOBYTE_13_OFFSET))(value);
		}

		static ::System::Byte ToByte_14(::System::String* value)
		{
			return ((::System::Byte(*)(::System::String*))((::PBYTE)hIl2Cpp + SYSTEM_CONVERT_TOBYTE_14_OFFSET))(value);
		}

		static ::System::Byte ToByte_15(::System::String* value, ::System::IFormatProvider* provider)
		{
			return ((::System::Byte(*)(::System::String*, ::System::IFormatProvider*))((::PBYTE)hIl2Cpp + SYSTEM_CONVERT_TOBYTE_15_OFFSET))(value, provider);
		}

		static ::System::Int16 ToInt16(::System::Object* value)
		{
			return ((::System::Int16(*)(::System::Object*))((::PBYTE)hIl2Cpp + SYSTEM_CONVERT_TOINT16_OFFSET))(value);
		}

		static ::System::Int16 ToInt16_1(::System::Object* value, ::System::IFormatProvider* provider)
		{
			return ((::System::Int16(*)(::System::Object*, ::System::IFormatProvider*))((::PBYTE)hIl2Cpp + SYSTEM_CONVERT_TOINT16_1_OFFSET))(value, provider);
		}

		static ::System::Int16 ToInt16_2(::System::Boolean value)
		{
			return ((::System::Int16(*)(::System::Boolean))((::PBYTE)hIl2Cpp + SYSTEM_CONVERT_TOINT16_2_OFFSET))(value);
		}

		static ::System::Int16 ToInt16_3(::System::Char value)
		{
			return ((::System::Int16(*)(::System::Char))((::PBYTE)hIl2Cpp + SYSTEM_CONVERT_TOINT16_3_OFFSET))(value);
		}

		static ::System::Int16 ToInt16_4(::System::SByte value)
		{
			return ((::System::Int16(*)(::System::SByte))((::PBYTE)hIl2Cpp + SYSTEM_CONVERT_TOINT16_4_OFFSET))(value);
		}

		static ::System::Int16 ToInt16_5(::System::Byte value)
		{
			return ((::System::Int16(*)(::System::Byte))((::PBYTE)hIl2Cpp + SYSTEM_CONVERT_TOINT16_5_OFFSET))(value);
		}

		static ::System::Int16 ToInt16_6(::System::UInt16 value)
		{
			return ((::System::Int16(*)(::System::UInt16))((::PBYTE)hIl2Cpp + SYSTEM_CONVERT_TOINT16_6_OFFSET))(value);
		}

		static ::System::Int16 ToInt16_7(::System::Int32 value)
		{
			return ((::System::Int16(*)(::System::Int32))((::PBYTE)hIl2Cpp + SYSTEM_CONVERT_TOINT16_7_OFFSET))(value);
		}

		static ::System::Int16 ToInt16_8(::System::UInt32 value)
		{
			return ((::System::Int16(*)(::System::UInt32))((::PBYTE)hIl2Cpp + SYSTEM_CONVERT_TOINT16_8_OFFSET))(value);
		}

		static ::System::Int16 ToInt16_9(::System::Int64 value)
		{
			return ((::System::Int16(*)(::System::Int64))((::PBYTE)hIl2Cpp + SYSTEM_CONVERT_TOINT16_9_OFFSET))(value);
		}

		static ::System::Int16 ToInt16_10(::System::UInt64 value)
		{
			return ((::System::Int16(*)(::System::UInt64))((::PBYTE)hIl2Cpp + SYSTEM_CONVERT_TOINT16_10_OFFSET))(value);
		}

		static ::System::Int16 ToInt16_11(::System::Single value)
		{
			return ((::System::Int16(*)(::System::Single))((::PBYTE)hIl2Cpp + SYSTEM_CONVERT_TOINT16_11_OFFSET))(value);
		}

		static ::System::Int16 ToInt16_12(::System::Double value)
		{
			return ((::System::Int16(*)(::System::Double))((::PBYTE)hIl2Cpp + SYSTEM_CONVERT_TOINT16_12_OFFSET))(value);
		}

		static ::System::Int16 ToInt16_13(::System::Decimal value)
		{
			return ((::System::Int16(*)(::System::Decimal))((::PBYTE)hIl2Cpp + SYSTEM_CONVERT_TOINT16_13_OFFSET))(value);
		}

		static ::System::Int16 ToInt16_14(::System::String* value)
		{
			return ((::System::Int16(*)(::System::String*))((::PBYTE)hIl2Cpp + SYSTEM_CONVERT_TOINT16_14_OFFSET))(value);
		}

		static ::System::Int16 ToInt16_15(::System::String* value, ::System::IFormatProvider* provider)
		{
			return ((::System::Int16(*)(::System::String*, ::System::IFormatProvider*))((::PBYTE)hIl2Cpp + SYSTEM_CONVERT_TOINT16_15_OFFSET))(value, provider);
		}

		static ::System::UInt16 ToUInt16(::System::Object* value)
		{
			return ((::System::UInt16(*)(::System::Object*))((::PBYTE)hIl2Cpp + SYSTEM_CONVERT_TOUINT16_OFFSET))(value);
		}

		static ::System::UInt16 ToUInt16_1(::System::Object* value, ::System::IFormatProvider* provider)
		{
			return ((::System::UInt16(*)(::System::Object*, ::System::IFormatProvider*))((::PBYTE)hIl2Cpp + SYSTEM_CONVERT_TOUINT16_1_OFFSET))(value, provider);
		}

		static ::System::UInt16 ToUInt16_2(::System::Boolean value)
		{
			return ((::System::UInt16(*)(::System::Boolean))((::PBYTE)hIl2Cpp + SYSTEM_CONVERT_TOUINT16_2_OFFSET))(value);
		}

		static ::System::UInt16 ToUInt16_3(::System::Char value)
		{
			return ((::System::UInt16(*)(::System::Char))((::PBYTE)hIl2Cpp + SYSTEM_CONVERT_TOUINT16_3_OFFSET))(value);
		}

		static ::System::UInt16 ToUInt16_4(::System::SByte value)
		{
			return ((::System::UInt16(*)(::System::SByte))((::PBYTE)hIl2Cpp + SYSTEM_CONVERT_TOUINT16_4_OFFSET))(value);
		}

		static ::System::UInt16 ToUInt16_5(::System::Byte value)
		{
			return ((::System::UInt16(*)(::System::Byte))((::PBYTE)hIl2Cpp + SYSTEM_CONVERT_TOUINT16_5_OFFSET))(value);
		}

		static ::System::UInt16 ToUInt16_6(::System::Int16 value)
		{
			return ((::System::UInt16(*)(::System::Int16))((::PBYTE)hIl2Cpp + SYSTEM_CONVERT_TOUINT16_6_OFFSET))(value);
		}

		static ::System::UInt16 ToUInt16_7(::System::Int32 value)
		{
			return ((::System::UInt16(*)(::System::Int32))((::PBYTE)hIl2Cpp + SYSTEM_CONVERT_TOUINT16_7_OFFSET))(value);
		}

		static ::System::UInt16 ToUInt16_8(::System::UInt32 value)
		{
			return ((::System::UInt16(*)(::System::UInt32))((::PBYTE)hIl2Cpp + SYSTEM_CONVERT_TOUINT16_8_OFFSET))(value);
		}

		static ::System::UInt16 ToUInt16_9(::System::Int64 value)
		{
			return ((::System::UInt16(*)(::System::Int64))((::PBYTE)hIl2Cpp + SYSTEM_CONVERT_TOUINT16_9_OFFSET))(value);
		}

		static ::System::UInt16 ToUInt16_10(::System::UInt64 value)
		{
			return ((::System::UInt16(*)(::System::UInt64))((::PBYTE)hIl2Cpp + SYSTEM_CONVERT_TOUINT16_10_OFFSET))(value);
		}

		static ::System::UInt16 ToUInt16_11(::System::Single value)
		{
			return ((::System::UInt16(*)(::System::Single))((::PBYTE)hIl2Cpp + SYSTEM_CONVERT_TOUINT16_11_OFFSET))(value);
		}

		static ::System::UInt16 ToUInt16_12(::System::Double value)
		{
			return ((::System::UInt16(*)(::System::Double))((::PBYTE)hIl2Cpp + SYSTEM_CONVERT_TOUINT16_12_OFFSET))(value);
		}

		static ::System::UInt16 ToUInt16_13(::System::Decimal value)
		{
			return ((::System::UInt16(*)(::System::Decimal))((::PBYTE)hIl2Cpp + SYSTEM_CONVERT_TOUINT16_13_OFFSET))(value);
		}

		static ::System::UInt16 ToUInt16_14(::System::String* value, ::System::IFormatProvider* provider)
		{
			return ((::System::UInt16(*)(::System::String*, ::System::IFormatProvider*))((::PBYTE)hIl2Cpp + SYSTEM_CONVERT_TOUINT16_14_OFFSET))(value, provider);
		}

		static ::System::Int32 ToInt32(::System::Object* value)
		{
			return ((::System::Int32(*)(::System::Object*))((::PBYTE)hIl2Cpp + SYSTEM_CONVERT_TOINT32_OFFSET))(value);
		}

		static ::System::Int32 ToInt32_1(::System::Object* value, ::System::IFormatProvider* provider)
		{
			return ((::System::Int32(*)(::System::Object*, ::System::IFormatProvider*))((::PBYTE)hIl2Cpp + SYSTEM_CONVERT_TOINT32_1_OFFSET))(value, provider);
		}

		static ::System::Int32 ToInt32_2(::System::Boolean value)
		{
			return ((::System::Int32(*)(::System::Boolean))((::PBYTE)hIl2Cpp + SYSTEM_CONVERT_TOINT32_2_OFFSET))(value);
		}

		static ::System::Int32 ToInt32_3(::System::Char value)
		{
			return ((::System::Int32(*)(::System::Char))((::PBYTE)hIl2Cpp + SYSTEM_CONVERT_TOINT32_3_OFFSET))(value);
		}

		static ::System::Int32 ToInt32_4(::System::SByte value)
		{
			return ((::System::Int32(*)(::System::SByte))((::PBYTE)hIl2Cpp + SYSTEM_CONVERT_TOINT32_4_OFFSET))(value);
		}

		static ::System::Int32 ToInt32_5(::System::Byte value)
		{
			return ((::System::Int32(*)(::System::Byte))((::PBYTE)hIl2Cpp + SYSTEM_CONVERT_TOINT32_5_OFFSET))(value);
		}

		static ::System::Int32 ToInt32_6(::System::Int16 value)
		{
			return ((::System::Int32(*)(::System::Int16))((::PBYTE)hIl2Cpp + SYSTEM_CONVERT_TOINT32_6_OFFSET))(value);
		}

		static ::System::Int32 ToInt32_7(::System::UInt16 value)
		{
			return ((::System::Int32(*)(::System::UInt16))((::PBYTE)hIl2Cpp + SYSTEM_CONVERT_TOINT32_7_OFFSET))(value);
		}

		static ::System::Int32 ToInt32_8(::System::UInt32 value)
		{
			return ((::System::Int32(*)(::System::UInt32))((::PBYTE)hIl2Cpp + SYSTEM_CONVERT_TOINT32_8_OFFSET))(value);
		}

		static ::System::Int32 ToInt32_9(::System::Int32 value)
		{
			return ((::System::Int32(*)(::System::Int32))((::PBYTE)hIl2Cpp + SYSTEM_CONVERT_TOINT32_9_OFFSET))(value);
		}

		static ::System::Int32 ToInt32_10(::System::Int64 value)
		{
			return ((::System::Int32(*)(::System::Int64))((::PBYTE)hIl2Cpp + SYSTEM_CONVERT_TOINT32_10_OFFSET))(value);
		}

		static ::System::Int32 ToInt32_11(::System::UInt64 value)
		{
			return ((::System::Int32(*)(::System::UInt64))((::PBYTE)hIl2Cpp + SYSTEM_CONVERT_TOINT32_11_OFFSET))(value);
		}

		static ::System::Int32 ToInt32_12(::System::Single value)
		{
			return ((::System::Int32(*)(::System::Single))((::PBYTE)hIl2Cpp + SYSTEM_CONVERT_TOINT32_12_OFFSET))(value);
		}

		static ::System::Int32 ToInt32_13(::System::Double value)
		{
			return ((::System::Int32(*)(::System::Double))((::PBYTE)hIl2Cpp + SYSTEM_CONVERT_TOINT32_13_OFFSET))(value);
		}

		static ::System::Int32 ToInt32_14(::System::Decimal value)
		{
			return ((::System::Int32(*)(::System::Decimal))((::PBYTE)hIl2Cpp + SYSTEM_CONVERT_TOINT32_14_OFFSET))(value);
		}

		static ::System::Int32 ToInt32_15(::System::String* value)
		{
			return ((::System::Int32(*)(::System::String*))((::PBYTE)hIl2Cpp + SYSTEM_CONVERT_TOINT32_15_OFFSET))(value);
		}

		static ::System::Int32 ToInt32_16(::System::String* value, ::System::IFormatProvider* provider)
		{
			return ((::System::Int32(*)(::System::String*, ::System::IFormatProvider*))((::PBYTE)hIl2Cpp + SYSTEM_CONVERT_TOINT32_16_OFFSET))(value, provider);
		}

		static ::System::UInt32 ToUInt32(::System::Object* value)
		{
			return ((::System::UInt32(*)(::System::Object*))((::PBYTE)hIl2Cpp + SYSTEM_CONVERT_TOUINT32_OFFSET))(value);
		}

		static ::System::UInt32 ToUInt32_1(::System::Object* value, ::System::IFormatProvider* provider)
		{
			return ((::System::UInt32(*)(::System::Object*, ::System::IFormatProvider*))((::PBYTE)hIl2Cpp + SYSTEM_CONVERT_TOUINT32_1_OFFSET))(value, provider);
		}

		static ::System::UInt32 ToUInt32_2(::System::Boolean value)
		{
			return ((::System::UInt32(*)(::System::Boolean))((::PBYTE)hIl2Cpp + SYSTEM_CONVERT_TOUINT32_2_OFFSET))(value);
		}

		static ::System::UInt32 ToUInt32_3(::System::Char value)
		{
			return ((::System::UInt32(*)(::System::Char))((::PBYTE)hIl2Cpp + SYSTEM_CONVERT_TOUINT32_3_OFFSET))(value);
		}

		static ::System::UInt32 ToUInt32_4(::System::SByte value)
		{
			return ((::System::UInt32(*)(::System::SByte))((::PBYTE)hIl2Cpp + SYSTEM_CONVERT_TOUINT32_4_OFFSET))(value);
		}

		static ::System::UInt32 ToUInt32_5(::System::Byte value)
		{
			return ((::System::UInt32(*)(::System::Byte))((::PBYTE)hIl2Cpp + SYSTEM_CONVERT_TOUINT32_5_OFFSET))(value);
		}

		static ::System::UInt32 ToUInt32_6(::System::Int16 value)
		{
			return ((::System::UInt32(*)(::System::Int16))((::PBYTE)hIl2Cpp + SYSTEM_CONVERT_TOUINT32_6_OFFSET))(value);
		}

		static ::System::UInt32 ToUInt32_7(::System::UInt16 value)
		{
			return ((::System::UInt32(*)(::System::UInt16))((::PBYTE)hIl2Cpp + SYSTEM_CONVERT_TOUINT32_7_OFFSET))(value);
		}

		static ::System::UInt32 ToUInt32_8(::System::Int32 value)
		{
			return ((::System::UInt32(*)(::System::Int32))((::PBYTE)hIl2Cpp + SYSTEM_CONVERT_TOUINT32_8_OFFSET))(value);
		}

		static ::System::UInt32 ToUInt32_9(::System::Int64 value)
		{
			return ((::System::UInt32(*)(::System::Int64))((::PBYTE)hIl2Cpp + SYSTEM_CONVERT_TOUINT32_9_OFFSET))(value);
		}

		static ::System::UInt32 ToUInt32_10(::System::UInt64 value)
		{
			return ((::System::UInt32(*)(::System::UInt64))((::PBYTE)hIl2Cpp + SYSTEM_CONVERT_TOUINT32_10_OFFSET))(value);
		}

		static ::System::UInt32 ToUInt32_11(::System::Single value)
		{
			return ((::System::UInt32(*)(::System::Single))((::PBYTE)hIl2Cpp + SYSTEM_CONVERT_TOUINT32_11_OFFSET))(value);
		}

		static ::System::UInt32 ToUInt32_12(::System::Double value)
		{
			return ((::System::UInt32(*)(::System::Double))((::PBYTE)hIl2Cpp + SYSTEM_CONVERT_TOUINT32_12_OFFSET))(value);
		}

		static ::System::UInt32 ToUInt32_13(::System::Decimal value)
		{
			return ((::System::UInt32(*)(::System::Decimal))((::PBYTE)hIl2Cpp + SYSTEM_CONVERT_TOUINT32_13_OFFSET))(value);
		}

		static ::System::UInt32 ToUInt32_14(::System::String* value, ::System::IFormatProvider* provider)
		{
			return ((::System::UInt32(*)(::System::String*, ::System::IFormatProvider*))((::PBYTE)hIl2Cpp + SYSTEM_CONVERT_TOUINT32_14_OFFSET))(value, provider);
		}

		static ::System::Int64 ToInt64(::System::Object* value)
		{
			return ((::System::Int64(*)(::System::Object*))((::PBYTE)hIl2Cpp + SYSTEM_CONVERT_TOINT64_OFFSET))(value);
		}

		static ::System::Int64 ToInt64_1(::System::Object* value, ::System::IFormatProvider* provider)
		{
			return ((::System::Int64(*)(::System::Object*, ::System::IFormatProvider*))((::PBYTE)hIl2Cpp + SYSTEM_CONVERT_TOINT64_1_OFFSET))(value, provider);
		}

		static ::System::Int64 ToInt64_2(::System::Boolean value)
		{
			return ((::System::Int64(*)(::System::Boolean))((::PBYTE)hIl2Cpp + SYSTEM_CONVERT_TOINT64_2_OFFSET))(value);
		}

		static ::System::Int64 ToInt64_3(::System::Char value)
		{
			return ((::System::Int64(*)(::System::Char))((::PBYTE)hIl2Cpp + SYSTEM_CONVERT_TOINT64_3_OFFSET))(value);
		}

		static ::System::Int64 ToInt64_4(::System::SByte value)
		{
			return ((::System::Int64(*)(::System::SByte))((::PBYTE)hIl2Cpp + SYSTEM_CONVERT_TOINT64_4_OFFSET))(value);
		}

		static ::System::Int64 ToInt64_5(::System::Byte value)
		{
			return ((::System::Int64(*)(::System::Byte))((::PBYTE)hIl2Cpp + SYSTEM_CONVERT_TOINT64_5_OFFSET))(value);
		}

		static ::System::Int64 ToInt64_6(::System::Int16 value)
		{
			return ((::System::Int64(*)(::System::Int16))((::PBYTE)hIl2Cpp + SYSTEM_CONVERT_TOINT64_6_OFFSET))(value);
		}

		static ::System::Int64 ToInt64_7(::System::UInt16 value)
		{
			return ((::System::Int64(*)(::System::UInt16))((::PBYTE)hIl2Cpp + SYSTEM_CONVERT_TOINT64_7_OFFSET))(value);
		}

		static ::System::Int64 ToInt64_8(::System::Int32 value)
		{
			return ((::System::Int64(*)(::System::Int32))((::PBYTE)hIl2Cpp + SYSTEM_CONVERT_TOINT64_8_OFFSET))(value);
		}

		static ::System::Int64 ToInt64_9(::System::UInt32 value)
		{
			return ((::System::Int64(*)(::System::UInt32))((::PBYTE)hIl2Cpp + SYSTEM_CONVERT_TOINT64_9_OFFSET))(value);
		}

		static ::System::Int64 ToInt64_10(::System::UInt64 value)
		{
			return ((::System::Int64(*)(::System::UInt64))((::PBYTE)hIl2Cpp + SYSTEM_CONVERT_TOINT64_10_OFFSET))(value);
		}

		static ::System::Int64 ToInt64_11(::System::Single value)
		{
			return ((::System::Int64(*)(::System::Single))((::PBYTE)hIl2Cpp + SYSTEM_CONVERT_TOINT64_11_OFFSET))(value);
		}

		static ::System::Int64 ToInt64_12(::System::Double value)
		{
			return ((::System::Int64(*)(::System::Double))((::PBYTE)hIl2Cpp + SYSTEM_CONVERT_TOINT64_12_OFFSET))(value);
		}

		static ::System::Int64 ToInt64_13(::System::Decimal value)
		{
			return ((::System::Int64(*)(::System::Decimal))((::PBYTE)hIl2Cpp + SYSTEM_CONVERT_TOINT64_13_OFFSET))(value);
		}

		static ::System::Int64 ToInt64_14(::System::String* value)
		{
			return ((::System::Int64(*)(::System::String*))((::PBYTE)hIl2Cpp + SYSTEM_CONVERT_TOINT64_14_OFFSET))(value);
		}

		static ::System::Int64 ToInt64_15(::System::String* value, ::System::IFormatProvider* provider)
		{
			return ((::System::Int64(*)(::System::String*, ::System::IFormatProvider*))((::PBYTE)hIl2Cpp + SYSTEM_CONVERT_TOINT64_15_OFFSET))(value, provider);
		}

		static ::System::UInt64 ToUInt64(::System::Object* value)
		{
			return ((::System::UInt64(*)(::System::Object*))((::PBYTE)hIl2Cpp + SYSTEM_CONVERT_TOUINT64_OFFSET))(value);
		}

		static ::System::UInt64 ToUInt64_1(::System::Object* value, ::System::IFormatProvider* provider)
		{
			return ((::System::UInt64(*)(::System::Object*, ::System::IFormatProvider*))((::PBYTE)hIl2Cpp + SYSTEM_CONVERT_TOUINT64_1_OFFSET))(value, provider);
		}

		static ::System::UInt64 ToUInt64_2(::System::Boolean value)
		{
			return ((::System::UInt64(*)(::System::Boolean))((::PBYTE)hIl2Cpp + SYSTEM_CONVERT_TOUINT64_2_OFFSET))(value);
		}

		static ::System::UInt64 ToUInt64_3(::System::Char value)
		{
			return ((::System::UInt64(*)(::System::Char))((::PBYTE)hIl2Cpp + SYSTEM_CONVERT_TOUINT64_3_OFFSET))(value);
		}

		static ::System::UInt64 ToUInt64_4(::System::SByte value)
		{
			return ((::System::UInt64(*)(::System::SByte))((::PBYTE)hIl2Cpp + SYSTEM_CONVERT_TOUINT64_4_OFFSET))(value);
		}

		static ::System::UInt64 ToUInt64_5(::System::Byte value)
		{
			return ((::System::UInt64(*)(::System::Byte))((::PBYTE)hIl2Cpp + SYSTEM_CONVERT_TOUINT64_5_OFFSET))(value);
		}

		static ::System::UInt64 ToUInt64_6(::System::Int16 value)
		{
			return ((::System::UInt64(*)(::System::Int16))((::PBYTE)hIl2Cpp + SYSTEM_CONVERT_TOUINT64_6_OFFSET))(value);
		}

		static ::System::UInt64 ToUInt64_7(::System::UInt16 value)
		{
			return ((::System::UInt64(*)(::System::UInt16))((::PBYTE)hIl2Cpp + SYSTEM_CONVERT_TOUINT64_7_OFFSET))(value);
		}

		static ::System::UInt64 ToUInt64_8(::System::Int32 value)
		{
			return ((::System::UInt64(*)(::System::Int32))((::PBYTE)hIl2Cpp + SYSTEM_CONVERT_TOUINT64_8_OFFSET))(value);
		}

		static ::System::UInt64 ToUInt64_9(::System::UInt32 value)
		{
			return ((::System::UInt64(*)(::System::UInt32))((::PBYTE)hIl2Cpp + SYSTEM_CONVERT_TOUINT64_9_OFFSET))(value);
		}

		static ::System::UInt64 ToUInt64_10(::System::Int64 value)
		{
			return ((::System::UInt64(*)(::System::Int64))((::PBYTE)hIl2Cpp + SYSTEM_CONVERT_TOUINT64_10_OFFSET))(value);
		}

		static ::System::UInt64 ToUInt64_11(::System::UInt64 value)
		{
			return ((::System::UInt64(*)(::System::UInt64))((::PBYTE)hIl2Cpp + SYSTEM_CONVERT_TOUINT64_11_OFFSET))(value);
		}

		static ::System::UInt64 ToUInt64_12(::System::Single value)
		{
			return ((::System::UInt64(*)(::System::Single))((::PBYTE)hIl2Cpp + SYSTEM_CONVERT_TOUINT64_12_OFFSET))(value);
		}

		static ::System::UInt64 ToUInt64_13(::System::Double value)
		{
			return ((::System::UInt64(*)(::System::Double))((::PBYTE)hIl2Cpp + SYSTEM_CONVERT_TOUINT64_13_OFFSET))(value);
		}

		static ::System::UInt64 ToUInt64_14(::System::Decimal value)
		{
			return ((::System::UInt64(*)(::System::Decimal))((::PBYTE)hIl2Cpp + SYSTEM_CONVERT_TOUINT64_14_OFFSET))(value);
		}

		static ::System::UInt64 ToUInt64_15(::System::String* value)
		{
			return ((::System::UInt64(*)(::System::String*))((::PBYTE)hIl2Cpp + SYSTEM_CONVERT_TOUINT64_15_OFFSET))(value);
		}

		static ::System::UInt64 ToUInt64_16(::System::String* value, ::System::IFormatProvider* provider)
		{
			return ((::System::UInt64(*)(::System::String*, ::System::IFormatProvider*))((::PBYTE)hIl2Cpp + SYSTEM_CONVERT_TOUINT64_16_OFFSET))(value, provider);
		}

		static ::System::Single ToSingle(::System::Object* value)
		{
			return ((::System::Single(*)(::System::Object*))((::PBYTE)hIl2Cpp + SYSTEM_CONVERT_TOSINGLE_OFFSET))(value);
		}

		static ::System::Single ToSingle_1(::System::Object* value, ::System::IFormatProvider* provider)
		{
			return ((::System::Single(*)(::System::Object*, ::System::IFormatProvider*))((::PBYTE)hIl2Cpp + SYSTEM_CONVERT_TOSINGLE_1_OFFSET))(value, provider);
		}

		static ::System::Single ToSingle_2(::System::SByte value)
		{
			return ((::System::Single(*)(::System::SByte))((::PBYTE)hIl2Cpp + SYSTEM_CONVERT_TOSINGLE_2_OFFSET))(value);
		}

		static ::System::Single ToSingle_3(::System::Byte value)
		{
			return ((::System::Single(*)(::System::Byte))((::PBYTE)hIl2Cpp + SYSTEM_CONVERT_TOSINGLE_3_OFFSET))(value);
		}

		static ::System::Single ToSingle_4(::System::Int16 value)
		{
			return ((::System::Single(*)(::System::Int16))((::PBYTE)hIl2Cpp + SYSTEM_CONVERT_TOSINGLE_4_OFFSET))(value);
		}

		static ::System::Single ToSingle_5(::System::UInt16 value)
		{
			return ((::System::Single(*)(::System::UInt16))((::PBYTE)hIl2Cpp + SYSTEM_CONVERT_TOSINGLE_5_OFFSET))(value);
		}

		static ::System::Single ToSingle_6(::System::Int32 value)
		{
			return ((::System::Single(*)(::System::Int32))((::PBYTE)hIl2Cpp + SYSTEM_CONVERT_TOSINGLE_6_OFFSET))(value);
		}

		static ::System::Single ToSingle_7(::System::UInt32 value)
		{
			return ((::System::Single(*)(::System::UInt32))((::PBYTE)hIl2Cpp + SYSTEM_CONVERT_TOSINGLE_7_OFFSET))(value);
		}

		static ::System::Single ToSingle_8(::System::Int64 value)
		{
			return ((::System::Single(*)(::System::Int64))((::PBYTE)hIl2Cpp + SYSTEM_CONVERT_TOSINGLE_8_OFFSET))(value);
		}

		static ::System::Single ToSingle_9(::System::UInt64 value)
		{
			return ((::System::Single(*)(::System::UInt64))((::PBYTE)hIl2Cpp + SYSTEM_CONVERT_TOSINGLE_9_OFFSET))(value);
		}

		static ::System::Single ToSingle_10(::System::Double value)
		{
			return ((::System::Single(*)(::System::Double))((::PBYTE)hIl2Cpp + SYSTEM_CONVERT_TOSINGLE_10_OFFSET))(value);
		}

		static ::System::Single ToSingle_11(::System::Decimal value)
		{
			return ((::System::Single(*)(::System::Decimal))((::PBYTE)hIl2Cpp + SYSTEM_CONVERT_TOSINGLE_11_OFFSET))(value);
		}

		static ::System::Single ToSingle_12(::System::String* value)
		{
			return ((::System::Single(*)(::System::String*))((::PBYTE)hIl2Cpp + SYSTEM_CONVERT_TOSINGLE_12_OFFSET))(value);
		}

		static ::System::Single ToSingle_13(::System::String* value, ::System::IFormatProvider* provider)
		{
			return ((::System::Single(*)(::System::String*, ::System::IFormatProvider*))((::PBYTE)hIl2Cpp + SYSTEM_CONVERT_TOSINGLE_13_OFFSET))(value, provider);
		}

		static ::System::Single ToSingle_14(::System::Boolean value)
		{
			return ((::System::Single(*)(::System::Boolean))((::PBYTE)hIl2Cpp + SYSTEM_CONVERT_TOSINGLE_14_OFFSET))(value);
		}

		static ::System::Double ToDouble(::System::Object* value)
		{
			return ((::System::Double(*)(::System::Object*))((::PBYTE)hIl2Cpp + SYSTEM_CONVERT_TODOUBLE_OFFSET))(value);
		}

		static ::System::Double ToDouble_1(::System::Object* value, ::System::IFormatProvider* provider)
		{
			return ((::System::Double(*)(::System::Object*, ::System::IFormatProvider*))((::PBYTE)hIl2Cpp + SYSTEM_CONVERT_TODOUBLE_1_OFFSET))(value, provider);
		}

		static ::System::Double ToDouble_2(::System::SByte value)
		{
			return ((::System::Double(*)(::System::SByte))((::PBYTE)hIl2Cpp + SYSTEM_CONVERT_TODOUBLE_2_OFFSET))(value);
		}

		static ::System::Double ToDouble_3(::System::Byte value)
		{
			return ((::System::Double(*)(::System::Byte))((::PBYTE)hIl2Cpp + SYSTEM_CONVERT_TODOUBLE_3_OFFSET))(value);
		}

		static ::System::Double ToDouble_4(::System::Int16 value)
		{
			return ((::System::Double(*)(::System::Int16))((::PBYTE)hIl2Cpp + SYSTEM_CONVERT_TODOUBLE_4_OFFSET))(value);
		}

		static ::System::Double ToDouble_5(::System::UInt16 value)
		{
			return ((::System::Double(*)(::System::UInt16))((::PBYTE)hIl2Cpp + SYSTEM_CONVERT_TODOUBLE_5_OFFSET))(value);
		}

		static ::System::Double ToDouble_6(::System::Int32 value)
		{
			return ((::System::Double(*)(::System::Int32))((::PBYTE)hIl2Cpp + SYSTEM_CONVERT_TODOUBLE_6_OFFSET))(value);
		}

		static ::System::Double ToDouble_7(::System::UInt32 value)
		{
			return ((::System::Double(*)(::System::UInt32))((::PBYTE)hIl2Cpp + SYSTEM_CONVERT_TODOUBLE_7_OFFSET))(value);
		}

		static ::System::Double ToDouble_8(::System::Int64 value)
		{
			return ((::System::Double(*)(::System::Int64))((::PBYTE)hIl2Cpp + SYSTEM_CONVERT_TODOUBLE_8_OFFSET))(value);
		}

		static ::System::Double ToDouble_9(::System::UInt64 value)
		{
			return ((::System::Double(*)(::System::UInt64))((::PBYTE)hIl2Cpp + SYSTEM_CONVERT_TODOUBLE_9_OFFSET))(value);
		}

		static ::System::Double ToDouble_10(::System::Single value)
		{
			return ((::System::Double(*)(::System::Single))((::PBYTE)hIl2Cpp + SYSTEM_CONVERT_TODOUBLE_10_OFFSET))(value);
		}

		static ::System::Double ToDouble_11(::System::Decimal value)
		{
			return ((::System::Double(*)(::System::Decimal))((::PBYTE)hIl2Cpp + SYSTEM_CONVERT_TODOUBLE_11_OFFSET))(value);
		}

		static ::System::Double ToDouble_12(::System::String* value)
		{
			return ((::System::Double(*)(::System::String*))((::PBYTE)hIl2Cpp + SYSTEM_CONVERT_TODOUBLE_12_OFFSET))(value);
		}

		static ::System::Double ToDouble_13(::System::String* value, ::System::IFormatProvider* provider)
		{
			return ((::System::Double(*)(::System::String*, ::System::IFormatProvider*))((::PBYTE)hIl2Cpp + SYSTEM_CONVERT_TODOUBLE_13_OFFSET))(value, provider);
		}

		static ::System::Double ToDouble_14(::System::Boolean value)
		{
			return ((::System::Double(*)(::System::Boolean))((::PBYTE)hIl2Cpp + SYSTEM_CONVERT_TODOUBLE_14_OFFSET))(value);
		}

		static ::System::Decimal ToDecimal(::System::Object* value)
		{
			return ((::System::Decimal(*)(::System::Object*))((::PBYTE)hIl2Cpp + SYSTEM_CONVERT_TODECIMAL_OFFSET))(value);
		}

		static ::System::Decimal ToDecimal_1(::System::Object* value, ::System::IFormatProvider* provider)
		{
			return ((::System::Decimal(*)(::System::Object*, ::System::IFormatProvider*))((::PBYTE)hIl2Cpp + SYSTEM_CONVERT_TODECIMAL_1_OFFSET))(value, provider);
		}

		static ::System::Decimal ToDecimal_2(::System::SByte value)
		{
			return ((::System::Decimal(*)(::System::SByte))((::PBYTE)hIl2Cpp + SYSTEM_CONVERT_TODECIMAL_2_OFFSET))(value);
		}

		static ::System::Decimal ToDecimal_3(::System::Byte value)
		{
			return ((::System::Decimal(*)(::System::Byte))((::PBYTE)hIl2Cpp + SYSTEM_CONVERT_TODECIMAL_3_OFFSET))(value);
		}

		static ::System::Decimal ToDecimal_4(::System::Int16 value)
		{
			return ((::System::Decimal(*)(::System::Int16))((::PBYTE)hIl2Cpp + SYSTEM_CONVERT_TODECIMAL_4_OFFSET))(value);
		}

		static ::System::Decimal ToDecimal_5(::System::UInt16 value)
		{
			return ((::System::Decimal(*)(::System::UInt16))((::PBYTE)hIl2Cpp + SYSTEM_CONVERT_TODECIMAL_5_OFFSET))(value);
		}

		static ::System::Decimal ToDecimal_6(::System::Int32 value)
		{
			return ((::System::Decimal(*)(::System::Int32))((::PBYTE)hIl2Cpp + SYSTEM_CONVERT_TODECIMAL_6_OFFSET))(value);
		}

		static ::System::Decimal ToDecimal_7(::System::UInt32 value)
		{
			return ((::System::Decimal(*)(::System::UInt32))((::PBYTE)hIl2Cpp + SYSTEM_CONVERT_TODECIMAL_7_OFFSET))(value);
		}

		static ::System::Decimal ToDecimal_8(::System::Int64 value)
		{
			return ((::System::Decimal(*)(::System::Int64))((::PBYTE)hIl2Cpp + SYSTEM_CONVERT_TODECIMAL_8_OFFSET))(value);
		}

		static ::System::Decimal ToDecimal_9(::System::UInt64 value)
		{
			return ((::System::Decimal(*)(::System::UInt64))((::PBYTE)hIl2Cpp + SYSTEM_CONVERT_TODECIMAL_9_OFFSET))(value);
		}

		static ::System::Decimal ToDecimal_10(::System::Single value)
		{
			return ((::System::Decimal(*)(::System::Single))((::PBYTE)hIl2Cpp + SYSTEM_CONVERT_TODECIMAL_10_OFFSET))(value);
		}

		static ::System::Decimal ToDecimal_11(::System::Double value)
		{
			return ((::System::Decimal(*)(::System::Double))((::PBYTE)hIl2Cpp + SYSTEM_CONVERT_TODECIMAL_11_OFFSET))(value);
		}

		static ::System::Decimal ToDecimal_12(::System::String* value)
		{
			return ((::System::Decimal(*)(::System::String*))((::PBYTE)hIl2Cpp + SYSTEM_CONVERT_TODECIMAL_12_OFFSET))(value);
		}

		static ::System::Decimal ToDecimal_13(::System::String* value, ::System::IFormatProvider* provider)
		{
			return ((::System::Decimal(*)(::System::String*, ::System::IFormatProvider*))((::PBYTE)hIl2Cpp + SYSTEM_CONVERT_TODECIMAL_13_OFFSET))(value, provider);
		}

		static ::System::Decimal ToDecimal_14(::System::Boolean value)
		{
			return ((::System::Decimal(*)(::System::Boolean))((::PBYTE)hIl2Cpp + SYSTEM_CONVERT_TODECIMAL_14_OFFSET))(value);
		}

		static ::System::DateTime ToDateTime(::System::Object* value, ::System::IFormatProvider* provider)
		{
			return ((::System::DateTime(*)(::System::Object*, ::System::IFormatProvider*))((::PBYTE)hIl2Cpp + SYSTEM_CONVERT_TODATETIME_OFFSET))(value, provider);
		}

		static ::System::DateTime ToDateTime_1(::System::String* value)
		{
			return ((::System::DateTime(*)(::System::String*))((::PBYTE)hIl2Cpp + SYSTEM_CONVERT_TODATETIME_1_OFFSET))(value);
		}

		static ::System::DateTime ToDateTime_2(::System::String* value, ::System::IFormatProvider* provider)
		{
			return ((::System::DateTime(*)(::System::String*, ::System::IFormatProvider*))((::PBYTE)hIl2Cpp + SYSTEM_CONVERT_TODATETIME_2_OFFSET))(value, provider);
		}

		static ::System::String* ToString(::System::Object* value)
		{
			return ((::System::String*(*)(::System::Object*))((::PBYTE)hIl2Cpp + SYSTEM_CONVERT_TOSTRING_OFFSET))(value);
		}

		static ::System::String* ToString_1(::System::Object* value, ::System::IFormatProvider* provider)
		{
			return ((::System::String*(*)(::System::Object*, ::System::IFormatProvider*))((::PBYTE)hIl2Cpp + SYSTEM_CONVERT_TOSTRING_1_OFFSET))(value, provider);
		}

		static ::System::String* ToString_2(::System::Char value)
		{
			return ((::System::String*(*)(::System::Char))((::PBYTE)hIl2Cpp + SYSTEM_CONVERT_TOSTRING_2_OFFSET))(value);
		}

		static ::System::String* ToString_3(::System::Char value, ::System::IFormatProvider* provider)
		{
			return ((::System::String*(*)(::System::Char, ::System::IFormatProvider*))((::PBYTE)hIl2Cpp + SYSTEM_CONVERT_TOSTRING_3_OFFSET))(value, provider);
		}

		static ::System::String* ToString_4(::System::Int32 value)
		{
			return ((::System::String*(*)(::System::Int32))((::PBYTE)hIl2Cpp + SYSTEM_CONVERT_TOSTRING_4_OFFSET))(value);
		}

		static ::System::String* ToString_5(::System::Int32 value, ::System::IFormatProvider* provider)
		{
			return ((::System::String*(*)(::System::Int32, ::System::IFormatProvider*))((::PBYTE)hIl2Cpp + SYSTEM_CONVERT_TOSTRING_5_OFFSET))(value, provider);
		}

		static ::System::String* ToString_6(::System::Int64 value, ::System::IFormatProvider* provider)
		{
			return ((::System::String*(*)(::System::Int64, ::System::IFormatProvider*))((::PBYTE)hIl2Cpp + SYSTEM_CONVERT_TOSTRING_6_OFFSET))(value, provider);
		}

		static ::System::String* ToString_7(::System::UInt64 value, ::System::IFormatProvider* provider)
		{
			return ((::System::String*(*)(::System::UInt64, ::System::IFormatProvider*))((::PBYTE)hIl2Cpp + SYSTEM_CONVERT_TOSTRING_7_OFFSET))(value, provider);
		}

		static ::System::String* ToString_8(::System::Single value, ::System::IFormatProvider* provider)
		{
			return ((::System::String*(*)(::System::Single, ::System::IFormatProvider*))((::PBYTE)hIl2Cpp + SYSTEM_CONVERT_TOSTRING_8_OFFSET))(value, provider);
		}

		static ::System::String* ToString_9(::System::Double value, ::System::IFormatProvider* provider)
		{
			return ((::System::String*(*)(::System::Double, ::System::IFormatProvider*))((::PBYTE)hIl2Cpp + SYSTEM_CONVERT_TOSTRING_9_OFFSET))(value, provider);
		}

		static ::System::String* ToString_10(::System::Decimal value, ::System::IFormatProvider* provider)
		{
			return ((::System::String*(*)(::System::Decimal, ::System::IFormatProvider*))((::PBYTE)hIl2Cpp + SYSTEM_CONVERT_TOSTRING_10_OFFSET))(value, provider);
		}

		static ::System::String* ToString_11(::System::DateTime value, ::System::IFormatProvider* provider)
		{
			return ((::System::String*(*)(::System::DateTime, ::System::IFormatProvider*))((::PBYTE)hIl2Cpp + SYSTEM_CONVERT_TOSTRING_11_OFFSET))(value, provider);
		}

		static ::System::Byte ToByte_16(::System::String* value, ::System::Int32 fromBase)
		{
			return ((::System::Byte(*)(::System::String*, ::System::Int32))((::PBYTE)hIl2Cpp + SYSTEM_CONVERT_TOBYTE_16_OFFSET))(value, fromBase);
		}

		static ::System::SByte ToSByte_15(::System::String* value, ::System::Int32 fromBase)
		{
			return ((::System::SByte(*)(::System::String*, ::System::Int32))((::PBYTE)hIl2Cpp + SYSTEM_CONVERT_TOSBYTE_15_OFFSET))(value, fromBase);
		}

		static ::System::Int16 ToInt16_16(::System::String* value, ::System::Int32 fromBase)
		{
			return ((::System::Int16(*)(::System::String*, ::System::Int32))((::PBYTE)hIl2Cpp + SYSTEM_CONVERT_TOINT16_16_OFFSET))(value, fromBase);
		}

		static ::System::UInt16 ToUInt16_15(::System::String* value, ::System::Int32 fromBase)
		{
			return ((::System::UInt16(*)(::System::String*, ::System::Int32))((::PBYTE)hIl2Cpp + SYSTEM_CONVERT_TOUINT16_15_OFFSET))(value, fromBase);
		}

		static ::System::Int32 ToInt32_17(::System::String* value, ::System::Int32 fromBase)
		{
			return ((::System::Int32(*)(::System::String*, ::System::Int32))((::PBYTE)hIl2Cpp + SYSTEM_CONVERT_TOINT32_17_OFFSET))(value, fromBase);
		}

		static ::System::UInt32 ToUInt32_15(::System::String* value, ::System::Int32 fromBase)
		{
			return ((::System::UInt32(*)(::System::String*, ::System::Int32))((::PBYTE)hIl2Cpp + SYSTEM_CONVERT_TOUINT32_15_OFFSET))(value, fromBase);
		}

		static ::System::Int64 ToInt64_16(::System::String* value, ::System::Int32 fromBase)
		{
			return ((::System::Int64(*)(::System::String*, ::System::Int32))((::PBYTE)hIl2Cpp + SYSTEM_CONVERT_TOINT64_16_OFFSET))(value, fromBase);
		}

		static ::System::UInt64 ToUInt64_17(::System::String* value, ::System::Int32 fromBase)
		{
			return ((::System::UInt64(*)(::System::String*, ::System::Int32))((::PBYTE)hIl2Cpp + SYSTEM_CONVERT_TOUINT64_17_OFFSET))(value, fromBase);
		}

		static ::System::String* ToString_12(::System::Byte value, ::System::Int32 toBase)
		{
			return ((::System::String*(*)(::System::Byte, ::System::Int32))((::PBYTE)hIl2Cpp + SYSTEM_CONVERT_TOSTRING_12_OFFSET))(value, toBase);
		}

		static ::System::String* ToString_13(::System::Int16 value, ::System::Int32 toBase)
		{
			return ((::System::String*(*)(::System::Int16, ::System::Int32))((::PBYTE)hIl2Cpp + SYSTEM_CONVERT_TOSTRING_13_OFFSET))(value, toBase);
		}

		static ::System::String* ToString_14(::System::Int32 value, ::System::Int32 toBase)
		{
			return ((::System::String*(*)(::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + SYSTEM_CONVERT_TOSTRING_14_OFFSET))(value, toBase);
		}

		static ::System::String* ToString_15(::System::Int64 value, ::System::Int32 toBase)
		{
			return ((::System::String*(*)(::System::Int64, ::System::Int32))((::PBYTE)hIl2Cpp + SYSTEM_CONVERT_TOSTRING_15_OFFSET))(value, toBase);
		}

		static ::System::String* ToBase64String(::Il2CppArray<::System::Byte>* inArray)
		{
			return ((::System::String*(*)(::Il2CppArray<::System::Byte>*))((::PBYTE)hIl2Cpp + SYSTEM_CONVERT_TOBASE64STRING_OFFSET))(inArray);
		}

		static ::System::String* ToBase64String_1(::Il2CppArray<::System::Byte>* inArray, ::System::Base64FormattingOptions options)
		{
			return ((::System::String*(*)(::Il2CppArray<::System::Byte>*, ::System::Base64FormattingOptions))((::PBYTE)hIl2Cpp + SYSTEM_CONVERT_TOBASE64STRING_1_OFFSET))(inArray, options);
		}

		static ::System::String* ToBase64String_2(::Il2CppArray<::System::Byte>* inArray, ::System::Int32 offset, ::System::Int32 length)
		{
			return ((::System::String*(*)(::Il2CppArray<::System::Byte>*, ::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + SYSTEM_CONVERT_TOBASE64STRING_2_OFFSET))(inArray, offset, length);
		}

		static ::System::String* ToBase64String_3(::Il2CppArray<::System::Byte>* inArray, ::System::Int32 offset, ::System::Int32 length, ::System::Base64FormattingOptions options)
		{
			return ((::System::String*(*)(::Il2CppArray<::System::Byte>*, ::System::Int32, ::System::Int32, ::System::Base64FormattingOptions))((::PBYTE)hIl2Cpp + SYSTEM_CONVERT_TOBASE64STRING_3_OFFSET))(inArray, offset, length, options);
		}

		static ::System::Int32 ToBase64CharArray(::Il2CppArray<::System::Byte>* inArray, ::System::Int32 offsetIn, ::System::Int32 length, ::Il2CppArray<::System::Char>* outArray, ::System::Int32 offsetOut)
		{
			return ((::System::Int32(*)(::Il2CppArray<::System::Byte>*, ::System::Int32, ::System::Int32, ::Il2CppArray<::System::Char>*, ::System::Int32))((::PBYTE)hIl2Cpp + SYSTEM_CONVERT_TOBASE64CHARARRAY_OFFSET))(inArray, offsetIn, length, outArray, offsetOut);
		}

		static ::System::Int32 ToBase64CharArray_1(::Il2CppArray<::System::Byte>* inArray, ::System::Int32 offsetIn, ::System::Int32 length, ::Il2CppArray<::System::Char>* outArray, ::System::Int32 offsetOut, ::System::Base64FormattingOptions options)
		{
			return ((::System::Int32(*)(::Il2CppArray<::System::Byte>*, ::System::Int32, ::System::Int32, ::Il2CppArray<::System::Char>*, ::System::Int32, ::System::Base64FormattingOptions))((::PBYTE)hIl2Cpp + SYSTEM_CONVERT_TOBASE64CHARARRAY_1_OFFSET))(inArray, offsetIn, length, outArray, offsetOut, options);
		}

		static ::System::Int32 ConvertToBase64Array(::PVOID outChars, ::PVOID inData, ::System::Int32 offset, ::System::Int32 length, ::System::Boolean insertLineBreaks)
		{
			return ((::System::Int32(*)(::PVOID, ::PVOID, ::System::Int32, ::System::Int32, ::System::Boolean))((::PBYTE)hIl2Cpp + SYSTEM_CONVERT_CONVERTTOBASE64ARRAY_OFFSET))(outChars, inData, offset, length, insertLineBreaks);
		}

		static ::System::Int32 ToBase64_CalculateAndValidateOutputLength(::System::Int32 inputLength, ::System::Boolean insertLineBreaks)
		{
			return ((::System::Int32(*)(::System::Int32, ::System::Boolean))((::PBYTE)hIl2Cpp + SYSTEM_CONVERT_TOBASE64_CALCULATEANDVALIDATEOUTPUTLENGTH_OFFSET))(inputLength, insertLineBreaks);
		}

		static ::Il2CppArray<::System::Byte>* FromBase64String(::System::String* s)
		{
			return ((::Il2CppArray<::System::Byte>*(*)(::System::String*))((::PBYTE)hIl2Cpp + SYSTEM_CONVERT_FROMBASE64STRING_OFFSET))(s);
		}

		static ::Il2CppArray<::System::Byte>* FromBase64CharArray(::Il2CppArray<::System::Char>* inArray, ::System::Int32 offset, ::System::Int32 length)
		{
			return ((::Il2CppArray<::System::Byte>*(*)(::Il2CppArray<::System::Char>*, ::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + SYSTEM_CONVERT_FROMBASE64CHARARRAY_OFFSET))(inArray, offset, length);
		}

		static ::Il2CppArray<::System::Byte>* FromBase64CharPtr(::PVOID inputPtr, ::System::Int32 inputLength)
		{
			return ((::Il2CppArray<::System::Byte>*(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + SYSTEM_CONVERT_FROMBASE64CHARPTR_OFFSET))(inputPtr, inputLength);
		}

		static ::System::Int32 FromBase64_Decode(::PVOID startInputPtr, ::System::Int32 inputLength, ::PVOID startDestPtr, ::System::Int32 destLength)
		{
			return ((::System::Int32(*)(::PVOID, ::System::Int32, ::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + SYSTEM_CONVERT_FROMBASE64_DECODE_OFFSET))(startInputPtr, inputLength, startDestPtr, destLength);
		}

		static ::System::Int32 FromBase64_ComputeResultLength(::PVOID inputPtr, ::System::Int32 inputLength)
		{
			return ((::System::Int32(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + SYSTEM_CONVERT_FROMBASE64_COMPUTERESULTLENGTH_OFFSET))(inputPtr, inputLength);
		}
	};
}
