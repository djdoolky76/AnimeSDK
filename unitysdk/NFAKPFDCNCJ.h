#pragma once
#include "unitysdk/unitysdk.h"

#define NFAKPFDCNCJ_CCTOR_OFFSET UNITYSDK_OFFSET(0xBB70C20)
#define NFAKPFDCNCJ_HGKALNHGNKL_OFFSET UNITYSDK_OFFSET(0x20480)

inline static constexpr unsigned int NFAKPFDCNCJ_TypeDefinitionIndex = 73210;

	struct alignas(4) NFAKPFDCNCJ
	{
		::System::UInt64 BFLIFKBEOPJ; // 0x10
		::System::UInt64 JIKHGFHNDOG; // 0x18
		::System::UInt64 MFGNBMNJPGP; // 0x20
		static ::NFAKPFDCNCJ* StaticGet_NKHLMJGGKEM()
		{
			return (::NFAKPFDCNCJ*)UnitySDK::FromName("", "NFAKPFDCNCJ")->GetStaticField(0xA050);
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
