#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MiHoYo/SDK/Console/ConsoleDialogBase.h"
#include "unitysdk/MiHoYo/SDK/AgeGateFlowType.h"
namespace MiHoYo::SDK::Console::UI::OS { class ConsoleAgeGateParentalConsentDialog; }
namespace MiHoYo::SDK::UI::OS { class IAgeGateParentalConsentDialog; }
namespace System { class String; }
namespace System { template <typename T1, typename T2> class Action_2; }
namespace System { template <typename T> class Action_1; }
namespace System::Collections { class IEnumerator; }
namespace UnityEngine { class GameObject; }
namespace UnityEngine::UI { class Button; }
namespace UnityEngine::UI { class Image; }
namespace UnityEngine::UI { class InputField; }

#define MIHOYO_SDK_CONSOLE_UI_OS_CONSOLEAGEGATEPARENTALCONSENTDIALOG_AWAKE_OFFSET UNITYSDK_OFFSET(0x1DD57040)
#define MIHOYO_SDK_CONSOLE_UI_OS_CONSOLEAGEGATEPARENTALCONSENTDIALOG_CTOR_OFFSET UNITYSDK_OFFSET(0x1DD59420)
#define MIHOYO_SDK_CONSOLE_UI_OS_CONSOLEAGEGATEPARENTALCONSENTDIALOG_GET_INTERACTABLE_OFFSET UNITYSDK_OFFSET(0x1DD57020)
#define MIHOYO_SDK_CONSOLE_UI_OS_CONSOLEAGEGATEPARENTALCONSENTDIALOG_GET_ONCLOSED_OFFSET UNITYSDK_OFFSET(0x1DD57000)
#define MIHOYO_SDK_CONSOLE_UI_OS_CONSOLEAGEGATEPARENTALCONSENTDIALOG_GET_ONINPUTCOMPLETED_OFFSET UNITYSDK_OFFSET(0x1DD56F80)
#define MIHOYO_SDK_CONSOLE_UI_OS_CONSOLEAGEGATEPARENTALCONSENTDIALOG_GET_ONINPUTVALUECHANGED_OFFSET UNITYSDK_OFFSET(0x1DD56FA0)
#define MIHOYO_SDK_CONSOLE_UI_OS_CONSOLEAGEGATEPARENTALCONSENTDIALOG_GET_ONNEXTBUTTONPRESSED_OFFSET UNITYSDK_OFFSET(0x1DD56FC0)
#define MIHOYO_SDK_CONSOLE_UI_OS_CONSOLEAGEGATEPARENTALCONSENTDIALOG_GET_ONSHOWPARENTALCONTROLPROCESSBUTTONPRESSED_OFFSET UNITYSDK_OFFSET(0x1DD56FE0)
#define MIHOYO_SDK_CONSOLE_UI_OS_CONSOLEAGEGATEPARENTALCONSENTDIALOG_HIDEDIALOG_OFFSET UNITYSDK_OFFSET(0x1DD58AE0)
#define MIHOYO_SDK_CONSOLE_UI_OS_CONSOLEAGEGATEPARENTALCONSENTDIALOG_HIDE_OFFSET UNITYSDK_OFFSET(0x1DD58BF0)
#define MIHOYO_SDK_CONSOLE_UI_OS_CONSOLEAGEGATEPARENTALCONSENTDIALOG_NEXTBUTTONPRESSED_OFFSET UNITYSDK_OFFSET(0x1DD59070)
#define MIHOYO_SDK_CONSOLE_UI_OS_CONSOLEAGEGATEPARENTALCONSENTDIALOG_ONCLOSEDBUTTONPRESSED_OFFSET UNITYSDK_OFFSET(0x1DD590E0)
#define MIHOYO_SDK_CONSOLE_UI_OS_CONSOLEAGEGATEPARENTALCONSENTDIALOG_ONENABLE_OFFSET UNITYSDK_OFFSET(0x1DD58FC0)
#define MIHOYO_SDK_CONSOLE_UI_OS_CONSOLEAGEGATEPARENTALCONSENTDIALOG_ONINPUTFIELDVALUECHANGED_OFFSET UNITYSDK_OFFSET(0x1DD590A0)
#define MIHOYO_SDK_CONSOLE_UI_OS_CONSOLEAGEGATEPARENTALCONSENTDIALOG_ONSETHIGHLIGHTEDOBJECT_OFFSET UNITYSDK_OFFSET(0x1DD591B0)
#define MIHOYO_SDK_CONSOLE_UI_OS_CONSOLEAGEGATEPARENTALCONSENTDIALOG_SETINTERACTABLE_OFFSET UNITYSDK_OFFSET(0x1DD59020)
#define MIHOYO_SDK_CONSOLE_UI_OS_CONSOLEAGEGATEPARENTALCONSENTDIALOG_SETMULTILANGUAGETEXT_OFFSET UNITYSDK_OFFSET(0x1DD58C80)
#define MIHOYO_SDK_CONSOLE_UI_OS_CONSOLEAGEGATEPARENTALCONSENTDIALOG_SETPARENTSEMAILWITHININPUTFIELD_OFFSET UNITYSDK_OFFSET(0x1DD586F0)
#define MIHOYO_SDK_CONSOLE_UI_OS_CONSOLEAGEGATEPARENTALCONSENTDIALOG_SET_INTERACTABLE_OFFSET UNITYSDK_OFFSET(0x1DD57030)
#define MIHOYO_SDK_CONSOLE_UI_OS_CONSOLEAGEGATEPARENTALCONSENTDIALOG_SET_ONCLOSED_OFFSET UNITYSDK_OFFSET(0x1DD57010)
#define MIHOYO_SDK_CONSOLE_UI_OS_CONSOLEAGEGATEPARENTALCONSENTDIALOG_SET_ONINPUTCOMPLETED_OFFSET UNITYSDK_OFFSET(0x1DD56F90)
#define MIHOYO_SDK_CONSOLE_UI_OS_CONSOLEAGEGATEPARENTALCONSENTDIALOG_SET_ONINPUTVALUECHANGED_OFFSET UNITYSDK_OFFSET(0x1DD56FB0)
#define MIHOYO_SDK_CONSOLE_UI_OS_CONSOLEAGEGATEPARENTALCONSENTDIALOG_SET_ONNEXTBUTTONPRESSED_OFFSET UNITYSDK_OFFSET(0x1DD56FD0)
#define MIHOYO_SDK_CONSOLE_UI_OS_CONSOLEAGEGATEPARENTALCONSENTDIALOG_SET_ONSHOWPARENTALCONTROLPROCESSBUTTONPRESSED_OFFSET UNITYSDK_OFFSET(0x1DD56FF0)
#define MIHOYO_SDK_CONSOLE_UI_OS_CONSOLEAGEGATEPARENTALCONSENTDIALOG_SHOWPARENTALCONTROLPROCESSBUTTONPRESSED_OFFSET UNITYSDK_OFFSET(0x1DD58A90)
#define MIHOYO_SDK_CONSOLE_UI_OS_CONSOLEAGEGATEPARENTALCONSENTDIALOG_SHOW_OFFSET UNITYSDK_OFFSET(0x1DD58EC0)
#define MIHOYO_SDK_CONSOLE_UI_OS_CONSOLEAGEGATEPARENTALCONSENTDIALOG_UPDATE_OFFSET UNITYSDK_OFFSET(0x1DD58730)
#define MIHOYO_SDK_CONSOLE_UI_OS_CONSOLEAGEGATEPARENTALCONSENTDIALOG_VALIDATEEMAIL_OFFSET UNITYSDK_OFFSET(0x1DD585C0)
#define MIHOYO_SDK_CONSOLE_UI_OS_CONSOLEAGEGATEPARENTALCONSENTDIALOG__ONCLOSEDBUTTONPRESSED_G__ONCLOSEPRESSEDROUTINE_56_0_OFFSET UNITYSDK_OFFSET(0x1DD59160)

