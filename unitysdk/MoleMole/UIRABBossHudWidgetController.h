#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/UIRABHudWidgetController.h"
#include "unitysdk/BFJIMHBAHBI.h"

class FJICEPIGIIK;
class GCIMMDDIFBJ;
class LFFAEGKECCH;
class LFFAEGKECCH_MFBNPOPOMHO;
namespace MoleMole { class UIControlReference; }
namespace MoleMole { class UIControllerContextBase; }
namespace MoleMole::Battle { class Entity; }
namespace UnityEngine { class Canvas; }
namespace UnityEngine { class GameObject; }
namespace UnityEngine { class Material; }
namespace UnityEngine { class Transform; }

#define MOLEMOLE_UIRABBOSSHUDWIDGETCONTROLLER_EKNKMPLCJMG_OFFSET UNITYSDK_OFFSET(0x17996F20)
#define MOLEMOLE_UIRABBOSSHUDWIDGETCONTROLLER_GETBUFFTEMPLATEOBJECT_OFFSET UNITYSDK_OFFSET(0x17997A90)
#define MOLEMOLE_UIRABBOSSHUDWIDGETCONTROLLER_GETHPANIMATION_OFFSET UNITYSDK_OFFSET(0x17997AF0)
#define MOLEMOLE_UIRABBOSSHUDWIDGETCONTROLLER_GET_FOLLOWTARGET_OFFSET UNITYSDK_OFFSET(0x17997960)
#define MOLEMOLE_UIRABBOSSHUDWIDGETCONTROLLER_NNMBFOBLMGL_OFFSET UNITYSDK_OFFSET(0x17996E60)
#define MOLEMOLE_UIRABBOSSHUDWIDGETCONTROLLER_ONCREATEVIEW_OFFSET UNITYSDK_OFFSET(0x17997330)
#define MOLEMOLE_UIRABBOSSHUDWIDGETCONTROLLER_ONSHOWELEMENTADVANTAGE_OFFSET UNITYSDK_OFFSET(0x179979C0)
#define MOLEMOLE_UIRABBOSSHUDWIDGETCONTROLLER_ONUICLOSE_OFFSET UNITYSDK_OFFSET(0x17997470)
#define MOLEMOLE_UIRABBOSSHUDWIDGETCONTROLLER_ONUIDESTROY_OFFSET UNITYSDK_OFFSET(0x179973C0)
#define MOLEMOLE_UIRABBOSSHUDWIDGETCONTROLLER_ONUIINIT_OFFSET UNITYSDK_OFFSET(0x17996D40)
#define MOLEMOLE_UIRABBOSSHUDWIDGETCONTROLLER_ONUIOPEN_OFFSET UNITYSDK_OFFSET(0x179972E0)
#define MOLEMOLE_UIRABBOSSHUDWIDGETCONTROLLER_REFRESHVIEWMODEL_OFFSET UNITYSDK_OFFSET(0x17997520)
#define MOLEMOLE_UIRABBOSSHUDWIDGETCONTROLLER_TOGGLEDRAG_OFFSET UNITYSDK_OFFSET(0x17997830)
#define MOLEMOLE_UIRABBOSSHUDWIDGETCONTROLLER_UPDATE_OFFSET UNITYSDK_OFFSET(0x179974C0)
#define MOLEMOLE_UIRABBOSSHUDWIDGETCONTROLLER__CTOR_OFFSET UNITYSDK_OFFSET(0x17997B90)
#define MOLEMOLE_UIRABBOSSHUDWIDGETCONTROLLER___BASE_GETBUFFTEMPLATEOBJECT_OFFSET UNITYSDK_OFFSET(0x17997BB0)
#define MOLEMOLE_UIRABBOSSHUDWIDGETCONTROLLER___BASE_GETHPANIMATION_OFFSET UNITYSDK_OFFSET(0x17997C40)
#define MOLEMOLE_UIRABBOSSHUDWIDGETCONTROLLER___BASE_GET_FOLLOWTARGET_OFFSET UNITYSDK_OFFSET(0x17997BA0)
#define MOLEMOLE_UIRABBOSSHUDWIDGETCONTROLLER___BASE_ONCREATEVIEW_OFFSET UNITYSDK_OFFSET(0x17997CD0)
#define MOLEMOLE_UIRABBOSSHUDWIDGETCONTROLLER___BASE_ONSHOWELEMENTADVANTAGE_OFFSET UNITYSDK_OFFSET(0x17997D60)
#define MOLEMOLE_UIRABBOSSHUDWIDGETCONTROLLER___BASE_ONUICLOSE_OFFSET UNITYSDK_OFFSET(0x17997E00)
#define MOLEMOLE_UIRABBOSSHUDWIDGETCONTROLLER___BASE_ONUIDESTROY_OFFSET UNITYSDK_OFFSET(0x17997E10)
#define MOLEMOLE_UIRABBOSSHUDWIDGETCONTROLLER___BASE_ONUIINIT_OFFSET UNITYSDK_OFFSET(0x17997F10)
#define MOLEMOLE_UIRABBOSSHUDWIDGETCONTROLLER___BASE_ONUIOPEN_OFFSET UNITYSDK_OFFSET(0x17997F20)
#define MOLEMOLE_UIRABBOSSHUDWIDGETCONTROLLER___BASE_REFRESHVIEWMODEL_OFFSET UNITYSDK_OFFSET(0x17997F30)
#define MOLEMOLE_UIRABBOSSHUDWIDGETCONTROLLER___BASE_TOGGLEDRAG_OFFSET UNITYSDK_OFFSET(0x17998000)

