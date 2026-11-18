#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Foundation/Coroutine/CoroutineHandle.h"
#include "unitysdk/MoleMole/UIInLevelPauseBuffWidgetController_EShowType.h"
#include "unitysdk/MoleMole/UIWidgetController.h"

class NMMMGKDODNM;
namespace MoleMole { class UIControlReference; }
namespace MoleMole { class UIControllerContextBase; }
namespace MoleMole { class UIGeneralDynamicTipsPopWindowController; }
namespace MoleMole { class UIInLevelPauseBuffRowWidgetController; }
namespace MoleMole { class UITabBtnRoleRowWidgetController; }
namespace MoleMole::Battle { class Entity; }
namespace System { class EventArgs; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define MOLEMOLE_UIINLEVELPAUSEBUFFWIDGETCONTROLLER_AJHOPCBMJLF_OFFSET UNITYSDK_OFFSET(0x175F0380)
#define MOLEMOLE_UIINLEVELPAUSEBUFFWIDGETCONTROLLER_BCIOLJEBCFH_OFFSET UNITYSDK_OFFSET(0x175EDC20)
#define MOLEMOLE_UIINLEVELPAUSEBUFFWIDGETCONTROLLER_CAEHECDIBOG_OFFSET UNITYSDK_OFFSET(0x175EC730)
#define MOLEMOLE_UIINLEVELPAUSEBUFFWIDGETCONTROLLER_CCOBBAIFGDM_OFFSET UNITYSDK_OFFSET(0x175EEE60)
#define MOLEMOLE_UIINLEVELPAUSEBUFFWIDGETCONTROLLER_ELJHMFBMLAO_OFFSET UNITYSDK_OFFSET(0x175EEB00)
#define MOLEMOLE_UIINLEVELPAUSEBUFFWIDGETCONTROLLER_FBOFPEOCJFA_OFFSET UNITYSDK_OFFSET(0x175EE500)
#define MOLEMOLE_UIINLEVELPAUSEBUFFWIDGETCONTROLLER_FDEHCCMMNIL_OFFSET UNITYSDK_OFFSET(0x175ECC10)
#define MOLEMOLE_UIINLEVELPAUSEBUFFWIDGETCONTROLLER_FEPIOGHKBBK_OFFSET UNITYSDK_OFFSET(0x175F07D0)
#define MOLEMOLE_UIINLEVELPAUSEBUFFWIDGETCONTROLLER_FLFNKKOGJMG_OFFSET UNITYSDK_OFFSET(0x175EE4F0)
#define MOLEMOLE_UIINLEVELPAUSEBUFFWIDGETCONTROLLER_KJMBNLEGFAH_OFFSET UNITYSDK_OFFSET(0x175EE750)
#define MOLEMOLE_UIINLEVELPAUSEBUFFWIDGETCONTROLLER_NPECCBKOFFH_OFFSET UNITYSDK_OFFSET(0x175EE060)
#define MOLEMOLE_UIINLEVELPAUSEBUFFWIDGETCONTROLLER_OKONDNKDINB_OFFSET UNITYSDK_OFFSET(0x175F0080)
#define MOLEMOLE_UIINLEVELPAUSEBUFFWIDGETCONTROLLER_OLJKPBLKLGM_OFFSET UNITYSDK_OFFSET(0x175EDF80)
#define MOLEMOLE_UIINLEVELPAUSEBUFFWIDGETCONTROLLER_ONCREATEVIEW_OFFSET UNITYSDK_OFFSET(0x175ED640)
#define MOLEMOLE_UIINLEVELPAUSEBUFFWIDGETCONTROLLER_ONUIDESTROY_OFFSET UNITYSDK_OFFSET(0x175ED6D0)
#define MOLEMOLE_UIINLEVELPAUSEBUFFWIDGETCONTROLLER_ONUIINIT_OFFSET UNITYSDK_OFFSET(0x175EC4B0)
#define MOLEMOLE_UIINLEVELPAUSEBUFFWIDGETCONTROLLER_ONUIOPEN_OFFSET UNITYSDK_OFFSET(0x175EC510)
#define MOLEMOLE_UIINLEVELPAUSEBUFFWIDGETCONTROLLER__CCTOR_OFFSET UNITYSDK_OFFSET(0x175ED980)
#define MOLEMOLE_UIINLEVELPAUSEBUFFWIDGETCONTROLLER__CTOR_OFFSET UNITYSDK_OFFSET(0x175ED780)
#define MOLEMOLE_UIINLEVELPAUSEBUFFWIDGETCONTROLLER___BASE_ONCREATEVIEW_OFFSET UNITYSDK_OFFSET(0x175ED9E0)
#define MOLEMOLE_UIINLEVELPAUSEBUFFWIDGETCONTROLLER___BASE_ONUIDESTROY_OFFSET UNITYSDK_OFFSET(0x175EDA70)
#define MOLEMOLE_UIINLEVELPAUSEBUFFWIDGETCONTROLLER___BASE_ONUIINIT_OFFSET UNITYSDK_OFFSET(0x175EDB00)
#define MOLEMOLE_UIINLEVELPAUSEBUFFWIDGETCONTROLLER___BASE_ONUIOPEN_OFFSET UNITYSDK_OFFSET(0x175EDB90)

namespace MoleMole
{
	inline static constexpr unsigned int UIInLevelPauseBuffWidgetController_TypeDefinitionIndex = 40420;

