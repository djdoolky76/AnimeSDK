#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/MonoSpineStoryController_AsideDialog.h"
#include "unitysdk/UnityEngine/MonoBehaviour.h"
#include "unitysdk/RPG/Client/MonoSpineStoryController_Anchor.h"
#include "unitysdk/RPG/Client/MonoSpineStoryController_Dialog.h"
class LHIKHOIJELB;
namespace RPG::Client { class CustomButton; }
namespace RPG::Client { class MonoSpineStoryController; }
namespace System { class Action; }
namespace System { class Object; }
namespace System { class String; }
namespace UnityEngine { class Animation; }
namespace UnityEngine { class RectTransform; }

#define RPG_CLIENT_MONOSPINESTORYCONTROLLER_AWAKE_OFFSET UNITYSDK_OFFSET(0x1D27CE40)
#define RPG_CLIENT_MONOSPINESTORYCONTROLLER_CLOSEALLDIALOG_OFFSET UNITYSDK_OFFSET(0x1D27C030)
#define RPG_CLIENT_MONOSPINESTORYCONTROLLER_CTOR_OFFSET UNITYSDK_OFFSET(0x1D27D430)
#define RPG_CLIENT_MONOSPINESTORYCONTROLLER_DESTROYSTORY_OFFSET UNITYSDK_OFFSET(0x1D27BBA0)
#define RPG_CLIENT_MONOSPINESTORYCONTROLLER_EXITSTORY_OFFSET UNITYSDK_OFFSET(0x1D27BCE0)
#define RPG_CLIENT_MONOSPINESTORYCONTROLLER_FINDANCHOR_OFFSET UNITYSDK_OFFSET(0x1D27BD90)
#define RPG_CLIENT_MONOSPINESTORYCONTROLLER_FINDDIALOG_OFFSET UNITYSDK_OFFSET(0x1D27BED0)
#define RPG_CLIENT_MONOSPINESTORYCONTROLLER_GET_CURRENTBG_OFFSET UNITYSDK_OFFSET(0x1D27D3D0)
#define RPG_CLIENT_MONOSPINESTORYCONTROLLER_GET_CURRENTFRONT_OFFSET UNITYSDK_OFFSET(0x1D27D3F0)
#define RPG_CLIENT_MONOSPINESTORYCONTROLLER_GET_INSTANCE_OFFSET UNITYSDK_OFFSET(0x1D27B9D0)
#define RPG_CLIENT_MONOSPINESTORYCONTROLLER_GET_STORYCONTROLLER_OFFSET UNITYSDK_OFFSET(0x1D27D410)
#define RPG_CLIENT_MONOSPINESTORYCONTROLLER_ONDESTROY_OFFSET UNITYSDK_OFFSET(0x1D27D260)
#define RPG_CLIENT_MONOSPINESTORYCONTROLLER_ONDISABLE_OFFSET UNITYSDK_OFFSET(0x1D27CF80)
#define RPG_CLIENT_MONOSPINESTORYCONTROLLER_ONENABLE_OFFSET UNITYSDK_OFFSET(0x1D27CE90)
#define RPG_CLIENT_MONOSPINESTORYCONTROLLER_PLAYCLOCKPARKSTORY_OFFSET UNITYSDK_OFFSET(0x1D27B9F0)
#define RPG_CLIENT_MONOSPINESTORYCONTROLLER_SET_CURRENTBG_OFFSET UNITYSDK_OFFSET(0x1D27D3E0)
#define RPG_CLIENT_MONOSPINESTORYCONTROLLER_SET_CURRENTFRONT_OFFSET UNITYSDK_OFFSET(0x1D27D400)
#define RPG_CLIENT_MONOSPINESTORYCONTROLLER_SET_INSTANCE_OFFSET UNITYSDK_OFFSET(0x1D27B9E0)
#define RPG_CLIENT_MONOSPINESTORYCONTROLLER_SET_STORYCONTROLLER_OFFSET UNITYSDK_OFFSET(0x1D27D420)
#define RPG_CLIENT_MONOSPINESTORYCONTROLLER_SKIPSTORY_OFFSET UNITYSDK_OFFSET(0x1D27BD30)
#define RPG_CLIENT_MONOSPINESTORYCONTROLLER_SWITCHBG_OFFSET UNITYSDK_OFFSET(0x1D27C2E0)
#define RPG_CLIENT_MONOSPINESTORYCONTROLLER_SWITCHFRONT_OFFSET UNITYSDK_OFFSET(0x1D27C890)
#define RPG_CLIENT_MONOSPINESTORYCONTROLLER_UPDATE_OFFSET UNITYSDK_OFFSET(0x1D27D2B0)
#define RPG_CLIENT_MONOSPINESTORYCONTROLLER__ONCLICKBUTTON_OFFSET UNITYSDK_OFFSET(0x1D27D310)
#define RPG_CLIENT_MONOSPINESTORYCONTROLLER__ONSTORYFINISH_OFFSET UNITYSDK_OFFSET(0x1D27D370)

namespace RPG::Client
{
	inline static constexpr unsigned int MonoSpineStoryController_TypeDefinitionIndex = 61573;

