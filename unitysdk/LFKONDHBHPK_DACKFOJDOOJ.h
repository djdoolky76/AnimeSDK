#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/HollowChessboard/HollowCell.h"
#include "unitysdk/MoleMole/Vector2Int.h"
#include "unitysdk/System/Object.h"

class LFKONDHBHPK;
class PNJDGHBEMLK;

#define LFKONDHBHPK_DACKFOJDOOJ_AACLKPHGMLM_OFFSET UNITYSDK_OFFSET(0x126D96A0)
#define LFKONDHBHPK_DACKFOJDOOJ_LDMKNICFFNB_OFFSET UNITYSDK_OFFSET(0x126D98E0)
#define LFKONDHBHPK_DACKFOJDOOJ__CTOR_OFFSET UNITYSDK_OFFSET(0x126D9690)

inline static constexpr unsigned int LFKONDHBHPK_DACKFOJDOOJ_TypeDefinitionIndex = 71145;

class LFKONDHBHPK_DACKFOJDOOJ : public ::System::Object
{
public:
	::LFKONDHBHPK* KLHPEBKNIFB; // 0x10
	::Il2CppArray<::System::Single>* CFENKIBHPBF; // 0x18
	::MoleMole::HollowChessboard::HollowCell ABHBKFJKINO; // 0x20
	::MoleMole::Vector2Int LPOIBLLILAA; // 0x2C

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + LFKONDHBHPK_DACKFOJDOOJ__CTOR_OFFSET))(this);
	}

	::System::Boolean AACLKPHGMLM(::PNJDGHBEMLK* CDKCJAKODPN)
	{
		return ((::System::Boolean(*)(::PVOID, ::PNJDGHBEMLK*))((::PBYTE)hIl2Cpp + LFKONDHBHPK_DACKFOJDOOJ_AACLKPHGMLM_OFFSET))(this, CDKCJAKODPN);
	}

	::System::Void LDMKNICFFNB()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + LFKONDHBHPK_DACKFOJDOOJ_LDMKNICFFNB_OFFSET))(this);
	}
};
