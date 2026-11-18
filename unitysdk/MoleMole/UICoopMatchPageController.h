#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/GMFAKIPCDED.h"
#include "unitysdk/MoleMole/UICoopMatchPageController_LevelTabStatus.h"
#include "unitysdk/MoleMole/UIWindowController.h"
#include "unitysdk/LIBOIKJGAIH.h"

class EEDJOGLJBLF;
class ILMKONAJBGC;
class LIJOIPMOMJD;
class NICPDAEAIFG;
class ODNBJIEICJH;
namespace MoleMole { class UIActivityCompWeekRewardBtnWidgetController; }
namespace MoleMole { class UIControlReference; }
namespace MoleMole { class UIControllerContextBase; }
namespace MoleMole { class UIGeneralNewHintWidgetController; }
namespace MoleMole { class UIGrandMarcelAdventureTipsRowWidgetController; }
namespace System { class Action; }
namespace System { class EventArgs; }
namespace System { class Object; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T> class List_1; }
namespace UnityEngine { class Animation; }
namespace UnityEngine { class Coroutine; }

#define MOLEMOLE_UICOOPMATCHPAGECONTROLLER_AANDPPEGOJA_OFFSET UNITYSDK_OFFSET(0x18917260)
#define MOLEMOLE_UICOOPMATCHPAGECONTROLLER_AOIHPHHMLFE_OFFSET UNITYSDK_OFFSET(0x189155A0)
#define MOLEMOLE_UICOOPMATCHPAGECONTROLLER_DBCJKEEICEL_OFFSET UNITYSDK_OFFSET(0x18914E60)
#define MOLEMOLE_UICOOPMATCHPAGECONTROLLER_DFDDDMNLFAL_OFFSET UNITYSDK_OFFSET(0x18916960)
#define MOLEMOLE_UICOOPMATCHPAGECONTROLLER_DGENCKAPGHC_OFFSET UNITYSDK_OFFSET(0x18917C10)
#define MOLEMOLE_UICOOPMATCHPAGECONTROLLER_DILLAOKBJHM_OFFSET UNITYSDK_OFFSET(0x189172A0)
#define MOLEMOLE_UICOOPMATCHPAGECONTROLLER_EDDNOCCKJHK_OFFSET UNITYSDK_OFFSET(0x18915370)
#define MOLEMOLE_UICOOPMATCHPAGECONTROLLER_EFIAODEKPEC_OFFSET UNITYSDK_OFFSET(0x18917D30)
#define MOLEMOLE_UICOOPMATCHPAGECONTROLLER_EKOENLJMDHN_OFFSET UNITYSDK_OFFSET(0x18917470)
#define MOLEMOLE_UICOOPMATCHPAGECONTROLLER_FLBCLPLBJDM_OFFSET UNITYSDK_OFFSET(0x18917200)
#define MOLEMOLE_UICOOPMATCHPAGECONTROLLER_GANNKAKHKIH_OFFSET UNITYSDK_OFFSET(0x18916C90)
#define MOLEMOLE_UICOOPMATCHPAGECONTROLLER_GBHLKOFOLPM_OFFSET UNITYSDK_OFFSET(0x189148C0)
#define MOLEMOLE_UICOOPMATCHPAGECONTROLLER_GCCCLNJEEMC_OFFSET UNITYSDK_OFFSET(0x18917640)
#define MOLEMOLE_UICOOPMATCHPAGECONTROLLER_GET_WINDOWTYPE_OFFSET UNITYSDK_OFFSET(0x18913C30)
#define MOLEMOLE_UICOOPMATCHPAGECONTROLLER_GIEFILFGEOP_OFFSET UNITYSDK_OFFSET(0x18914E10)
#define MOLEMOLE_UICOOPMATCHPAGECONTROLLER_JMKOBLLAEOA_OFFSET UNITYSDK_OFFSET(0x189180E0)
#define MOLEMOLE_UICOOPMATCHPAGECONTROLLER_KFKPLDGPPPI_OFFSET UNITYSDK_OFFSET(0x189180D0)
#define MOLEMOLE_UICOOPMATCHPAGECONTROLLER_KMGHEOBJKCN_OFFSET UNITYSDK_OFFSET(0x18916CF0)
#define MOLEMOLE_UICOOPMATCHPAGECONTROLLER_LKFLFHHHJKD_OFFSET UNITYSDK_OFFSET(0x18918340)
#define MOLEMOLE_UICOOPMATCHPAGECONTROLLER_NIEMNKDAAGF_OFFSET UNITYSDK_OFFSET(0x18918370)
#define MOLEMOLE_UICOOPMATCHPAGECONTROLLER_OGMPOGIHBIK_OFFSET UNITYSDK_OFFSET(0x18914850)
#define MOLEMOLE_UICOOPMATCHPAGECONTROLLER_OJFIMLBCCLD_OFFSET UNITYSDK_OFFSET(0x18916800)
#define MOLEMOLE_UICOOPMATCHPAGECONTROLLER_ONCREATEVIEWMODEL_OFFSET UNITYSDK_OFFSET(0x18913C40)
#define MOLEMOLE_UICOOPMATCHPAGECONTROLLER_ONPOSTPAGESHOWED_OFFSET UNITYSDK_OFFSET(0x189154E0)
#define MOLEMOLE_UICOOPMATCHPAGECONTROLLER_ONUICLOSE_OFFSET UNITYSDK_OFFSET(0x189160E0)
#define MOLEMOLE_UICOOPMATCHPAGECONTROLLER_ONUIINIT_OFFSET UNITYSDK_OFFSET(0x18913CE0)
#define MOLEMOLE_UICOOPMATCHPAGECONTROLLER_ONUIOPEN_OFFSET UNITYSDK_OFFSET(0x18915290)
#define MOLEMOLE_UICOOPMATCHPAGECONTROLLER_OOJJJMGOFNN_OFFSET UNITYSDK_OFFSET(0x18916B00)
#define MOLEMOLE_UICOOPMATCHPAGECONTROLLER_PBENOHJCJID_OFFSET UNITYSDK_OFFSET(0x18916C40)
#define MOLEMOLE_UICOOPMATCHPAGECONTROLLER_SHOWTIP_OFFSET UNITYSDK_OFFSET(0x18915110)
#define MOLEMOLE_UICOOPMATCHPAGECONTROLLER__CCTOR_OFFSET UNITYSDK_OFFSET(0x189163D0)
#define MOLEMOLE_UICOOPMATCHPAGECONTROLLER__CTOR_OFFSET UNITYSDK_OFFSET(0x18916170)
#define MOLEMOLE_UICOOPMATCHPAGECONTROLLER___BASE_ONCREATEVIEWMODEL_OFFSET UNITYSDK_OFFSET(0x189165F0)
#define MOLEMOLE_UICOOPMATCHPAGECONTROLLER___BASE_ONPOSTPAGESHOWED_OFFSET UNITYSDK_OFFSET(0x18916690)
#define MOLEMOLE_UICOOPMATCHPAGECONTROLLER___BASE_ONUICLOSE_OFFSET UNITYSDK_OFFSET(0x189166A0)
#define MOLEMOLE_UICOOPMATCHPAGECONTROLLER___BASE_ONUIINIT_OFFSET UNITYSDK_OFFSET(0x18916760)
#define MOLEMOLE_UICOOPMATCHPAGECONTROLLER___BASE_ONUIOPEN_OFFSET UNITYSDK_OFFSET(0x18916770)

