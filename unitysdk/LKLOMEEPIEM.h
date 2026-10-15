#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/BPFKOIIMKBG.h"

#define LKLOMEEPIEM_CCTOR_OFFSET UNITYSDK_OFFSET(0xB7546A0)
#define LKLOMEEPIEM_CTOR_OFFSET UNITYSDK_OFFSET(0x19D60)

	struct alignas(4) LKLOMEEPIEM
	{
		::BPFKOIIMKBG EMGADNPKAIK; // 0x10
		::BPFKOIIMKBG CCAOGMEFNLB; // 0x18
		::System::Single ANHNBBMAJKD; // 0x20
		::System::Single PELGDONPKEF; // 0x24
		::System::Single KDHJFBLPEJK; // 0x28
		::System::Boolean LCABCNBBCLF; // 0x2C
		::System::Boolean CHFBGMPPOJJ; // 0x2D
		static ::LKLOMEEPIEM* StaticGet_HGLIFJGHADE()
		{
			return (::LKLOMEEPIEM*)UnitySDK::FromName("", "LKLOMEEPIEM")->GetStaticField(0x13170);
		}

		::System::Void _ctor(::BPFKOIIMKBG a1, ::BPFKOIIMKBG a2, ::System::Single a3, ::System::Single a4, ::System::Single a5, ::System::Boolean a6, ::System::Boolean a7)
		{
			return ((::System::Void(*)(::PVOID, ::BPFKOIIMKBG, ::BPFKOIIMKBG, ::System::Single, ::System::Single, ::System::Single, ::System::Boolean, ::System::Boolean))((::PBYTE)hIl2Cpp + LKLOMEEPIEM_CTOR_OFFSET))(this, a1, a2, a3, a4, a5, a6, a7);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + LKLOMEEPIEM_CCTOR_OFFSET))();
		}

	};
