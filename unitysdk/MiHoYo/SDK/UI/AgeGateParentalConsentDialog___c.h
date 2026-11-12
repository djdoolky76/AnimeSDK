#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
namespace MiHoYo::SDK::UI { class AgeGateParentalConsentDialog; }
namespace System { class Object; }
namespace System { template <typename T> class Action_1; }

#define MIHOYO_SDK_UI_AGEGATEPARENTALCONSENTDIALOG___C_CCTOR_OFFSET UNITYSDK_OFFSET(0x1D175CF0)
#define MIHOYO_SDK_UI_AGEGATEPARENTALCONSENTDIALOG___C_CTOR_OFFSET UNITYSDK_OFFSET(0x1D175D30)
#define MIHOYO_SDK_UI_AGEGATEPARENTALCONSENTDIALOG___C__SHOW_B__41_0_OFFSET UNITYSDK_OFFSET(0x1D175D40)

namespace MiHoYo::SDK::UI
{
	inline static constexpr unsigned int AgeGateParentalConsentDialog___c_TypeDefinitionIndex = 8388;

	class AgeGateParentalConsentDialog___c : public ::System::Object
	{
	public:
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("MiHoYo.SDK.UI", "<>c")->GetStaticField(0x1F330);
		}

		static ::System::Action_1<::MiHoYo::SDK::UI::AgeGateParentalConsentDialog*>** StaticGet___9__41_0()
		{
			return (::System::Action_1<::MiHoYo::SDK::UI::AgeGateParentalConsentDialog*>**)UnitySDK::FromName("MiHoYo.SDK.UI", "<>c")->GetStaticField(0x1F338);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + MIHOYO_SDK_UI_AGEGATEPARENTALCONSENTDIALOG___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_UI_AGEGATEPARENTALCONSENTDIALOG___C_CTOR_OFFSET))(this);
		}

		::System::Void _Show_b__41_0(::MiHoYo::SDK::UI::AgeGateParentalConsentDialog* a1)
		{
			return ((::System::Void(*)(::PVOID, ::MiHoYo::SDK::UI::AgeGateParentalConsentDialog*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_UI_AGEGATEPARENTALCONSENTDIALOG___C__SHOW_B__41_0_OFFSET))(this, a1);
		}

	};
}
