#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/FixPoint.h"

#define OONGDLIDJJJ_KGFBJAABGAN_CCTOR_OFFSET UNITYSDK_OFFSET(0xBF920D0)
#define OONGDLIDJJJ_KGFBJAABGAN_CTOR_OFFSET UNITYSDK_OFFSET(0x14160)

	struct alignas(4) OONGDLIDJJJ_KGFBJAABGAN
	{
		::RPG::GameCore::FixPoint MNAKIEOGPDK; // 0x10
		::System::Int32 GNPIMBBICED; // 0x18
		static ::OONGDLIDJJJ_KGFBJAABGAN* StaticGet_OJPLDOMGBHI()
		{
			return (::OONGDLIDJJJ_KGFBJAABGAN*)UnitySDK::FromName("", "KGFBJAABGAN")->GetStaticField(0x144E0);
		}

		::System::Void _ctor(::RPG::GameCore::FixPoint a1, ::System::Int32 a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::FixPoint, ::System::Int32))((::PBYTE)hIl2Cpp + OONGDLIDJJJ_KGFBJAABGAN_CTOR_OFFSET))(this, a1, a2);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + OONGDLIDJJJ_KGFBJAABGAN_CCTOR_OFFSET))();
		}

	};
