#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/EntityHandle.h"
#include "unitysdk/System/Object.h"

class OMINJHFFAJI;

#define OMINJHFFAJI_HBFIENECIAB_FNEJIOAPDFD_OFFSET UNITYSDK_OFFSET(0x15F7F260)
#define OMINJHFFAJI_HBFIENECIAB__CTOR_OFFSET UNITYSDK_OFFSET(0x15F7F250)

inline static constexpr unsigned int OMINJHFFAJI_HBFIENECIAB_TypeDefinitionIndex = 56958;

class OMINJHFFAJI_HBFIENECIAB : public ::System::Object
{
public:
	::MoleMole::EntityHandle HPADNAEINPK; // 0x10
	::OMINJHFFAJI* KLHPEBKNIFB; // 0x20

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + OMINJHFFAJI_HBFIENECIAB__CTOR_OFFSET))(this);
	}

	::System::Void FNEJIOAPDFD()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + OMINJHFFAJI_HBFIENECIAB_FNEJIOAPDFD_OFFSET))(this);
	}
};
