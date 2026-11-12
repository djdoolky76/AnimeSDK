#pragma once
#include "unitysdk/unitysdk.h"

#define NFAKPFDCNCJ_CCTOR_OFFSET UNITYSDK_OFFSET(0xC451C50)
#define NFAKPFDCNCJ_HGKALNHGNKL_OFFSET UNITYSDK_OFFSET(0x25580)

inline static constexpr unsigned int NFAKPFDCNCJ_TypeDefinitionIndex = 75326;

	struct alignas(4) NFAKPFDCNCJ
	{
		::System::UInt64 BFLIFKBEOPJ; // 0x10
		::System::UInt64 JIKHGFHNDOG; // 0x18
		::System::UInt64 MFGNBMNJPGP; // 0x20
		static ::NFAKPFDCNCJ* StaticGet_NKHLMJGGKEM()
		{
			return (::NFAKPFDCNCJ*)UnitySDK::FromName("", "NFAKPFDCNCJ")->GetStaticField(0x9130);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + NFAKPFDCNCJ_CCTOR_OFFSET))();
		}

		::System::Boolean HGKALNHGNKL()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + NFAKPFDCNCJ_HGKALNHGNKL_OFFSET))(this);
		}

	};
