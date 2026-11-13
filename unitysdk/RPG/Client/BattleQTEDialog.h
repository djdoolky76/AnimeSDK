#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/UIController.h"
class EOOKHIMEPLB;
namespace RPG::Client { class CustomButton; }
namespace System { class Object; }
namespace System { class String; }
namespace UnityEngine { class Coroutine; }
namespace UnityEngine { class GameObject; }
namespace UnityEngine { class Transform; }

#define RPG_CLIENT_BATTLEQTEDIALOG_AUTOBINDCALLBACK_OFFSET UNITYSDK_OFFSET(0x1B1F5080)
#define RPG_CLIENT_BATTLEQTEDIALOG_AUTOREMOVECALLBACK_OFFSET UNITYSDK_OFFSET(0x1B1F5170)
#define RPG_CLIENT_BATTLEQTEDIALOG_CTOR_OFFSET UNITYSDK_OFFSET(0x1B1F4990)
#define RPG_CLIENT_BATTLEQTEDIALOG_VIEWPREFABPATH_OFFSET UNITYSDK_OFFSET(0x1B1F42E0)
#define RPG_CLIENT_BATTLEQTEDIALOG__CUSTOMBINDVIEW_OFFSET UNITYSDK_OFFSET(0x1B1F4350)
#define RPG_CLIENT_BATTLEQTEDIALOG__GETCONTAINER_OFFSET UNITYSDK_OFFSET(0x1B1F4B90)
#define RPG_CLIENT_BATTLEQTEDIALOG__ONQTEBUTTONCLICKED_OFFSET UNITYSDK_OFFSET(0x1B1F4E20)
#define RPG_CLIENT_BATTLEQTEDIALOG__ONQTEFINISH_OFFSET UNITYSDK_OFFSET(0x1B1F4DD0)
#define RPG_CLIENT_BATTLEQTEDIALOG__ONQTEFINISH_WRAP_OFFSET UNITYSDK_OFFSET(0x1B1F4FC0)
#define RPG_CLIENT_BATTLEQTEDIALOG__ONQTEPANELLOADED_OFFSET UNITYSDK_OFFSET(0x1B1F44A0)
#define RPG_CLIENT_BATTLEQTEDIALOG__ONSTARTEXIT_OFFSET UNITYSDK_OFFSET(0x1B1F4CF0)
#define RPG_CLIENT_BATTLEQTEDIALOG__SETUPBUTTON_OFFSET UNITYSDK_OFFSET(0x1B1F4510)
#define RPG_CLIENT_BATTLEQTEDIALOG__SETUPDELAY_OFFSET UNITYSDK_OFFSET(0x1B1F4C00)
#define RPG_CLIENT_BATTLEQTEDIALOG__SETUPFOLLOWPOSITION_OFFSET UNITYSDK_OFFSET(0x1B1F46E0)
#define RPG_CLIENT_BATTLEQTEDIALOG__SETUPICON_OFFSET UNITYSDK_OFFSET(0x1B1F4620)
#define RPG_CLIENT_BATTLEQTEDIALOG__SETUPVIEW_OFFSET UNITYSDK_OFFSET(0x1B1F4A10)
#define RPG_CLIENT_BATTLEQTEDIALOG__STOPDELAYCOROUTINE_OFFSET UNITYSDK_OFFSET(0x1B1F4D70)
#define RPG_CLIENT_BATTLEQTEDIALOG___SETUPDELAY_B__14_0_OFFSET UNITYSDK_OFFSET(0x1B1F5240)

namespace RPG::Client
{
	inline static constexpr unsigned int BattleQTEDialog_TypeDefinitionIndex = 74386;

	class BattleQTEDialog : public ::RPG::Client::UIController
	{
	public:
		::EOOKHIMEPLB* _QTEData; // 0x190
		::UnityEngine::Coroutine* _DelayCoroutine; // 0x198
		::UnityEngine::GameObject* _QTENode; // 0x1A0
		::UnityEngine::Transform* _FixedPosContainer; // 0x1A8
		::RPG::Client::CustomButton* _QTEButton; // 0x1B0
		::UnityEngine::Transform* _FollowPosContainer; // 0x1B8
		::System::Boolean _CanInteract; // 0x1C0
		::System::Byte _padding0[0x7];
		::System::UInt64 _ConfirmTimeStamp; // 0x1C8
		// static const ::System::String* _DEFAULT_QTE_BUTTON_PATH; // 0x0
		// static const ::System::Object _CONFIRM_DELAY; // 0x0
		::System::Void _ctor(::EOOKHIMEPLB* a1)
		{
			return ((::System::Void(*)(::PVOID, ::EOOKHIMEPLB*))((::PBYTE)hIl2Cpp + RPG_CLIENT_BATTLEQTEDIALOG_CTOR_OFFSET))(this, a1);
		}

		::System::String* ViewPrefabPath()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_BATTLEQTEDIALOG_VIEWPREFABPATH_OFFSET))(this);
		}

		::System::Void _CustomBindView()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_BATTLEQTEDIALOG__CUSTOMBINDVIEW_OFFSET))(this);
		}

		::System::Void _OnQTEPanelLoaded(::UnityEngine::GameObject* a1)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::GameObject*))((::PBYTE)hIl2Cpp + RPG_CLIENT_BATTLEQTEDIALOG__ONQTEPANELLOADED_OFFSET))(this, a1);
		}

		::System::Void _SetupButton()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_BATTLEQTEDIALOG__SETUPBUTTON_OFFSET))(this);
		}

		::System::Void _SetupIcon()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_BATTLEQTEDIALOG__SETUPICON_OFFSET))(this);
		}

		::System::Void _SetupFollowPosition()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_BATTLEQTEDIALOG__SETUPFOLLOWPOSITION_OFFSET))(this);
		}

		::System::Void _SetupView()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_BATTLEQTEDIALOG__SETUPVIEW_OFFSET))(this);
		}

		::System::Void _OnStartExit()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_BATTLEQTEDIALOG__ONSTARTEXIT_OFFSET))(this);
		}

		::UnityEngine::Transform* _GetContainer()
		{
			return ((::UnityEngine::Transform*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_BATTLEQTEDIALOG__GETCONTAINER_OFFSET))(this);
		}

		::System::Void _SetupDelay()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_BATTLEQTEDIALOG__SETUPDELAY_OFFSET))(this);
		}

		::System::Void _StopDelayCoroutine()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_BATTLEQTEDIALOG__STOPDELAYCOROUTINE_OFFSET))(this);
		}

		::System::Void _OnQTEFinish()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_BATTLEQTEDIALOG__ONQTEFINISH_OFFSET))(this);
		}

		::System::Void _OnQTEButtonClicked(::System::Object* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + RPG_CLIENT_BATTLEQTEDIALOG__ONQTEBUTTONCLICKED_OFFSET))(this, a1);
		}

		::System::Void _OnQTEFinish_Wrap(::System::Object* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + RPG_CLIENT_BATTLEQTEDIALOG__ONQTEFINISH_WRAP_OFFSET))(this, a1);
		}

		::System::Void AutoBindCallback()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_BATTLEQTEDIALOG_AUTOBINDCALLBACK_OFFSET))(this);
		}

		::System::Void AutoRemoveCallback()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_BATTLEQTEDIALOG_AUTOREMOVECALLBACK_OFFSET))(this);
		}

		::System::Void __SetupDelay_b__14_0()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_BATTLEQTEDIALOG___SETUPDELAY_B__14_0_OFFSET))(this);
		}

	};
}
