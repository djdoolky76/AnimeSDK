#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/UnityEngine/MonoBehaviour.h"
namespace UnityEngine::EventSystems { class BaseEventData; }
namespace UnityEngine::UI { class Dropdown; }
namespace UnityEngine::UI { class Text; }

#define MIHOYO_SDK_WIN_DATEPICKERDROPDOWNHELPER_CCTOR_OFFSET UNITYSDK_OFFSET(0x1CEBD820)
#define MIHOYO_SDK_WIN_DATEPICKERDROPDOWNHELPER_CTOR_OFFSET UNITYSDK_OFFSET(0x1CEBD810)
#define MIHOYO_SDK_WIN_DATEPICKERDROPDOWNHELPER_ONSELECT_OFFSET UNITYSDK_OFFSET(0x1CEBD5C0)
#define MIHOYO_SDK_WIN_DATEPICKERDROPDOWNHELPER_REMOVETITLE_OFFSET UNITYSDK_OFFSET(0x1CEBD720)
#define MIHOYO_SDK_WIN_DATEPICKERDROPDOWNHELPER_START_OFFSET UNITYSDK_OFFSET(0x1CEBD280)

namespace MiHoYo::SDK::Win
{
	inline static constexpr unsigned int DatePickerDropdownHelper_TypeDefinitionIndex = 9298;

	class DatePickerDropdownHelper : public ::UnityEngine::MonoBehaviour
	{
	public:
		::System::Boolean collapse; // 0x18
		::System::Byte _padding0[0x7];
		::UnityEngine::UI::Dropdown* dropdown; // 0x20
		::UnityEngine::UI::Text* placeholder; // 0x28
		static ::System::Boolean* StaticGet_wasNeverSelected()
		{
			return (::System::Boolean*)UnitySDK::FromName("MiHoYo.SDK.Win", "DatePickerDropdownHelper")->GetStaticField(0x85F0);
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_WIN_DATEPICKERDROPDOWNHELPER_CTOR_OFFSET))(this);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + MIHOYO_SDK_WIN_DATEPICKERDROPDOWNHELPER_CCTOR_OFFSET))();
		}

		::System::Void Start()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_WIN_DATEPICKERDROPDOWNHELPER_START_OFFSET))(this);
		}

		::System::Void OnSelect(::UnityEngine::EventSystems::BaseEventData* a1)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::EventSystems::BaseEventData*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_WIN_DATEPICKERDROPDOWNHELPER_ONSELECT_OFFSET))(this, a1);
		}

		::System::Void RemoveTitle()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_WIN_DATEPICKERDROPDOWNHELPER_REMOVETITLE_OFFSET))(this);
		}

	};
}
