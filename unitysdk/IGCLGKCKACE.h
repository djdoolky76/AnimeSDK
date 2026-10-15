#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/VideoEncryptionMethod.h"

#define IGCLGKCKACE_CCTOR_OFFSET UNITYSDK_OFFSET(0x164013C0)
#define IGCLGKCKACE_HGKALNHGNKL_OFFSET UNITYSDK_OFFSET(0x2E81500)
#define IGCLGKCKACE_IEFPIFINEHC_OFFSET UNITYSDK_OFFSET(0x2E81510)

	struct alignas(8) IGCLGKCKACE
	{
		::System::UInt64 BFLIFKBEOPJ; // 0x10
		::System::UInt64 MFGNBMNJPGP; // 0x18
		::Il2CppArray<::System::Byte>* OJJLJDNKBEJ; // 0x20
		::RPG::GameCore::VideoEncryptionMethod BMGKFAIOCAA; // 0x28
		static ::IGCLGKCKACE* StaticGet_NKHLMJGGKEM()
		{
			return (::IGCLGKCKACE*)UnitySDK::FromName("", "IGCLGKCKACE")->GetStaticField(0x1CA10);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + IGCLGKCKACE_CCTOR_OFFSET))();
		}

		::System::Boolean HGKALNHGNKL()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + IGCLGKCKACE_HGKALNHGNKL_OFFSET))(this);
		}

		::System::Boolean IEFPIFINEHC()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + IGCLGKCKACE_IEFPIFINEHC_OFFSET))(this);
		}

	};
