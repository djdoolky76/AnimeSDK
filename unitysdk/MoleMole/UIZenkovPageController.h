#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/GMFAKIPCDED.h"
#include "unitysdk/GMKJPFMGGHJ.h"
#include "unitysdk/IHMFPHBDBAD.h"
#include "unitysdk/MoleMole/UIMainCityStorePageController.h"
#include "unitysdk/LIBOIKJGAIH.h"

class MOHDBDOMBPN;
namespace MoleMole { class UIControlReference; }
namespace MoleMole { class UIControllerContextBase; }
namespace MoleMole { class UIZenkovMain3DModelController; }
namespace System { class EventArgs; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define MOLEMOLE_UIZENKOVPAGECONTROLLER_COIMFMPAIMD_OFFSET UNITYSDK_OFFSET(0x12C0CE70)
#define MOLEMOLE_UIZENKOVPAGECONTROLLER_DJMLIBGMDMH_OFFSET UNITYSDK_OFFSET(0x12C0D450)
#define MOLEMOLE_UIZENKOVPAGECONTROLLER_GET_WINDOWTYPE_OFFSET UNITYSDK_OFFSET(0x12C0B5D0)
#define MOLEMOLE_UIZENKOVPAGECONTROLLER_HNLDIMGAGLA_OFFSET UNITYSDK_OFFSET(0x12C0D780)
#define MOLEMOLE_UIZENKOVPAGECONTROLLER_IIFJJCKPNHI_OFFSET UNITYSDK_OFFSET(0x12C0B9F0)
#define MOLEMOLE_UIZENKOVPAGECONTROLLER_NIMOAMNOKHE_OFFSET UNITYSDK_OFFSET(0x12C0DFD0)
#define MOLEMOLE_UIZENKOVPAGECONTROLLER_OGMPOGIHBIK_OFFSET UNITYSDK_OFFSET(0x12C0B980)
#define MOLEMOLE_UIZENKOVPAGECONTROLLER_ONCREATEVIEWMODEL_OFFSET UNITYSDK_OFFSET(0x12C0B5E0)
#define MOLEMOLE_UIZENKOVPAGECONTROLLER_ONPOSTPAGESHOWED_OFFSET UNITYSDK_OFFSET(0x12C0CE20)
#define MOLEMOLE_UIZENKOVPAGECONTROLLER_ONSHOW_OFFSET UNITYSDK_OFFSET(0x12C0B750)
#define MOLEMOLE_UIZENKOVPAGECONTROLLER_ONUICLOSE_OFFSET UNITYSDK_OFFSET(0x12C0DA30)
#define MOLEMOLE_UIZENKOVPAGECONTROLLER_ONUIINIT_OFFSET UNITYSDK_OFFSET(0x12C0B680)
#define MOLEMOLE_UIZENKOVPAGECONTROLLER_ONUIOPEN_OFFSET UNITYSDK_OFFSET(0x12C0CFC0)
#define MOLEMOLE_UIZENKOVPAGECONTROLLER_PNHMHIEKGAO_OFFSET UNITYSDK_OFFSET(0x12C0D640)
#define MOLEMOLE_UIZENKOVPAGECONTROLLER__CCTOR_OFFSET UNITYSDK_OFFSET(0x12C0DAE0)
#define MOLEMOLE_UIZENKOVPAGECONTROLLER__CTOR_OFFSET UNITYSDK_OFFSET(0x12C0DAD0)
#define MOLEMOLE_UIZENKOVPAGECONTROLLER___BASE_ONCREATEVIEWMODEL_OFFSET UNITYSDK_OFFSET(0x12C0DE50)
#define MOLEMOLE_UIZENKOVPAGECONTROLLER___BASE_ONPOSTPAGESHOWED_OFFSET UNITYSDK_OFFSET(0x12C0DEF0)
#define MOLEMOLE_UIZENKOVPAGECONTROLLER___BASE_ONSHOW_OFFSET UNITYSDK_OFFSET(0x12C0DF00)
#define MOLEMOLE_UIZENKOVPAGECONTROLLER___BASE_ONUICLOSE_OFFSET UNITYSDK_OFFSET(0x12C0DFA0)
#define MOLEMOLE_UIZENKOVPAGECONTROLLER___BASE_ONUIINIT_OFFSET UNITYSDK_OFFSET(0x12C0DFB0)
#define MOLEMOLE_UIZENKOVPAGECONTROLLER___BASE_ONUIOPEN_OFFSET UNITYSDK_OFFSET(0x12C0DFC0)

namespace MoleMole
{
	inline static constexpr unsigned int UIZenkovPageController_TypeDefinitionIndex = 88881;

