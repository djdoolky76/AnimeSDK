#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MiHoYo/SDK/Console/UI/OS/ConsoleAgeGateVerificationDialog_DropDownInteraction.h"
#include "unitysdk/MiHoYo/SDK/Console/ConsoleDialogBase.h"
namespace MiHoYo::SDK::Console::UI::OS { class ConsoleAgeGateVerificationDialog; }
namespace MiHoYo::SDK::UI::OS { class IAgeGateVerificationDialog; }
namespace System { template <typename T1, typename T2, typename T3> class Action_3; }
namespace System { template <typename T> class Action_1; }
namespace System::Collections { class IEnumerator; }
namespace UnityEngine { class GameObject; }
namespace UnityEngine::UI { class Button; }
namespace UnityEngine::UI { class Image; }
namespace UnityEngine::UI { class Text; }

#define MIHOYO_SDK_CONSOLE_UI_OS_CONSOLEAGEGATEVERIFICATIONDIALOG_AWAKE_OFFSET UNITYSDK_OFFSET(0x1CFC1010)
#define MIHOYO_SDK_CONSOLE_UI_OS_CONSOLEAGEGATEVERIFICATIONDIALOG_CTOR_OFFSET UNITYSDK_OFFSET(0x1CFC46A0)
#define MIHOYO_SDK_CONSOLE_UI_OS_CONSOLEAGEGATEVERIFICATIONDIALOG_GET_INTERACTABLE_OFFSET UNITYSDK_OFFSET(0x1CFC0FF0)
#define MIHOYO_SDK_CONSOLE_UI_OS_CONSOLEAGEGATEVERIFICATIONDIALOG_GET_ONCLOSED_OFFSET UNITYSDK_OFFSET(0x1CFC0FD0)
#define MIHOYO_SDK_CONSOLE_UI_OS_CONSOLEAGEGATEVERIFICATIONDIALOG_GET_ONNEXTBUTTONPRESSED_OFFSET UNITYSDK_OFFSET(0x1CFC0FB0)
#define MIHOYO_SDK_CONSOLE_UI_OS_CONSOLEAGEGATEVERIFICATIONDIALOG_HIDEDIALOG_OFFSET UNITYSDK_OFFSET(0x1CFC4260)
#define MIHOYO_SDK_CONSOLE_UI_OS_CONSOLEAGEGATEVERIFICATIONDIALOG_HIDE_OFFSET UNITYSDK_OFFSET(0x1CFC4370)
#define MIHOYO_SDK_CONSOLE_UI_OS_CONSOLEAGEGATEVERIFICATIONDIALOG_MONTHSINYEARARRAY_OFFSET UNITYSDK_OFFSET(0x1CFC2E00)
#define MIHOYO_SDK_CONSOLE_UI_OS_CONSOLEAGEGATEVERIFICATIONDIALOG_NEXTBUTTONPRESSED_OFFSET UNITYSDK_OFFSET(0x1CFC4220)
#define MIHOYO_SDK_CONSOLE_UI_OS_CONSOLEAGEGATEVERIFICATIONDIALOG_ONCLOSEDPRESSED_OFFSET UNITYSDK_OFFSET(0x1CFC4560)
#define MIHOYO_SDK_CONSOLE_UI_OS_CONSOLEAGEGATEVERIFICATIONDIALOG_ONENABLE_OFFSET UNITYSDK_OFFSET(0x1CFC2F90)
#define MIHOYO_SDK_CONSOLE_UI_OS_CONSOLEAGEGATEVERIFICATIONDIALOG_ONMONTHDROPDOWNVALUECHANGED_OFFSET UNITYSDK_OFFSET(0x1CFC2FE0)
#define MIHOYO_SDK_CONSOLE_UI_OS_CONSOLEAGEGATEVERIFICATIONDIALOG_ONSETHIGHLIGHTEDOBJECT_OFFSET UNITYSDK_OFFSET(0x1CFC3F20)
#define MIHOYO_SDK_CONSOLE_UI_OS_CONSOLEAGEGATEVERIFICATIONDIALOG_ONYEARDROPDOWNVALUECHANGED_OFFSET UNITYSDK_OFFSET(0x1CFC3CE0)
#define MIHOYO_SDK_CONSOLE_UI_OS_CONSOLEAGEGATEVERIFICATIONDIALOG_SETDROPDOWNYEAR_OFFSET UNITYSDK_OFFSET(0x1CFC31F0)
#define MIHOYO_SDK_CONSOLE_UI_OS_CONSOLEAGEGATEVERIFICATIONDIALOG_SETINTERACTABLE_OFFSET UNITYSDK_OFFSET(0x1CFC4630)
#define MIHOYO_SDK_CONSOLE_UI_OS_CONSOLEAGEGATEVERIFICATIONDIALOG_SET_INTERACTABLE_OFFSET UNITYSDK_OFFSET(0x1CFC1000)
#define MIHOYO_SDK_CONSOLE_UI_OS_CONSOLEAGEGATEVERIFICATIONDIALOG_SET_ONCLOSED_OFFSET UNITYSDK_OFFSET(0x1CFC0FE0)
#define MIHOYO_SDK_CONSOLE_UI_OS_CONSOLEAGEGATEVERIFICATIONDIALOG_SET_ONNEXTBUTTONPRESSED_OFFSET UNITYSDK_OFFSET(0x1CFC0FC0)
#define MIHOYO_SDK_CONSOLE_UI_OS_CONSOLEAGEGATEVERIFICATIONDIALOG_SHOW_OFFSET UNITYSDK_OFFSET(0x1CFC4400)
#define MIHOYO_SDK_CONSOLE_UI_OS_CONSOLEAGEGATEVERIFICATIONDIALOG_UPDATENAVIGATION_OFFSET UNITYSDK_OFFSET(0x1CFC2E80)
#define MIHOYO_SDK_CONSOLE_UI_OS_CONSOLEAGEGATEVERIFICATIONDIALOG__ONCLOSEDPRESSED_G__ONCLOSEPRESSEDROUTINE_45_0_OFFSET UNITYSDK_OFFSET(0x1CFC45E0)

