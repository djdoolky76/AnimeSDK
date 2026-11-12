#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
namespace MiHoYo::SDK::Win { class DatePicker; }
namespace System { class Object; }
namespace System { template <typename T> class Action_1; }

#define MIHOYO_SDK_WIN_DATEPICKER___C_CCTOR_OFFSET UNITYSDK_OFFSET(0x1CEBD220)
#define MIHOYO_SDK_WIN_DATEPICKER___C_CTOR_OFFSET UNITYSDK_OFFSET(0x1CEBD260)
#define MIHOYO_SDK_WIN_DATEPICKER___C__SHOW_B__39_0_OFFSET UNITYSDK_OFFSET(0x1CEBD270)

namespace MiHoYo::SDK::Win
{
	inline static constexpr unsigned int DatePicker___c_TypeDefinitionIndex = 9297;

	class DatePicker___c : public ::System::Object
	{
	public:
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("MiHoYo.SDK.Win", "<>c")->GetStaticField(0x29850);
		}

		static ::System::Action_1<::MiHoYo::SDK::Win::DatePicker*>** StaticGet___9__39_0()
		{
			return (::System::Action_1<::MiHoYo::SDK::Win::DatePicker*>**)UnitySDK::FromName("MiHoYo.SDK.Win", "<>c")->GetStaticField(0x29858);
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
