#pragma once
#include "unitysdk/unitysdk.h"
namespace System { class String; }

#define DPJMOAGICOB_CCTOR_OFFSET UNITYSDK_OFFSET(0x1CA30730)

	struct alignas(8) DPJMOAGICOB
	{
		::System::Boolean BIGBOOLBPEE; // 0x10
		::System::Byte _padding0[0x7];
		::System::String* KOIJMPDBMJF; // 0x18
		::System::Int32 MKBNALHKDHF; // 0x20
		::System::Single HBDINFCPLPF; // 0x24
		::System::Single NJBBGOBBJFH; // 0x28
		::System::Int32 KOJFHFAKKFO; // 0x2C
		::System::Single OAMBIELLBJE; // 0x30
		static ::DPJMOAGICOB* StaticGet_HGLIFJGHADE()
		{
			return (::DPJMOAGICOB*)UnitySDK::FromName("", "DPJMOAGICOB")->GetStaticField(0xAB40);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + DPJMOAGICOB_CCTOR_OFFSET))();
		}

	};
