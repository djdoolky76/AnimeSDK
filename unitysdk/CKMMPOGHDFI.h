#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/EntityHandle.h"
#include "unitysdk/System/ValueType.h"
#include "unitysdk/Foundation/Unreal/FTransform.h"

#define CKMMPOGHDFI_ACOEONABOJL_OFFSET UNITYSDK_OFFSET(0x363D60)
#define CKMMPOGHDFI_IBNCFMCGHFC_OFFSET UNITYSDK_OFFSET(0x358710)
#define CKMMPOGHDFI_JDAPDDEOCEA_OFFSET UNITYSDK_OFFSET(0x78E200)
#define CKMMPOGHDFI_MCNADLFHADK_OFFSET UNITYSDK_OFFSET(0x78E220)
#define CKMMPOGHDFI__CTOR_OFFSET UNITYSDK_OFFSET(0x358470)

inline static constexpr unsigned int CKMMPOGHDFI_TypeDefinitionIndex = 58490;

struct alignas(4) CKMMPOGHDFI
{
	::MoleMole::EntityHandle _FAHNOENJLOK_k__BackingField; // 0x10

	::System::Void _ctor(::MoleMole::EntityHandle KECKGDFIALJ)
	{
		return ((::System::Void(*)(::PVOID, ::MoleMole::EntityHandle))((::PBYTE)hIl2Cpp + CKMMPOGHDFI__CTOR_OFFSET))(this, KECKGDFIALJ);
	}

	::System::UInt32 ACOEONABOJL()
	{
		return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + CKMMPOGHDFI_ACOEONABOJL_OFFSET))(this);
	}

	::System::Boolean JDAPDDEOCEA()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CKMMPOGHDFI_JDAPDDEOCEA_OFFSET))(this);
	}

	::Foundation::Unreal::FTransform MCNADLFHADK()
	{
		return ((::Foundation::Unreal::FTransform(*)(::PVOID))((::PBYTE)hIl2Cpp + CKMMPOGHDFI_MCNADLFHADK_OFFSET))(this);
	}

	::MoleMole::EntityHandle IBNCFMCGHFC()
	{
		return ((::MoleMole::EntityHandle(*)(::PVOID))((::PBYTE)hIl2Cpp + CKMMPOGHDFI_IBNCFMCGHFC_OFFSET))(this);
	}
};
