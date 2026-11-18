#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/ValueType.h"
#include "unitysdk/Foundation/Unreal/FTransform.h"
#include "unitysdk/MoleMole/EntityHandle.h"

#define BBGOCNIIBML_ACOEONABOJL_OFFSET UNITYSDK_OFFSET(0x7C95C0)
#define BBGOCNIIBML_GAFHCEBHIBA_OFFSET UNITYSDK_OFFSET(0x7C9600)
#define BBGOCNIIBML_JDAPDDEOCEA_OFFSET UNITYSDK_OFFSET(0x48C0E0)
#define BBGOCNIIBML_MBCFGBEBBIP_OFFSET UNITYSDK_OFFSET(0x7C9630)
#define BBGOCNIIBML_MCNADLFHADK_OFFSET UNITYSDK_OFFSET(0x7C95E0)

inline static constexpr unsigned int BBGOCNIIBML_TypeDefinitionIndex = 53364;

struct alignas(4) BBGOCNIIBML
{
	::System::Boolean JDAPDDEOCEA()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + BBGOCNIIBML_JDAPDDEOCEA_OFFSET))(this);
	}

	::System::UInt32 ACOEONABOJL()
	{
		return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + BBGOCNIIBML_ACOEONABOJL_OFFSET))(this);
	}

	::Foundation::Unreal::FTransform MCNADLFHADK()
	{
		return ((::Foundation::Unreal::FTransform(*)(::PVOID))((::PBYTE)hIl2Cpp + BBGOCNIIBML_MCNADLFHADK_OFFSET))(this);
	}

	::System::Boolean GAFHCEBHIBA()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + BBGOCNIIBML_GAFHCEBHIBA_OFFSET))(this);
	}

	::MoleMole::EntityHandle MBCFGBEBBIP()
	{
		return ((::MoleMole::EntityHandle(*)(::PVOID))((::PBYTE)hIl2Cpp + BBGOCNIIBML_MBCFGBEBBIP_OFFSET))(this);
	}
};
