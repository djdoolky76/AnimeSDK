#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace MiHoYo::SDK::Win { class DatePicker; }
namespace System { template <typename T> class Action_1; }

#define MIHOYO_SDK_WIN_DATEPICKER_F5628F8349D4A8A6_EA151A66B97B2039_OFFSET UNITYSDK_OFFSET(0x3B0A540)
#define MIHOYO_SDK_WIN_DATEPICKER_F5628F8349D4A8A6__CCTOR_OFFSET UNITYSDK_OFFSET(0x3B0F9C0)
#define MIHOYO_SDK_WIN_DATEPICKER_F5628F8349D4A8A6__CTOR_OFFSET UNITYSDK_OFFSET(0x1666CA0)

namespace MiHoYo::SDK::Win
{
	inline static constexpr unsigned int DatePicker_F5628F8349D4A8A6_TypeDefinitionIndex = 12249;

	class DatePicker_F5628F8349D4A8A6 : public ::System::Object
	{
	public:
		static ::MiHoYo::SDK::Win::DatePicker_F5628F8349D4A8A6** StaticGet_AA32F971AB02398B()
		{
			return (::MiHoYo::SDK::Win::DatePicker_F5628F8349D4A8A6**)Il2CppClass::FromTypeDefinitionIndex(DatePicker_F5628F8349D4A8A6_TypeDefinitionIndex)->GetStaticField(0x0);
		}
		static ::System::Action_1<::MiHoYo::SDK::Win::DatePicker*>** StaticGet_FF68113B57359997()
		{
			return (::System::Action_1<::MiHoYo::SDK::Win::DatePicker*>**)Il2CppClass::FromTypeDefinitionIndex(DatePicker_F5628F8349D4A8A6_TypeDefinitionIndex)->GetStaticField(0x8);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + MIHOYO_SDK_WIN_DATEPICKER_F5628F8349D4A8A6__CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_WIN_DATEPICKER_F5628F8349D4A8A6__CTOR_OFFSET))(this);
		}

		::System::Void EA151A66B97B2039(::MiHoYo::SDK::Win::DatePicker* F9ADA718944F49ED)
		{
			return ((::System::Void(*)(::PVOID, ::MiHoYo::SDK::Win::DatePicker*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_WIN_DATEPICKER_F5628F8349D4A8A6_EA151A66B97B2039_OFFSET))(this, F9ADA718944F49ED);
		}
	};
}
