#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MiHoYo/SDK/Console/ConsoleDialogBase.h"
namespace MiHoYo::SDK::Console { class ConsoleBindMobileDialog; }
namespace MiHoYo::SDK::Win { class QRCode; }
namespace System { class Action; }
namespace System { class String; }
namespace UnityEngine { class GameObject; }

#define MIHOYO_SDK_CONSOLE_CONSOLEBINDMOBILEDIALOG_AWAKE_OFFSET UNITYSDK_OFFSET(0x1CE13E00)
#define MIHOYO_SDK_CONSOLE_CONSOLEBINDMOBILEDIALOG_CANCELDIALOG_OFFSET UNITYSDK_OFFSET(0x1CE15320)
#define MIHOYO_SDK_CONSOLE_CONSOLEBINDMOBILEDIALOG_CTOR_OFFSET UNITYSDK_OFFSET(0x1CE15370)
#define MIHOYO_SDK_CONSOLE_CONSOLEBINDMOBILEDIALOG_HIDE_OFFSET UNITYSDK_OFFSET(0x1CE13B20)
#define MIHOYO_SDK_CONSOLE_CONSOLEBINDMOBILEDIALOG_INVALIDATEQRCODE_OFFSET UNITYSDK_OFFSET(0x1CE13D50)
#define MIHOYO_SDK_CONSOLE_CONSOLEBINDMOBILEDIALOG_LOADINGQRCODE_OFFSET UNITYSDK_OFFSET(0x1CE13BC0)
#define MIHOYO_SDK_CONSOLE_CONSOLEBINDMOBILEDIALOG_ONDESTROY_OFFSET UNITYSDK_OFFSET(0x1CE152B0)
#define MIHOYO_SDK_CONSOLE_CONSOLEBINDMOBILEDIALOG_ONENABLE_OFFSET UNITYSDK_OFFSET(0x1CE14CA0)
#define MIHOYO_SDK_CONSOLE_CONSOLEBINDMOBILEDIALOG_ONREFRESHQRIMAGE_OFFSET UNITYSDK_OFFSET(0x1CE151C0)
#define MIHOYO_SDK_CONSOLE_CONSOLEBINDMOBILEDIALOG_SETINTERACTABLE_OFFSET UNITYSDK_OFFSET(0x1CE13B90)
#define MIHOYO_SDK_CONSOLE_CONSOLEBINDMOBILEDIALOG_SETQRIMAGE_OFFSET UNITYSDK_OFFSET(0x1CE13C40)
#define MIHOYO_SDK_CONSOLE_CONSOLEBINDMOBILEDIALOG_SHOW_OFFSET UNITYSDK_OFFSET(0x1CE13A20)
#define MIHOYO_SDK_CONSOLE_CONSOLEBINDMOBILEDIALOG_SKIPDIALOG_OFFSET UNITYSDK_OFFSET(0x1CE152D0)
#define MIHOYO_SDK_CONSOLE_CONSOLEBINDMOBILEDIALOG_START_OFFSET UNITYSDK_OFFSET(0x1CE14CB0)
#define MIHOYO_SDK_CONSOLE_CONSOLEBINDMOBILEDIALOG_UPDATE_OFFSET UNITYSDK_OFFSET(0x1CE14CC0)

namespace MiHoYo::SDK::Console
{
	inline static constexpr unsigned int ConsoleBindMobileDialog_TypeDefinitionIndex = 8973;

