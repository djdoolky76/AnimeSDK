#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/UIWidgetController.h"
#include "unitysdk/BFJIMHBAHBI.h"

class FGCOIBFFCHB;
class GCIMMDDIFBJ;
class JJOKKBDDGNN;
class KMAMGEGOLPP;
class ODMPJPJJGIK;
class POEFBGIJIJL;
namespace MoleMole { class MonoGamepadSelectable; }
namespace MoleMole { class UIControllerContextBase; }
namespace MoleMole { class UIRABHudContext; }
namespace MoleMole::Battle { class Entity; }
namespace System { class EventArgs; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T> class List_1; }
namespace UnityEngine { class Canvas; }
namespace UnityEngine { class GameObject; }
namespace UnityEngine { class Transform; }
namespace UnityEngine::UI { class Image; }

#define MOLEMOLE_UIRABHUDWIDGETCONTROLLER_AGIFNLOCBOA_OFFSET UNITYSDK_OFFSET(0x1679FC30)
#define MOLEMOLE_UIRABHUDWIDGETCONTROLLER_FMHLJHDMDNG_OFFSET UNITYSDK_OFFSET(0x1679F560)
#define MOLEMOLE_UIRABHUDWIDGETCONTROLLER_GETBUFFTEMPLATEOBJECT_OFFSET UNITYSDK_OFFSET(0x1679F070)
#define MOLEMOLE_UIRABHUDWIDGETCONTROLLER_GETHPANIMATION_OFFSET UNITYSDK_OFFSET(0x1679F030)
#define MOLEMOLE_UIRABHUDWIDGETCONTROLLER_GET_FOLLOWTARGET_OFFSET UNITYSDK_OFFSET(0x1679F010)
#define MOLEMOLE_UIRABHUDWIDGETCONTROLLER_GET_NEEDCACHE_OFFSET UNITYSDK_OFFSET(0x1679E010)
#define MOLEMOLE_UIRABHUDWIDGETCONTROLLER_HHAKPGKKHGO_OFFSET UNITYSDK_OFFSET(0x167A0370)
#define MOLEMOLE_UIRABHUDWIDGETCONTROLLER_HHCPJAGLLON_OFFSET UNITYSDK_OFFSET(0x1679FD00)
#define MOLEMOLE_UIRABHUDWIDGETCONTROLLER_HIDEELEMENTADVANTAGE_OFFSET UNITYSDK_OFFSET(0x1679ED60)
#define MOLEMOLE_UIRABHUDWIDGETCONTROLLER_IEPFPODDGPO_OFFSET UNITYSDK_OFFSET(0x167A04B0)
#define MOLEMOLE_UIRABHUDWIDGETCONTROLLER_JBPGFPPFJNB_OFFSET UNITYSDK_OFFSET(0x167A0140)
#define MOLEMOLE_UIRABHUDWIDGETCONTROLLER_LJOAMNHBEOA_OFFSET UNITYSDK_OFFSET(0x1679F7E0)
#define MOLEMOLE_UIRABHUDWIDGETCONTROLLER_MNPFCLHHPJA_OFFSET UNITYSDK_OFFSET(0x1679E750)
#define MOLEMOLE_UIRABHUDWIDGETCONTROLLER_NGAMKBBMONH_OFFSET UNITYSDK_OFFSET(0x1679F420)
#define MOLEMOLE_UIRABHUDWIDGETCONTROLLER_ONSHOWELEMENTADVANTAGE_OFFSET UNITYSDK_OFFSET(0x1679EDC0)
#define MOLEMOLE_UIRABHUDWIDGETCONTROLLER_ONUICLOSE_OFFSET UNITYSDK_OFFSET(0x1679E620)
#define MOLEMOLE_UIRABHUDWIDGETCONTROLLER_ONUIDESTROY_OFFSET UNITYSDK_OFFSET(0x1679E6E0)
#define MOLEMOLE_UIRABHUDWIDGETCONTROLLER_ONUIINIT_OFFSET UNITYSDK_OFFSET(0x1679E020)
#define MOLEMOLE_UIRABHUDWIDGETCONTROLLER_ONUIOPEN_OFFSET UNITYSDK_OFFSET(0x1679E130)
#define MOLEMOLE_UIRABHUDWIDGETCONTROLLER_REFRESHVIEWMODEL_OFFSET UNITYSDK_OFFSET(0x1679EFA0)
#define MOLEMOLE_UIRABHUDWIDGETCONTROLLER_RESETBUFFICONSFORREBIND_OFFSET UNITYSDK_OFFSET(0x1679F0B0)
#define MOLEMOLE_UIRABHUDWIDGETCONTROLLER_SETELEMENTICON_OFFSET UNITYSDK_OFFSET(0x1679EE10)
#define MOLEMOLE_UIRABHUDWIDGETCONTROLLER_SET_FOLLOWTARGET_OFFSET UNITYSDK_OFFSET(0x1679F020)
#define MOLEMOLE_UIRABHUDWIDGETCONTROLLER_SHOWELEMENTADVANTAGE_OFFSET UNITYSDK_OFFSET(0x1679EB80)
#define MOLEMOLE_UIRABHUDWIDGETCONTROLLER_TOGGLEDRAG_OFFSET UNITYSDK_OFFSET(0x1679EB30)
#define MOLEMOLE_UIRABHUDWIDGETCONTROLLER_TOGGLEFOCUS_OFFSET UNITYSDK_OFFSET(0x1679EAC0)
#define MOLEMOLE_UIRABHUDWIDGETCONTROLLER__CTOR_OFFSET UNITYSDK_OFFSET(0x1679F100)
#define MOLEMOLE_UIRABHUDWIDGETCONTROLLER___BASE_ONUICLOSE_OFFSET UNITYSDK_OFFSET(0x1679F260)
#define MOLEMOLE_UIRABHUDWIDGETCONTROLLER___BASE_ONUIDESTROY_OFFSET UNITYSDK_OFFSET(0x1679F270)
#define MOLEMOLE_UIRABHUDWIDGETCONTROLLER___BASE_ONUIINIT_OFFSET UNITYSDK_OFFSET(0x1679F300)
#define MOLEMOLE_UIRABHUDWIDGETCONTROLLER___BASE_ONUIOPEN_OFFSET UNITYSDK_OFFSET(0x1679F390)

