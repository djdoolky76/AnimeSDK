#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System { class Action; }
namespace System { class String; }
namespace System { template <typename T> class Action_1; }

#define MIHOYO_SDK_UI_INTERNAL_OS_PAYPARENTCONSENTSENTDIALOG_GET_ONCLOSEBTNCLICKED_OFFSET UNITYSDK_OFFSET(0x1D85B240)
#define MIHOYO_SDK_UI_INTERNAL_OS_PAYPARENTCONSENTSENTDIALOG_GET_ONSENDBTNCLIEKD_OFFSET UNITYSDK_OFFSET(0x1D85B260)
#define MIHOYO_SDK_UI_INTERNAL_OS_PAYPARENTCONSENTSENTDIALOG_HIDE_OFFSET UNITYSDK_OFFSET(0x1D85B350)
#define MIHOYO_SDK_UI_INTERNAL_OS_PAYPARENTCONSENTSENTDIALOG_SET_ONCLOSEBTNCLICKED_OFFSET UNITYSDK_OFFSET(0x1D85B250)
#define MIHOYO_SDK_UI_INTERNAL_OS_PAYPARENTCONSENTSENTDIALOG_SET_ONSENDBTNCLIEKD_OFFSET UNITYSDK_OFFSET(0x1D85B270)
#define MIHOYO_SDK_UI_INTERNAL_OS_PAYPARENTCONSENTSENTDIALOG_SHOW_OFFSET UNITYSDK_OFFSET(0x1D85B280)
#define MIHOYO_SDK_UI_INTERNAL_OS_PAYPARENTCONSENTSENTDIALOG_STARTCOUNTDOWN_OFFSET UNITYSDK_OFFSET(0x1D85B3E0)
#define MIHOYO_SDK_UI_INTERNAL_OS_PAYPARENTCONSENTSENTDIALOG__CTOR_OFFSET UNITYSDK_OFFSET(0x1D85B400)
#define MIHOYO_SDK_UI_INTERNAL_OS_PAYPARENTCONSENTSENTDIALOG__SHOW_B__8_0_OFFSET UNITYSDK_OFFSET(0x1D85B410)
#define MIHOYO_SDK_UI_INTERNAL_OS_PAYPARENTCONSENTSENTDIALOG__SHOW_B__8_1_OFFSET UNITYSDK_OFFSET(0x1D85B470)

namespace MiHoYo::SDK::UI::Internal::OS
{
	inline static constexpr unsigned int PayParentConsentSentDialog_TypeDefinitionIndex = 19687;

	class PayParentConsentSentDialog : public ::System::Object
	{
	public:
		::System::Action_1<::System::String*>* _OnSendBtnCliekd_k__BackingField; // 0x10
		::System::Action* _onCloseBtnClicked_k__BackingField; // 0x18

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_UI_INTERNAL_OS_PAYPARENTCONSENTSENTDIALOG__CTOR_OFFSET))(this);
		}

		::System::Action* get_onCloseBtnClicked()
		{
			return ((::System::Action*(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_UI_INTERNAL_OS_PAYPARENTCONSENTSENTDIALOG_GET_ONCLOSEBTNCLICKED_OFFSET))(this);
		}

		::System::Void set_onCloseBtnClicked(::System::Action* value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Action*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_UI_INTERNAL_OS_PAYPARENTCONSENTSENTDIALOG_SET_ONCLOSEBTNCLICKED_OFFSET))(this, value);
		}

		::System::Action_1<::System::String*>* get_OnSendBtnCliekd()
		{
			return ((::System::Action_1<::System::String*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_UI_INTERNAL_OS_PAYPARENTCONSENTSENTDIALOG_GET_ONSENDBTNCLIEKD_OFFSET))(this);
		}

		::System::Void set_OnSendBtnCliekd(::System::Action_1<::System::String*>* value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Action_1<::System::String*>*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_UI_INTERNAL_OS_PAYPARENTCONSENTSENTDIALOG_SET_ONSENDBTNCLIEKD_OFFSET))(this, value);
		}

		::System::Void Show(::System::String* email)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_UI_INTERNAL_OS_PAYPARENTCONSENTSENTDIALOG_SHOW_OFFSET))(this, email);
		}

		::System::Void Hide()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_UI_INTERNAL_OS_PAYPARENTCONSENTSENTDIALOG_HIDE_OFFSET))(this);
		}

		::System::Void StartCountDown(::System::Int32 time)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + MIHOYO_SDK_UI_INTERNAL_OS_PAYPARENTCONSENTSENTDIALOG_STARTCOUNTDOWN_OFFSET))(this, time);
		}

		::System::Void _Show_b__8_0(::System::String* inputEmail)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_UI_INTERNAL_OS_PAYPARENTCONSENTSENTDIALOG__SHOW_B__8_0_OFFSET))(this, inputEmail);
		}

		::System::Void _Show_b__8_1()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_UI_INTERNAL_OS_PAYPARENTCONSENTSENTDIALOG__SHOW_B__8_1_OFFSET))(this);
		}
	};
}
