#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
namespace MiHoYo::SDK::Win { class DatePicker; }
namespace System { class Action; }
namespace System { class Object; }

#define MIHOYO_SDK_WIN_DATEPICKER___C_CCTOR_OFFSET UNITYSDK_OFFSET(0x1BD34210)
#define MIHOYO_SDK_WIN_DATEPICKER___C_CTOR_OFFSET UNITYSDK_OFFSET(0x1BD34250)
#define MIHOYO_SDK_WIN_DATEPICKER___C__SHOW_B__39_0_OFFSET UNITYSDK_OFFSET(0x1BD34260)

namespace MiHoYo::SDK::Win
{
	inline static constexpr unsigned int DatePicker___c_TypeDefinitionIndex = 9289;

	class DatePicker___c : public ::System::Object
	{
	public:
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("MiHoYo.SDK.Win", "<>c")->GetStaticField(0x1E7C0);
		}

		static ::System::Action** StaticGet___9__39_0()
		{
			return (::System::Action**)UnitySDK::FromName("MiHoYo.SDK.Win", "<>c")->GetStaticField(0x1E7C8);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + MIHOYO_SDK_WIN_DATEPICKER___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_WIN_DATEPICKER___C_CTOR_OFFSET))(this);
		}

		::System::Void _Show_b__39_0(::MiHoYo::SDK::Win::DatePicker* a1)
		{
			return ((::System::Void(*)(::PVOID, ::MiHoYo::SDK::Win::DatePicker*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_WIN_DATEPICKER___C__SHOW_B__39_0_OFFSET))(this, a1);
		}

	};
}