	class MonoSpineStoryController : public ::UnityEngine::MonoBehaviour
	{
	public:
		::Il2CppArray<::System::Object*>* anchors; // 0x18
		::Il2CppArray<::System::Object*>* dialogs; // 0x20
		::RPG::Client::MonoSpineStoryController_AsideDialog asideDialog; // 0x28
		::RPG::Client::CustomButton* clickButton; // 0x50
		::UnityEngine::Animation* backgroundAnimation; // 0x58
		::UnityEngine::Animation* backgroundLoopAnimation; // 0x60
		::UnityEngine::Animation* backgroundFrontAnimation; // 0x68
		::UnityEngine::RectTransform* sourceBG; // 0x70
		::UnityEngine::RectTransform* sourceFront; // 0x78
		::UnityEngine::RectTransform* _CurrentBG_k__BackingField; // 0x80
		::UnityEngine::RectTransform* _CurrentFront_k__BackingField; // 0x88
		::LHIKHOIJELB* _StoryController_k__BackingField; // 0x90
		::System::Action* OnFinish; // 0x98
		static ::RPG::Client::MonoSpineStoryController** StaticGet__Instance_k__BackingField()
		{
			return (::RPG::Client::MonoSpineStoryController**)UnitySDK::FromName("RPG.Client", "MonoSpineStoryController")->GetStaticField(0x19A10);
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOSPINESTORYCONTROLLER_CTOR_OFFSET))(this);
		}

		static ::RPG::Client::MonoSpineStoryController* get_Instance()
		{
			return ((::RPG::Client::MonoSpineStoryController*(*)())((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOSPINESTORYCONTROLLER_GET_INSTANCE_OFFSET))();
		}

		static ::System::Void set_Instance(::RPG::Client::MonoSpineStoryController* a1)
		{
			return ((::System::Void(*)(::RPG::Client::MonoSpineStoryController*))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOSPINESTORYCONTROLLER_SET_INSTANCE_OFFSET))(a1);
		}

		::System::Void PlayClockParkStory(::System::String* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOSPINESTORYCONTROLLER_PLAYCLOCKPARKSTORY_OFFSET))(this, a1);
		}

		::System::Void ExitStory()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOSPINESTORYCONTROLLER_EXITSTORY_OFFSET))(this);
		}

		::System::Void SkipStory()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOSPINESTORYCONTROLLER_SKIPSTORY_OFFSET))(this);
		}

		::System::Boolean FindAnchor(::System::String* a1, ::RPG::Client::MonoSpineStoryController_Anchor a2)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::String*, ::RPG::Client::MonoSpineStoryController_Anchor))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOSPINESTORYCONTROLLER_FINDANCHOR_OFFSET))(this, a1, a2);
		}

		::System::Boolean FindDialog(::System::String* a1, ::RPG::Client::MonoSpineStoryController_Dialog a2)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::String*, ::RPG::Client::MonoSpineStoryController_Dialog))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOSPINESTORYCONTROLLER_FINDDIALOG_OFFSET))(this, a1, a2);
		}

		::System::Void CloseAllDialog()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOSPINESTORYCONTROLLER_CLOSEALLDIALOG_OFFSET))(this);
		}

		::System::Void SwitchBG(::System::String* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOSPINESTORYCONTROLLER_SWITCHBG_OFFSET))(this, a1);
		}

		::System::Void SwitchFront(::System::String* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOSPINESTORYCONTROLLER_SWITCHFRONT_OFFSET))(this, a1);
		}

		::System::Void Awake()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOSPINESTORYCONTROLLER_AWAKE_OFFSET))(this);
		}

		::System::Void OnEnable()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOSPINESTORYCONTROLLER_ONENABLE_OFFSET))(this);
		}

		::System::Void OnDisable()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOSPINESTORYCONTROLLER_ONDISABLE_OFFSET))(this);
		}

		::System::Void OnDestroy()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOSPINESTORYCONTROLLER_ONDESTROY_OFFSET))(this);
		}

		::System::Void Update()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOSPINESTORYCONTROLLER_UPDATE_OFFSET))(this);
		}

		::System::Void DestroyStory()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOSPINESTORYCONTROLLER_DESTROYSTORY_OFFSET))(this);
		}

		::System::Void _OnClickButton()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOSPINESTORYCONTROLLER__ONCLICKBUTTON_OFFSET))(this);
		}

		::System::Void _OnStoryFinish()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOSPINESTORYCONTROLLER__ONSTORYFINISH_OFFSET))(this);
		}

		::UnityEngine::RectTransform* get_CurrentBG()
		{
			return ((::UnityEngine::RectTransform*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOSPINESTORYCONTROLLER_GET_CURRENTBG_OFFSET))(this);
		}

		::System::Void set_CurrentBG(::UnityEngine::RectTransform* a1)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::RectTransform*))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOSPINESTORYCONTROLLER_SET_CURRENTBG_OFFSET))(this, a1);
		}

		::UnityEngine::RectTransform* get_CurrentFront()
		{
			return ((::UnityEngine::RectTransform*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOSPINESTORYCONTROLLER_GET_CURRENTFRONT_OFFSET))(this);
		}

		::System::Void set_CurrentFront(::UnityEngine::RectTransform* a1)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::RectTransform*))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOSPINESTORYCONTROLLER_SET_CURRENTFRONT_OFFSET))(this, a1);
		}

		::LHIKHOIJELB* get_StoryController()
		{
			return ((::LHIKHOIJELB*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOSPINESTORYCONTROLLER_GET_STORYCONTROLLER_OFFSET))(this);
		}

		::System::Void set_StoryController(::LHIKHOIJELB* a1)
		{
			return ((::System::Void(*)(::PVOID, ::LHIKHOIJELB*))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOSPINESTORYCONTROLLER_SET_STORYCONTROLLER_OFFSET))(this, a1);
		}

	};
}
