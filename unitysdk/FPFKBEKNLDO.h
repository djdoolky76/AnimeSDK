#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/HFFLAMAFFLH.h"

#define FPFKBEKNLDO_FIEIPEOKCKN_OFFSET UNITYSDK_OFFSET(0x15F002E0)
#define FPFKBEKNLDO_KNDMMHPDPIB_OFFSET UNITYSDK_OFFSET(0x15F00150)
#define FPFKBEKNLDO__CTOR_OFFSET UNITYSDK_OFFSET(0x15F00390)

inline static constexpr unsigned int FPFKBEKNLDO_TypeDefinitionIndex = 57411;

class FPFKBEKNLDO : public ::System::Object
{
public:
	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FPFKBEKNLDO__CTOR_OFFSET))(this);
	}

	::System::Void KNDMMHPDPIB(::HFFLAMAFFLH AAOCANGHBDG)
	{
		return ((::System::Void(*)(::PVOID, ::HFFLAMAFFLH))((::PBYTE)hIl2Cpp + FPFKBEKNLDO_KNDMMHPDPIB_OFFSET))(this, AAOCANGHBDG);
	}

	::System::Void FIEIPEOKCKN(::HFFLAMAFFLH AAOCANGHBDG)
	{
		return ((::System::Void(*)(::PVOID, ::HFFLAMAFFLH))((::PBYTE)hIl2Cpp + FPFKBEKNLDO_FIEIPEOKCKN_OFFSET))(this, AAOCANGHBDG);
	}
};
