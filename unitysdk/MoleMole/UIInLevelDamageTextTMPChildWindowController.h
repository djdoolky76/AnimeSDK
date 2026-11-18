#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/CCONENNDJNF.h"
#include "unitysdk/FBAKOFFIKNE.h"
#include "unitysdk/MoleMole/Config/DamageElementType.h"
#include "unitysdk/MoleMole/UIInLevelDamageTextBaseController.h"
#include "unitysdk/UnityEngine/Vector2.h"
#include "unitysdk/UnityEngine/Vector3.h"

class BGNHHBGNJBK;
namespace MoleMole { class UIControlReference; }
namespace MoleMole { class UIControllerContextBase; }
namespace MoleMole::Battle { class Entity; }
namespace System { class String; }
namespace UnityEngine { class Material; }

#define MOLEMOLE_UIINLEVELDAMAGETEXTTMPCHILDWINDOWCONTROLLER_GETDAMAGETEXTLENGTH_OFFSET UNITYSDK_OFFSET(0x17F66F60)
#define MOLEMOLE_UIINLEVELDAMAGETEXTTMPCHILDWINDOWCONTROLLER_LFIOGCKBLEJ_OFFSET UNITYSDK_OFFSET(0x17F67440)
#define MOLEMOLE_UIINLEVELDAMAGETEXTTMPCHILDWINDOWCONTROLLER_LNCCJAGGIBO_OFFSET UNITYSDK_OFFSET(0x17F67250)
#define MOLEMOLE_UIINLEVELDAMAGETEXTTMPCHILDWINDOWCONTROLLER_MANUALUPDATEANIMATION_OFFSET UNITYSDK_OFFSET(0x17F66FE0)
#define MOLEMOLE_UIINLEVELDAMAGETEXTTMPCHILDWINDOWCONTROLLER_ONCREATEVIEW_OFFSET UNITYSDK_OFFSET(0x17F668A0)
#define MOLEMOLE_UIINLEVELDAMAGETEXTTMPCHILDWINDOWCONTROLLER_ONPAUSEGAMESTATECHANGED_OFFSET UNITYSDK_OFFSET(0x17F66CC0)
#define MOLEMOLE_UIINLEVELDAMAGETEXTTMPCHILDWINDOWCONTROLLER_ONUICLOSE_OFFSET UNITYSDK_OFFSET(0x17F669F0)
#define MOLEMOLE_UIINLEVELDAMAGETEXTTMPCHILDWINDOWCONTROLLER_ONUIDESTROY_OFFSET UNITYSDK_OFFSET(0x17F66A80)
#define MOLEMOLE_UIINLEVELDAMAGETEXTTMPCHILDWINDOWCONTROLLER_ONUIINIT_OFFSET UNITYSDK_OFFSET(0x17F66930)
#define MOLEMOLE_UIINLEVELDAMAGETEXTTMPCHILDWINDOWCONTROLLER_ONUIOPEN_OFFSET UNITYSDK_OFFSET(0x17F66980)
#define MOLEMOLE_UIINLEVELDAMAGETEXTTMPCHILDWINDOWCONTROLLER_ONUPDATETEXT_OFFSET UNITYSDK_OFFSET(0x17F66AF0)
#define MOLEMOLE_UIINLEVELDAMAGETEXTTMPCHILDWINDOWCONTROLLER_SETADDALPHA_OFFSET UNITYSDK_OFFSET(0x17F67380)
#define MOLEMOLE_UIINLEVELDAMAGETEXTTMPCHILDWINDOWCONTROLLER_SETADDSCALE_OFFSET UNITYSDK_OFFSET(0x17F671F0)
#define MOLEMOLE_UIINLEVELDAMAGETEXTTMPCHILDWINDOWCONTROLLER_SETROOTALPHA_OFFSET UNITYSDK_OFFSET(0x17F67520)
#define MOLEMOLE_UIINLEVELDAMAGETEXTTMPCHILDWINDOWCONTROLLER_SETROOTSCALE_OFFSET UNITYSDK_OFFSET(0x17F674C0)
#define MOLEMOLE_UIINLEVELDAMAGETEXTTMPCHILDWINDOWCONTROLLER_SETUPVIEWCOMBINE_OFFSET UNITYSDK_OFFSET(0x17F67080)
#define MOLEMOLE_UIINLEVELDAMAGETEXTTMPCHILDWINDOWCONTROLLER_SETUPVIEW_OFFSET UNITYSDK_OFFSET(0x17F66D90)
#define MOLEMOLE_UIINLEVELDAMAGETEXTTMPCHILDWINDOWCONTROLLER__CTOR_OFFSET UNITYSDK_OFFSET(0x17F675E0)
#define MOLEMOLE_UIINLEVELDAMAGETEXTTMPCHILDWINDOWCONTROLLER___BASE_GETDAMAGETEXTLENGTH_OFFSET UNITYSDK_OFFSET(0x17F67670)
#define MOLEMOLE_UIINLEVELDAMAGETEXTTMPCHILDWINDOWCONTROLLER___BASE_ONCREATEVIEW_OFFSET UNITYSDK_OFFSET(0x17F67700)
#define MOLEMOLE_UIINLEVELDAMAGETEXTTMPCHILDWINDOWCONTROLLER___BASE_ONPAUSEGAMESTATECHANGED_OFFSET UNITYSDK_OFFSET(0x17F67790)
#define MOLEMOLE_UIINLEVELDAMAGETEXTTMPCHILDWINDOWCONTROLLER___BASE_ONUICLOSE_OFFSET UNITYSDK_OFFSET(0x17F67830)
#define MOLEMOLE_UIINLEVELDAMAGETEXTTMPCHILDWINDOWCONTROLLER___BASE_ONUIDESTROY_OFFSET UNITYSDK_OFFSET(0x17F678F0)
#define MOLEMOLE_UIINLEVELDAMAGETEXTTMPCHILDWINDOWCONTROLLER___BASE_ONUIINIT_OFFSET UNITYSDK_OFFSET(0x17F67900)
#define MOLEMOLE_UIINLEVELDAMAGETEXTTMPCHILDWINDOWCONTROLLER___BASE_ONUIOPEN_OFFSET UNITYSDK_OFFSET(0x17F67910)
#define MOLEMOLE_UIINLEVELDAMAGETEXTTMPCHILDWINDOWCONTROLLER___BASE_ONUPDATETEXT_OFFSET UNITYSDK_OFFSET(0x17F679A0)

