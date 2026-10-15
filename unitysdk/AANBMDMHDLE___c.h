#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class GGJFAFONDHN;
namespace System { class Action; }
namespace System { class Object; }

#define AANBMDMHDLE___C_CCTOR_OFFSET UNITYSDK_OFFSET(0xB0D3650)
#define AANBMDMHDLE___C_CTOR_OFFSET UNITYSDK_OFFSET(0xB0D3680)
#define AANBMDMHDLE___C__POSTINIT_B__6_0_OFFSET UNITYSDK_OFFSET(0xB0D3690)
#define AANBMDMHDLE___C__POSTINIT_B__6_1_OFFSET UNITYSDK_OFFSET(0xB0D36A0)

	class AANBMDMHDLE___c : public ::System::Object
	{
	public:
		static ::System::Action** StaticGet___9__6_1()
		{
			return (::System::Action**)UnitySDK::FromName("", "<>c")->GetStaticField(0x41990);
		}

		static ::System::Action** StaticGet___9__6_0()
		{
			return (::System::Action**)UnitySDK::FromName("", "<>c")->GetStaticField(0x41998);
		}

		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("", "<>c")->GetStaticField(0x419A0);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + AANBMDMHDLE___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + AANBMDMHDLE___C_CTOR_OFFSET))(this);
		}

		::System::Void _PostInit_b__6_0(::GGJFAFONDHN* a1)
		{
			return ((::System::Void(*)(::PVOID, ::GGJFAFONDHN*))((::PBYTE)hIl2Cpp + AANBMDMHDLE___C__POSTINIT_B__6_0_OFFSET))(this, a1);
		}

		::System::Void _PostInit_b__6_1(::GGJFAFONDHN* a1)
		{
			return ((::System::Void(*)(::PVOID, ::GGJFAFONDHN*))((::PBYTE)hIl2Cpp + AANBMDMHDLE___C__POSTINIT_B__6_1_OFFSET))(this, a1);
		}

	};
