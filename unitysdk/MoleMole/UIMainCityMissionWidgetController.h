#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Foundation/Coroutine/CoroutineHandle.h"
#include "unitysdk/MoleMole/UIWidgetController.h"

class CEJMKJEAGFD;
namespace DG::Tweening { class Tweener; }
namespace MoleMole { class UIControlReference; }
namespace MoleMole { class UIControllerContextBase; }
namespace System { class Action; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace UnityEngine { class RectTransform; }
namespace UnityEngine::UI { class VerticalLayoutGroup; }

#define MOLEMOLE_UIMAINCITYMISSIONWIDGETCONTROLLER_EHEKPOGPIEM_OFFSET UNITYSDK_OFFSET(0x173FB140)
#define MOLEMOLE_UIMAINCITYMISSIONWIDGETCONTROLLER_JHKODJJCMLF_OFFSET UNITYSDK_OFFSET(0x173FA7B0)
#define MOLEMOLE_UIMAINCITYMISSIONWIDGETCONTROLLER_ONCREATEVIEW_OFFSET UNITYSDK_OFFSET(0x173F9120)
#define MOLEMOLE_UIMAINCITYMISSIONWIDGETCONTROLLER_ONUIDESTROY_OFFSET UNITYSDK_OFFSET(0x173F91B0)
#define MOLEMOLE_UIMAINCITYMISSIONWIDGETCONTROLLER_ONUIINIT_OFFSET UNITYSDK_OFFSET(0x173F8E40)
#define MOLEMOLE_UIMAINCITYMISSIONWIDGETCONTROLLER_ONUIOPEN_OFFSET UNITYSDK_OFFSET(0x173F90B0)
#define MOLEMOLE_UIMAINCITYMISSIONWIDGETCONTROLLER_PLAYQUESTTRACKENDANIM_OFFSET UNITYSDK_OFFSET(0x173FA350)
#define MOLEMOLE_UIMAINCITYMISSIONWIDGETCONTROLLER_PLAYQUESTTRACKSTARTANIM_OFFSET UNITYSDK_OFFSET(0x173FA250)
#define MOLEMOLE_UIMAINCITYMISSIONWIDGETCONTROLLER_PLAYQUESTTRACKSWITCHANIM_OFFSET UNITYSDK_OFFSET(0x173F9E10)
#define MOLEMOLE_UIMAINCITYMISSIONWIDGETCONTROLLER_REFRESHQUESTTRACKVIEW_OFFSET UNITYSDK_OFFSET(0x173F9480)
#define MOLEMOLE_UIMAINCITYMISSIONWIDGETCONTROLLER_SETFADEOUTSTATE_OFFSET UNITYSDK_OFFSET(0x173F9230)
#define MOLEMOLE_UIMAINCITYMISSIONWIDGETCONTROLLER_SHOWCURRENTMISSIONFINISHANDSWITCH_OFFSET UNITYSDK_OFFSET(0x173FA030)
#define MOLEMOLE_UIMAINCITYMISSIONWIDGETCONTROLLER_SHOWMISSIONFINISHANDHIDE_OFFSET UNITYSDK_OFFSET(0x173F9BC0)
#define MOLEMOLE_UIMAINCITYMISSIONWIDGETCONTROLLER_SHOWMISSIONFINISHANDSETTOTRACKQUEST_OFFSET UNITYSDK_OFFSET(0x173F92F0)
#define MOLEMOLE_UIMAINCITYMISSIONWIDGETCONTROLLER_SHOWMISSIONFINISHANDSWITCHTOCURRENT_OFFSET UNITYSDK_OFFSET(0x173F9D40)
#define MOLEMOLE_UIMAINCITYMISSIONWIDGETCONTROLLER_STOPQUESTTRACKANIM_OFFSET UNITYSDK_OFFSET(0x173FA150)
#define MOLEMOLE_UIMAINCITYMISSIONWIDGETCONTROLLER_UPDATEMISSIONCONTENTFADEINANIMATION_OFFSET UNITYSDK_OFFSET(0x173F97E0)
#define MOLEMOLE_UIMAINCITYMISSIONWIDGETCONTROLLER_UPDATEMISSIONCONTENTFADEOUTANIMATION_OFFSET UNITYSDK_OFFSET(0x173FA560)
#define MOLEMOLE_UIMAINCITYMISSIONWIDGETCONTROLLER__CCTOR_OFFSET UNITYSDK_OFFSET(0x173FAD90)
#define MOLEMOLE_UIMAINCITYMISSIONWIDGETCONTROLLER__CTOR_OFFSET UNITYSDK_OFFSET(0x173FAD30)
#define MOLEMOLE_UIMAINCITYMISSIONWIDGETCONTROLLER___BASE_ONCREATEVIEW_OFFSET UNITYSDK_OFFSET(0x173FAF00)
#define MOLEMOLE_UIMAINCITYMISSIONWIDGETCONTROLLER___BASE_ONUIDESTROY_OFFSET UNITYSDK_OFFSET(0x173FAF90)
#define MOLEMOLE_UIMAINCITYMISSIONWIDGETCONTROLLER___BASE_ONUIINIT_OFFSET UNITYSDK_OFFSET(0x173FB020)
#define MOLEMOLE_UIMAINCITYMISSIONWIDGETCONTROLLER___BASE_ONUIOPEN_OFFSET UNITYSDK_OFFSET(0x173FB0B0)

namespace MoleMole
{
	inline static constexpr unsigned int UIMainCityMissionWidgetController_TypeDefinitionIndex = 65730;

