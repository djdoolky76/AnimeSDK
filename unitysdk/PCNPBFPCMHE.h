#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/MoleMole/EntityHandle.h"

#define PCNPBFPCMHE_FLFJHAGGGJD_OFFSET UNITYSDK_OFFSET(0x178B5000)
#define PCNPBFPCMHE_OJBBECKOJHE_OFFSET UNITYSDK_OFFSET(0x178B53E0)
#define PCNPBFPCMHE_PEBDGJKBBOP_OFFSET UNITYSDK_OFFSET(0x178B5230)
#define PCNPBFPCMHE__CTOR_OFFSET UNITYSDK_OFFSET(0x178B4FF0)

inline static constexpr unsigned int PCNPBFPCMHE_TypeDefinitionIndex = 73807;

class PCNPBFPCMHE : public ::System::Object
{
public:
	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + PCNPBFPCMHE__CTOR_OFFSET))(this);
	}

	static ::System::Boolean FLFJHAGGGJD()
	{
		return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + PCNPBFPCMHE_FLFJHAGGGJD_OFFSET))();
	}

	static ::System::Boolean OJBBECKOJHE(::MoleMole::EntityHandle KECKGDFIALJ)
	{
		return ((::System::Boolean(*)(::MoleMole::EntityHandle))((::PBYTE)hIl2Cpp + PCNPBFPCMHE_OJBBECKOJHE_OFFSET))(KECKGDFIALJ);
	}

	static ::System::Boolean PEBDGJKBBOP(::MoleMole::EntityHandle KECKGDFIALJ)
	{
		return ((::System::Boolean(*)(::MoleMole::EntityHandle))((::PBYTE)hIl2Cpp + PCNPBFPCMHE_PEBDGJKBBOP_OFFSET))(KECKGDFIALJ);
	}
};