namespace MiHoYo::SDK::Console::UI::OS
{
	inline static constexpr unsigned int ConsoleAgeGateVerificationDialog_TypeDefinitionIndex = 9057;

	class ConsoleAgeGateVerificationDialog : public ::MiHoYo::SDK::Console::ConsoleDialogBase
	{
	public:
		::System::Action_3<::MiHoYo::SDK::UI::OS::IAgeGateVerificationDialog*, ::System::Int32, ::System::Int32>* _OnNextButtonPressed_k__BackingField; // 0xC0
		::System::Action_1<::MiHoYo::SDK::UI::OS::IAgeGateVerificationDialog*>* _OnClosed_k__BackingField; // 0xC8
		::MiHoYo::SDK::Console::UI::OS::ConsoleAgeGateVerificationDialog_DropDownInteraction dropDownMonth; // 0xD0
		::MiHoYo::SDK::Console::UI::OS::ConsoleAgeGateVerificationDialog_DropDownInteraction dropDownYear; // 0xE8
		::UnityEngine::UI::Button* confirmBirthdayButton; // 0x100
		::UnityEngine::UI::Image* BtnOutline; // 0x108
		::UnityEngine::GameObject* TipsObject; // 0x110
		::UnityEngine::UI::Text* tips; // 0x118
		::System::Boolean _Interactable_k__BackingField; // 0x120
		static ::MiHoYo::SDK::Console::UI::OS::ConsoleAgeGateVerificationDialog** StaticGet_Instance()
		{
			return (::MiHoYo::SDK::Console::UI::OS::ConsoleAgeGateVerificationDialog**)UnitySDK::FromName("MiHoYo.SDK.Console.UI.OS", "ConsoleAgeGateVerificationDialog")->GetStaticField(0x5EF60);
		}