namespace MoleMole
{
	inline static constexpr unsigned int UIInLevelDamageTextTMPChildWindowController_TypeDefinitionIndex = 68552;

	class UIInLevelDamageTextTMPChildWindowController : public ::MoleMole::UIInLevelDamageTextBaseController
	{
	public:
		::System::Single POEEFNBHHID; // 0x398
		::System::Single APOPGLHLDFN; // 0x39C
		::System::Single KNAHIAFGAGH; // 0x3A0
		::System::Single CEOCPCMOEHN; // 0x3A4
		::BGNHHBGNJBK* _view; // 0x3A8

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIINLEVELDAMAGETEXTTMPCHILDWINDOWCONTROLLER__CTOR_OFFSET))(this);
		}

		::System::Void OnCreateView(::MoleMole::UIControlReference* controlReference)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIControlReference*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIINLEVELDAMAGETEXTTMPCHILDWINDOWCONTROLLER_ONCREATEVIEW_OFFSET))(this, controlReference);
		}

		::System::Void OnUIInit()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIINLEVELDAMAGETEXTTMPCHILDWINDOWCONTROLLER_ONUIINIT_OFFSET))(this);
		}

		::System::Void OnUIOpen(::MoleMole::UIControllerContextBase* openCtrlContext)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIControllerContextBase*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIINLEVELDAMAGETEXTTMPCHILDWINDOWCONTROLLER_ONUIOPEN_OFFSET))(this, openCtrlContext);
		}

		::System::Void OnUIClose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIINLEVELDAMAGETEXTTMPCHILDWINDOWCONTROLLER_ONUICLOSE_OFFSET))(this);
		}

		::System::Void OnUIDestroy()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIINLEVELDAMAGETEXTTMPCHILDWINDOWCONTROLLER_ONUIDESTROY_OFFSET))(this);
		}

		::System::Void OnUpdateText(::System::Single deltaTime)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + MOLEMOLE_UIINLEVELDAMAGETEXTTMPCHILDWINDOWCONTROLLER_ONUPDATETEXT_OFFSET))(this, deltaTime);
		}

		::System::Void OnPauseGameStateChanged(::System::Boolean isPause)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + MOLEMOLE_UIINLEVELDAMAGETEXTTMPCHILDWINDOWCONTROLLER_ONPAUSEGAMESTATECHANGED_OFFSET))(this, isPause);
		}

		::System::Void SetupView(::System::String* damageStr, ::FBAKOFFIKNE damageTextShowType, ::UnityEngine::Vector3 worldPos, ::MoleMole::Battle::Entity* attackee, ::UnityEngine::Material* fontMat, ::System::Boolean isUniqueSkillDamage, ::MoleMole::Config::DamageElementType damageElementType, ::UnityEngine::Vector2 screenSpacePosOffset, ::CCONENNDJNF targetFollowType)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*, ::FBAKOFFIKNE, ::UnityEngine::Vector3, ::MoleMole::Battle::Entity*, ::UnityEngine::Material*, ::System::Boolean, ::MoleMole::Config::DamageElementType, ::UnityEngine::Vector2, ::CCONENNDJNF))((::PBYTE)hIl2Cpp + MOLEMOLE_UIINLEVELDAMAGETEXTTMPCHILDWINDOWCONTROLLER_SETUPVIEW_OFFSET))(this, damageStr, damageTextShowType, worldPos, attackee, fontMat, isUniqueSkillDamage, damageElementType, screenSpacePosOffset, targetFollowType);
		}

		::System::Single GetDamageTextLength()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIINLEVELDAMAGETEXTTMPCHILDWINDOWCONTROLLER_GETDAMAGETEXTLENGTH_OFFSET))(this);
		}

		::System::Void ManualUpdateAnimation(::System::Single deltaTime)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + MOLEMOLE_UIINLEVELDAMAGETEXTTMPCHILDWINDOWCONTROLLER_MANUALUPDATEANIMATION_OFFSET))(this, deltaTime);
		}

		::System::Void SetupViewCombine(::UnityEngine::Vector3 worldPos, ::MoleMole::Battle::Entity* attackee, ::UnityEngine::Material* fontMat, ::System::Boolean isUniqueSkillDamage, ::MoleMole::Config::DamageElementType damageElementType, ::UnityEngine::Vector2 screenSpacePosOffset, ::CCONENNDJNF targetFollowType)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Vector3, ::MoleMole::Battle::Entity*, ::UnityEngine::Material*, ::System::Boolean, ::MoleMole::Config::DamageElementType, ::UnityEngine::Vector2, ::CCONENNDJNF))((::PBYTE)hIl2Cpp + MOLEMOLE_UIINLEVELDAMAGETEXTTMPCHILDWINDOWCONTROLLER_SETUPVIEWCOMBINE_OFFSET))(this, worldPos, attackee, fontMat, isUniqueSkillDamage, damageElementType, screenSpacePosOffset, targetFollowType);
		}

		::System::Void SetAddScale(::System::Single scale)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + MOLEMOLE_UIINLEVELDAMAGETEXTTMPCHILDWINDOWCONTROLLER_SETADDSCALE_OFFSET))(this, scale);
		}

		::System::Void SetAddAlpha(::System::Single alpha)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + MOLEMOLE_UIINLEVELDAMAGETEXTTMPCHILDWINDOWCONTROLLER_SETADDALPHA_OFFSET))(this, alpha);
		}

		::System::Void SetRootScale(::System::Single scale)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + MOLEMOLE_UIINLEVELDAMAGETEXTTMPCHILDWINDOWCONTROLLER_SETROOTSCALE_OFFSET))(this, scale);
		}

		::System::Void SetRootAlpha(::System::Single alpha)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + MOLEMOLE_UIINLEVELDAMAGETEXTTMPCHILDWINDOWCONTROLLER_SETROOTALPHA_OFFSET))(this, alpha);
		}

		::System::Single __base_GetDamageTextLength()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIINLEVELDAMAGETEXTTMPCHILDWINDOWCONTROLLER___BASE_GETDAMAGETEXTLENGTH_OFFSET))(this);
		}

		::System::Void __base_OnCreateView(::MoleMole::UIControlReference* P0)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIControlReference*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIINLEVELDAMAGETEXTTMPCHILDWINDOWCONTROLLER___BASE_ONCREATEVIEW_OFFSET))(this, P0);
		}

		::System::Void __base_OnPauseGameStateChanged(::System::Boolean P0)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + MOLEMOLE_UIINLEVELDAMAGETEXTTMPCHILDWINDOWCONTROLLER___BASE_ONPAUSEGAMESTATECHANGED_OFFSET))(this, P0);
		}

		::System::Void __base_OnUIClose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIINLEVELDAMAGETEXTTMPCHILDWINDOWCONTROLLER___BASE_ONUICLOSE_OFFSET))(this);
		}

		::System::Void __base_OnUIDestroy()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIINLEVELDAMAGETEXTTMPCHILDWINDOWCONTROLLER___BASE_ONUIDESTROY_OFFSET))(this);
		}

		::System::Void __base_OnUIInit()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIINLEVELDAMAGETEXTTMPCHILDWINDOWCONTROLLER___BASE_ONUIINIT_OFFSET))(this);
		}

		::System::Void __base_OnUIOpen(::MoleMole::UIControllerContextBase* P0)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIControllerContextBase*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIINLEVELDAMAGETEXTTMPCHILDWINDOWCONTROLLER___BASE_ONUIOPEN_OFFSET))(this, P0);
		}

		::System::Void __base_OnUpdateText(::System::Single P0)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + MOLEMOLE_UIINLEVELDAMAGETEXTTMPCHILDWINDOWCONTROLLER___BASE_ONUPDATETEXT_OFFSET))(this, P0);
		}

		::System::Void LFIOGCKBLEJ()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIINLEVELDAMAGETEXTTMPCHILDWINDOWCONTROLLER_LFIOGCKBLEJ_OFFSET))(this);
		}

		::System::Void LNCCJAGGIBO()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIINLEVELDAMAGETEXTTMPCHILDWINDOWCONTROLLER_LNCCJAGGIBO_OFFSET))(this);
		}
	};
}
