#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System { class String; }
namespace System { template <typename T1, typename T2> class Func_2; }

#define MIHOYO_SDK_WIN_CALENDARUTILS___C__CCTOR_OFFSET UNITYSDK_OFFSET(0x1DED0540)
#define MIHOYO_SDK_WIN_CALENDARUTILS___C__CTOR_OFFSET UNITYSDK_OFFSET(0x1DED0580)
#define MIHOYO_SDK_WIN_CALENDARUTILS___C__GETMONTHSTRINGARRAY_B__8_0_OFFSET UNITYSDK_OFFSET(0x1DED0590)

namespace MiHoYo::SDK::Win
{
	inline static constexpr unsigned int CalendarUtils___c_TypeDefinitionIndex = 20582;

	class CalendarUtils___c : public ::System::Object
	{
	public:
		static ::System::Func_2<::System::Int32, ::System::String*>** StaticGet___9__8_0()
		{
			return (::System::Func_2<::System::Int32, ::System::String*>**)Il2CppClass::FromTypeDefinitionIndex(CalendarUtils___c_TypeDefinitionIndex)->GetStaticField(0x9F30);
		}
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)Il2CppClass::FromTypeDefinitionIndex(CalendarUtils___c_TypeDefinitionIndex)->GetStaticField(0x9F38);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + MIHOYO_SDK_WIN_CALENDARUTILS___C__CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_WIN_CALENDARUTILS___C__CTOR_OFFSET))(this);
		}

		::System::String* _GetMonthStringArray_b__8_0(::System::Int32 number)
		{
			return ((::System::String*(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + MIHOYO_SDK_WIN_CALENDARUTILS___C__GETMONTHSTRINGARRAY_B__8_0_OFFSET))(this, number);
		}
	};
}