	class UIInLevelPauseBuffWidgetController : public ::MoleMole::UIWidgetController
	{
	public:
		static ::System::String** StaticGet_MOCKOOAMOHM()
		{
			return (::System::String**)Il2CppClass::FromTypeDefinitionIndex(UIInLevelPauseBuffWidgetController_TypeDefinitionIndex)->GetStaticField(0x45020);
		}
		static ::System::String** StaticGet_HOELJBHDNNE()
		{
			return (::System::String**)Il2CppClass::FromTypeDefinitionIndex(UIInLevelPauseBuffWidgetController_TypeDefinitionIndex)->GetStaticField(0x45028);
		}
		static ::System::Int32* StaticGet_MJLOPCIMLKH()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(UIInLevelPauseBuffWidgetController_TypeDefinitionIndex)->GetStaticField(0xFE80);
		}
		::NMMMGKDODNM* _view; // 0x2C8
		::System::Collections::Generic::List_1<::Foundation::Coroutine::CoroutineHandle>* KEOIBHMAGAP; // 0x2D0
		::System::Collections::Generic::List_1<::MoleMole::UIInLevelPauseBuffRowWidgetController*>* PFNLNHALJEG; // 0x2D8
		::System::UInt32 PCJLKCOPBLM; // 0x2E0
		::MoleMole::UIInLevelPauseBuffWidgetController_EShowType LCCCPKADGLB; // 0x2E4
		::System::Collections::Generic::List_1<::MoleMole::Battle::Entity*>* FIOHCKOGOHA; // 0x2E8
		::MoleMole::Battle::Entity* NHBBBPLNDLL; // 0x2F0
		::MoleMole::UIGeneralDynamicTipsPopWindowController* IGFGIPHIEPJ; // 0x2F8
		::System::Collections::Generic::List_1<::System::Int32>* DDJBIPMDDPA; // 0x300
		::System::Collections::Generic::List_1<::MoleMole::UITabBtnRoleRowWidgetController*>* PPIBEBPIBHG; // 0x308

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIINLEVELPAUSEBUFFWIDGETCONTROLLER__CTOR_OFFSET))(this);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + MOLEMOLE_UIINLEVELPAUSEBUFFWIDGETCONTROLLER__CCTOR_OFFSET))();
		}

		::System::Void OnUIInit()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIINLEVELPAUSEBUFFWIDGETCONTROLLER_ONUIINIT_OFFSET))(this);
		}

		::System::Void OnUIOpen(::MoleMole::UIControllerContextBase* openCtrlContext)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIControllerContextBase*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIINLEVELPAUSEBUFFWIDGETCONTROLLER_ONUIOPEN_OFFSET))(this, openCtrlContext);
		}

		::System::Void OnCreateView(::MoleMole::UIControlReference* controlReference)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIControlReference*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIINLEVELPAUSEBUFFWIDGETCONTROLLER_ONCREATEVIEW_OFFSET))(this, controlReference);
		}

		::System::Void OnUIDestroy()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIINLEVELPAUSEBUFFWIDGETCONTROLLER_ONUIDESTROY_OFFSET))(this);
		}

		::System::Void __base_OnCreateView(::MoleMole::UIControlReference* P0)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIControlReference*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIINLEVELPAUSEBUFFWIDGETCONTROLLER___BASE_ONCREATEVIEW_OFFSET))(this, P0);
		}

		::System::Void __base_OnUIDestroy()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIINLEVELPAUSEBUFFWIDGETCONTROLLER___BASE_ONUIDESTROY_OFFSET))(this);
		}

		::System::Void __base_OnUIInit()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIINLEVELPAUSEBUFFWIDGETCONTROLLER___BASE_ONUIINIT_OFFSET))(this);
		}

		::System::Void __base_OnUIOpen(::MoleMole::UIControllerContextBase* P0)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIControllerContextBase*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIINLEVELPAUSEBUFFWIDGETCONTROLLER___BASE_ONUIOPEN_OFFSET))(this, P0);
		}

		::System::Void BCIOLJEBCFH(::System::Int32 ABHBKFJKINO, ::System::Boolean KCBDGFHGNJN)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::Boolean))((::PBYTE)hIl2Cpp + MOLEMOLE_UIINLEVELPAUSEBUFFWIDGETCONTROLLER_BCIOLJEBCFH_OFFSET))(this, ABHBKFJKINO, KCBDGFHGNJN);
		}

		::System::Void FLFNKKOGJMG(::System::EventArgs* KOIBHLHLMFC)
		{
			return ((::System::Void(*)(::PVOID, ::System::EventArgs*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIINLEVELPAUSEBUFFWIDGETCONTROLLER_FLFNKKOGJMG_OFFSET))(this, KOIBHLHLMFC);
		}

		::System::Void CAEHECDIBOG()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIINLEVELPAUSEBUFFWIDGETCONTROLLER_CAEHECDIBOG_OFFSET))(this);
		}

		::System::Boolean FBOFPEOCJFA(::MoleMole::Battle::Entity* FINEANOLAPH)
		{
			return ((::System::Boolean(*)(::PVOID, ::MoleMole::Battle::Entity*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIINLEVELPAUSEBUFFWIDGETCONTROLLER_FBOFPEOCJFA_OFFSET))(this, FINEANOLAPH);
		}

		::System::Void OLJKPBLKLGM(::System::Int32 ABHBKFJKINO, ::System::Boolean OFJOIMFKEKA, ::System::Boolean HIFAOHFLEMM)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::Boolean, ::System::Boolean))((::PBYTE)hIl2Cpp + MOLEMOLE_UIINLEVELPAUSEBUFFWIDGETCONTROLLER_OLJKPBLKLGM_OFFSET))(this, ABHBKFJKINO, OFJOIMFKEKA, HIFAOHFLEMM);
		}

		::System::Void CCOBBAIFGDM(::System::UInt32 DNPIKAJNNFH, ::System::Boolean OFJOIMFKEKA, ::System::Boolean HIFAOHFLEMM)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32, ::System::Boolean, ::System::Boolean))((::PBYTE)hIl2Cpp + MOLEMOLE_UIINLEVELPAUSEBUFFWIDGETCONTROLLER_CCOBBAIFGDM_OFFSET))(this, DNPIKAJNNFH, OFJOIMFKEKA, HIFAOHFLEMM);
		}

		::System::Void AJHOPCBMJLF()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIINLEVELPAUSEBUFFWIDGETCONTROLLER_AJHOPCBMJLF_OFFSET))(this);
		}

		::System::Void KJMBNLEGFAH(::MoleMole::Battle::Entity* KECKGDFIALJ, ::System::Boolean OFJOIMFKEKA, ::System::Boolean HIFAOHFLEMM)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::Battle::Entity*, ::System::Boolean, ::System::Boolean))((::PBYTE)hIl2Cpp + MOLEMOLE_UIINLEVELPAUSEBUFFWIDGETCONTROLLER_KJMBNLEGFAH_OFFSET))(this, KECKGDFIALJ, OFJOIMFKEKA, HIFAOHFLEMM);
		}

		::System::Void OKONDNKDINB()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIINLEVELPAUSEBUFFWIDGETCONTROLLER_OKONDNKDINB_OFFSET))(this);
		}

		::System::Void ELJHMFBMLAO()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIINLEVELPAUSEBUFFWIDGETCONTROLLER_ELJHMFBMLAO_OFFSET))(this);
		}

		::System::Void FDEHCCMMNIL()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIINLEVELPAUSEBUFFWIDGETCONTROLLER_FDEHCCMMNIL_OFFSET))(this);
		}

		::System::Void FEPIOGHKBBK(::System::Int32 HBJOLKHGGDD)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + MOLEMOLE_UIINLEVELPAUSEBUFFWIDGETCONTROLLER_FEPIOGHKBBK_OFFSET))(this, HBJOLKHGGDD);
		}

		::System::Void NPECCBKOFFH(::MoleMole::Battle::Entity* FINEANOLAPH, ::System::Boolean OFJOIMFKEKA, ::System::Boolean HIFAOHFLEMM)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::Battle::Entity*, ::System::Boolean, ::System::Boolean))((::PBYTE)hIl2Cpp + MOLEMOLE_UIINLEVELPAUSEBUFFWIDGETCONTROLLER_NPECCBKOFFH_OFFSET))(this, FINEANOLAPH, OFJOIMFKEKA, HIFAOHFLEMM);
		}
	};
}
