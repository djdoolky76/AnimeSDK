#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/FOEHMFIFFAJ.h"
#include "unitysdk/Foundation/Coroutine/CoroutineHandle.h"
#include "unitysdk/MoleMole/UIWidgetController.h"

class DFIKAHPMCCF;
namespace DG::Tweening { class Tweener; }
namespace MoleMole { class UIControlReference; }
namespace MoleMole { class UIControllerContextBase; }
namespace MoleMole { class UIGeneralLoginTipsContextV2; }
namespace System { class Action; }
namespace System { class String; }
namespace UnityEngine { class Animation; }
namespace UnityEngine { class RectTransform; }
namespace UnityEngine::UI { class HorizontalLayoutGroup; }
namespace UnityEngine::UI { class VerticalLayoutGroup; }

#define MOLEMOLE_UIGENERALTIPSWIDGETCONTROLLER_CLOSETEXT_OFFSET UNITYSDK_OFFSET(0x18E624E0)
#define MOLEMOLE_UIGENERALTIPSWIDGETCONTROLLER_FADEIN_OFFSET UNITYSDK_OFFSET(0x18E61C50)
#define MOLEMOLE_UIGENERALTIPSWIDGETCONTROLLER_FADEOUT_OFFSET UNITYSDK_OFFSET(0x18E61CE0)
#define MOLEMOLE_UIGENERALTIPSWIDGETCONTROLLER_FORCECLOSE_OFFSET UNITYSDK_OFFSET(0x18E62620)
#define MOLEMOLE_UIGENERALTIPSWIDGETCONTROLLER_GETSHOWTEXT_OFFSET UNITYSDK_OFFSET(0x18E61F30)
#define MOLEMOLE_UIGENERALTIPSWIDGETCONTROLLER_GETTIPSTYPPE_OFFSET UNITYSDK_OFFSET(0x18E625D0)
#define MOLEMOLE_UIGENERALTIPSWIDGETCONTROLLER_ONCREATEVIEW_OFFSET UNITYSDK_OFFSET(0x18E617D0)
#define MOLEMOLE_UIGENERALTIPSWIDGETCONTROLLER_ONUIDESTROY_OFFSET UNITYSDK_OFFSET(0x18E61BD0)
#define MOLEMOLE_UIGENERALTIPSWIDGETCONTROLLER_ONUIINIT_OFFSET UNITYSDK_OFFSET(0x18E61740)
#define MOLEMOLE_UIGENERALTIPSWIDGETCONTROLLER_ONUIOPEN_OFFSET UNITYSDK_OFFSET(0x18E618D0)
#define MOLEMOLE_UIGENERALTIPSWIDGETCONTROLLER_SETIMAGE_OFFSET UNITYSDK_OFFSET(0x18E62390)
#define MOLEMOLE_UIGENERALTIPSWIDGETCONTROLLER_SETTEXT_OFFSET UNITYSDK_OFFSET(0x18E61FB0)
#define MOLEMOLE_UIGENERALTIPSWIDGETCONTROLLER__CTOR_OFFSET UNITYSDK_OFFSET(0x18E626E0)
#define MOLEMOLE_UIGENERALTIPSWIDGETCONTROLLER___BASE_ONCREATEVIEW_OFFSET UNITYSDK_OFFSET(0x18E62740)
#define MOLEMOLE_UIGENERALTIPSWIDGETCONTROLLER___BASE_ONUIDESTROY_OFFSET UNITYSDK_OFFSET(0x18E627D0)
#define MOLEMOLE_UIGENERALTIPSWIDGETCONTROLLER___BASE_ONUIINIT_OFFSET UNITYSDK_OFFSET(0x18E62860)
#define MOLEMOLE_UIGENERALTIPSWIDGETCONTROLLER___BASE_ONUIOPEN_OFFSET UNITYSDK_OFFSET(0x18E628F0)

namespace MoleMole
{
	inline static constexpr unsigned int UIGeneralTipsWidgetController_TypeDefinitionIndex = 67074;

