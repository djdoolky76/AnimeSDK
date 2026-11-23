#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/UnityEngine/MonoBehaviour.h"

namespace F5D9B2730D543D46 { class EE9552F10B511EB1; }
namespace UnityEngine::UI { class Dropdown; }
namespace UnityEngine::UI { class Text; }

#define MIHOYO_SDK_WIN_DATEPICKERDROPDOWNHELPER_A10E1D16647EF844_OFFSET UNITYSDK_OFFSET(0x39D1860)
#define MIHOYO_SDK_WIN_DATEPICKERDROPDOWNHELPER_A47AE099234873AA_OFFSET UNITYSDK_OFFSET(0x39D19A0)
#define MIHOYO_SDK_WIN_DATEPICKERDROPDOWNHELPER_F328E4D8818B1E12_OFFSET UNITYSDK_OFFSET(0x39D1A20)
#define MIHOYO_SDK_WIN_DATEPICKERDROPDOWNHELPER__CCTOR_OFFSET UNITYSDK_OFFSET(0x39D1C20)
#define MIHOYO_SDK_WIN_DATEPICKERDROPDOWNHELPER__CTOR_OFFSET UNITYSDK_OFFSET(0x224E5C0)

namespace MiHoYo::SDK::Win
{
	inline static constexpr unsigned int DatePickerDropdownHelper_TypeDefinitionIndex = 12726;

	class DatePickerDropdownHelper : public ::UnityEngine::MonoBehaviour
	{
	public:
		static ::System::Boolean* StaticGet_F108CE9AC9F7838A()
		{
			return (::System::Boolean*)Il2CppClass::FromTypeDefinitionIndex(DatePickerDropdownHelper_TypeDefinitionIndex)->GetStaticField(0x0);
		}
		::System::Boolean B7168F5A8574A5FC; // 0x20
		::System::Byte _padding0[0x7];
		::UnityEngine::UI::Dropdown* ACD4CDC9F720E124; // 0x28
		::UnityEngine::UI::Text* E7D0505C52D90D78; // 0x30

		::System::Void F328E4D8818B1E12()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_WIN_DATEPICKERDROPDOWNHELPER_F328E4D8818B1E12_OFFSET))(this);
		}

		::System::Void A47AE099234873AA()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_WIN_DATEPICKERDROPDOWNHELPER_A47AE099234873AA_OFFSET))(this);
		}

		::System::Void A10E1D16647EF844(::F5D9B2730D543D46::EE9552F10B511EB1* E7336521BA8945EE)
		{
			return ((::System::Void(*)(::PVOID, ::F5D9B2730D543D46::EE9552F10B511EB1*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_WIN_DATEPICKERDROPDOWNHELPER_A10E1D16647EF844_OFFSET))(this, E7336521BA8945EE);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + MIHOYO_SDK_WIN_DATEPICKERDROPDOWNHELPER__CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_WIN_DATEPICKERDROPDOWNHELPER__CTOR_OFFSET))(this);
		}
	};
}