namespace MoleMole
{
	inline static constexpr unsigned int UICoopMatchPageController_TypeDefinitionIndex = 40570;

	class UICoopMatchPageController : public ::MoleMole::UIWindowController
	{
	public:
		static ::System::Collections::Generic::Dictionary_2<::System::Object*, ::Il2CppArray<::System::String*>*>** StaticGet_BKDHIFFDPPB()
		{
			return (::System::Collections::Generic::Dictionary_2<::System::Object*, ::Il2CppArray<::System::String*>*>**)Il2CppClass::FromTypeDefinitionIndex(UICoopMatchPageController_TypeDefinitionIndex)->GetStaticField(0x4EAB0);
		}
		::System::Collections::Generic::Dictionary_2<::System::Object*, ::MoleMole::UIGeneralNewHintWidgetController*>* NJIBIODGAKJ; // 0x320
		::MoleMole::UICoopMatchPageController_LevelTabStatus PPHDIIEJOFJ; // 0x328
		::System::Byte _padding0[0x4];
		::UnityEngine::Coroutine* BECONNLOBAC; // 0x330
		::UnityEngine::Coroutine* HOMDKNPGNKE; // 0x338
		::System::Int32 PACBBFNHKIK; // 0x340
		::System::Byte _padding1[0x4];
		::MoleMole::UIGrandMarcelAdventureTipsRowWidgetController* EHIFHJDLKGD; // 0x348
		::System::Collections::Generic::List_1<::System::String*>* GCKOHJFLNOK; // 0x350
		::ODNBJIEICJH* IDNBHIOJGFO; // 0x358
		::LIJOIPMOMJD* CBPPJKJBMAM; // 0x360
		::ILMKONAJBGC* JKLNFMPIBBL; // 0x368
		::MoleMole::UIActivityCompWeekRewardBtnWidgetController* JAENJBBJHAD; // 0x370
		::NICPDAEAIFG* _view; // 0x378

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UICOOPMATCHPAGECONTROLLER__CTOR_OFFSET))(this);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + MOLEMOLE_UICOOPMATCHPAGECONTROLLER__CCTOR_OFFSET))();
		}

		::GMFAKIPCDED get_windowType()
		{
			return ((::GMFAKIPCDED(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UICOOPMATCHPAGECONTROLLER_GET_WINDOWTYPE_OFFSET))(this);
		}

		::System::Void OnCreateViewModel(::LIBOIKJGAIH& binderInfo, ::MoleMole::UIControlReference* controlReference)
		{
			return ((::System::Void(*)(::PVOID, ::LIBOIKJGAIH&, ::MoleMole::UIControlReference*))((::PBYTE)hIl2Cpp + MOLEMOLE_UICOOPMATCHPAGECONTROLLER_ONCREATEVIEWMODEL_OFFSET))(this, binderInfo, controlReference);
		}

		::System::Void OnUIInit()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UICOOPMATCHPAGECONTROLLER_ONUIINIT_OFFSET))(this);
		}

		::System::Void ShowTip(::System::String* mes)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + MOLEMOLE_UICOOPMATCHPAGECONTROLLER_SHOWTIP_OFFSET))(this, mes);
		}

		::System::Void OnUIOpen(::MoleMole::UIControllerContextBase* openCtrlContext)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIControllerContextBase*))((::PBYTE)hIl2Cpp + MOLEMOLE_UICOOPMATCHPAGECONTROLLER_ONUIOPEN_OFFSET))(this, openCtrlContext);
		}

		::System::Void OnPostPageShowed()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UICOOPMATCHPAGECONTROLLER_ONPOSTPAGESHOWED_OFFSET))(this);
		}

		::System::Void OnUIClose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UICOOPMATCHPAGECONTROLLER_ONUICLOSE_OFFSET))(this);
		}

		::System::Void __base_OnCreateViewModel(::LIBOIKJGAIH& P0, ::MoleMole::UIControlReference* P1)
		{
			return ((::System::Void(*)(::PVOID, ::LIBOIKJGAIH&, ::MoleMole::UIControlReference*))((::PBYTE)hIl2Cpp + MOLEMOLE_UICOOPMATCHPAGECONTROLLER___BASE_ONCREATEVIEWMODEL_OFFSET))(this, P0, P1);
		}

		::System::Void __base_OnPostPageShowed()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UICOOPMATCHPAGECONTROLLER___BASE_ONPOSTPAGESHOWED_OFFSET))(this);
		}

		::System::Void __base_OnUIClose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UICOOPMATCHPAGECONTROLLER___BASE_ONUICLOSE_OFFSET))(this);
		}

		::System::Void __base_OnUIInit()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UICOOPMATCHPAGECONTROLLER___BASE_ONUIINIT_OFFSET))(this);
		}

		::System::Void __base_OnUIOpen(::MoleMole::UIControllerContextBase* P0)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIControllerContextBase*))((::PBYTE)hIl2Cpp + MOLEMOLE_UICOOPMATCHPAGECONTROLLER___BASE_ONUIOPEN_OFFSET))(this, P0);
		}

		::System::Void OJFIMLBCCLD()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UICOOPMATCHPAGECONTROLLER_OJFIMLBCCLD_OFFSET))(this);
		}

		::System::Void DFDDDMNLFAL()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UICOOPMATCHPAGECONTROLLER_DFDDDMNLFAL_OFFSET))(this);
		}

		::UnityEngine::Animation* OOJJJMGOFNN(::MoleMole::UICoopMatchPageController_LevelTabStatus MLBNKKKCJGF)
		{
			return ((::UnityEngine::Animation*(*)(::PVOID, ::MoleMole::UICoopMatchPageController_LevelTabStatus))((::PBYTE)hIl2Cpp + MOLEMOLE_UICOOPMATCHPAGECONTROLLER_OOJJJMGOFNN_OFFSET))(this, MLBNKKKCJGF);
		}

		::System::Void DBCJKEEICEL(::MoleMole::UICoopMatchPageController_LevelTabStatus BPBILMJCMCO, ::System::Boolean ONPIMDKPDJB, ::System::Int32 NACGJJKHEJE)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UICoopMatchPageController_LevelTabStatus, ::System::Boolean, ::System::Int32))((::PBYTE)hIl2Cpp + MOLEMOLE_UICOOPMATCHPAGECONTROLLER_DBCJKEEICEL_OFFSET))(this, BPBILMJCMCO, ONPIMDKPDJB, NACGJJKHEJE);
		}

		::EEDJOGLJBLF* OGMPOGIHBIK()
		{
			return ((::EEDJOGLJBLF*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UICOOPMATCHPAGECONTROLLER_OGMPOGIHBIK_OFFSET))(this);
		}

		::System::Boolean FLBCLPLBJDM(::MoleMole::UICoopMatchPageController_LevelTabStatus MLBNKKKCJGF)
		{
			return ((::System::Boolean(*)(::PVOID, ::MoleMole::UICoopMatchPageController_LevelTabStatus))((::PBYTE)hIl2Cpp + MOLEMOLE_UICOOPMATCHPAGECONTROLLER_FLBCLPLBJDM_OFFSET))(this, MLBNKKKCJGF);
		}

		::System::Void AANDPPEGOJA(::System::EventArgs* KOIBHLHLMFC)
		{
			return ((::System::Void(*)(::PVOID, ::System::EventArgs*))((::PBYTE)hIl2Cpp + MOLEMOLE_UICOOPMATCHPAGECONTROLLER_AANDPPEGOJA_OFFSET))(this, KOIBHLHLMFC);
		}

		::System::Int32 PBENOHJCJID(::MoleMole::UICoopMatchPageController_LevelTabStatus BPBILMJCMCO)
		{
			return ((::System::Int32(*)(::PVOID, ::MoleMole::UICoopMatchPageController_LevelTabStatus))((::PBYTE)hIl2Cpp + MOLEMOLE_UICOOPMATCHPAGECONTROLLER_PBENOHJCJID_OFFSET))(this, BPBILMJCMCO);
		}

		::System::Void DILLAOKBJHM(::MoleMole::UICoopMatchPageController_LevelTabStatus MLBNKKKCJGF, ::System::Action* JLMLJIMBKKP)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UICoopMatchPageController_LevelTabStatus, ::System::Action*))((::PBYTE)hIl2Cpp + MOLEMOLE_UICOOPMATCHPAGECONTROLLER_DILLAOKBJHM_OFFSET))(this, MLBNKKKCJGF, JLMLJIMBKKP);
		}

		::System::Void GBHLKOFOLPM()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UICOOPMATCHPAGECONTROLLER_GBHLKOFOLPM_OFFSET))(this);
		}

		::System::Void EKOENLJMDHN(::MoleMole::UICoopMatchPageController_LevelTabStatus MLBNKKKCJGF, ::System::Action* JLMLJIMBKKP)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UICoopMatchPageController_LevelTabStatus, ::System::Action*))((::PBYTE)hIl2Cpp + MOLEMOLE_UICOOPMATCHPAGECONTROLLER_EKOENLJMDHN_OFFSET))(this, MLBNKKKCJGF, JLMLJIMBKKP);
		}

		::System::Void GCCCLNJEEMC()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UICOOPMATCHPAGECONTROLLER_GCCCLNJEEMC_OFFSET))(this);
		}

		::System::Void DGENCKAPGHC()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UICOOPMATCHPAGECONTROLLER_DGENCKAPGHC_OFFSET))(this);
		}

		::System::Void EFIAODEKPEC(::MoleMole::UICoopMatchPageController_LevelTabStatus BPBILMJCMCO)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UICoopMatchPageController_LevelTabStatus))((::PBYTE)hIl2Cpp + MOLEMOLE_UICOOPMATCHPAGECONTROLLER_EFIAODEKPEC_OFFSET))(this, BPBILMJCMCO);
		}

		::System::Void KFKPLDGPPPI(::System::EventArgs* PIIPCLCCOIG)
		{
			return ((::System::Void(*)(::PVOID, ::System::EventArgs*))((::PBYTE)hIl2Cpp + MOLEMOLE_UICOOPMATCHPAGECONTROLLER_KFKPLDGPPPI_OFFSET))(this, PIIPCLCCOIG);
		}

		::System::Void JMKOBLLAEOA(::System::EventArgs* EIFONLCJOPG)
		{
			return ((::System::Void(*)(::PVOID, ::System::EventArgs*))((::PBYTE)hIl2Cpp + MOLEMOLE_UICOOPMATCHPAGECONTROLLER_JMKOBLLAEOA_OFFSET))(this, EIFONLCJOPG);
		}

		::System::Void LKFLFHHHJKD()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UICOOPMATCHPAGECONTROLLER_LKFLFHHHJKD_OFFSET))(this);
		}

		::System::Void GANNKAKHKIH(::MoleMole::UICoopMatchPageController_LevelTabStatus MLBNKKKCJGF)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UICoopMatchPageController_LevelTabStatus))((::PBYTE)hIl2Cpp + MOLEMOLE_UICOOPMATCHPAGECONTROLLER_GANNKAKHKIH_OFFSET))(this, MLBNKKKCJGF);
		}

		::System::Void EDDNOCCKJHK()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UICOOPMATCHPAGECONTROLLER_EDDNOCCKJHK_OFFSET))(this);
		}

		::System::Void AOIHPHHMLFE()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UICOOPMATCHPAGECONTROLLER_AOIHPHHMLFE_OFFSET))(this);
		}

		::System::Void NIEMNKDAAGF()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UICOOPMATCHPAGECONTROLLER_NIEMNKDAAGF_OFFSET))(this);
		}

		::MoleMole::UICoopMatchPageController_LevelTabStatus GIEFILFGEOP(::System::Int32 FBKGFLADIDE)
		{
			return ((::MoleMole::UICoopMatchPageController_LevelTabStatus(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + MOLEMOLE_UICOOPMATCHPAGECONTROLLER_GIEFILFGEOP_OFFSET))(this, FBKGFLADIDE);
		}

		::System::Void KMGHEOBJKCN(::MoleMole::UICoopMatchPageController_LevelTabStatus PKDBEGOCMDF, ::MoleMole::UICoopMatchPageController_LevelTabStatus MLDHAMCAPGI, ::System::Boolean ONPIMDKPDJB, ::System::Action* PCOCKKKIELN)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UICoopMatchPageController_LevelTabStatus, ::MoleMole::UICoopMatchPageController_LevelTabStatus, ::System::Boolean, ::System::Action*))((::PBYTE)hIl2Cpp + MOLEMOLE_UICOOPMATCHPAGECONTROLLER_KMGHEOBJKCN_OFFSET))(this, PKDBEGOCMDF, MLDHAMCAPGI, ONPIMDKPDJB, PCOCKKKIELN);
		}
	};
}
