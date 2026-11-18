#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/KAGOFLJNMJG.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/MoleMole/HollowChessboard/HollowCell.h"

class JCLMLILFGPJ;
class PNJDGHBEMLK;

#define PPPABLBLLNM_JPBAGEKFDCP_BJFANCMDHDB_OFFSET UNITYSDK_OFFSET(0x1C2C90C0)
#define PPPABLBLLNM_JPBAGEKFDCP_MBIFBMEIHCH_OFFSET UNITYSDK_OFFSET(0x1C2C9040)
#define PPPABLBLLNM_JPBAGEKFDCP__CTOR_OFFSET UNITYSDK_OFFSET(0x1C2C9030)

inline static constexpr unsigned int PPPABLBLLNM_JPBAGEKFDCP_TypeDefinitionIndex = 38640;

class PPPABLBLLNM_JPBAGEKFDCP : public ::System::Object
{
public:
	::JCLMLILFGPJ* PEPAMPECBAD; // 0x10
	::KAGOFLJNMJG GEJCKFFFKCL; // 0x18
	::System::Boolean BALOILLNAIA; // 0x1C

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + PPPABLBLLNM_JPBAGEKFDCP__CTOR_OFFSET))(this);
	}

	::System::Boolean MBIFBMEIHCH(::PNJDGHBEMLK* EKPEBNCLJPM)
	{
		return ((::System::Boolean(*)(::PVOID, ::PNJDGHBEMLK*))((::PBYTE)hIl2Cpp + PPPABLBLLNM_JPBAGEKFDCP_MBIFBMEIHCH_OFFSET))(this, EKPEBNCLJPM);
	}

	::System::Boolean BJFANCMDHDB(::MoleMole::HollowChessboard::HollowCell EKPEBNCLJPM)
	{
		return ((::System::Boolean(*)(::PVOID, ::MoleMole::HollowChessboard::HollowCell))((::PBYTE)hIl2Cpp + PPPABLBLLNM_JPBAGEKFDCP_BJFANCMDHDB_OFFSET))(this, EKPEBNCLJPM);
	}
};
