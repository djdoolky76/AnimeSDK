#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Sofa/BaseSofaWindow.h"
class MDOBEOFHBMK;
class OBJANKHLNGO;
namespace RPG::Client { class AnimatorButton; }
namespace RPG::Client { class LocalizedText; }
namespace RPG::Client::LimaoNews { class LimaoNewsIssueHintPopupViewModel; }
namespace UnityEngine { class Transform; }

#define RPG_CLIENT_LIMAONEWS_LIMAONEWSISSUEHINTPOPUPWINDOWS_CTOR_OFFSET UNITYSDK_OFFSET(0xD3B5030)
#define RPG_CLIENT_LIMAONEWS_LIMAONEWSISSUEHINTPOPUPWINDOWS_GET__VIEWMODEL_OFFSET UNITYSDK_OFFSET(0xD3B6290)
#define RPG_CLIENT_LIMAONEWS_LIMAONEWSISSUEHINTPOPUPWINDOWS__ONBINDVIEWMODEL_OFFSET UNITYSDK_OFFSET(0xD3B57B0)
#define RPG_CLIENT_LIMAONEWS_LIMAONEWSISSUEHINTPOPUPWINDOWS__ONEXITFINALSTEP_OFFSET UNITYSDK_OFFSET(0xD3B6340)
#define RPG_CLIENT_LIMAONEWS_LIMAONEWSISSUEHINTPOPUPWINDOWS__ONINITIALIZECOMPONENT_OFFSET UNITYSDK_OFFSET(0xD3B5110)
#define RPG_CLIENT_LIMAONEWS_LIMAONEWSISSUEHINTPOPUPWINDOWS__ONLIMAONEWSISSUEHINTPOPUPMESSAGE_OFFSET UNITYSDK_OFFSET(0xD3B63D0)
#define RPG_CLIENT_LIMAONEWS_LIMAONEWSISSUEHINTPOPUPWINDOWS__SUBSCRIBEMESSAGE_OFFSET UNITYSDK_OFFSET(0xD3B56F0)

namespace RPG::Client::LimaoNews
{
	class LimaoNewsIssueHintPopupWindows : public ::Sofa::BaseSofaWindow
	{
	public:
		::UnityEngine::Transform* _BtnPanel; // 0x48
		::RPG::Client::AnimatorButton* _BtnEmptyClose; // 0x50
		::RPG::Client::LocalizedText* _ContentText; // 0x58
		::RPG::Client::LocalizedText* _SpeakText; // 0x60
		::RPG::Client::AnimatorButton* _BtnClose; // 0x68
		::RPG::Client::LocalizedText* _CancelText; // 0x70
		::RPG::Client::LocalizedText* _ConfirmText; // 0x78
		::RPG::Client::AnimatorButton* _BtnConfirm; // 0x80
		::OBJANKHLNGO* _Messenger; // 0x88
		::System::Void _ctor(::RPG::Client::LimaoNews::LimaoNewsIssueHintPopupViewModel* a1, ::OBJANKHLNGO* a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::LimaoNews::LimaoNewsIssueHintPopupViewModel*, ::OBJANKHLNGO*))((::PBYTE)hIl2Cpp + RPG_CLIENT_LIMAONEWS_LIMAONEWSISSUEHINTPOPUPWINDOWS_CTOR_OFFSET))(this, a1, a2);
		}

		::System::Void _OnInitializeComponent()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_LIMAONEWS_LIMAONEWSISSUEHINTPOPUPWINDOWS__ONINITIALIZECOMPONENT_OFFSET))(this);
		}

		::System::Void _OnBindViewModel()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_LIMAONEWS_LIMAONEWSISSUEHINTPOPUPWINDOWS__ONBINDVIEWMODEL_OFFSET))(this);
		}

		::System::Void _OnExitFinalStep()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_LIMAONEWS_LIMAONEWSISSUEHINTPOPUPWINDOWS__ONEXITFINALSTEP_OFFSET))(this);
		}

		::System::Void _SubscribeMessage()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_LIMAONEWS_LIMAONEWSISSUEHINTPOPUPWINDOWS__SUBSCRIBEMESSAGE_OFFSET))(this);
		}

		::System::Void _OnLimaoNewsIssueHintPopupMessage(::MDOBEOFHBMK* a1)
		{
			return ((::System::Void(*)(::PVOID, ::MDOBEOFHBMK*))((::PBYTE)hIl2Cpp + RPG_CLIENT_LIMAONEWS_LIMAONEWSISSUEHINTPOPUPWINDOWS__ONLIMAONEWSISSUEHINTPOPUPMESSAGE_OFFSET))(this, a1);
		}

		::RPG::Client::LimaoNews::LimaoNewsIssueHintPopupViewModel* get__ViewModel()
		{
			return ((::RPG::Client::LimaoNews::LimaoNewsIssueHintPopupViewModel*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_LIMAONEWS_LIMAONEWSISSUEHINTPOPUPWINDOWS_GET__VIEWMODEL_OFFSET))(this);
		}

	};
}
