#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System { class Action; }

#define EKAJOLMBGLM_MBMKPKBKPIB_KNKKONBHOIL_OFFSET UNITYSDK_OFFSET(0x1426B2D0)
#define EKAJOLMBGLM_MBMKPKBKPIB__CTOR_OFFSET UNITYSDK_OFFSET(0x1426B2C0)

inline static constexpr unsigned int EKAJOLMBGLM_MBMKPKBKPIB_TypeDefinitionIndex = 59243;

class EKAJOLMBGLM_MBMKPKBKPIB : public ::System::Object
{
public:
	::System::Action* FGHOIDFGJHB; // 0x10

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + EKAJOLMBGLM_MBMKPKBKPIB__CTOR_OFFSET))(this);
	}

	::System::Void KNKKONBHOIL()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + EKAJOLMBGLM_MBMKPKBKPIB_KNKKONBHOIL_OFFSET))(this);
	}
};
