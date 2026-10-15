#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class KHNHDFIJGPF;
namespace System { class Object; }

#define KHNHDFIJGPF___C_CCTOR_OFFSET UNITYSDK_OFFSET(0x1E84CA80)
#define KHNHDFIJGPF___C_CTOR_OFFSET UNITYSDK_OFFSET(0x1E84CAC0)
#define KHNHDFIJGPF___C___CCTOR_B__23_0_OFFSET UNITYSDK_OFFSET(0x1E84CAD0)

	class KHNHDFIJGPF___c : public ::System::Object
	{
	public:
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("", "<>c")->GetStaticField(0x17D70);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + KHNHDFIJGPF___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + KHNHDFIJGPF___C_CTOR_OFFSET))(this);
		}

		::KHNHDFIJGPF* __cctor_b__23_0()
		{
			return ((::KHNHDFIJGPF*(*)(::PVOID))((::PBYTE)hIl2Cpp + KHNHDFIJGPF___C___CCTOR_B__23_0_OFFSET))(this);
		}

	};
