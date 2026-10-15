#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
namespace MiHoYo::SDK::UI { class AgeGateParentalConsentDetailsDialog; }
namespace System { class Object; }
namespace System { template <typename T> class Action_1; }

#define MIHOYO_SDK_UI_AGEGATEPARENTALCONSENTDETAILSDIALOG___C_CCTOR_OFFSET UNITYSDK_OFFSET(0x1BFC06F0)
#define MIHOYO_SDK_UI_AGEGATEPARENTALCONSENTDETAILSDIALOG___C_CTOR_OFFSET UNITYSDK_OFFSET(0x1BFC0730)
#define MIHOYO_SDK_UI_AGEGATEPARENTALCONSENTDETAILSDIALOG___C__SHOW_B__26_0_OFFSET UNITYSDK_OFFSET(0x1BFC0740)

namespace MiHoYo::SDK::UI
{
	inline static constexpr unsigned int AgeGateParentalConsentDetailsDialog___c_TypeDefinitionIndex = 8377;

	class AgeGateParentalConsentDetailsDialog___c : public ::System::Object
	{
	public:
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("MiHoYo.SDK.UI", "<>c")->GetStaticField(0x2ABC0);
		}

		static ::System::Action_1<::MiHoYo::SDK::UI::AgeGateParentalConsentDetailsDialog*>** StaticGet___9__26_0()
		{
			return (::System::Action_1<::MiHoYo::SDK::UI::AgeGateParentalConsentDetailsDialog*>**)UnitySDK::FromName("MiHoYo.SDK.UI", "<>c")->GetStaticField(0x2ABC8);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + MIHOYO_SDK_UI_AGEGATEPARENTALCONSENTDETAILSDIALOG___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_UI_AGEGATEPARENTALCONSENTDETAILSDIALOG___C_CTOR_OFFSET))(this);
		}

		::System::Void _Show_b__26_0(::MiHoYo::SDK::UI::AgeGateParentalConsentDetailsDialog* a1)
		{
			return ((::System::Void(*)(::PVOID, ::MiHoYo::SDK::UI::AgeGateParentalConsentDetailsDialog*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_UI_AGEGATEPARENTALCONSENTDETAILSDIALOG___C__SHOW_B__26_0_OFFSET))(this, a1);
		}

	};
}
