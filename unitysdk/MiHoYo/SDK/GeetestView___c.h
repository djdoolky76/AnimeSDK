#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
namespace MiHoYo::SDK { class GeetestView; }
namespace System { class Action; }
namespace System { class Object; }

#define MIHOYO_SDK_GEETESTVIEW___C_CCTOR_OFFSET UNITYSDK_OFFSET(0x1BE44D60)
#define MIHOYO_SDK_GEETESTVIEW___C_CTOR_OFFSET UNITYSDK_OFFSET(0x1BE44DA0)
#define MIHOYO_SDK_GEETESTVIEW___C__SHOW_B__14_0_OFFSET UNITYSDK_OFFSET(0x1BE44DB0)

namespace MiHoYo::SDK
{
	inline static constexpr unsigned int GeetestView___c_TypeDefinitionIndex = 8254;

	class GeetestView___c : public ::System::Object
	{
	public:
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("MiHoYo.SDK", "<>c")->GetStaticField(0xD2D0);
		}

		static ::System::Action** StaticGet___9__14_0()
		{
			return (::System::Action**)UnitySDK::FromName("MiHoYo.SDK", "<>c")->GetStaticField(0xD2D8);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + MIHOYO_SDK_GEETESTVIEW___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_GEETESTVIEW___C_CTOR_OFFSET))(this);
		}

		::System::Void _Show_b__14_0(::MiHoYo::SDK::GeetestView* a1)
		{
			return ((::System::Void(*)(::PVOID, ::MiHoYo::SDK::GeetestView*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_GEETESTVIEW___C__SHOW_B__14_0_OFFSET))(this, a1);
		}

	};
}
