#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/UIWidgetController.h"
#include "unitysdk/OKKIMONLGJD.h"
#include "unitysdk/UnityEngine/Color.h"

class DEBNKJEHNIL;
class HNHEIGGAFND;
class HNHEIGGAFND_GMIPODIPJPC;
class HNHEIGGAFND_JHCPMHDALIM;
class ODNBJIEICJH;
namespace MoleMole { class MonoGamepadModule; }
namespace MoleMole { class MonoGamepadNavigatableList; }
namespace MoleMole { class UIAutoBattleEquipIconWidgetController; }
namespace MoleMole { class UIControlReference; }
namespace MoleMole { class UIControllerContextBase; }
namespace System::Collections::Generic { template <typename T> class HashSet_1; }
namespace System::Collections::Generic { template <typename T> class IEnumerable_1; }
namespace UnityEngine { class Transform; }

#define MOLEMOLE_UIABINLEVELSHOPWIDGETCONTROLLER_BINDDATA_OFFSET UNITYSDK_OFFSET(0x1A748AA0)
#define MOLEMOLE_UIABINLEVELSHOPWIDGETCONTROLLER_CGOLPLFHIAD_OFFSET UNITYSDK_OFFSET(0x1A74A440)
#define MOLEMOLE_UIABINLEVELSHOPWIDGETCONTROLLER_CHECKVALID_OFFSET UNITYSDK_OFFSET(0x1A749490)
#define MOLEMOLE_UIABINLEVELSHOPWIDGETCONTROLLER_DMDAGPLLEHB_OFFSET UNITYSDK_OFFSET(0x1A749CC0)
#define MOLEMOLE_UIABINLEVELSHOPWIDGETCONTROLLER_FBHBICGACPI_OFFSET UNITYSDK_OFFSET(0x1A749C50)
#define MOLEMOLE_UIABINLEVELSHOPWIDGETCONTROLLER_GET_ACTIVATEDCAMPS_OFFSET UNITYSDK_OFFSET(0x1A748950)
#define MOLEMOLE_UIABINLEVELSHOPWIDGETCONTROLLER_GET_SHOPMODULE_OFFSET UNITYSDK_OFFSET(0x1A7488A0)
#define MOLEMOLE_UIABINLEVELSHOPWIDGETCONTROLLER_GET_SHOPNAVLIST_OFFSET UNITYSDK_OFFSET(0x1A7488C0)
#define MOLEMOLE_UIABINLEVELSHOPWIDGETCONTROLLER_IJCJEPHCLDE_OFFSET UNITYSDK_OFFSET(0x1A74A060)
#define MOLEMOLE_UIABINLEVELSHOPWIDGETCONTROLLER_ONCREATEVIEW_OFFSET UNITYSDK_OFFSET(0x1A7485E0)
#define MOLEMOLE_UIABINLEVELSHOPWIDGETCONTROLLER_ONGAMEPADMODULESELECTINDEXFROMINPUT_OFFSET UNITYSDK_OFFSET(0x1A748710)
#define MOLEMOLE_UIABINLEVELSHOPWIDGETCONTROLLER_ONHIDE_OFFSET UNITYSDK_OFFSET(0x1A748470)
#define MOLEMOLE_UIABINLEVELSHOPWIDGETCONTROLLER_ONSHOW_OFFSET UNITYSDK_OFFSET(0x1A7482D0)
#define MOLEMOLE_UIABINLEVELSHOPWIDGETCONTROLLER_ONUIDESTROY_OFFSET UNITYSDK_OFFSET(0x1A748670)
#define MOLEMOLE_UIABINLEVELSHOPWIDGETCONTROLLER_ONUIINIT_OFFSET UNITYSDK_OFFSET(0x1A747D80)
#define MOLEMOLE_UIABINLEVELSHOPWIDGETCONTROLLER_ONUIOPEN_OFFSET UNITYSDK_OFFSET(0x1A748260)
#define MOLEMOLE_UIABINLEVELSHOPWIDGETCONTROLLER__CTOR_OFFSET UNITYSDK_OFFSET(0x1A749790)
#define MOLEMOLE_UIABINLEVELSHOPWIDGETCONTROLLER___BASE_ONCREATEVIEW_OFFSET UNITYSDK_OFFSET(0x1A749830)
#define MOLEMOLE_UIABINLEVELSHOPWIDGETCONTROLLER___BASE_ONGAMEPADMODULESELECTINDEXFROMINPUT_OFFSET UNITYSDK_OFFSET(0x1A7498C0)
#define MOLEMOLE_UIABINLEVELSHOPWIDGETCONTROLLER___BASE_ONHIDE_OFFSET UNITYSDK_OFFSET(0x1A749970)
#define MOLEMOLE_UIABINLEVELSHOPWIDGETCONTROLLER___BASE_ONSHOW_OFFSET UNITYSDK_OFFSET(0x1A749A00)
#define MOLEMOLE_UIABINLEVELSHOPWIDGETCONTROLLER___BASE_ONUIDESTROY_OFFSET UNITYSDK_OFFSET(0x1A749AA0)
#define MOLEMOLE_UIABINLEVELSHOPWIDGETCONTROLLER___BASE_ONUIINIT_OFFSET UNITYSDK_OFFSET(0x1A749B30)
#define MOLEMOLE_UIABINLEVELSHOPWIDGETCONTROLLER___BASE_ONUIOPEN_OFFSET UNITYSDK_OFFSET(0x1A749BC0)

