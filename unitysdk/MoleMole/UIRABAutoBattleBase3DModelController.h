#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/IJGIBMLAOEG.h"
#include "unitysdk/MoleMole/UIBase3DModelController.h"
#include "unitysdk/Foundation/AssetPath.h"

class JHPKNLBALEK;
namespace MoleMole { class ScreenPlayer; }
namespace MoleMole { class UIControlReference; }
namespace MoleMole { class UIControllerContextBase; }
namespace MoleMole::Battle { class Entity; }
namespace System { class Action; }
namespace System { class Object; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T> class List_1; }
namespace UnityEngine { class GameObject; }

#define MOLEMOLE_UIRABAUTOBATTLEBASE3DMODELCONTROLLER_AEBLJEGCMKG_OFFSET UNITYSDK_OFFSET(0x186EF3E0)
#define MOLEMOLE_UIRABAUTOBATTLEBASE3DMODELCONTROLLER_AJGNBKFJCFA_OFFSET UNITYSDK_OFFSET(0x186EF7F0)
#define MOLEMOLE_UIRABAUTOBATTLEBASE3DMODELCONTROLLER_BPFMALJOBOM_OFFSET UNITYSDK_OFFSET(0x186EF0F0)
#define MOLEMOLE_UIRABAUTOBATTLEBASE3DMODELCONTROLLER_CHANGESHOWBUDDY_OFFSET UNITYSDK_OFFSET(0x186F0500)
#define MOLEMOLE_UIRABAUTOBATTLEBASE3DMODELCONTROLLER_CLEARBUDDYCACHE_OFFSET UNITYSDK_OFFSET(0x186F0070)
#define MOLEMOLE_UIRABAUTOBATTLEBASE3DMODELCONTROLLER_GEPPHMJKKLK_OFFSET UNITYSDK_OFFSET(0x186F0010)
#define MOLEMOLE_UIRABAUTOBATTLEBASE3DMODELCONTROLLER_GET_ALLOWASSETPROXYUNLOADRES_OFFSET UNITYSDK_OFFSET(0x186F04E0)
#define MOLEMOLE_UIRABAUTOBATTLEBASE3DMODELCONTROLLER_GET_ISCHANGING_OFFSET UNITYSDK_OFFSET(0x186F04F0)
#define MOLEMOLE_UIRABAUTOBATTLEBASE3DMODELCONTROLLER_GIDMKPICIPH_OFFSET UNITYSDK_OFFSET(0x186F1190)
#define MOLEMOLE_UIRABAUTOBATTLEBASE3DMODELCONTROLLER_HIDEBUDDY_OFFSET UNITYSDK_OFFSET(0x186F1720)
#define MOLEMOLE_UIRABAUTOBATTLEBASE3DMODELCONTROLLER_IDKPIPBCAML_OFFSET UNITYSDK_OFFSET(0x186F1DC0)
#define MOLEMOLE_UIRABAUTOBATTLEBASE3DMODELCONTROLLER_ONCREATEVIEW_OFFSET UNITYSDK_OFFSET(0x186EEED0)
#define MOLEMOLE_UIRABAUTOBATTLEBASE3DMODELCONTROLLER_ONUIDESTROY_OFFSET UNITYSDK_OFFSET(0x186EFF50)
#define MOLEMOLE_UIRABAUTOBATTLEBASE3DMODELCONTROLLER_ONUIINIT_OFFSET UNITYSDK_OFFSET(0x186EED70)
#define MOLEMOLE_UIRABAUTOBATTLEBASE3DMODELCONTROLLER_ONUIOPEN_OFFSET UNITYSDK_OFFSET(0x186EEE20)
#define MOLEMOLE_UIRABAUTOBATTLEBASE3DMODELCONTROLLER_PLAYFADEIN_OFFSET UNITYSDK_OFFSET(0x186EEF60)
#define MOLEMOLE_UIRABAUTOBATTLEBASE3DMODELCONTROLLER_PLAYMANUFACTUREANI_OFFSET UNITYSDK_OFFSET(0x186EF4E0)
#define MOLEMOLE_UIRABAUTOBATTLEBASE3DMODELCONTROLLER_PLAYSTAGEUPANI_OFFSET UNITYSDK_OFFSET(0x186EFBC0)
#define MOLEMOLE_UIRABAUTOBATTLEBASE3DMODELCONTROLLER_PLAYSWITCHANIMATION_OFFSET UNITYSDK_OFFSET(0x186EF190)
#define MOLEMOLE_UIRABAUTOBATTLEBASE3DMODELCONTROLLER_UPDATE_OFFSET UNITYSDK_OFFSET(0x186EFE80)
#define MOLEMOLE_UIRABAUTOBATTLEBASE3DMODELCONTROLLER__CCTOR_OFFSET UNITYSDK_OFFSET(0x186F1C90)
#define MOLEMOLE_UIRABAUTOBATTLEBASE3DMODELCONTROLLER__CTOR_OFFSET UNITYSDK_OFFSET(0x186F1BD0)
#define MOLEMOLE_UIRABAUTOBATTLEBASE3DMODELCONTROLLER___BASE_ONCREATEVIEW_OFFSET UNITYSDK_OFFSET(0x186F1D00)
#define MOLEMOLE_UIRABAUTOBATTLEBASE3DMODELCONTROLLER___BASE_ONUIDESTROY_OFFSET UNITYSDK_OFFSET(0x186F1D90)
#define MOLEMOLE_UIRABAUTOBATTLEBASE3DMODELCONTROLLER___BASE_ONUIINIT_OFFSET UNITYSDK_OFFSET(0x186F1DA0)
#define MOLEMOLE_UIRABAUTOBATTLEBASE3DMODELCONTROLLER___BASE_ONUIOPEN_OFFSET UNITYSDK_OFFSET(0x186F1DB0)

