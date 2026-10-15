#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class NHIGCJFJGPF;
namespace System { class Object; }

#define NHIGCJFJGPF___C_CCTOR_OFFSET UNITYSDK_OFFSET(0x1EB1EA90)
#define NHIGCJFJGPF___C_CTOR_OFFSET UNITYSDK_OFFSET(0x1EB1EAD0)
#define NHIGCJFJGPF___C___CCTOR_B__28_0_OFFSET UNITYSDK_OFFSET(0x1EB1EAE0)

	class NHIGCJFJGPF___c : public ::System::Object
	{
	public:
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("", "<>c")->GetStaticField(0x605D0);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + NHIGCJFJGPF___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NHIGCJFJGPF___C_CTOR_OFFSET))(this);
		}

		::NHIGCJFJGPF* __cctor_b__28_0()
		{
			return ((::NHIGCJFJGPF*(*)(::PVOID))((::PBYTE)hIl2Cpp + NHIGCJFJGPF___C___CCTOR_B__28_0_OFFSET))(this);
		}

	};
