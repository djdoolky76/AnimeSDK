#pragma once
#include "unitysdk/unitysdk.h"

#define BEABFKCFPNC_CCTOR_OFFSET UNITYSDK_OFFSET(0x162FADF0)
#define BEABFKCFPNC_LDAMHBBILAD_OFFSET UNITYSDK_OFFSET(0x2E81EC0)

inline static constexpr unsigned int BEABFKCFPNC_TypeDefinitionIndex = 57712;

	struct alignas(4) BEABFKCFPNC
	{
		::System::Int32 DKAHMNKOMPB; // 0x10
		::System::Int32 BOPJHFLNBKL; // 0x14
		static ::BEABFKCFPNC* StaticGet_OJPLDOMGBHI()
		{
			return (::BEABFKCFPNC*)UnitySDK::FromName("", "BEABFKCFPNC")->GetStaticField(0x7F40);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + BEABFKCFPNC_CCTOR_OFFSET))();
		}

		::System::Boolean LDAMHBBILAD()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + BEABFKCFPNC_LDAMHBBILAD_OFFSET))(this);
		}

	};