	class UIZenkovPageController : public ::MoleMole::UIMainCityStorePageController
	{
	public:
		static ::Il2CppArray<::System::String*>** StaticGet_EEJPALBBAPH()
		{
			return (::Il2CppArray<::System::String*>**)Il2CppClass::FromTypeDefinitionIndex(UIZenkovPageController_TypeDefinitionIndex)->GetStaticField(0x50E20);
		}
		static ::System::Collections::Generic::Dictionary_2<::System::String*, ::GMKJPFMGGHJ>** StaticGet_PBLDECHLKHN()
		{
			return (::System::Collections::Generic::Dictionary_2<::System::String*, ::GMKJPFMGGHJ>**)Il2CppClass::FromTypeDefinitionIndex(UIZenkovPageController_TypeDefinitionIndex)->GetStaticField(0x50E28);
		}
		static ::Il2CppArray<::System::String*>** StaticGet_IJGDHCINBEK()
		{
			return (::Il2CppArray<::System::String*>**)Il2CppClass::FromTypeDefinitionIndex(UIZenkovPageController_TypeDefinitionIndex)->GetStaticField(0x50E30);
		}
		::MoleMole::UIZenkovMain3DModelController* CGOCBKFMGII; // 0x330

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIZENKOVPAGECONTROLLER__CTOR_OFFSET))(this);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + MOLEMOLE_UIZENKOVPAGECONTROLLER__CCTOR_OFFSET))();
		}

		::GMFAKIPCDED get_windowType()
		{
			return ((::GMFAKIPCDED(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIZENKOVPAGECONTROLLER_GET_WINDOWTYPE_OFFSET))(this);
		}

		::System::Void OnCreateViewModel(::LIBOIKJGAIH& binderInfo, ::MoleMole::UIControlReference* controlReference)
		{
			return ((::System::Void(*)(::PVOID, ::LIBOIKJGAIH&, ::MoleMole::UIControlReference*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIZENKOVPAGECONTROLLER_ONCREATEVIEWMODEL_OFFSET))(this, binderInfo, controlReference);
		}

		::System::Void OnUIInit()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIZENKOVPAGECONTROLLER_ONUIINIT_OFFSET))(this);
		}

		::System::Void OnShow(::MoleMole::UIControllerContextBase* showCtrlContext)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIControllerContextBase*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIZENKOVPAGECONTROLLER_ONSHOW_OFFSET))(this, showCtrlContext);
		}

		::System::Void OnPostPageShowed()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIZENKOVPAGECONTROLLER_ONPOSTPAGESHOWED_OFFSET))(this);
		}

		::System::Void OnUIOpen(::MoleMole::UIControllerContextBase* openCtrlContext)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIControllerContextBase*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIZENKOVPAGECONTROLLER_ONUIOPEN_OFFSET))(this, openCtrlContext);
		}

		::System::Void OnUIClose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIZENKOVPAGECONTROLLER_ONUICLOSE_OFFSET))(this);
		}

		::System::Void __base_OnCreateViewModel(::LIBOIKJGAIH& P0, ::MoleMole::UIControlReference* P1)
		{
			return ((::System::Void(*)(::PVOID, ::LIBOIKJGAIH&, ::MoleMole::UIControlReference*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIZENKOVPAGECONTROLLER___BASE_ONCREATEVIEWMODEL_OFFSET))(this, P0, P1);
		}

		::System::Void __base_OnPostPageShowed()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIZENKOVPAGECONTROLLER___BASE_ONPOSTPAGESHOWED_OFFSET))(this);
		}

		::System::Void __base_OnShow(::MoleMole::UIControllerContextBase* P0)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIControllerContextBase*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIZENKOVPAGECONTROLLER___BASE_ONSHOW_OFFSET))(this, P0);
		}

		::System::Void __base_OnUIClose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIZENKOVPAGECONTROLLER___BASE_ONUICLOSE_OFFSET))(this);
		}

		::System::Void __base_OnUIInit()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIZENKOVPAGECONTROLLER___BASE_ONUIINIT_OFFSET))(this);
		}

		::System::Void __base_OnUIOpen(::MoleMole::UIControllerContextBase* P0)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIControllerContextBase*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIZENKOVPAGECONTROLLER___BASE_ONUIOPEN_OFFSET))(this, P0);
		}

		::System::Void IIFJJCKPNHI()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIZENKOVPAGECONTROLLER_IIFJJCKPNHI_OFFSET))(this);
		}

		::System::Void HNLDIMGAGLA()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIZENKOVPAGECONTROLLER_HNLDIMGAGLA_OFFSET))(this);
		}

		::System::Void COIMFMPAIMD()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIZENKOVPAGECONTROLLER_COIMFMPAIMD_OFFSET))(this);
		}

		::System::Void NIMOAMNOKHE(::System::EventArgs* PIIPCLCCOIG)
		{
			return ((::System::Void(*)(::PVOID, ::System::EventArgs*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIZENKOVPAGECONTROLLER_NIMOAMNOKHE_OFFSET))(this, PIIPCLCCOIG);
		}

		::MOHDBDOMBPN* OGMPOGIHBIK()
		{
			return ((::MOHDBDOMBPN*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIZENKOVPAGECONTROLLER_OGMPOGIHBIK_OFFSET))(this);
		}

		::System::Void DJMLIBGMDMH(::GMKJPFMGGHJ NHHPNPHHMBH)
		{
			return ((::System::Void(*)(::PVOID, ::GMKJPFMGGHJ))((::PBYTE)hIl2Cpp + MOLEMOLE_UIZENKOVPAGECONTROLLER_DJMLIBGMDMH_OFFSET))(this, NHHPNPHHMBH);
		}

		::System::Void PNHMHIEKGAO(::IHMFPHBDBAD MLBNKKKCJGF)
		{
			return ((::System::Void(*)(::PVOID, ::IHMFPHBDBAD))((::PBYTE)hIl2Cpp + MOLEMOLE_UIZENKOVPAGECONTROLLER_PNHMHIEKGAO_OFFSET))(this, MLBNKKKCJGF);
		}
	};
}
