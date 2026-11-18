#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class LFDDLEHKGIK;

#define LFDDLEHKGIK_GMBEDOFMEBC_FONAOFJMLPB_OFFSET UNITYSDK_OFFSET(0x15658340)
#define LFDDLEHKGIK_GMBEDOFMEBC__CTOR_OFFSET UNITYSDK_OFFSET(0x156581A0)

inline static constexpr unsigned int LFDDLEHKGIK_GMBEDOFMEBC_TypeDefinitionIndex = 66034;

class LFDDLEHKGIK_GMBEDOFMEBC : public ::System::Object
{
public:
	::LFDDLEHKGIK* KLHPEBKNIFB; // 0x10
	::System::Boolean CPHDDAGKHLB; // 0x18

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + LFDDLEHKGIK_GMBEDOFMEBC__CTOR_OFFSET))(this);
	}

	::System::Void FONAOFJMLPB()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + LFDDLEHKGIK_GMBEDOFMEBC_FONAOFJMLPB_OFFSET))(this);
	}
};