namespace MoleMole
{
	inline static constexpr unsigned int UIABInLevelShopWidgetController_TypeDefinitionIndex = 60421;

	class UIABInLevelShopWidgetController : public ::MoleMole::UIWidgetController
	{
	public:
		::HNHEIGGAFND* _view; // 0x2C8
		::HNHEIGGAFND_GMIPODIPJPC* KPOEKJMIGND; // 0x2D0
		::HNHEIGGAFND_JHCPMHDALIM* OFNPIHEEAIF; // 0x2D8
		::ODNBJIEICJH* KDEBCMGNCNH; // 0x2E0
		::ODNBJIEICJH* LOBAJMCKEGP; // 0x2E8
		::DEBNKJEHNIL* FFDBFAEKDCL; // 0x2F0
		::System::Boolean HGGOAHDFEMP; // 0x2F8
		::System::Byte _padding0[0x3];
		::UnityEngine::Color IKMBMPPJGNK; // 0x2FC
		::System::Byte _padding1[0x4];
		::MoleMole::UIAutoBattleEquipIconWidgetController* HHNNNGGNEHC; // 0x310
		::System::Collections::Generic::HashSet_1<::System::Int32>* SuggestIds; // 0x318

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIABINLEVELSHOPWIDGETCONTROLLER__CTOR_OFFSET))(this);
		}

		::System::Void OnUIInit()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIABINLEVELSHOPWIDGETCONTROLLER_ONUIINIT_OFFSET))(this);
		}

		::System::Void OnUIOpen(::MoleMole::UIControllerContextBase* openCtrlContext)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIControllerContextBase*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIABINLEVELSHOPWIDGETCONTROLLER_ONUIOPEN_OFFSET))(this, openCtrlContext);
		}

		::System::Void OnShow(::MoleMole::UIControllerContextBase* showCtrlContext)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIControllerContextBase*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIABINLEVELSHOPWIDGETCONTROLLER_ONSHOW_OFFSET))(this, showCtrlContext);
		}

		::System::Void OnHide()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIABINLEVELSHOPWIDGETCONTROLLER_ONHIDE_OFFSET))(this);
		}

		::System::Void OnCreateView(::MoleMole::UIControlReference* controlReference)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIControlReference*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIABINLEVELSHOPWIDGETCONTROLLER_ONCREATEVIEW_OFFSET))(this, controlReference);
		}

		::System::Void OnUIDestroy()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIABINLEVELSHOPWIDGETCONTROLLER_ONUIDESTROY_OFFSET))(this);
		}

		::System::Void OnGamepadModuleSelectIndexFromInput(::MoleMole::MonoGamepadModule* gamepadModule, ::System::Int32 index, ::UnityEngine::Transform* trans, ::OKKIMONLGJD result)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::MonoGamepadModule*, ::System::Int32, ::UnityEngine::Transform*, ::OKKIMONLGJD))((::PBYTE)hIl2Cpp + MOLEMOLE_UIABINLEVELSHOPWIDGETCONTROLLER_ONGAMEPADMODULESELECTINDEXFROMINPUT_OFFSET))(this, gamepadModule, index, trans, result);
		}

		::MoleMole::MonoGamepadModule* get_ShopModule()
		{
			return ((::MoleMole::MonoGamepadModule*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIABINLEVELSHOPWIDGETCONTROLLER_GET_SHOPMODULE_OFFSET))(this);
		}

		::MoleMole::MonoGamepadNavigatableList* get_ShopNavList()
		{
			return ((::MoleMole::MonoGamepadNavigatableList*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIABINLEVELSHOPWIDGETCONTROLLER_GET_SHOPNAVLIST_OFFSET))(this);
		}

		::System::Collections::Generic::IEnumerable_1<::System::Int32>* get_ActivatedCamps()
		{
			return ((::System::Collections::Generic::IEnumerable_1<::System::Int32>*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIABINLEVELSHOPWIDGETCONTROLLER_GET_ACTIVATEDCAMPS_OFFSET))(this);
		}

		::System::Void BindData(::DEBNKJEHNIL* viewModel)
		{
			return ((::System::Void(*)(::PVOID, ::DEBNKJEHNIL*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIABINLEVELSHOPWIDGETCONTROLLER_BINDDATA_OFFSET))(this, viewModel);
		}

		::System::Void CheckValid(::System::Int32 index)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + MOLEMOLE_UIABINLEVELSHOPWIDGETCONTROLLER_CHECKVALID_OFFSET))(this, index);
		}

		::System::Void __base_OnCreateView(::MoleMole::UIControlReference* P0)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIControlReference*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIABINLEVELSHOPWIDGETCONTROLLER___BASE_ONCREATEVIEW_OFFSET))(this, P0);
		}

		::System::Void __base_OnGamepadModuleSelectIndexFromInput(::MoleMole::MonoGamepadModule* P0, ::System::Int32 P1, ::UnityEngine::Transform* P2, ::OKKIMONLGJD P3)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::MonoGamepadModule*, ::System::Int32, ::UnityEngine::Transform*, ::OKKIMONLGJD))((::PBYTE)hIl2Cpp + MOLEMOLE_UIABINLEVELSHOPWIDGETCONTROLLER___BASE_ONGAMEPADMODULESELECTINDEXFROMINPUT_OFFSET))(this, P0, P1, P2, P3);
		}

		::System::Void __base_OnHide()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIABINLEVELSHOPWIDGETCONTROLLER___BASE_ONHIDE_OFFSET))(this);
		}

		::System::Void __base_OnShow(::MoleMole::UIControllerContextBase* P0)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIControllerContextBase*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIABINLEVELSHOPWIDGETCONTROLLER___BASE_ONSHOW_OFFSET))(this, P0);
		}

		::System::Void __base_OnUIDestroy()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIABINLEVELSHOPWIDGETCONTROLLER___BASE_ONUIDESTROY_OFFSET))(this);
		}

		::System::Void __base_OnUIInit()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIABINLEVELSHOPWIDGETCONTROLLER___BASE_ONUIINIT_OFFSET))(this);
		}

		::System::Void __base_OnUIOpen(::MoleMole::UIControllerContextBase* P0)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIControllerContextBase*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIABINLEVELSHOPWIDGETCONTROLLER___BASE_ONUIOPEN_OFFSET))(this, P0);
		}

		::System::Void FBHBICGACPI(::System::Int32 ABHBKFJKINO)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + MOLEMOLE_UIABINLEVELSHOPWIDGETCONTROLLER_FBHBICGACPI_OFFSET))(this, ABHBKFJKINO);
		}

		::System::Void DMDAGPLLEHB(::System::Boolean PFPJFCGFNFL)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + MOLEMOLE_UIABINLEVELSHOPWIDGETCONTROLLER_DMDAGPLLEHB_OFFSET))(this, PFPJFCGFNFL);
		}

		::System::Void IJCJEPHCLDE()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIABINLEVELSHOPWIDGETCONTROLLER_IJCJEPHCLDE_OFFSET))(this);
		}

		::System::Void CGOLPLFHIAD()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIABINLEVELSHOPWIDGETCONTROLLER_CGOLPLFHIAD_OFFSET))(this);
		}
	};
}
