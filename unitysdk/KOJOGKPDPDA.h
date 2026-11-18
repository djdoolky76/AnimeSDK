#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/PDHGEKBAEBE.h"
#include "unitysdk/PDHGEKBAEBE_IFOBEDHEDNH.h"
#include "unitysdk/Foundation/AssetPath.h"

class BKGKJNHLCKC;
template <typename T> class LJHFMILANJA_1;

#define KOJOGKPDPDA_GMIBJJHKEKM_OFFSET UNITYSDK_OFFSET(0x1996E6D0)
#define KOJOGKPDPDA_ILFJHJHJMNB_OFFSET UNITYSDK_OFFSET(0x1996E4E0)
#define KOJOGKPDPDA_LKNBCFOKJLO_OFFSET UNITYSDK_OFFSET(0x1996E7C0)
#define KOJOGKPDPDA_OEGOENKICML_OFFSET UNITYSDK_OFFSET(0x1996E310)
#define KOJOGKPDPDA_ONCREATEPROPERTY_OFFSET UNITYSDK_OFFSET(0x1996E0C0)
#define KOJOGKPDPDA__CTOR_OFFSET UNITYSDK_OFFSET(0x1996E300)

inline static constexpr unsigned int KOJOGKPDPDA_TypeDefinitionIndex = 84472;

class KOJOGKPDPDA : public ::PDHGEKBAEBE
{
public:
	::LJHFMILANJA_1<::BKGKJNHLCKC*>* JBKIAEKFKMA; // 0xB0
	::LJHFMILANJA_1<::System::Boolean>* MFIIKEGADCB; // 0xB8

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + KOJOGKPDPDA__CTOR_OFFSET))(this);
	}

	::System::Void OnCreateProperty()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + KOJOGKPDPDA_ONCREATEPROPERTY_OFFSET))(this);
	}

	::System::Void OEGOENKICML(::BKGKJNHLCKC* CGELPKBKHOJ)
	{
		return ((::System::Void(*)(::PVOID, ::BKGKJNHLCKC*))((::PBYTE)hIl2Cpp + KOJOGKPDPDA_OEGOENKICML_OFFSET))(this, CGELPKBKHOJ);
	}

	::Foundation::AssetPath ILFJHJHJMNB()
	{
		return ((::Foundation::AssetPath(*)(::PVOID))((::PBYTE)hIl2Cpp + KOJOGKPDPDA_ILFJHJHJMNB_OFFSET))(this);
	}

	::PDHGEKBAEBE_IFOBEDHEDNH GMIBJJHKEKM()
	{
		return ((::PDHGEKBAEBE_IFOBEDHEDNH(*)(::PVOID))((::PBYTE)hIl2Cpp + KOJOGKPDPDA_GMIBJJHKEKM_OFFSET))(this);
	}

	::System::Void LKNBCFOKJLO()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + KOJOGKPDPDA_LKNBCFOKJLO_OFFSET))(this);
	}
};
