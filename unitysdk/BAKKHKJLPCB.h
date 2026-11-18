#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/MoleMole/HollowChessboard/HollowChessboardUID.h"

class BBLDKBFLHJG;
class FBAMLABJMKF;
class JHKOPDIHKJK;
class LDDDABNDHEG;

#define BAKKHKJLPCB_CEJDCNPJOJP_1_OFFSET UNITYSDK_OFFSET(0x134FA590)
#define BAKKHKJLPCB_CEJDCNPJOJP_OFFSET UNITYSDK_OFFSET(0x134FA440)
#define BAKKHKJLPCB_ONEFKBBFCMD_OFFSET UNITYSDK_OFFSET(0x134FA680)

inline static constexpr unsigned int BAKKHKJLPCB_TypeDefinitionIndex = 91667;

class BAKKHKJLPCB : public ::System::Object
{
public:
	static ::FBAMLABJMKF* CEJDCNPJOJP(::JHKOPDIHKJK* GBELIHABEDH, ::MoleMole::HollowChessboard::HollowChessboardUID EGCGJNIJLBN)
	{
		return ((::FBAMLABJMKF*(*)(::JHKOPDIHKJK*, ::MoleMole::HollowChessboard::HollowChessboardUID))((::PBYTE)hIl2Cpp + BAKKHKJLPCB_CEJDCNPJOJP_OFFSET))(GBELIHABEDH, EGCGJNIJLBN);
	}

	static ::LDDDABNDHEG* ONEFKBBFCMD(::BBLDKBFLHJG* GBELIHABEDH)
	{
		return ((::LDDDABNDHEG*(*)(::BBLDKBFLHJG*))((::PBYTE)hIl2Cpp + BAKKHKJLPCB_ONEFKBBFCMD_OFFSET))(GBELIHABEDH);
	}

	static ::FBAMLABJMKF* CEJDCNPJOJP_1(::BBLDKBFLHJG* GBELIHABEDH, ::MoleMole::HollowChessboard::HollowChessboardUID EGCGJNIJLBN)
	{
		return ((::FBAMLABJMKF*(*)(::BBLDKBFLHJG*, ::MoleMole::HollowChessboard::HollowChessboardUID))((::PBYTE)hIl2Cpp + BAKKHKJLPCB_CEJDCNPJOJP_1_OFFSET))(GBELIHABEDH, EGCGJNIJLBN);
	}
};
