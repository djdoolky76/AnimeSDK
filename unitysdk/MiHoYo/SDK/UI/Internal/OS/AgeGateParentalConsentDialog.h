#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System { class Action; }
namespace System { class String; }
namespace System { template <typename T> class Action_1; }

#define MIHOYO_SDK_UI_INTERNAL_OS_AGEGATEPARENTALCONSENTDIALOG_GET_ONCLOSEBTNCLICKED_OFFSET UNITYSDK_OFFSET(0x1CE444B0)
#define MIHOYO_SDK_UI_INTERNAL_OS_AGEGATEPARENTALCONSENTDIALOG_GET_ONNEXTBUTTONCLICKED_OFFSET UNITYSDK_OFFSET(0x1CE44470)
#define MIHOYO_SDK_UI_INTERNAL_OS_AGEGATEPARENTALCONSENTDIALOG_GET_ONSHOWPARENTALCONTROLPROCESSBUTTONPRESSED_OFFSET UNITYSDK_OFFSET(0x1CE44490)
#define MIHOYO_SDK_UI_INTERNAL_OS_AGEGATEPARENTALCONSENTDIALOG_HIDE_OFFSET UNITYSDK_OFFSET(0x1CE36B40)
#define MIHOYO_SDK_UI_INTERNAL_OS_AGEGATEPARENTALCONSENTDIALOG_SET_ONCLOSEBTNCLICKED_OFFSET UNITYSDK_OFFSET(0x1CE444C0)
#define MIHOYO_SDK_UI_INTERNAL_OS_AGEGATEPARENTALCONSENTDIALOG_SET_ONNEXTBUTTONCLICKED_OFFSET UNITYSDK_OFFSET(0x1CE44480)
#define MIHOYO_SDK_UI_INTERNAL_OS_AGEGATEPARENTALCONSENTDIALOG_SET_ONSHOWPARENTALCONTROLPROCESSBUTTONPRESSED_OFFSET UNITYSDK_OFFSET(0x1CE444A0)
#define MIHOYO_SDK_UI_INTERNAL_OS_AGEGATEPARENTALCONSENTDIALOG_SHOW_OFFSET UNITYSDK_OFFSET(0x1CE444D0)
#define MIHOYO_SDK_UI_INTERNAL_OS_AGEGATEPARENTALCONSENTDIALOG__CTOR_OFFSET UNITYSDK_OFFSET(0x1CE445D0)
#define MIHOYO_SDK_UI_INTERNAL_OS_AGEGATEPARENTALCONSENTDIALOG__SHOW_B__12_0_OFFSET UNITYSDK_OFFSET(0x1CE445E0)
#define MIHOYO_SDK_UI_INTERNAL_OS_AGEGATEPARENTALCONSENTDIALOG__SHOW_B__12_1_OFFSET UNITYSDK_OFFSET(0x1CE44640)
#define MIHOYO_SDK_UI_INTERNAL_OS_AGEGATEPARENTALCONSENTDIALOG__SHOW_B__12_2_OFFSET UNITYSDK_OFFSET(0x1CE44650)

namespace MiHoYo::SDK::UI::Internal::OS
{
	inline static constexpr unsigned int AgeGateParentalConsentDialog_TypeDefinitionIndex = 19686;

	class AgeGateParentalConsentDialog : public ::System::Object
	{
	public:
		::System::Action* _onCloseBtnClicked_k__BackingField; // 0x10
		::System::Action_1<::System::String*>* _OnNextButtonClicked_k__BackingField; // 0x18
		::System::Action* _OnShowParentalControlProcessButtonPressed_k__BackingField; // 0x20

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_UI_INTERNAL_OS_AGEGATEPARENTALCONSENTDIALOG__CTOR_OFFSET))(this);
		}

		::System::Action_1<::System::String*>* get_OnNextButtonClicked()
		{
			return ((::System::Action_1<::System::String*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_UI_INTERNAL_OS_AGEGATEPARENTALCONSENTDIALOG_GET_ONNEXTBUTTONCLICKED_OFFSET))(this);
		}

		::System::Void set_OnNextButtonClicked(::System::Action_1<::System::String*>* value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Action_1<::System::String*>*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_UI_INTERNAL_OS_AGEGATEPARENTALCONSENTDIALOG_SET_ONNEXTBUTTONCLICKED_OFFSET))(this, value);
		}

		::System::Action* get_OnShowParentalControlProcessButtonPressed()
		{
			return ((::System::Action*(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_UI_INTERNAL_OS_AGEGATEPARENTALCONSENTDIALOG_GET_ONSHOWPARENTALCONTROLPROCESSBUTTONPRESSED_OFFSET))(this);
		}

		::System::Void set_OnShowParentalControlProcessButtonPressed(::System::Action* value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Action*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_UI_INTERNAL_OS_AGEGATEPARENTALCONSENTDIALOG_SET_ONSHOWPARENTALCONTROLPROCESSBUTTONPRESSED_OFFSET))(this, value);
		}

		::System::Action* get_onCloseBtnClicked()
		{
			return ((::System::Action*(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_UI_INTERNAL_OS_AGEGATEPARENTALCONSENTDIALOG_GET_ONCLOSEBTNCLICKED_OFFSET))(this);
		}

		::System::Void set_onCloseBtnClicked(::System::Action* value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Action*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_UI_INTERNAL_OS_AGEGATEPARENTALCONSENTDIALOG_SET_ONCLOSEBTNCLICKED_OFFSET))(this, value);
		}

		::System::Void Show()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_UI_INTERNAL_OS_AGEGATEPARENTALCONSENTDIALOG_SHOW_OFFSET))(this);
		}

		::System::Void Hide()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_UI_INTERNAL_OS_AGEGATEPARENTALCONSENTDIALOG_HIDE_OFFSET))(this);
		}

		::System::Void _Show_b__12_0(::System::String* email)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_UI_INTERNAL_OS_AGEGATEPARENTALCONSENTDIALOG__SHOW_B__12_0_OFFSET))(this, email);
		}

		::System::Void _Show_b__12_1()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_UI_INTERNAL_OS_AGEGATEPARENTALCONSENTDIALOG__SHOW_B__12_1_OFFSET))(this);
		}

		::System::Void _Show_b__12_2()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_UI_INTERNAL_OS_AGEGATEPARENTALCONSENTDIALOG__SHOW_B__12_2_OFFSET))(this);
		}
	};
}