namespace MoleMole
{
	inline static constexpr unsigned int UIRABHudWidgetController_TypeDefinitionIndex = 58723;

	class UIRABHudWidgetController : public ::MoleMole::UIWidgetController
	{
	public:
		::MoleMole::UIRABHudContext* _context; // 0x2C8
		::JJOKKBDDGNN* _slotData; // 0x2D0
		::System::UInt32 _bindedEntityID; // 0x2D8
		::System::Byte _padding0[0x4];
		::KMAMGEGOLPP* _characterConfig; // 0x2E0
		::POEFBGIJIJL* _characterBaseConfig; // 0x2E8
		::MoleMole::MonoGamepadSelectable* _selectable; // 0x2F0
		::UnityEngine::Transform* _JALDGNGHNJO_k__BackingField; // 0x2F8
		::System::Collections::Generic::List_1<::UnityEngine::GameObject*>* OJCJPNAEOIN; // 0x300
		::System::Collections::Generic::Dictionary_2<::System::UInt32, ::UnityEngine::GameObject*>* CLMPFLMLGGC; // 0x308
		::UnityEngine::GameObject* HHNGCJPNDIG; // 0x310

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIRABHUDWIDGETCONTROLLER__CTOR_OFFSET))(this);
		}

		::System::Boolean get_NeedCache()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIRABHUDWIDGETCONTROLLER_GET_NEEDCACHE_OFFSET))(this);
		}

		::System::Void OnUIInit()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIRABHUDWIDGETCONTROLLER_ONUIINIT_OFFSET))(this);
		}

		::System::Void OnUIOpen(::MoleMole::UIControllerContextBase* openCtrlContext)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIControllerContextBase*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIRABHUDWIDGETCONTROLLER_ONUIOPEN_OFFSET))(this, openCtrlContext);
		}

		::System::Void OnUIClose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIRABHUDWIDGETCONTROLLER_ONUICLOSE_OFFSET))(this);
		}

		::System::Void OnUIDestroy()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIRABHUDWIDGETCONTROLLER_ONUIDESTROY_OFFSET))(this);
		}

		::System::Void ToggleFocus(::System::Boolean isFocus)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + MOLEMOLE_UIRABHUDWIDGETCONTROLLER_TOGGLEFOCUS_OFFSET))(this, isFocus);
		}

		::System::Void ToggleDrag(::System::Boolean isDrag)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + MOLEMOLE_UIRABHUDWIDGETCONTROLLER_TOGGLEDRAG_OFFSET))(this, isDrag);
		}

		::System::Void ShowElementAdvantage(::System::Int32 draggedElementId)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + MOLEMOLE_UIRABHUDWIDGETCONTROLLER_SHOWELEMENTADVANTAGE_OFFSET))(this, draggedElementId);
		}

		::System::Void HideElementAdvantage()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIRABHUDWIDGETCONTROLLER_HIDEELEMENTADVANTAGE_OFFSET))(this);
		}

		::System::Void OnShowElementAdvantage(::System::Boolean isUp, ::System::Boolean isDown)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean, ::System::Boolean))((::PBYTE)hIl2Cpp + MOLEMOLE_UIRABHUDWIDGETCONTROLLER_ONSHOWELEMENTADVANTAGE_OFFSET))(this, isUp, isDown);
		}

		::System::Void SetElementIcon(::FGCOIBFFCHB* image)
		{
			return ((::System::Void(*)(::PVOID, ::FGCOIBFFCHB*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIRABHUDWIDGETCONTROLLER_SETELEMENTICON_OFFSET))(this, image);
		}

		::System::Void RefreshViewModel(::MoleMole::Battle::Entity* curEntity, ::UnityEngine::Canvas* root, ::BFJIMHBAHBI hudData)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::Battle::Entity*, ::UnityEngine::Canvas*, ::BFJIMHBAHBI))((::PBYTE)hIl2Cpp + MOLEMOLE_UIRABHUDWIDGETCONTROLLER_REFRESHVIEWMODEL_OFFSET))(this, curEntity, root, hudData);
		}

		::UnityEngine::Transform* get_FollowTarget()
		{
			return ((::UnityEngine::Transform*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIRABHUDWIDGETCONTROLLER_GET_FOLLOWTARGET_OFFSET))(this);
		}

		::System::Void set_FollowTarget(::UnityEngine::Transform* value)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Transform*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIRABHUDWIDGETCONTROLLER_SET_FOLLOWTARGET_OFFSET))(this, value);
		}

		::GCIMMDDIFBJ* GetHPAnimation()
		{
			return ((::GCIMMDDIFBJ*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIRABHUDWIDGETCONTROLLER_GETHPANIMATION_OFFSET))(this);
		}

		::UnityEngine::GameObject* GetBuffTemplateObject()
		{
			return ((::UnityEngine::GameObject*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIRABHUDWIDGETCONTROLLER_GETBUFFTEMPLATEOBJECT_OFFSET))(this);
		}

		::System::Void ResetBuffIconsForRebind()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIRABHUDWIDGETCONTROLLER_RESETBUFFICONSFORREBIND_OFFSET))(this);
		}

		::System::Void __base_OnUIClose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIRABHUDWIDGETCONTROLLER___BASE_ONUICLOSE_OFFSET))(this);
		}

		::System::Void __base_OnUIDestroy()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIRABHUDWIDGETCONTROLLER___BASE_ONUIDESTROY_OFFSET))(this);
		}

		::System::Void __base_OnUIInit()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIRABHUDWIDGETCONTROLLER___BASE_ONUIINIT_OFFSET))(this);
		}

		::System::Void __base_OnUIOpen(::MoleMole::UIControllerContextBase* P0)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIControllerContextBase*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIRABHUDWIDGETCONTROLLER___BASE_ONUIOPEN_OFFSET))(this, P0);
		}

		::System::Void MNPFCLHHPJA()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIRABHUDWIDGETCONTROLLER_MNPFCLHHPJA_OFFSET))(this);
		}

		::System::Void NGAMKBBMONH(::System::UInt32 BOJILOOBBOI)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + MOLEMOLE_UIRABHUDWIDGETCONTROLLER_NGAMKBBMONH_OFFSET))(this, BOJILOOBBOI);
		}

		::System::Void FMHLJHDMDNG()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIRABHUDWIDGETCONTROLLER_FMHLJHDMDNG_OFFSET))(this);
		}

		::UnityEngine::GameObject* LJOAMNHBEOA()
		{
			return ((::UnityEngine::GameObject*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIRABHUDWIDGETCONTROLLER_LJOAMNHBEOA_OFFSET))(this);
		}

		::System::Void AGIFNLOCBOA(::System::EventArgs* KOIBHLHLMFC)
		{
			return ((::System::Void(*)(::PVOID, ::System::EventArgs*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIRABHUDWIDGETCONTROLLER_AGIFNLOCBOA_OFFSET))(this, KOIBHLHLMFC);
		}

		::System::Void HHCPJAGLLON(::ODMPJPJJGIK* JIBHGDHEIMI)
		{
			return ((::System::Void(*)(::PVOID, ::ODMPJPJJGIK*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIRABHUDWIDGETCONTROLLER_HHCPJAGLLON_OFFSET))(this, JIBHGDHEIMI);
		}

		::System::Void HHAKPGKKHGO(::System::EventArgs* KOIBHLHLMFC)
		{
			return ((::System::Void(*)(::PVOID, ::System::EventArgs*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIRABHUDWIDGETCONTROLLER_HHAKPGKKHGO_OFFSET))(this, KOIBHLHLMFC);
		}

		::System::Void IEPFPODDGPO(::System::EventArgs* KOIBHLHLMFC)
		{
			return ((::System::Void(*)(::PVOID, ::System::EventArgs*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIRABHUDWIDGETCONTROLLER_IEPFPODDGPO_OFFSET))(this, KOIBHLHLMFC);
		}

		::UnityEngine::UI::Image* JBPGFPPFJNB(::UnityEngine::GameObject* FOMOLEBJDLJ)
		{
			return ((::UnityEngine::UI::Image*(*)(::PVOID, ::UnityEngine::GameObject*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIRABHUDWIDGETCONTROLLER_JBPGFPPFJNB_OFFSET))(this, FOMOLEBJDLJ);
		}
	};
}
