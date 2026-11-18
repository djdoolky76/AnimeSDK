#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class LFDDLEHKGIK;
namespace System { class Action; }

#define LFDDLEHKGIK_FOIIOADFFOM_LBJIBHNGDMC_OFFSET UNITYSDK_OFFSET(0x156581D0)
#define LFDDLEHKGIK_FOIIOADFFOM__CTOR_OFFSET UNITYSDK_OFFSET(0x15656EC0)

inline static constexpr unsigned int LFDDLEHKGIK_FOIIOADFFOM_TypeDefinitionIndex = 66037;

class LFDDLEHKGIK_FOIIOADFFOM : public ::System::Object
{
public:
	::LFDDLEHKGIK* KLHPEBKNIFB; // 0x10
	::System::Action* EACOGDJEALO; // 0x18

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + LFDDLEHKGIK_FOIIOADFFOM__CTOR_OFFSET))(this);
	}

	::System::Void LBJIBHNGDMC()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + LFDDLEHKGIK_FOIIOADFFOM_LBJIBHNGDMC_OFFSET))(this);
	}
};