namespace MoleMole
{
	inline static constexpr unsigned int UIRABAutoBattleBase3DModelController_TypeDefinitionIndex = 60594;

	class UIRABAutoBattleBase3DModelController : public ::MoleMole::UIBase3DModelController
	{
	public:
		static ::System::String** StaticGet_Switch_Out_Left()
		{
			return (::System::String**)Il2CppClass::FromTypeDefinitionIndex(UIRABAutoBattleBase3DModelController_TypeDefinitionIndex)->GetStaticField(0x48C60);
		}
		static ::System::String** StaticGet_Switch_In_Right()
		{
			return (::System::String**)Il2CppClass::FromTypeDefinitionIndex(UIRABAutoBattleBase3DModelController_TypeDefinitionIndex)->GetStaticField(0x48C68);
		}
		static ::System::String** StaticGet_Switch_In_Left()
		{
			return (::System::String**)Il2CppClass::FromTypeDefinitionIndex(UIRABAutoBattleBase3DModelController_TypeDefinitionIndex)->GetStaticField(0x48C70);
		}
		static ::System::String** StaticGet_Switch_Out_Right()
		{
			return (::System::String**)Il2CppClass::FromTypeDefinitionIndex(UIRABAutoBattleBase3DModelController_TypeDefinitionIndex)->GetStaticField(0x48C78);
		}
		// static const ::System::Int32 PMGNPDCHHJP = 0x3; // 0x0
		// static const ::System::Int32 PMDBEOALFFD = 0x2; // 0x0
		// static const ::System::Int32 MCGLCOFLAMD = 0x1; // 0x0
		// static const ::System::String* MEEBKBOPPPB; // 0x0
		// static const ::System::String* BAMOEIOAEMD; // 0x0
		// static const ::System::String* DGGHGAFKDFA; // 0x0
		// static const ::System::String* HDJHKCILGOE; // 0x0
		// static const ::System::String* HGCOKOIKMPB; // 0x0
		// static const ::System::String* KCEKAKGFHOC; // 0x0
		// static const ::System::String* BHHGOIGCNHM; // 0x0
		// static const ::System::String* ECEHNGOCFEG; // 0x0
		// static const ::System::String* ILLGODFDJBA; // 0x0
		// static const ::System::String* DNJOGLDCADE; // 0x0
		// static const ::System::String* GJMLFFLOMKI; // 0x0
		::JHPKNLBALEK* _view; // 0x368
		::MoleMole::ScreenPlayer* NMGHLKICPLN; // 0x370
		::System::Collections::Generic::List_1<::System::Object*>* MEBJGAJECAL; // 0x378
		::System::Int32 KGPMCLBBMEC; // 0x380
		::System::Int32 MIHDJAIJEDO; // 0x384
		::MoleMole::Battle::Entity* DPCHMADFCHE; // 0x388
		::System::Boolean KIBJDCNIAAA; // 0x390

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIRABAUTOBATTLEBASE3DMODELCONTROLLER__CTOR_OFFSET))(this);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + MOLEMOLE_UIRABAUTOBATTLEBASE3DMODELCONTROLLER__CCTOR_OFFSET))();
		}

		::System::Void OnUIInit()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIRABAUTOBATTLEBASE3DMODELCONTROLLER_ONUIINIT_OFFSET))(this);
		}

		::System::Void OnUIOpen(::MoleMole::UIControllerContextBase* openCtrlContext)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIControllerContextBase*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIRABAUTOBATTLEBASE3DMODELCONTROLLER_ONUIOPEN_OFFSET))(this, openCtrlContext);
		}

		::System::Void OnCreateView(::MoleMole::UIControlReference* controlReference)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIControlReference*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIRABAUTOBATTLEBASE3DMODELCONTROLLER_ONCREATEVIEW_OFFSET))(this, controlReference);
		}

		::System::Void PlayFadeIn(::IJGIBMLAOEG pageType, ::System::Boolean withAni)
		{
			return ((::System::Void(*)(::PVOID, ::IJGIBMLAOEG, ::System::Boolean))((::PBYTE)hIl2Cpp + MOLEMOLE_UIRABAUTOBATTLEBASE3DMODELCONTROLLER_PLAYFADEIN_OFFSET))(this, pageType, withAni);
		}

		::System::Void PlaySwitchAnimation(::IJGIBMLAOEG fromPage, ::IJGIBMLAOEG toPage, ::System::Action* nextUIOpenAction)
		{
			return ((::System::Void(*)(::PVOID, ::IJGIBMLAOEG, ::IJGIBMLAOEG, ::System::Action*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIRABAUTOBATTLEBASE3DMODELCONTROLLER_PLAYSWITCHANIMATION_OFFSET))(this, fromPage, toPage, nextUIOpenAction);
		}

		::System::Void PlayManufactureAni(::System::Int32 maxRarity, ::System::Action* onComplete)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::Action*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIRABAUTOBATTLEBASE3DMODELCONTROLLER_PLAYMANUFACTUREANI_OFFSET))(this, maxRarity, onComplete);
		}

		::System::Void PlayStageUpAni(::System::Action* onComplete)
		{
			return ((::System::Void(*)(::PVOID, ::System::Action*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIRABAUTOBATTLEBASE3DMODELCONTROLLER_PLAYSTAGEUPANI_OFFSET))(this, onComplete);
		}

		::System::Void Update()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIRABAUTOBATTLEBASE3DMODELCONTROLLER_UPDATE_OFFSET))(this);
		}

		::System::Void OnUIDestroy()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIRABAUTOBATTLEBASE3DMODELCONTROLLER_ONUIDESTROY_OFFSET))(this);
		}

		::System::Boolean get_AllowAssetProxyUnloadRes()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIRABAUTOBATTLEBASE3DMODELCONTROLLER_GET_ALLOWASSETPROXYUNLOADRES_OFFSET))(this);
		}

		::System::Boolean get_IsChanging()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIRABAUTOBATTLEBASE3DMODELCONTROLLER_GET_ISCHANGING_OFFSET))(this);
		}

		::System::Void ChangeShowBuddy(::System::Int32 buddyUIConfigId, ::System::Int32 buddyIndex)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + MOLEMOLE_UIRABAUTOBATTLEBASE3DMODELCONTROLLER_CHANGESHOWBUDDY_OFFSET))(this, buddyUIConfigId, buddyIndex);
		}

		::System::Void HideBuddy(::System::Boolean anim)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + MOLEMOLE_UIRABAUTOBATTLEBASE3DMODELCONTROLLER_HIDEBUDDY_OFFSET))(this, anim);
		}

		::System::Void ClearBuddyCache()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIRABAUTOBATTLEBASE3DMODELCONTROLLER_CLEARBUDDYCACHE_OFFSET))(this);
		}

		::System::Void __base_OnCreateView(::MoleMole::UIControlReference* P0)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIControlReference*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIRABAUTOBATTLEBASE3DMODELCONTROLLER___BASE_ONCREATEVIEW_OFFSET))(this, P0);
		}

		::System::Void __base_OnUIDestroy()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIRABAUTOBATTLEBASE3DMODELCONTROLLER___BASE_ONUIDESTROY_OFFSET))(this);
		}

		::System::Void __base_OnUIInit()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIRABAUTOBATTLEBASE3DMODELCONTROLLER___BASE_ONUIINIT_OFFSET))(this);
		}

		::System::Void __base_OnUIOpen(::MoleMole::UIControllerContextBase* P0)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIControllerContextBase*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIRABAUTOBATTLEBASE3DMODELCONTROLLER___BASE_ONUIOPEN_OFFSET))(this, P0);
		}

		::System::Void GIDMKPICIPH(::Foundation::AssetPath OIIHCACKLHD, ::UnityEngine::GameObject* LHPFMGBDFPN, ::System::Boolean FIEDPDAJPBB)
		{
			return ((::System::Void(*)(::PVOID, ::Foundation::AssetPath, ::UnityEngine::GameObject*, ::System::Boolean))((::PBYTE)hIl2Cpp + MOLEMOLE_UIRABAUTOBATTLEBASE3DMODELCONTROLLER_GIDMKPICIPH_OFFSET))(this, OIIHCACKLHD, LHPFMGBDFPN, FIEDPDAJPBB);
		}

		::System::Void AJGNBKFJCFA(::System::Int32 EHEDJFPEGIH)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + MOLEMOLE_UIRABAUTOBATTLEBASE3DMODELCONTROLLER_AJGNBKFJCFA_OFFSET))(this, EHEDJFPEGIH);
		}

		::System::String* AEBLJEGCMKG(::IJGIBMLAOEG KFNPMCPBEAI, ::IJGIBMLAOEG CNFKIBDOIDF)
		{
			return ((::System::String*(*)(::PVOID, ::IJGIBMLAOEG, ::IJGIBMLAOEG))((::PBYTE)hIl2Cpp + MOLEMOLE_UIRABAUTOBATTLEBASE3DMODELCONTROLLER_AEBLJEGCMKG_OFFSET))(this, KFNPMCPBEAI, CNFKIBDOIDF);
		}

		::System::String* BPFMALJOBOM(::IJGIBMLAOEG NGCLLGBNOBA)
		{
			return ((::System::String*(*)(::PVOID, ::IJGIBMLAOEG))((::PBYTE)hIl2Cpp + MOLEMOLE_UIRABAUTOBATTLEBASE3DMODELCONTROLLER_BPFMALJOBOM_OFFSET))(this, NGCLLGBNOBA);
		}

		::System::Void IDKPIPBCAML()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIRABAUTOBATTLEBASE3DMODELCONTROLLER_IDKPIPBCAML_OFFSET))(this);
		}

		::System::Void GEPPHMJKKLK()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIRABAUTOBATTLEBASE3DMODELCONTROLLER_GEPPHMJKKLK_OFFSET))(this);
		}
	};
}