	class UIGeneralTipsWidgetController : public ::MoleMole::UIWidgetController
	{
	public:
		// static const ::System::Int32 CALPBMPNIIP = 0x2A; // 0x0
		::DFIKAHPMCCF* _view; // 0x2C8
		::MoleMole::UIGeneralLoginTipsContextV2* DAAAEJDBNFI; // 0x2D0
		::UnityEngine::Animation* PBNDACOLCJK; // 0x2D8
		::UnityEngine::UI::VerticalLayoutGroup* PCMDLDCBFNA; // 0x2E0
		::UnityEngine::UI::HorizontalLayoutGroup* MNJEOOCGNCA; // 0x2E8
		::Foundation::Coroutine::CoroutineHandle AOKHOHCJNFJ; // 0x2F0
		::Foundation::Coroutine::CoroutineHandle CABJPKMLLNA; // 0x2F4
		::DG::Tweening::Tweener* FFMLOBPCAIH; // 0x2F8
		::UnityEngine::RectTransform* rootRect; // 0x300
		::System::Single OMLLPAONNPE; // 0x308

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIGENERALTIPSWIDGETCONTROLLER__CTOR_OFFSET))(this);
		}

		::System::Void OnUIInit()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIGENERALTIPSWIDGETCONTROLLER_ONUIINIT_OFFSET))(this);
		}

		::System::Void OnCreateView(::MoleMole::UIControlReference* controlReference)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIControlReference*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIGENERALTIPSWIDGETCONTROLLER_ONCREATEVIEW_OFFSET))(this, controlReference);
		}

		::System::Void OnUIOpen(::MoleMole::UIControllerContextBase* openCtrlContext)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIControllerContextBase*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIGENERALTIPSWIDGETCONTROLLER_ONUIOPEN_OFFSET))(this, openCtrlContext);
		}

		::System::Void OnUIDestroy()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIGENERALTIPSWIDGETCONTROLLER_ONUIDESTROY_OFFSET))(this);
		}

		::System::Void FadeIn()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIGENERALTIPSWIDGETCONTROLLER_FADEIN_OFFSET))(this);
		}

		::System::Void FadeOut(::System::Action* call)
		{
			return ((::System::Void(*)(::PVOID, ::System::Action*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIGENERALTIPSWIDGETCONTROLLER_FADEOUT_OFFSET))(this, call);
		}

		::System::String* GetShowText()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIGENERALTIPSWIDGETCONTROLLER_GETSHOWTEXT_OFFSET))(this);
		}

		::System::Void SetText(::System::String* str, ::System::Single time, ::System::Single fadeOutMoveTime)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*, ::System::Single, ::System::Single))((::PBYTE)hIl2Cpp + MOLEMOLE_UIGENERALTIPSWIDGETCONTROLLER_SETTEXT_OFFSET))(this, str, time, fadeOutMoveTime);
		}

		::System::Void SetImage(::System::String* imgPath)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIGENERALTIPSWIDGETCONTROLLER_SETIMAGE_OFFSET))(this, imgPath);
		}

		::System::Void CloseText(::System::Single time, ::System::Action* closeCall)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single, ::System::Action*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIGENERALTIPSWIDGETCONTROLLER_CLOSETEXT_OFFSET))(this, time, closeCall);
		}

		::FOEHMFIFFAJ GetTipsTyppe()
		{
			return ((::FOEHMFIFFAJ(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIGENERALTIPSWIDGETCONTROLLER_GETTIPSTYPPE_OFFSET))(this);
		}

		::System::Void ForceClose(::System::Action* closeCall)
		{
			return ((::System::Void(*)(::PVOID, ::System::Action*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIGENERALTIPSWIDGETCONTROLLER_FORCECLOSE_OFFSET))(this, closeCall);
		}

		::System::Void __base_OnCreateView(::MoleMole::UIControlReference* P0)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIControlReference*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIGENERALTIPSWIDGETCONTROLLER___BASE_ONCREATEVIEW_OFFSET))(this, P0);
		}

		::System::Void __base_OnUIDestroy()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIGENERALTIPSWIDGETCONTROLLER___BASE_ONUIDESTROY_OFFSET))(this);
		}

		::System::Void __base_OnUIInit()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIGENERALTIPSWIDGETCONTROLLER___BASE_ONUIINIT_OFFSET))(this);
		}

		::System::Void __base_OnUIOpen(::MoleMole::UIControllerContextBase* P0)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIControllerContextBase*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIGENERALTIPSWIDGETCONTROLLER___BASE_ONUIOPEN_OFFSET))(this, P0);
		}
	};
}
