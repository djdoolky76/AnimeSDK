#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Foundation/Coroutine/CoroutineHandle.h"
#include "unitysdk/MoleMole/UIBaseChatPlayController.h"

class GAFFKOGBMPI;
class LGINJIKKBJA;
namespace System { class Action; }
namespace UnityEngine { class GameObject; }

#define MOLEMOLE_UIBASECHATPLUSCONTROLLER_EJDNBGAHLCF_OFFSET UNITYSDK_OFFSET(0x188FB9B0)
#define MOLEMOLE_UIBASECHATPLUSCONTROLLER_ENSUREPREVIOUSNODEFADEOUT_OFFSET UNITYSDK_OFFSET(0x188FAED0)
#define MOLEMOLE_UIBASECHATPLUSCONTROLLER_GET_LONGPRESSBTN_OFFSET UNITYSDK_OFFSET(0x188FAE70)
#define MOLEMOLE_UIBASECHATPLUSCONTROLLER_HFNLOMPCNHJ_OFFSET UNITYSDK_OFFSET(0x188FB970)
#define MOLEMOLE_UIBASECHATPLUSCONTROLLER_PLAYLASTNODEFINISH_OFFSET UNITYSDK_OFFSET(0x188FB050)
#define MOLEMOLE_UIBASECHATPLUSCONTROLLER_PLAYMASKFADEIN_OFFSET UNITYSDK_OFFSET(0x188FB390)
#define MOLEMOLE_UIBASECHATPLUSCONTROLLER_PLAYMASKFADEOUT_OFFSET UNITYSDK_OFFSET(0x188FB670)
#define MOLEMOLE_UIBASECHATPLUSCONTROLLER__CTOR_OFFSET UNITYSDK_OFFSET(0x188FB960)

namespace MoleMole
{
	inline static constexpr unsigned int UIBaseChatPlusController_TypeDefinitionIndex = 80185;

	class UIBaseChatPlusController : public ::MoleMole::UIBaseChatPlayController
	{
	public:
		// static const ::System::String* MaskFadeInAniName; // 0x0
		// static const ::System::String* MaskFadeOutAniName; // 0x0
		// static const ::System::String* OngoingFadeIn; // 0x0
		// static const ::System::String* OngoingTextFadeIn; // 0x0
		// static const ::System::String* NarratorFadeIn; // 0x0
		// static const ::System::String* NarratorFadeOut; // 0x0
		// static const ::System::String* OngoingFadeOut; // 0x0
		::GAFFKOGBMPI* _view; // 0x3D8
		::Foundation::Coroutine::CoroutineHandle BAPLOPHPNOP; // 0x3E0

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIBASECHATPLUSCONTROLLER__CTOR_OFFSET))(this);
		}

		::LGINJIKKBJA* get_LongPressBtn()
		{
			return ((::LGINJIKKBJA*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIBASECHATPLUSCONTROLLER_GET_LONGPRESSBTN_OFFSET))(this);
		}

		::System::Single EnsurePreviousNodeFadeOut(::UnityEngine::GameObject* targetGo, ::System::Action* callback)
		{
			return ((::System::Single(*)(::PVOID, ::UnityEngine::GameObject*, ::System::Action*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIBASECHATPLUSCONTROLLER_ENSUREPREVIOUSNODEFADEOUT_OFFSET))(this, targetGo, callback);
		}

		::System::Single PlayLastNodeFinish(::UnityEngine::GameObject* nextObj)
		{
			return ((::System::Single(*)(::PVOID, ::UnityEngine::GameObject*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIBASECHATPLUSCONTROLLER_PLAYLASTNODEFINISH_OFFSET))(this, nextObj);
		}

		::System::Void PlayMaskFadeIn(::System::Action* onFadeInCompleted, ::System::Boolean isWithAni)
		{
			return ((::System::Void(*)(::PVOID, ::System::Action*, ::System::Boolean))((::PBYTE)hIl2Cpp + MOLEMOLE_UIBASECHATPLUSCONTROLLER_PLAYMASKFADEIN_OFFSET))(this, onFadeInCompleted, isWithAni);
		}

		::System::Void PlayMaskFadeOut(::System::Action* onFadeOutCompleted, ::System::Boolean isWithAni)
		{
			return ((::System::Void(*)(::PVOID, ::System::Action*, ::System::Boolean))((::PBYTE)hIl2Cpp + MOLEMOLE_UIBASECHATPLUSCONTROLLER_PLAYMASKFADEOUT_OFFSET))(this, onFadeOutCompleted, isWithAni);
		}

		::System::Void HFNLOMPCNHJ()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIBASECHATPLUSCONTROLLER_HFNLOMPCNHJ_OFFSET))(this);
		}

		::System::Void EJDNBGAHLCF()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIBASECHATPLUSCONTROLLER_EJDNBGAHLCF_OFFSET))(this);
		}
	};
}