namespace MoleMole
{
	inline static constexpr unsigned int UIRABBossHudWidgetController_TypeDefinitionIndex = 93164;

	class UIRABBossHudWidgetController : public ::MoleMole::UIRABHudWidgetController
	{
	public:
		::LFFAEGKECCH* _view; // 0x318
		::FJICEPIGIIK* FFDBFAEKDCL; // 0x320
		::UnityEngine::Material* BNAMDBKEENF; // 0x328
		::UnityEngine::Material* PNJLKMLIHHP; // 0x330
		::UnityEngine::Material* BKJNBECLEMN; // 0x338

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIRABBOSSHUDWIDGETCONTROLLER__CTOR_OFFSET))(this);
		}

		::System::Void OnUIInit()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIRABBOSSHUDWIDGETCONTROLLER_ONUIINIT_OFFSET))(this);
		}

		::System::Void OnUIOpen(::MoleMole::UIControllerContextBase* openCtrlContext)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIControllerContextBase*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIRABBOSSHUDWIDGETCONTROLLER_ONUIOPEN_OFFSET))(this, openCtrlContext);
		}

		::System::Void OnCreateView(::MoleMole::UIControlReference* controlReference)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIControlReference*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIRABBOSSHUDWIDGETCONTROLLER_ONCREATEVIEW_OFFSET))(this, controlReference);
		}

		::System::Void OnUIDestroy()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIRABBOSSHUDWIDGETCONTROLLER_ONUIDESTROY_OFFSET))(this);
		}

		::System::Void OnUIClose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIRABBOSSHUDWIDGETCONTROLLER_ONUICLOSE_OFFSET))(this);
		}

		::System::Void Update()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIRABBOSSHUDWIDGETCONTROLLER_UPDATE_OFFSET))(this);
		}

		::System::Void RefreshViewModel(::MoleMole::Battle::Entity* curEntity, ::UnityEngine::Canvas* root, ::BFJIMHBAHBI hudData)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::Battle::Entity*, ::UnityEngine::Canvas*, ::BFJIMHBAHBI))((::PBYTE)hIl2Cpp + MOLEMOLE_UIRABBOSSHUDWIDGETCONTROLLER_REFRESHVIEWMODEL_OFFSET))(this, curEntity, root, hudData);
		}

		::System::Void ToggleDrag(::System::Boolean isDrag)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + MOLEMOLE_UIRABBOSSHUDWIDGETCONTROLLER_TOGGLEDRAG_OFFSET))(this, isDrag);
		}

		::UnityEngine::Transform* get_FollowTarget()
		{
			return ((::UnityEngine::Transform*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIRABBOSSHUDWIDGETCONTROLLER_GET_FOLLOWTARGET_OFFSET))(this);
		}

		::System::Void OnShowElementAdvantage(::System::Boolean isUp, ::System::Boolean isDown)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean, ::System::Boolean))((::PBYTE)hIl2Cpp + MOLEMOLE_UIRABBOSSHUDWIDGETCONTROLLER_ONSHOWELEMENTADVANTAGE_OFFSET))(this, isUp, isDown);
		}

		::UnityEngine::GameObject* GetBuffTemplateObject()
		{
			return ((::UnityEngine::GameObject*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIRABBOSSHUDWIDGETCONTROLLER_GETBUFFTEMPLATEOBJECT_OFFSET))(this);
		}

		::GCIMMDDIFBJ* GetHPAnimation()
		{
			return ((::GCIMMDDIFBJ*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIRABBOSSHUDWIDGETCONTROLLER_GETHPANIMATION_OFFSET))(this);
		}

		::UnityEngine::Transform* __base_get_FollowTarget()
		{
			return ((::UnityEngine::Transform*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIRABBOSSHUDWIDGETCONTROLLER___BASE_GET_FOLLOWTARGET_OFFSET))(this);
		}

		::UnityEngine::GameObject* __base_GetBuffTemplateObject()
		{
			return ((::UnityEngine::GameObject*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIRABBOSSHUDWIDGETCONTROLLER___BASE_GETBUFFTEMPLATEOBJECT_OFFSET))(this);
		}

		::GCIMMDDIFBJ* __base_GetHPAnimation()
		{
			return ((::GCIMMDDIFBJ*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIRABBOSSHUDWIDGETCONTROLLER___BASE_GETHPANIMATION_OFFSET))(this);
		}

		::System::Void __base_OnCreateView(::MoleMole::UIControlReference* P0)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIControlReference*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIRABBOSSHUDWIDGETCONTROLLER___BASE_ONCREATEVIEW_OFFSET))(this, P0);
		}

		::System::Void __base_OnShowElementAdvantage(::System::Boolean P0, ::System::Boolean P1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean, ::System::Boolean))((::PBYTE)hIl2Cpp + MOLEMOLE_UIRABBOSSHUDWIDGETCONTROLLER___BASE_ONSHOWELEMENTADVANTAGE_OFFSET))(this, P0, P1);
		}

		::System::Void __base_OnUIClose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIRABBOSSHUDWIDGETCONTROLLER___BASE_ONUICLOSE_OFFSET))(this);
		}

		::System::Void __base_OnUIDestroy()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIRABBOSSHUDWIDGETCONTROLLER___BASE_ONUIDESTROY_OFFSET))(this);
		}

		::System::Void __base_OnUIInit()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIRABBOSSHUDWIDGETCONTROLLER___BASE_ONUIINIT_OFFSET))(this);
		}

		::System::Void __base_OnUIOpen(::MoleMole::UIControllerContextBase* P0)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIControllerContextBase*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIRABBOSSHUDWIDGETCONTROLLER___BASE_ONUIOPEN_OFFSET))(this, P0);
		}

		::System::Void __base_RefreshViewModel(::MoleMole::Battle::Entity* P0, ::UnityEngine::Canvas* P1, ::BFJIMHBAHBI P2)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::Battle::Entity*, ::UnityEngine::Canvas*, ::BFJIMHBAHBI))((::PBYTE)hIl2Cpp + MOLEMOLE_UIRABBOSSHUDWIDGETCONTROLLER___BASE_REFRESHVIEWMODEL_OFFSET))(this, P0, P1, P2);
		}

		::System::Void __base_ToggleDrag(::System::Boolean P0)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + MOLEMOLE_UIRABBOSSHUDWIDGETCONTROLLER___BASE_TOGGLEDRAG_OFFSET))(this, P0);
		}

		::System::Void EKNKMPLCJMG(::LFFAEGKECCH_MFBNPOPOMHO* AEJAMJDBHAM, ::UnityEngine::Material*& POALGGMINGD, ::UnityEngine::Material*& DCOICBNCNCL, ::UnityEngine::Material*& LBDIHHNNHNH)
		{
			return ((::System::Void(*)(::PVOID, ::LFFAEGKECCH_MFBNPOPOMHO*, ::UnityEngine::Material*&, ::UnityEngine::Material*&, ::UnityEngine::Material*&))((::PBYTE)hIl2Cpp + MOLEMOLE_UIRABBOSSHUDWIDGETCONTROLLER_EKNKMPLCJMG_OFFSET))(this, AEJAMJDBHAM, POALGGMINGD, DCOICBNCNCL, LBDIHHNNHNH);
		}

		::System::Void NNMBFOBLMGL()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIRABBOSSHUDWIDGETCONTROLLER_NNMBFOBLMGL_OFFSET))(this);
		}
	};
}