namespace MiHoYo::SDK::Console::UI::OS
{
	inline static constexpr unsigned int ConsoleAgeGateParentalConsentDialog_TypeDefinitionIndex = 9043;

	class ConsoleAgeGateParentalConsentDialog : public ::MiHoYo::SDK::Console::ConsoleDialogBase
	{
	public:
		::UnityEngine::UI::InputField* inputField; // 0xC0
		::UnityEngine::UI::Button* confirmInputButton; // 0xC8
		::UnityEngine::UI::Image* BtnOutline; // 0xD0
		::UnityEngine::GameObject* TipsObject; // 0xD8
		::System::Action_2<::MiHoYo::SDK::UI::OS::IAgeGateParentalConsentDialog*, ::System::String*>* _OnInputCompleted_k__BackingField; // 0xE0
		::System::Action_2<::MiHoYo::SDK::UI::OS::IAgeGateParentalConsentDialog*, ::System::String*>* _OnInputValueChanged_k__BackingField; // 0xE8
		::System::Action_2<::MiHoYo::SDK::UI::OS::IAgeGateParentalConsentDialog*, ::System::String*>* _OnNextButtonPressed_k__BackingField; // 0xF0
		::System::Action_1<::MiHoYo::SDK::UI::OS::IAgeGateParentalConsentDialog*>* _OnShowParentalControlProcessButtonPressed_k__BackingField; // 0xF8
		::System::Action_1<::MiHoYo::SDK::UI::OS::IAgeGateParentalConsentDialog*>* _OnClosed_k__BackingField; // 0x100
		::System::String* parentsEmail; // 0x108
		::MiHoYo::SDK::AgeGateFlowType Type; // 0x110
		::System::Boolean _Interactable_k__BackingField; // 0x114
		::System::Boolean HasInput; // 0x115
		static ::MiHoYo::SDK::Console::UI::OS::ConsoleAgeGateParentalConsentDialog** StaticGet_Instance()
		{
			return (::MiHoYo::SDK::Console::UI::OS::ConsoleAgeGateParentalConsentDialog**)UnitySDK::FromName("MiHoYo.SDK.Console.UI.OS", "ConsoleAgeGateParentalConsentDialog")->GetStaticField(0x493F0);
		}

