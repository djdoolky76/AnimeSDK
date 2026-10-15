#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
namespace MiHoYo::SDK { class BabelfishConfig; }
namespace System { class Action; }
namespace System { class Object; }
namespace System { class String; }

#define MIHOYO_SDK_TRANSLATESERVICE___C_CCTOR_OFFSET UNITYSDK_OFFSET(0xB05BC30)
#define MIHOYO_SDK_TRANSLATESERVICE___C_CTOR_OFFSET UNITYSDK_OFFSET(0xB05BC70)
#define MIHOYO_SDK_TRANSLATESERVICE___C__INIT_B__33_0_OFFSET UNITYSDK_OFFSET(0xB05BC80)
#define MIHOYO_SDK_TRANSLATESERVICE___C__INIT_B__33_1_OFFSET UNITYSDK_OFFSET(0xB05BD30)

namespace MiHoYo::SDK
{
	class TranslateService___c : public ::System::Object
	{
	public:
		static ::System::Action** StaticGet___9__33_1()
		{
			return (::System::Action**)UnitySDK::FromName("MiHoYo.SDK", "<>c")->GetStaticField(0x34DE0);
		}

		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("MiHoYo.SDK", "<>c")->GetStaticField(0x34DE8);
		}

		static ::System::Action** StaticGet___9__33_0()
		{
			return (::System::Action**)UnitySDK::FromName("MiHoYo.SDK", "<>c")->GetStaticField(0x34DF0);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + MIHOYO_SDK_TRANSLATESERVICE___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_TRANSLATESERVICE___C_CTOR_OFFSET))(this);
		}

		::System::Void _Init_b__33_0(::MiHoYo::SDK::BabelfishConfig* a1)
		{
			return ((::System::Void(*)(::PVOID, ::MiHoYo::SDK::BabelfishConfig*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_TRANSLATESERVICE___C__INIT_B__33_0_OFFSET))(this, a1);
		}

		::System::Void _Init_b__33_1(::System::Int32 a1, ::System::String* a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::String*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_TRANSLATESERVICE___C__INIT_B__33_1_OFFSET))(this, a1, a2);
		}

	};
}
