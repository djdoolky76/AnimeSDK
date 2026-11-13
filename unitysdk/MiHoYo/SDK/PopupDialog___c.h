#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
namespace System { class Action; }
namespace System { class Object; }

#define MIHOYO_SDK_POPUPDIALOG___C_CCTOR_OFFSET UNITYSDK_OFFSET(0x1AF91D80)
#define MIHOYO_SDK_POPUPDIALOG___C_CTOR_OFFSET UNITYSDK_OFFSET(0x1AF91DC0)
#define MIHOYO_SDK_POPUPDIALOG___C__SHOW_B__25_1_OFFSET UNITYSDK_OFFSET(0x1AF91DD0)

namespace MiHoYo::SDK
{
	inline static constexpr unsigned int PopupDialog___c_TypeDefinitionIndex = 8021;

	class PopupDialog___c : public ::System::Object
	{
	public:
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("MiHoYo.SDK", "<>c")->GetStaticField(0x1B360);
		}

		static ::System::Action** StaticGet___9__25_1()
		{
			return (::System::Action**)UnitySDK::FromName("MiHoYo.SDK", "<>c")->GetStaticField(0x1B368);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + MIHOYO_SDK_POPUPDIALOG___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_POPUPDIALOG___C_CTOR_OFFSET))(this);
		}

		::System::Void _Show_b__25_1()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_POPUPDIALOG___C__SHOW_B__25_1_OFFSET))(this);
		}

	};
}
