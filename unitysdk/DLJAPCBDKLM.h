#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/LHMKFBLNLIA.h"
#include "unitysdk/MoleMole/HollowChessboard/HollowCell.h"
#include "unitysdk/System/Object.h"

class IDEBFOKEPPI;

#define DLJAPCBDKLM__CTOR_1_OFFSET UNITYSDK_OFFSET(0x16BA6A70)
#define DLJAPCBDKLM__CTOR_OFFSET UNITYSDK_OFFSET(0x16BA6A60)

inline static constexpr unsigned int DLJAPCBDKLM_TypeDefinitionIndex = 58347;

class DLJAPCBDKLM : public ::System::Object
{
public:
	::MoleMole::HollowChessboard::HollowCell CONBBDIDPDO; // 0x10
	::LHMKFBLNLIA CEHGFFDBHOJ; // 0x1C

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + DLJAPCBDKLM__CTOR_OFFSET))(this);
	}

	::System::Void _ctor_1(::IDEBFOKEPPI* LHANJLIHPPD)
	{
		return ((::System::Void(*)(::PVOID, ::IDEBFOKEPPI*))((::PBYTE)hIl2Cpp + DLJAPCBDKLM__CTOR_1_OFFSET))(this, LHANJLIHPPD);
	}
};