		// static const ::System::String* PrefabName; // 0x0
		// static const ::System::Object EMAIL_MAX_LENGTH; // 0x0
		// static const ::System::String* titleTextPath; // 0x0
		// static const ::System::String* descTextPath; // 0x0
		// static const ::System::String* inputTitleTextPath; // 0x0
		// static const ::System::String* inputPlaceholderTextPath; // 0x0
		// static const ::System::String* inputFieldPath; // 0x0
		// static const ::System::String* TipsPath; // 0x0
		// static const ::System::String* TipsTextPath; // 0x0
		// static const ::System::String* TipsOutlinePath; // 0x0
		// static const ::System::String* inputConfirmButton; // 0x0
		// static const ::System::String* inputConfirmButtonText; // 0x0
		// static const ::System::String* helpButtonTextPath; // 0x0
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_CONSOLE_UI_OS_CONSOLEAGEGATEPARENTALCONSENTDIALOG_CTOR_OFFSET))(this);
		}

		::System::Action_2<::MiHoYo::SDK::UI::OS::IAgeGateParentalConsentDialog*, ::System::String*>* get_OnInputCompleted()
		{
			return ((::System::Action_2<::MiHoYo::SDK::UI::OS::IAgeGateParentalConsentDialog*, ::System::String*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_CONSOLE_UI_OS_CONSOLEAGEGATEPARENTALCONSENTDIALOG_GET_ONINPUTCOMPLETED_OFFSET))(this);
		}

		::System::Void set_OnInputCompleted(::System::Action_2<::MiHoYo::SDK::UI::OS::IAgeGateParentalConsentDialog*, ::System::String*>* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Action_2<::MiHoYo::SDK::UI::OS::IAgeGateParentalConsentDialog*, ::System::String*>*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_CONSOLE_UI_OS_CONSOLEAGEGATEPARENTALCONSENTDIALOG_SET_ONINPUTCOMPLETED_OFFSET))(this, a1);
		}

		::System::Action_2<::MiHoYo::SDK::UI::OS::IAgeGateParentalConsentDialog*, ::System::String*>* get_OnInputValueChanged()
		{
			return ((::System::Action_2<::MiHoYo::SDK::UI::OS::IAgeGateParentalConsentDialog*, ::System::String*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_CONSOLE_UI_OS_CONSOLEAGEGATEPARENTALCONSENTDIALOG_GET_ONINPUTVALUECHANGED_OFFSET))(this);
		}

		::System::Void set_OnInputValueChanged(::System::Action_2<::MiHoYo::SDK::UI::OS::IAgeGateParentalConsentDialog*, ::System::String*>* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Action_2<::MiHoYo::SDK::UI::OS::IAgeGateParentalConsentDialog*, ::System::String*>*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_CONSOLE_UI_OS_CONSOLEAGEGATEPARENTALCONSENTDIALOG_SET_ONINPUTVALUECHANGED_OFFSET))(this, a1);
		}

		::System::Action_2<::MiHoYo::SDK::UI::OS::IAgeGateParentalConsentDialog*, ::System::String*>* get_OnNextButtonPressed()
		{
			return ((::System::Action_2<::MiHoYo::SDK::UI::OS::IAgeGateParentalConsentDialog*, ::System::String*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_CONSOLE_UI_OS_CONSOLEAGEGATEPARENTALCONSENTDIALOG_GET_ONNEXTBUTTONPRESSED_OFFSET))(this);
		}

		::System::Void set_OnNextButtonPressed(::System::Action_2<::MiHoYo::SDK::UI::OS::IAgeGateParentalConsentDialog*, ::System::String*>* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Action_2<::MiHoYo::SDK::UI::OS::IAgeGateParentalConsentDialog*, ::System::String*>*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_CONSOLE_UI_OS_CONSOLEAGEGATEPARENTALCONSENTDIALOG_SET_ONNEXTBUTTONPRESSED_OFFSET))(this, a1);
		}

		::System::Action_1<::MiHoYo::SDK::UI::OS::IAgeGateParentalConsentDialog*>* get_OnShowParentalControlProcessButtonPressed()
		{
			return ((::System::Action_1<::MiHoYo::SDK::UI::OS::IAgeGateParentalConsentDialog*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_CONSOLE_UI_OS_CONSOLEAGEGATEPARENTALCONSENTDIALOG_GET_ONSHOWPARENTALCONTROLPROCESSBUTTONPRESSED_OFFSET))(this);
		}

		::System::Void set_OnShowParentalControlProcessButtonPressed(::System::Action_1<::MiHoYo::SDK::UI::OS::IAgeGateParentalConsentDialog*>* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Action_1<::MiHoYo::SDK::UI::OS::IAgeGateParentalConsentDialog*>*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_CONSOLE_UI_OS_CONSOLEAGEGATEPARENTALCONSENTDIALOG_SET_ONSHOWPARENTALCONTROLPROCESSBUTTONPRESSED_OFFSET))(this, a1);
		}

		::System::Action_1<::MiHoYo::SDK::UI::OS::IAgeGateParentalConsentDialog*>* get_OnClosed()
		{
			return ((::System::Action_1<::MiHoYo::SDK::UI::OS::IAgeGateParentalConsentDialog*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_CONSOLE_UI_OS_CONSOLEAGEGATEPARENTALCONSENTDIALOG_GET_ONCLOSED_OFFSET))(this);
		}

		::System::Void set_OnClosed(::System::Action_1<::MiHoYo::SDK::UI::OS::IAgeGateParentalConsentDialog*>* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Action_1<::MiHoYo::SDK::UI::OS::IAgeGateParentalConsentDialog*>*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_CONSOLE_UI_OS_CONSOLEAGEGATEPARENTALCONSENTDIALOG_SET_ONCLOSED_OFFSET))(this, a1);
		}

		::System::Boolean get_Interactable()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_CONSOLE_UI_OS_CONSOLEAGEGATEPARENTALCONSENTDIALOG_GET_INTERACTABLE_OFFSET))(this);
		}

		::System::Void set_Interactable(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + MIHOYO_SDK_CONSOLE_UI_OS_CONSOLEAGEGATEPARENTALCONSENTDIALOG_SET_INTERACTABLE_OFFSET))(this, a1);
		}

		::System::Void Awake()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_CONSOLE_UI_OS_CONSOLEAGEGATEPARENTALCONSENTDIALOG_AWAKE_OFFSET))(this);
		}

		::System::Void SetParentsEmailWithinInputField(::System::String* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_CONSOLE_UI_OS_CONSOLEAGEGATEPARENTALCONSENTDIALOG_SETPARENTSEMAILWITHININPUTFIELD_OFFSET))(this, a1);
		}

		::System::Void Update()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_CONSOLE_UI_OS_CONSOLEAGEGATEPARENTALCONSENTDIALOG_UPDATE_OFFSET))(this);
		}

		::System::Void HideDialog()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_CONSOLE_UI_OS_CONSOLEAGEGATEPARENTALCONSENTDIALOG_HIDEDIALOG_OFFSET))(this);
		}

		::System::Void SetMultiLanguageText()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_CONSOLE_UI_OS_CONSOLEAGEGATEPARENTALCONSENTDIALOG_SETMULTILANGUAGETEXT_OFFSET))(this);
		}

		static ::System::Void Show(::MiHoYo::SDK::AgeGateFlowType a1)
		{
			return ((::System::Void(*)(::MiHoYo::SDK::AgeGateFlowType))((::PBYTE)hIl2Cpp + MIHOYO_SDK_CONSOLE_UI_OS_CONSOLEAGEGATEPARENTALCONSENTDIALOG_SHOW_OFFSET))(a1);
		}

		::System::Void OnEnable()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_CONSOLE_UI_OS_CONSOLEAGEGATEPARENTALCONSENTDIALOG_ONENABLE_OFFSET))(this);
		}

		static ::System::Void Hide()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + MIHOYO_SDK_CONSOLE_UI_OS_CONSOLEAGEGATEPARENTALCONSENTDIALOG_HIDE_OFFSET))();
		}

		::System::Void NextButtonPressed()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_CONSOLE_UI_OS_CONSOLEAGEGATEPARENTALCONSENTDIALOG_NEXTBUTTONPRESSED_OFFSET))(this);
		}

		::System::Void OnInputFieldValueChanged(::System::String* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_CONSOLE_UI_OS_CONSOLEAGEGATEPARENTALCONSENTDIALOG_ONINPUTFIELDVALUECHANGED_OFFSET))(this, a1);
		}

		::System::Void ShowParentalControlProcessButtonPressed()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_CONSOLE_UI_OS_CONSOLEAGEGATEPARENTALCONSENTDIALOG_SHOWPARENTALCONTROLPROCESSBUTTONPRESSED_OFFSET))(this);
		}

		::System::Void OnClosedButtonPressed()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_CONSOLE_UI_OS_CONSOLEAGEGATEPARENTALCONSENTDIALOG_ONCLOSEDBUTTONPRESSED_OFFSET))(this);
		}

		::System::Void ValidateEmail(::System::String* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_CONSOLE_UI_OS_CONSOLEAGEGATEPARENTALCONSENTDIALOG_VALIDATEEMAIL_OFFSET))(this, a1);
		}

		::System::Void SetInteractable(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + MIHOYO_SDK_CONSOLE_UI_OS_CONSOLEAGEGATEPARENTALCONSENTDIALOG_SETINTERACTABLE_OFFSET))(this, a1);
		}

		::System::Void OnSetHighlightedObject(::UnityEngine::GameObject* a1)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::GameObject*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_CONSOLE_UI_OS_CONSOLEAGEGATEPARENTALCONSENTDIALOG_ONSETHIGHLIGHTEDOBJECT_OFFSET))(this, a1);
		}

		::System::Collections::IEnumerator* _OnClosedButtonPressed_g__OnClosePressedRoutine_56_0()
		{
			return ((::System::Collections::IEnumerator*(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_CONSOLE_UI_OS_CONSOLEAGEGATEPARENTALCONSENTDIALOG__ONCLOSEDBUTTONPRESSED_G__ONCLOSEPRESSEDROUTINE_56_0_OFFSET))(this);
		}

	};
}