		// static const ::System::String* PrefabName; // 0x0
		// static const ::System::String* titleTextPath; // 0x0
		// static const ::System::String* descTextPath; // 0x0
		// static const ::System::String* dropDownMonthPath; // 0x0
		// static const ::System::String* dropDownYearPath; // 0x0
		// static const ::System::String* dropDownMonthTextPath; // 0x0
		// static const ::System::String* dropDownYearTextPath; // 0x0
		// static const ::System::String* dropDownMonthLabelPath; // 0x0
		// static const ::System::String* dropDownYearLabelPath; // 0x0
		// static const ::System::String* TipsPath; // 0x0
		// static const ::System::String* TipsTextPath; // 0x0
		// static const ::System::String* TipsOutlinePath; // 0x0
		// static const ::System::String* confirmButtonPath; // 0x0
		// static const ::System::String* confirmButtonTextPath; // 0x0
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_CONSOLE_UI_OS_CONSOLEAGEGATEVERIFICATIONDIALOG_CTOR_OFFSET))(this);
		}

		::System::Action_3<::MiHoYo::SDK::UI::OS::IAgeGateVerificationDialog*, ::System::Int32, ::System::Int32>* get_OnNextButtonPressed()
		{
			return ((::System::Action_3<::MiHoYo::SDK::UI::OS::IAgeGateVerificationDialog*, ::System::Int32, ::System::Int32>*(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_CONSOLE_UI_OS_CONSOLEAGEGATEVERIFICATIONDIALOG_GET_ONNEXTBUTTONPRESSED_OFFSET))(this);
		}

		::System::Void set_OnNextButtonPressed(::System::Action_3<::MiHoYo::SDK::UI::OS::IAgeGateVerificationDialog*, ::System::Int32, ::System::Int32>* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Action_3<::MiHoYo::SDK::UI::OS::IAgeGateVerificationDialog*, ::System::Int32, ::System::Int32>*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_CONSOLE_UI_OS_CONSOLEAGEGATEVERIFICATIONDIALOG_SET_ONNEXTBUTTONPRESSED_OFFSET))(this, a1);
		}

		::System::Action_1<::MiHoYo::SDK::UI::OS::IAgeGateVerificationDialog*>* get_OnClosed()
		{
			return ((::System::Action_1<::MiHoYo::SDK::UI::OS::IAgeGateVerificationDialog*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_CONSOLE_UI_OS_CONSOLEAGEGATEVERIFICATIONDIALOG_GET_ONCLOSED_OFFSET))(this);
		}

		::System::Void set_OnClosed(::System::Action_1<::MiHoYo::SDK::UI::OS::IAgeGateVerificationDialog*>* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Action_1<::MiHoYo::SDK::UI::OS::IAgeGateVerificationDialog*>*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_CONSOLE_UI_OS_CONSOLEAGEGATEVERIFICATIONDIALOG_SET_ONCLOSED_OFFSET))(this, a1);
		}

		::System::Boolean get_Interactable()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_CONSOLE_UI_OS_CONSOLEAGEGATEVERIFICATIONDIALOG_GET_INTERACTABLE_OFFSET))(this);
		}

		::System::Void set_Interactable(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + MIHOYO_SDK_CONSOLE_UI_OS_CONSOLEAGEGATEVERIFICATIONDIALOG_SET_INTERACTABLE_OFFSET))(this, a1);
		}

		::System::Void Awake()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_CONSOLE_UI_OS_CONSOLEAGEGATEVERIFICATIONDIALOG_AWAKE_OFFSET))(this);
		}

		::System::Void OnEnable()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_CONSOLE_UI_OS_CONSOLEAGEGATEVERIFICATIONDIALOG_ONENABLE_OFFSET))(this);
		}

		::System::Void OnMonthDropdownValueChanged(::System::Int32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + MIHOYO_SDK_CONSOLE_UI_OS_CONSOLEAGEGATEVERIFICATIONDIALOG_ONMONTHDROPDOWNVALUECHANGED_OFFSET))(this, a1);
		}

		::System::Void OnYearDropdownValueChanged(::System::Int32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + MIHOYO_SDK_CONSOLE_UI_OS_CONSOLEAGEGATEVERIFICATIONDIALOG_ONYEARDROPDOWNVALUECHANGED_OFFSET))(this, a1);
		}

		::System::Void OnSetHighlightedObject(::UnityEngine::GameObject* a1)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::GameObject*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_CONSOLE_UI_OS_CONSOLEAGEGATEVERIFICATIONDIALOG_ONSETHIGHLIGHTEDOBJECT_OFFSET))(this, a1);
		}

		::System::Void SetDropDownYear()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_CONSOLE_UI_OS_CONSOLEAGEGATEVERIFICATIONDIALOG_SETDROPDOWNYEAR_OFFSET))(this);
		}

		::System::Void UpdateNavigation()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_CONSOLE_UI_OS_CONSOLEAGEGATEVERIFICATIONDIALOG_UPDATENAVIGATION_OFFSET))(this);
		}

		::System::Void NextButtonPressed()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_CONSOLE_UI_OS_CONSOLEAGEGATEVERIFICATIONDIALOG_NEXTBUTTONPRESSED_OFFSET))(this);
		}

		::System::Void HideDialog()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_CONSOLE_UI_OS_CONSOLEAGEGATEVERIFICATIONDIALOG_HIDEDIALOG_OFFSET))(this);
		}

		static ::System::Void Show()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + MIHOYO_SDK_CONSOLE_UI_OS_CONSOLEAGEGATEVERIFICATIONDIALOG_SHOW_OFFSET))();
		}

		static ::System::Void Hide()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + MIHOYO_SDK_CONSOLE_UI_OS_CONSOLEAGEGATEVERIFICATIONDIALOG_HIDE_OFFSET))();
		}

		::System::Void OnClosedPressed()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_CONSOLE_UI_OS_CONSOLEAGEGATEVERIFICATIONDIALOG_ONCLOSEDPRESSED_OFFSET))(this);
		}

		::System::Void SetInteractable(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + MIHOYO_SDK_CONSOLE_UI_OS_CONSOLEAGEGATEVERIFICATIONDIALOG_SETINTERACTABLE_OFFSET))(this, a1);
		}

		static ::Il2CppArray<::System::Int32>* MonthsInYearArray()
		{
			return ((::Il2CppArray<::System::Int32>*(*)())((::PBYTE)hIl2Cpp + MIHOYO_SDK_CONSOLE_UI_OS_CONSOLEAGEGATEVERIFICATIONDIALOG_MONTHSINYEARARRAY_OFFSET))();
		}

		::System::Collections::IEnumerator* _OnClosedPressed_g__OnClosePressedRoutine_45_0()
		{
			return ((::System::Collections::IEnumerator*(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_CONSOLE_UI_OS_CONSOLEAGEGATEVERIFICATIONDIALOG__ONCLOSEDPRESSED_G__ONCLOSEPRESSEDROUTINE_45_0_OFFSET))(this);
		}

	};
}
