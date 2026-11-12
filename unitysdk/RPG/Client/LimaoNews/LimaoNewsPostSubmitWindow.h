#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Sofa/BaseSofaWindow.h"
class BNIPDPNMLPA;
class OBJANKHLNGO;
namespace RPG::Client { class AnimatorButton; }
namespace RPG::Client { class MonoAnimationTrigger; }
namespace RPG::Client::LimaoNews { class LimaoNewsInteractionControl; }
namespace RPG::Client::LimaoNews { class LimaoNewsPostSubmitViewModel; }
namespace RPG::Client::LimaoNews { class LimaoNewsSubmitLevelControl; }
namespace System { class String; }
namespace UnityEngine::UI { class Text; }

#define RPG_CLIENT_LIMAONEWS_LIMAONEWSPOSTSUBMITWINDOW_CTOR_OFFSET UNITYSDK_OFFSET(0xDE143E0)
#define RPG_CLIENT_LIMAONEWS_LIMAONEWSPOSTSUBMITWINDOW_GET__VIEWMODEL_OFFSET UNITYSDK_OFFSET(0xDE14E70)
#define RPG_CLIENT_LIMAONEWS_LIMAONEWSPOSTSUBMITWINDOW__ONANIMATIONTRIGGER_OFFSET UNITYSDK_OFFSET(0xDE15020)
#define RPG_CLIENT_LIMAONEWS_LIMAONEWSPOSTSUBMITWINDOW__ONBINDVIEWMODEL_OFFSET UNITYSDK_OFFSET(0xDE14860)
#define RPG_CLIENT_LIMAONEWS_LIMAONEWSPOSTSUBMITWINDOW__ONEXITFINALSTEP_OFFSET UNITYSDK_OFFSET(0xDE14F20)
#define RPG_CLIENT_LIMAONEWS_LIMAONEWSPOSTSUBMITWINDOW__ONINITIALIZECOMPONENT_OFFSET UNITYSDK_OFFSET(0xDE144C0)
#define RPG_CLIENT_LIMAONEWS_LIMAONEWSPOSTSUBMITWINDOW__ONLIMAONEWSWEBSITESTATECHANGEMESSAGE_OFFSET UNITYSDK_OFFSET(0xDE14F80)

namespace RPG::Client::LimaoNews
{
	inline static constexpr unsigned int LimaoNewsPostSubmitWindow_TypeDefinitionIndex = 83192;

	class LimaoNewsPostSubmitWindow : public ::Sofa::BaseSofaWindow
	{
	public:
		::RPG::Client::MonoAnimationTrigger* _MonoAnimationTriggerRoot; // 0x48
		::OBJANKHLNGO* _Messenger; // 0x50
		::RPG::Client::LimaoNews::LimaoNewsSubmitLevelControl* _CurrentLevelControl; // 0x58
		::UnityEngine::UI::Text* _PanelTitle; // 0x60
		::UnityEngine::UI::Text* _PostTitle; // 0x68
		::RPG::Client::AnimatorButton* _BtnClose; // 0x70
		::RPG::Client::LimaoNews::LimaoNewsInteractionControl* _InteractionControl; // 0x78
		::System::Void _ctor(::RPG::Client::LimaoNews::LimaoNewsPostSubmitViewModel* a1, ::OBJANKHLNGO* a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::LimaoNews::LimaoNewsPostSubmitViewModel*, ::OBJANKHLNGO*))((::PBYTE)hIl2Cpp + RPG_CLIENT_LIMAONEWS_LIMAONEWSPOSTSUBMITWINDOW_CTOR_OFFSET))(this, a1, a2);
		}

		::System::Void _OnInitializeComponent()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_LIMAONEWS_LIMAONEWSPOSTSUBMITWINDOW__ONINITIALIZECOMPONENT_OFFSET))(this);
		}

		::System::Void _OnBindViewModel()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_LIMAONEWS_LIMAONEWSPOSTSUBMITWINDOW__ONBINDVIEWMODEL_OFFSET))(this);
		}

		::System::Void _OnExitFinalStep()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_LIMAONEWS_LIMAONEWSPOSTSUBMITWINDOW__ONEXITFINALSTEP_OFFSET))(this);
		}

		::System::Void _OnLimaoNewsWebsiteStateChangeMessage(::BNIPDPNMLPA* a1)
		{
			return ((::System::Void(*)(::PVOID, ::BNIPDPNMLPA*))((::PBYTE)hIl2Cpp + RPG_CLIENT_LIMAONEWS_LIMAONEWSPOSTSUBMITWINDOW__ONLIMAONEWSWEBSITESTATECHANGEMESSAGE_OFFSET))(this, a1);
		}

		::System::Void _OnAnimationTrigger(::System::String* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + RPG_CLIENT_LIMAONEWS_LIMAONEWSPOSTSUBMITWINDOW__ONANIMATIONTRIGGER_OFFSET))(this, a1);
		}

		::RPG::Client::LimaoNews::LimaoNewsPostSubmitViewModel* get__ViewModel()
		{
			return ((::RPG::Client::LimaoNews::LimaoNewsPostSubmitViewModel*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_LIMAONEWS_LIMAONEWSPOSTSUBMITWINDOW_GET__VIEWMODEL_OFFSET))(this);
		}

	};
}
