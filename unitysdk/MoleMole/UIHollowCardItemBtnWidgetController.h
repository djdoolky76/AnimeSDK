#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Foundation/AssetRequestHandle.h"
#include "unitysdk/MoleMole/UIWidgetController.h"

class GHKPFLEPLJL;
class HPGBIDMABJP;
namespace MoleMole { class UIControlReference; }
namespace System { template <typename T1, typename T2> class Action_2; }
namespace UnityEngine { class Animation; }
namespace UnityEngine { class GameObject; }
namespace UnityEngine { class Material; }

#define MOLEMOLE_UIHOLLOWCARDITEMBTNWIDGETCONTROLLER_BHCNMKAFFNI_OFFSET UNITYSDK_OFFSET(0x1769BE70)
#define MOLEMOLE_UIHOLLOWCARDITEMBTNWIDGETCONTROLLER_INVOKECLICK_OFFSET UNITYSDK_OFFSET(0x1769DE90)
#define MOLEMOLE_UIHOLLOWCARDITEMBTNWIDGETCONTROLLER_KKKJKANJHOA_OFFSET UNITYSDK_OFFSET(0x1769EBE0)
#define MOLEMOLE_UIHOLLOWCARDITEMBTNWIDGETCONTROLLER_ONCREATEVIEW_OFFSET UNITYSDK_OFFSET(0x1769C180)
#define MOLEMOLE_UIHOLLOWCARDITEMBTNWIDGETCONTROLLER_ONUIDESTROY_OFFSET UNITYSDK_OFFSET(0x1769C210)
#define MOLEMOLE_UIHOLLOWCARDITEMBTNWIDGETCONTROLLER_ONUIINIT_OFFSET UNITYSDK_OFFSET(0x1769BD30)
#define MOLEMOLE_UIHOLLOWCARDITEMBTNWIDGETCONTROLLER_PLAYANIMATION_OFFSET UNITYSDK_OFFSET(0x1769DFA0)
#define MOLEMOLE_UIHOLLOWCARDITEMBTNWIDGETCONTROLLER_REFRESHMUTE_OFFSET UNITYSDK_OFFSET(0x1769D4E0)
#define MOLEMOLE_UIHOLLOWCARDITEMBTNWIDGETCONTROLLER_REFRESHVIEW_OFFSET UNITYSDK_OFFSET(0x1769C4A0)
#define MOLEMOLE_UIHOLLOWCARDITEMBTNWIDGETCONTROLLER_SETBANGBOOSTATE_OFFSET UNITYSDK_OFFSET(0x1769E660)
#define MOLEMOLE_UIHOLLOWCARDITEMBTNWIDGETCONTROLLER_SETCLICKFUNCTION_OFFSET UNITYSDK_OFFSET(0x1769DE40)
#define MOLEMOLE_UIHOLLOWCARDITEMBTNWIDGETCONTROLLER_SETEFFECT_OFFSET UNITYSDK_OFFSET(0x1769CE70)
#define MOLEMOLE_UIHOLLOWCARDITEMBTNWIDGETCONTROLLER_SETEMPTYBG_OFFSET UNITYSDK_OFFSET(0x1769CE00)
#define MOLEMOLE_UIHOLLOWCARDITEMBTNWIDGETCONTROLLER_SETMOREINFO_OFFSET UNITYSDK_OFFSET(0x1769E720)
#define MOLEMOLE_UIHOLLOWCARDITEMBTNWIDGETCONTROLLER_SETSTATE_OFFSET UNITYSDK_OFFSET(0x1769E040)
#define MOLEMOLE_UIHOLLOWCARDITEMBTNWIDGETCONTROLLER_UPDATE_OFFSET UNITYSDK_OFFSET(0x1769DC30)
#define MOLEMOLE_UIHOLLOWCARDITEMBTNWIDGETCONTROLLER__CTOR_OFFSET UNITYSDK_OFFSET(0x1769E9D0)
#define MOLEMOLE_UIHOLLOWCARDITEMBTNWIDGETCONTROLLER___BASE_ONCREATEVIEW_OFFSET UNITYSDK_OFFSET(0x1769EA30)
#define MOLEMOLE_UIHOLLOWCARDITEMBTNWIDGETCONTROLLER___BASE_ONUIDESTROY_OFFSET UNITYSDK_OFFSET(0x1769EAC0)
#define MOLEMOLE_UIHOLLOWCARDITEMBTNWIDGETCONTROLLER___BASE_ONUIINIT_OFFSET UNITYSDK_OFFSET(0x1769EB50)

namespace MoleMole
{
	inline static constexpr unsigned int UIHollowCardItemBtnWidgetController_TypeDefinitionIndex = 74316;

