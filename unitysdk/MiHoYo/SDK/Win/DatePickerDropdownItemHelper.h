#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/UnityEngine/MonoBehaviour.h"

#define MIHOYO_SDK_WIN_DATEPICKERDROPDOWNITEMHELPER_A28D6A0C3E793E7D_OFFSET UNITYSDK_OFFSET(0x3A6F810)
#define MIHOYO_SDK_WIN_DATEPICKERDROPDOWNITEMHELPER_F328E4D8818B1E12_OFFSET UNITYSDK_OFFSET(0x3A6F860)
#define MIHOYO_SDK_WIN_DATEPICKERDROPDOWNITEMHELPER__CTOR_OFFSET UNITYSDK_OFFSET(0x176D770)

namespace MiHoYo::SDK::Win
{
	inline static constexpr unsigned int DatePickerDropdownItemHelper_TypeDefinitionIndex = 11999;

	class DatePickerDropdownItemHelper : public ::UnityEngine::MonoBehaviour
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_WIN_DATEPICKERDROPDOWNITEMHELPER__CTOR_OFFSET))(this);
		}

		::System::Void A28D6A0C3E793E7D()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_WIN_DATEPICKERDROPDOWNITEMHELPER_A28D6A0C3E793E7D_OFFSET))(this);
		}

		::System::Void F328E4D8818B1E12()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_WIN_DATEPICKERDROPDOWNITEMHELPER_F328E4D8818B1E12_OFFSET))(this);
		}
	};
}