	class UIMainCityMissionWidgetController : public ::MoleMole::UIWidgetController
	{
	public:
		static ::System::Collections::Generic::Dictionary_2<::System::Int32, ::System::String*>** StaticGet_MDGOEANGHDP()
		{
			return (::System::Collections::Generic::Dictionary_2<::System::Int32, ::System::String*>**)Il2CppClass::FromTypeDefinitionIndex(UIMainCityMissionWidgetController_TypeDefinitionIndex)->GetStaticField(0x4EBA0);
		}
		static ::System::String** StaticGet_CMHEKJANHCB()
		{
			return (::System::String**)Il2CppClass::FromTypeDefinitionIndex(UIMainCityMissionWidgetController_TypeDefinitionIndex)->GetStaticField(0x4EBA8);
		}
		::CEJMKJEAGFD* _view; // 0x2C8
		::Foundation::Coroutine::CoroutineHandle MEAHILFJCIB; // 0x2D0
		::Foundation::Coroutine::CoroutineHandle GMGPPBHKOBI; // 0x2D4
		::UnityEngine::UI::VerticalLayoutGroup* MHLOOEHHLII; // 0x2D8
		::System::Single MEODNPFIDKA; // 0x2E0
		::System::Byte _padding0[0x4];
		::DG::Tweening::Tweener* KMBLKDONJEK; // 0x2E8
		::UnityEngine::RectTransform* AIBOHAIMPOJ; // 0x2F0

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIMAINCITYMISSIONWIDGETCONTROLLER__CTOR_OFFSET))(this);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + MOLEMOLE_UIMAINCITYMISSIONWIDGETCONTROLLER__CCTOR_OFFSET))();
		}

		::System::Void OnUIInit()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIMAINCITYMISSIONWIDGETCONTROLLER_ONUIINIT_OFFSET))(this);
		}

		::System::Void OnUIOpen(::MoleMole::UIControllerContextBase* openCtrlContext)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIControllerContextBase*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIMAINCITYMISSIONWIDGETCONTROLLER_ONUIOPEN_OFFSET))(this, openCtrlContext);
		}

		::System::Void OnCreateView(::MoleMole::UIControlReference* controlReference)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIControlReference*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIMAINCITYMISSIONWIDGETCONTROLLER_ONCREATEVIEW_OFFSET))(this, controlReference);
		}

		::System::Void OnUIDestroy()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIMAINCITYMISSIONWIDGETCONTROLLER_ONUIDESTROY_OFFSET))(this);
		}

		::System::Void SetFadeOutState()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIMAINCITYMISSIONWIDGETCONTROLLER_SETFADEOUTSTATE_OFFSET))(this);
		}

		::System::Void ShowMissionFinishAndSetToTrackQuest(::System::Int32 finishQuestID, ::System::Int32 trackQuestID)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + MOLEMOLE_UIMAINCITYMISSIONWIDGETCONTROLLER_SHOWMISSIONFINISHANDSETTOTRACKQUEST_OFFSET))(this, finishQuestID, trackQuestID);
		}

		::System::Void ShowMissionFinishAndHide(::System::Int32 finishQuestID)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + MOLEMOLE_UIMAINCITYMISSIONWIDGETCONTROLLER_SHOWMISSIONFINISHANDHIDE_OFFSET))(this, finishQuestID);
		}

		::System::Void ShowMissionFinishAndSwitchToCurrent(::System::Int32 finishQuestID, ::System::Int32 orginalQuestID)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + MOLEMOLE_UIMAINCITYMISSIONWIDGETCONTROLLER_SHOWMISSIONFINISHANDSWITCHTOCURRENT_OFFSET))(this, finishQuestID, orginalQuestID);
		}

		::System::Void ShowCurrentMissionFinishAndSwitch(::System::Int32 questId, ::System::Boolean playSound, ::System::Action* callback)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::Boolean, ::System::Action*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIMAINCITYMISSIONWIDGETCONTROLLER_SHOWCURRENTMISSIONFINISHANDSWITCH_OFFSET))(this, questId, playSound, callback);
		}

		::System::Void StopQuestTrackAnim()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIMAINCITYMISSIONWIDGETCONTROLLER_STOPQUESTTRACKANIM_OFFSET))(this);
		}

		::System::Void PlayQuestTrackStartAnim(::System::Int32 questId, ::System::Boolean playSound)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::Boolean))((::PBYTE)hIl2Cpp + MOLEMOLE_UIMAINCITYMISSIONWIDGETCONTROLLER_PLAYQUESTTRACKSTARTANIM_OFFSET))(this, questId, playSound);
		}

		::System::Void PlayQuestTrackEndAnim(::System::Int32 questId)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + MOLEMOLE_UIMAINCITYMISSIONWIDGETCONTROLLER_PLAYQUESTTRACKENDANIM_OFFSET))(this, questId);
		}

		::System::Void PlayQuestTrackSwitchAnim(::System::Int32 questId, ::System::Boolean playSound, ::System::Action* callback)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::Boolean, ::System::Action*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIMAINCITYMISSIONWIDGETCONTROLLER_PLAYQUESTTRACKSWITCHANIM_OFFSET))(this, questId, playSound, callback);
		}

		::System::Void UpdateMissionContentFadeInAnimation(::System::Boolean resetLayout, ::System::Boolean fromMinSize, ::System::Action* callback)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean, ::System::Boolean, ::System::Action*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIMAINCITYMISSIONWIDGETCONTROLLER_UPDATEMISSIONCONTENTFADEINANIMATION_OFFSET))(this, resetLayout, fromMinSize, callback);
		}

		::System::Void UpdateMissionContentFadeOutAnimation(::System::Boolean resetLayout, ::System::Action* callback)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean, ::System::Action*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIMAINCITYMISSIONWIDGETCONTROLLER_UPDATEMISSIONCONTENTFADEOUTANIMATION_OFFSET))(this, resetLayout, callback);
		}

		::System::Void RefreshQuestTrackView(::System::Int32 descQuestId)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + MOLEMOLE_UIMAINCITYMISSIONWIDGETCONTROLLER_REFRESHQUESTTRACKVIEW_OFFSET))(this, descQuestId);
		}

		::System::Void __base_OnCreateView(::MoleMole::UIControlReference* P0)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIControlReference*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIMAINCITYMISSIONWIDGETCONTROLLER___BASE_ONCREATEVIEW_OFFSET))(this, P0);
		}

		::System::Void __base_OnUIDestroy()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIMAINCITYMISSIONWIDGETCONTROLLER___BASE_ONUIDESTROY_OFFSET))(this);
		}

		::System::Void __base_OnUIInit()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIMAINCITYMISSIONWIDGETCONTROLLER___BASE_ONUIINIT_OFFSET))(this);
		}

		::System::Void __base_OnUIOpen(::MoleMole::UIControllerContextBase* P0)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIControllerContextBase*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIMAINCITYMISSIONWIDGETCONTROLLER___BASE_ONUIOPEN_OFFSET))(this, P0);
		}

		::System::Void EHEKPOGPIEM()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIMAINCITYMISSIONWIDGETCONTROLLER_EHEKPOGPIEM_OFFSET))(this);
		}

		static ::System::String* JHKODJJCMLF(::System::Int32 JCLGDIOKNPL)
		{
			return ((::System::String*(*)(::System::Int32))((::PBYTE)hIl2Cpp + MOLEMOLE_UIMAINCITYMISSIONWIDGETCONTROLLER_JHKODJJCMLF_OFFSET))(JCLGDIOKNPL);
		}
	};
}