	class UIHollowCardItemBtnWidgetController : public ::MoleMole::UIWidgetController
	{
	public:
		::Foundation::AssetRequestHandle HDIEABKPPNF; // 0x2C8
		::System::Boolean JMPNMABBLNP; // 0x2E8
		::System::Boolean KKBKDPBKCOA; // 0x2E9
		::System::Byte _padding0[0x6];
		::System::Action_2<::UnityEngine::GameObject*, ::System::Int32>* PBEHMMJLBEB; // 0x2F0
		::System::Int32 HBCJPEMNJPH; // 0x2F8
		::System::Byte _padding1[0x4];
		::GHKPFLEPLJL* _view; // 0x300
		::UnityEngine::Animation* EEFOCCNFJCO; // 0x308
		::HPGBIDMABJP* KDMABPELCGN; // 0x310
		::System::Boolean PNFLIAAKFDF; // 0x318
		::System::Byte _padding2[0x7];
		::UnityEngine::Material* PKHPJCOEJKH; // 0x320
		::UnityEngine::GameObject* LCGPMOIKFFD; // 0x328
		::UnityEngine::GameObject* IJODONNDDEE; // 0x330
		::UnityEngine::GameObject* PGLDOBJBBOF; // 0x338
		::UnityEngine::Animation* EPJGCFBDMDP; // 0x340
		::UnityEngine::Material* EIPINDJHIBI; // 0x348
		::System::Boolean PINALIKHLBL; // 0x350

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIHOLLOWCARDITEMBTNWIDGETCONTROLLER__CTOR_OFFSET))(this);
		}

		::System::Void OnUIInit()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIHOLLOWCARDITEMBTNWIDGETCONTROLLER_ONUIINIT_OFFSET))(this);
		}

		::System::Void OnCreateView(::MoleMole::UIControlReference* controlReference)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIControlReference*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIHOLLOWCARDITEMBTNWIDGETCONTROLLER_ONCREATEVIEW_OFFSET))(this, controlReference);
		}

		::System::Void OnUIDestroy()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIHOLLOWCARDITEMBTNWIDGETCONTROLLER_ONUIDESTROY_OFFSET))(this);
		}

		::System::Void RefreshView(::System::Int32 itemid, ::System::Boolean dontSetEffect, ::System::Boolean resetEffectState)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::Boolean, ::System::Boolean))((::PBYTE)hIl2Cpp + MOLEMOLE_UIHOLLOWCARDITEMBTNWIDGETCONTROLLER_REFRESHVIEW_OFFSET))(this, itemid, dontSetEffect, resetEffectState);
		}

		::System::Void Update()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIHOLLOWCARDITEMBTNWIDGETCONTROLLER_UPDATE_OFFSET))(this);
		}

		::System::Void SetClickFunction(::System::Action_2<::UnityEngine::GameObject*, ::System::Int32>* callback)
		{
			return ((::System::Void(*)(::PVOID, ::System::Action_2<::UnityEngine::GameObject*, ::System::Int32>*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIHOLLOWCARDITEMBTNWIDGETCONTROLLER_SETCLICKFUNCTION_OFFSET))(this, callback);
		}

		::System::Void InvokeClick()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIHOLLOWCARDITEMBTNWIDGETCONTROLLER_INVOKECLICK_OFFSET))(this);
		}

		::System::Void PlayAnimation(::System::Boolean isfadein)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + MOLEMOLE_UIHOLLOWCARDITEMBTNWIDGETCONTROLLER_PLAYANIMATION_OFFSET))(this, isfadein);
		}

		::System::Void SetEffect()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIHOLLOWCARDITEMBTNWIDGETCONTROLLER_SETEFFECT_OFFSET))(this);
		}

		::System::Void RefreshMute(::System::Boolean anim)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + MOLEMOLE_UIHOLLOWCARDITEMBTNWIDGETCONTROLLER_REFRESHMUTE_OFFSET))(this, anim);
		}

		::System::Void SetState(::System::Boolean enable)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + MOLEMOLE_UIHOLLOWCARDITEMBTNWIDGETCONTROLLER_SETSTATE_OFFSET))(this, enable);
		}

		::System::Void SetBangbooState(::System::Boolean showBangbooIcon)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + MOLEMOLE_UIHOLLOWCARDITEMBTNWIDGETCONTROLLER_SETBANGBOOSTATE_OFFSET))(this, showBangbooIcon);
		}

		::System::Void SetEmptyBg(::System::Boolean active)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + MOLEMOLE_UIHOLLOWCARDITEMBTNWIDGETCONTROLLER_SETEMPTYBG_OFFSET))(this, active);
		}

		::System::Void SetMoreInfo()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIHOLLOWCARDITEMBTNWIDGETCONTROLLER_SETMOREINFO_OFFSET))(this);
		}

		::System::Void __base_OnCreateView(::MoleMole::UIControlReference* P0)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIControlReference*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIHOLLOWCARDITEMBTNWIDGETCONTROLLER___BASE_ONCREATEVIEW_OFFSET))(this, P0);
		}

		::System::Void __base_OnUIDestroy()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIHOLLOWCARDITEMBTNWIDGETCONTROLLER___BASE_ONUIDESTROY_OFFSET))(this);
		}

		::System::Void __base_OnUIInit()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIHOLLOWCARDITEMBTNWIDGETCONTROLLER___BASE_ONUIINIT_OFFSET))(this);
		}

		::System::Void KKKJKANJHOA()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIHOLLOWCARDITEMBTNWIDGETCONTROLLER_KKKJKANJHOA_OFFSET))(this);
		}

		::System::Void BHCNMKAFFNI()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIHOLLOWCARDITEMBTNWIDGETCONTROLLER_BHCNMKAFFNI_OFFSET))(this);
		}
	};
}