	class ConsoleBindMobileDialog : public ::MiHoYo::SDK::Console::ConsoleDialogBase
	{
	public:
		::System::Action* OnRefreshQRCodeClicked; // 0xC0
		::System::Action* OnBindingCancel; // 0xC8
		::System::Action* OnBindingSkip; // 0xD0
		::MiHoYo::SDK::Win::QRCode* QRCodeComponent; // 0xD8
		::UnityEngine::GameObject* QRImageObj; // 0xE0
		::UnityEngine::GameObject* QRLoadingPanelObj; // 0xE8
		::UnityEngine::GameObject* QRExpiredPanelObj; // 0xF0
		::UnityEngine::GameObject* QRStatusTipsTextObj; // 0xF8
		::System::Boolean Interactable; // 0x100
		::System::Boolean IsQRCodeExpired; // 0x101
		::System::Byte _padding0[0x6];
		::System::String* showName; // 0x108
		static ::MiHoYo::SDK::Console::ConsoleBindMobileDialog** StaticGet_Instance()
		{
			return (::MiHoYo::SDK::Console::ConsoleBindMobileDialog**)UnitySDK::FromName("MiHoYo.SDK.Console", "ConsoleBindMobileDialog")->GetStaticField(0x55720);
		}

		// static const ::System::String* PrefabName; // 0x0
		// static const ::System::String* TitleTextPath; // 0x0
		// static const ::System::String* DescTextPath; // 0x0
		// static const ::System::String* QRImagePath; // 0x0
		// static const ::System::String* QRLoadingPanelPath; // 0x0
		// static const ::System::String* QRExpiredPanelPath; // 0x0
		// static const ::System::String* QRRefreshTipsTextPath; // 0x0
		// static const ::System::String* QRStatusTipsTextPath; // 0x0
		// static const ::System::String* ScanInstructionTextPath; // 0x0
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_CONSOLE_CONSOLEBINDMOBILEDIALOG_CTOR_OFFSET))(this);
		}

		static ::System::Void Show(::System::String* a1)
		{
			return ((::System::Void(*)(::System::String*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_CONSOLE_CONSOLEBINDMOBILEDIALOG_SHOW_OFFSET))(a1);
		}

		static ::System::Void Hide()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + MIHOYO_SDK_CONSOLE_CONSOLEBINDMOBILEDIALOG_HIDE_OFFSET))();
		}

		static ::System::Void SetInteractable(::System::Boolean a1)
		{
			return ((::System::Void(*)(::System::Boolean))((::PBYTE)hIl2Cpp + MIHOYO_SDK_CONSOLE_CONSOLEBINDMOBILEDIALOG_SETINTERACTABLE_OFFSET))(a1);
		}

		static ::System::Void LoadingQRCode()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + MIHOYO_SDK_CONSOLE_CONSOLEBINDMOBILEDIALOG_LOADINGQRCODE_OFFSET))();
		}

		static ::System::Void SetQRImage(::System::String* a1)
		{
			return ((::System::Void(*)(::System::String*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_CONSOLE_CONSOLEBINDMOBILEDIALOG_SETQRIMAGE_OFFSET))(a1);
		}

		static ::System::Void InvalidateQRCode()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + MIHOYO_SDK_CONSOLE_CONSOLEBINDMOBILEDIALOG_INVALIDATEQRCODE_OFFSET))();
		}

		::System::Void Awake()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_CONSOLE_CONSOLEBINDMOBILEDIALOG_AWAKE_OFFSET))(this);
		}

		::System::Void OnEnable()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_CONSOLE_CONSOLEBINDMOBILEDIALOG_ONENABLE_OFFSET))(this);
		}

		::System::Void Start()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_CONSOLE_CONSOLEBINDMOBILEDIALOG_START_OFFSET))(this);
		}

		::System::Void Update()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_CONSOLE_CONSOLEBINDMOBILEDIALOG_UPDATE_OFFSET))(this);
		}

		::System::Void OnDestroy()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_CONSOLE_CONSOLEBINDMOBILEDIALOG_ONDESTROY_OFFSET))(this);
		}

		::System::Void OnRefreshQRImage()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_CONSOLE_CONSOLEBINDMOBILEDIALOG_ONREFRESHQRIMAGE_OFFSET))(this);
		}

		::System::Void SkipDialog()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_CONSOLE_CONSOLEBINDMOBILEDIALOG_SKIPDIALOG_OFFSET))(this);
		}

		::System::Void CancelDialog()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_CONSOLE_CONSOLEBINDMOBILEDIALOG_CANCELDIALOG_OFFSET))(this);
		}

	};
}
