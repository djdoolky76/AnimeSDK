#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/BehaviorDesigner/Runtime/Tasks/TaskStatus.h"
#include "unitysdk/System/Object.h"

class EIMHGJELHGN;

#define LDDHJLCEFOJ_ADNPFJMKDNM_OFFSET UNITYSDK_OFFSET(0x1580EAE0)
#define LDDHJLCEFOJ_EMCPPBMEKKK_OFFSET UNITYSDK_OFFSET(0x1580E6F0)
#define LDDHJLCEFOJ_FFGBMIBIBPI_OFFSET UNITYSDK_OFFSET(0x1580EAD0)
#define LDDHJLCEFOJ_IHBNBGAGFCC_OFFSET UNITYSDK_OFFSET(0x1580E920)
#define LDDHJLCEFOJ_JEFJKBLDPKC_OFFSET UNITYSDK_OFFSET(0x1580E7A0)
#define LDDHJLCEFOJ_KALLHNFLIIL_OFFSET UNITYSDK_OFFSET(0x1580E970)
#define LDDHJLCEFOJ_LFLANHDJNFC_OFFSET UNITYSDK_OFFSET(0x1580E980)
#define LDDHJLCEFOJ_MCAEFJKLPLH_OFFSET UNITYSDK_OFFSET(0x1580E990)
#define LDDHJLCEFOJ_NCOGKKAHCKF_OFFSET UNITYSDK_OFFSET(0x1580E740)
#define LDDHJLCEFOJ_POMGBGJLIOO_OFFSET UNITYSDK_OFFSET(0x1580E8E0)
#define LDDHJLCEFOJ__CTOR_OFFSET UNITYSDK_OFFSET(0x1580E730)

inline static constexpr unsigned int LDDHJLCEFOJ_TypeDefinitionIndex = 92443;

class LDDHJLCEFOJ : public ::System::Object
{
public:
	::EIMHGJELHGN* HINEKMNPPPC; // 0x10
	::BehaviorDesigner::Runtime::Tasks::TaskStatus PCANBPBIGHM; // 0x18
	::System::Int32 FJIJOOLIKDD; // 0x1C
	::System::Boolean CIFLENFEEGN; // 0x20

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + LDDHJLCEFOJ__CTOR_OFFSET))(this);
	}

	::System::Void EMCPPBMEKKK()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + LDDHJLCEFOJ_EMCPPBMEKKK_OFFSET))(this);
	}

	::System::Void NCOGKKAHCKF(::BehaviorDesigner::Runtime::Tasks::TaskStatus EGEGIMGMJHN)
	{
		return ((::System::Void(*)(::PVOID, ::BehaviorDesigner::Runtime::Tasks::TaskStatus))((::PBYTE)hIl2Cpp + LDDHJLCEFOJ_NCOGKKAHCKF_OFFSET))(this, EGEGIMGMJHN);
	}

	::System::Void POMGBGJLIOO()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + LDDHJLCEFOJ_POMGBGJLIOO_OFFSET))(this);
	}

	::System::Void JEFJKBLDPKC(::EIMHGJELHGN* GFPINKJPPBC)
	{
		return ((::System::Void(*)(::PVOID, ::EIMHGJELHGN*))((::PBYTE)hIl2Cpp + LDDHJLCEFOJ_JEFJKBLDPKC_OFFSET))(this, GFPINKJPPBC);
	}

	::System::Void IHBNBGAGFCC()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + LDDHJLCEFOJ_IHBNBGAGFCC_OFFSET))(this);
	}

	::System::Boolean KALLHNFLIIL()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + LDDHJLCEFOJ_KALLHNFLIIL_OFFSET))(this);
	}

	::BehaviorDesigner::Runtime::Tasks::TaskStatus LFLANHDJNFC()
	{
		return ((::BehaviorDesigner::Runtime::Tasks::TaskStatus(*)(::PVOID))((::PBYTE)hIl2Cpp + LDDHJLCEFOJ_LFLANHDJNFC_OFFSET))(this);
	}

	::System::Single MCAEFJKLPLH()
	{
		return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + LDDHJLCEFOJ_MCAEFJKLPLH_OFFSET))(this);
	}

	::BehaviorDesigner::Runtime::Tasks::TaskStatus FFGBMIBIBPI()
	{
		return ((::BehaviorDesigner::Runtime::Tasks::TaskStatus(*)(::PVOID))((::PBYTE)hIl2Cpp + LDDHJLCEFOJ_FFGBMIBIBPI_OFFSET))(this);
	}

	::System::Void ADNPFJMKDNM()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + LDDHJLCEFOJ_ADNPFJMKDNM_OFFSET))(this);
	}
};
