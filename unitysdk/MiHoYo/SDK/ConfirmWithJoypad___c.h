#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
namespace System { class Action; }
namespace System { class Object; }

#define MIHOYO_SDK_CONFIRMWITHJOYPAD___C_CCTOR_OFFSET UNITYSDK_OFFSET(0x1B47B1D0)
#define MIHOYO_SDK_CONFIRMWITHJOYPAD___C_CTOR_OFFSET UNITYSDK_OFFSET(0x1B47B210)
#define MIHOYO_SDK_CONFIRMWITHJOYPAD___C__SHOW_B__39_1_OFFSET UNITYSDK_OFFSET(0x1B47B220)

namespace MiHoYo::SDK
{
	inline static constexpr unsigned int ConfirmWithJoypad___c_TypeDefinitionIndex = 8010;

	class ConfirmWithJoypad___c : public ::System::Object
	{
	public:
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("MiHoYo.SDK", "<>c")->GetStaticField(0x3C310);
		}

		static ::System::Action** StaticGet___9__39_1()
		{
			return (::System::Action**)UnitySDK::FromName("MiHoYo.SDK", "<>c")->GetStaticField(0x3C318);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + MIHOYO_SDK_CONFIRMWITHJOYPAD___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_CONFIRMWITHJOYPAD___C_CTOR_OFFSET))(this);
		}

		::System::Void _Show_b__39_1()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_CONFIRMWITHJOYPAD___C__SHOW_B__39_1_OFFSET))(this);
		}

	};
}
