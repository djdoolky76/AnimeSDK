#pragma once
#include "unitysdk/unitysdk.h"

#define GFJABFBIFKL_CCTOR_OFFSET UNITYSDK_OFFSET(0x159EEEA0)

inline static constexpr unsigned int GFJABFBIFKL_TypeDefinitionIndex = 80964;

	struct alignas(4) GFJABFBIFKL
	{
		::System::Boolean HPGAOBONHOK; // 0x10
		::System::Byte _padding0[0x3];
		::System::UInt32 CEGOPEIKDLA; // 0x14
		::System::Single JMLHEBGOOED; // 0x18
		::System::Single MHEHGCOIPIA; // 0x1C
		static ::GFJABFBIFKL* StaticGet_GPKBJPNFGKI()
		{
			return (::GFJABFBIFKL*)UnitySDK::FromName("", "GFJABFBIFKL")->GetStaticField(0x135B0);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + GFJABFBIFKL_CCTOR_OFFSET))();
		}

	};
