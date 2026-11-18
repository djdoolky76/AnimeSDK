#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/BDNDEKNMBOH.h"
#include "unitysdk/JMOGABDDNCF.h"
#include "unitysdk/MoleMole/ESystemSettingType.h"
#include "unitysdk/MoleMole/InLevelPauseLevelTab.h"
#include "unitysdk/PONEGOPCLPF.h"
#include "unitysdk/System/Collections/Generic/KeyValuePair_2.h"
#include "unitysdk/UnityEngine/Vector3.h"

class AIHCDFMMLAD;
class AIOGGGIHCAE;
class AKHOKICACBA;
class ENGKPGFGGLM;
class FOLOGHLENFB;
class KMBKAAEPPHO;
class LPGEFCKAOFK;
namespace MoleMole { class InLevelBuddyDataItem; }
namespace MoleMole { class UIInLevelPauseDialogContext; }
namespace MoleMole::Battle { class Entity; }
namespace System { class EventArgs; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define HGOGDGCINOD_AMODKFGCBPJ_OFFSET UNITYSDK_OFFSET(0x14D2A370)
#define HGOGDGCINOD_BBOAMDAENIG_OFFSET UNITYSDK_OFFSET(0x14D279F0)
#define HGOGDGCINOD_BIPAGPBHGBP_OFFSET UNITYSDK_OFFSET(0x14D297F0)
#define HGOGDGCINOD_BMFNNOCHLFG_OFFSET UNITYSDK_OFFSET(0x14D290D0)
#define HGOGDGCINOD_CDEJABMEAKJ_OFFSET UNITYSDK_OFFSET(0x14D29D30)
#define HGOGDGCINOD_CGMKKFEIFMI_OFFSET UNITYSDK_OFFSET(0x14D28850)
#define HGOGDGCINOD_CMLDLLNNEIN_OFFSET UNITYSDK_OFFSET(0x14D29F50)
#define HGOGDGCINOD_CPGOJBMALKB_OFFSET UNITYSDK_OFFSET(0x14D28340)
#define HGOGDGCINOD_CPJALGBKICO_OFFSET UNITYSDK_OFFSET(0x14D27710)
#define HGOGDGCINOD_DJLAPMLBKJK_OFFSET UNITYSDK_OFFSET(0x14D27720)
#define HGOGDGCINOD_ECNOGHHOPPF_OFFSET UNITYSDK_OFFSET(0x14D29D20)
#define HGOGDGCINOD_ELJEPNLFIKG_OFFSET UNITYSDK_OFFSET(0x14D27700)
#define HGOGDGCINOD_FGPMDBOONBH_OFFSET UNITYSDK_OFFSET(0x14D27780)
#define HGOGDGCINOD_FIHIEDOPIMK_OFFSET UNITYSDK_OFFSET(0x14D29730)
#define HGOGDGCINOD_GAGFCKAJLEO_OFFSET UNITYSDK_OFFSET(0x14D29C70)
#define HGOGDGCINOD_GCLMIMNFNNP_OFFSET UNITYSDK_OFFSET(0x14D29A70)
#define HGOGDGCINOD_GGCBNDKKLAK_OFFSET UNITYSDK_OFFSET(0x14D29810)
#define HGOGDGCINOD_GLONDKDFOID_OFFSET UNITYSDK_OFFSET(0x14D285E0)
#define HGOGDGCINOD_HDBFMMBFEDF_OFFSET UNITYSDK_OFFSET(0x14D28FD0)
#define HGOGDGCINOD_HEDLLKOKBFE_OFFSET UNITYSDK_OFFSET(0x14D28250)
#define HGOGDGCINOD_HFEBPMHDFMK_OFFSET UNITYSDK_OFFSET(0x14D29800)
#define HGOGDGCINOD_HIKFHKGCIJN_OFFSET UNITYSDK_OFFSET(0x14D29C80)
#define HGOGDGCINOD_HLECAABIHCI_OFFSET UNITYSDK_OFFSET(0x14D29080)
#define HGOGDGCINOD_HNDGJKPNIHA_OFFSET UNITYSDK_OFFSET(0x14D28670)
#define HGOGDGCINOD_IFHNMAGGFAE_OFFSET UNITYSDK_OFFSET(0x14D2A2D0)
#define HGOGDGCINOD_IHBFFPEHJKK_OFFSET UNITYSDK_OFFSET(0x14D277D0)
#define HGOGDGCINOD_JGNLEGABBPB_OFFSET UNITYSDK_OFFSET(0x14D27730)
#define HGOGDGCINOD_JLIKIPOOOGL_OFFSET UNITYSDK_OFFSET(0x14D29EA0)
#define HGOGDGCINOD_KEBIFLIFNIC_OFFSET UNITYSDK_OFFSET(0x14D29EB0)
#define HGOGDGCINOD_LECEEBGCPHD_OFFSET UNITYSDK_OFFSET(0x14D28D30)
#define HGOGDGCINOD_MPJMKJBOAGA_OFFSET UNITYSDK_OFFSET(0x14D27C80)
#define HGOGDGCINOD_NBIHDEOMKCG_OFFSET UNITYSDK_OFFSET(0x14D2A080)
#define HGOGDGCINOD_NNGOPOJMBKC_OFFSET UNITYSDK_OFFSET(0x14D29BE0)
#define HGOGDGCINOD_NPMBGPLECGM_OFFSET UNITYSDK_OFFSET(0x14D2A380)
#define HGOGDGCINOD_OJENCMOGDKL_OFFSET UNITYSDK_OFFSET(0x14D28030)
#define HGOGDGCINOD_ONEMDJLHENJ_OFFSET UNITYSDK_OFFSET(0x14D2A2E0)
#define HGOGDGCINOD_PMHMIBINECF_OFFSET UNITYSDK_OFFSET(0x14D27FF0)
#define HGOGDGCINOD_PPNLOBALFKG_OFFSET UNITYSDK_OFFSET(0x14D27F70)
#define HGOGDGCINOD__CCTOR_OFFSET UNITYSDK_OFFSET(0x14D29690)
#define HGOGDGCINOD__CTOR_OFFSET UNITYSDK_OFFSET(0x14D295E0)

inline static constexpr unsigned int HGOGDGCINOD_TypeDefinitionIndex = 61646;

class HGOGDGCINOD : public ::BDNDEKNMBOH
{
public:
	static ::System::Collections::Generic::List_1<::System::String*>** StaticGet_HGOHEBPMJCH()
	{
		return (::System::Collections::Generic::List_1<::System::String*>**)Il2CppClass::FromTypeDefinitionIndex(HGOGDGCINOD_TypeDefinitionIndex)->GetStaticField(0x49D30);
	}
	// static const ::MDEOJOGLEBD PFJDNFAABAO = 0xD9; // 0x0
	// static const ::MDEOJOGLEBD PCOMEFNJPOC = 0xD8; // 0x0
	// static const ::System::String* DCOCEEKNDGL; // 0x0
	// static const ::System::String* LKOLDCJCOCA; // 0x0
	::AIHCDFMMLAD* LMBGELCFMMI; // 0x148
	::LPGEFCKAOFK* NMNIOFBAEPG; // 0x150
	::System::Collections::Generic::List_1<::JMOGABDDNCF>* DAAAEJDBNFI; // 0x158

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + HGOGDGCINOD__CTOR_OFFSET))(this);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + HGOGDGCINOD__CCTOR_OFFSET))();
	}

	::KMBKAAEPPHO* ELJEPNLFIKG()
	{
		return ((::KMBKAAEPPHO*(*)(::PVOID))((::PBYTE)hIl2Cpp + HGOGDGCINOD_ELJEPNLFIKG_OFFSET))(this);
	}

	::System::Boolean CPJALGBKICO()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + HGOGDGCINOD_CPJALGBKICO_OFFSET))(this);
	}

	::System::Boolean DJLAPMLBKJK()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + HGOGDGCINOD_DJLAPMLBKJK_OFFSET))(this);
	}

	::System::Boolean JGNLEGABBPB(::PONEGOPCLPF& JKBLDFBGBPK)
	{
		return ((::System::Boolean(*)(::PVOID, ::PONEGOPCLPF&))((::PBYTE)hIl2Cpp + HGOGDGCINOD_JGNLEGABBPB_OFFSET))(this, JKBLDFBGBPK);
	}

	::System::Boolean FGPMDBOONBH()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + HGOGDGCINOD_FGPMDBOONBH_OFFSET))(this);
	}

	::System::Void IHBFFPEHJKK(::AIOGGGIHCAE*& KNGNADJNFOP)
	{
		return ((::System::Void(*)(::PVOID, ::AIOGGGIHCAE*&))((::PBYTE)hIl2Cpp + HGOGDGCINOD_IHBFFPEHJKK_OFFSET))(this, KNGNADJNFOP);
	}

	::System::Void PPNLOBALFKG(::MoleMole::Battle::Entity* DBIOAKNMBDM)
	{
		return ((::System::Void(*)(::PVOID, ::MoleMole::Battle::Entity*))((::PBYTE)hIl2Cpp + HGOGDGCINOD_PPNLOBALFKG_OFFSET))(this, DBIOAKNMBDM);
	}

	::System::Void OJENCMOGDKL()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + HGOGDGCINOD_OJENCMOGDKL_OFFSET))(this);
	}

	::System::Void CPGOJBMALKB()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + HGOGDGCINOD_CPGOJBMALKB_OFFSET))(this);
	}

	::System::Void HNDGJKPNIHA()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + HGOGDGCINOD_HNDGJKPNIHA_OFFSET))(this);
	}

	::System::Void CGMKKFEIFMI(::ENGKPGFGGLM* FFNKDGGHBPP, ::MoleMole::Battle::Entity* KECKGDFIALJ)
	{
		return ((::System::Void(*)(::PVOID, ::ENGKPGFGGLM*, ::MoleMole::Battle::Entity*))((::PBYTE)hIl2Cpp + HGOGDGCINOD_CGMKKFEIFMI_OFFSET))(this, FFNKDGGHBPP, KECKGDFIALJ);
	}

	::System::Void LECEEBGCPHD()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + HGOGDGCINOD_LECEEBGCPHD_OFFSET))(this);
	}

	::System::Void HDBFMMBFEDF(::AKHOKICACBA* MIMNNMMMJJF)
	{
		return ((::System::Void(*)(::PVOID, ::AKHOKICACBA*))((::PBYTE)hIl2Cpp + HGOGDGCINOD_HDBFMMBFEDF_OFFSET))(this, MIMNNMMMJJF);
	}

	::MoleMole::UIInLevelPauseDialogContext* HLECAABIHCI()
	{
		return ((::MoleMole::UIInLevelPauseDialogContext*(*)(::PVOID))((::PBYTE)hIl2Cpp + HGOGDGCINOD_HLECAABIHCI_OFFSET))(this);
	}

	::MoleMole::UIInLevelPauseDialogContext* FIHIEDOPIMK()
	{
		return ((::MoleMole::UIInLevelPauseDialogContext*(*)(::PVOID))((::PBYTE)hIl2Cpp + HGOGDGCINOD_FIHIEDOPIMK_OFFSET))(this);
	}

	::System::Void BIPAGPBHGBP(::AKHOKICACBA* MIALFKCCCPI)
	{
		return ((::System::Void(*)(::PVOID, ::AKHOKICACBA*))((::PBYTE)hIl2Cpp + HGOGDGCINOD_BIPAGPBHGBP_OFFSET))(this, MIALFKCCCPI);
	}

	::System::Boolean HFEBPMHDFMK()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + HGOGDGCINOD_HFEBPMHDFMK_OFFSET))(this);
	}

	::System::Void GGCBNDKKLAK()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + HGOGDGCINOD_GGCBNDKKLAK_OFFSET))(this);
	}

	::System::Void HEDLLKOKBFE()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + HGOGDGCINOD_HEDLLKOKBFE_OFFSET))(this);
	}

	::System::Void GCLMIMNFNNP()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + HGOGDGCINOD_GCLMIMNFNNP_OFFSET))(this);
	}

	::System::Void PMHMIBINECF()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + HGOGDGCINOD_PMHMIBINECF_OFFSET))(this);
	}

	::System::Void GAGFCKAJLEO(::AIOGGGIHCAE*& MIALFKCCCPI)
	{
		return ((::System::Void(*)(::PVOID, ::AIOGGGIHCAE*&))((::PBYTE)hIl2Cpp + HGOGDGCINOD_GAGFCKAJLEO_OFFSET))(this, MIALFKCCCPI);
	}

	::System::Void HIKFHKGCIJN(::ENGKPGFGGLM* MIALFKCCCPI, ::MoleMole::Battle::Entity* KMGKAIDEIBA)
	{
		return ((::System::Void(*)(::PVOID, ::ENGKPGFGGLM*, ::MoleMole::Battle::Entity*))((::PBYTE)hIl2Cpp + HGOGDGCINOD_HIKFHKGCIJN_OFFSET))(this, MIALFKCCCPI, KMGKAIDEIBA);
	}

	::System::Void MPJMKJBOAGA()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + HGOGDGCINOD_MPJMKJBOAGA_OFFSET))(this);
	}

	::System::Void ECNOGHHOPPF()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + HGOGDGCINOD_ECNOGHHOPPF_OFFSET))(this);
	}

	::System::Boolean CDEJABMEAKJ()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + HGOGDGCINOD_CDEJABMEAKJ_OFFSET))(this);
	}

	::System::Void JLIKIPOOOGL()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + HGOGDGCINOD_JLIKIPOOOGL_OFFSET))(this);
	}

	::System::Boolean KEBIFLIFNIC(::PONEGOPCLPF& MIALFKCCCPI)
	{
		return ((::System::Boolean(*)(::PVOID, ::PONEGOPCLPF&))((::PBYTE)hIl2Cpp + HGOGDGCINOD_KEBIFLIFNIC_OFFSET))(this, MIALFKCCCPI);
	}

	static ::System::Boolean NNGOPOJMBKC(::MoleMole::InLevelBuddyDataItem* PMIDNALMHOP)
	{
		return ((::System::Boolean(*)(::MoleMole::InLevelBuddyDataItem*))((::PBYTE)hIl2Cpp + HGOGDGCINOD_NNGOPOJMBKC_OFFSET))(PMIDNALMHOP);
	}

	::System::Void CMLDLLNNEIN(::System::Collections::Generic::Dictionary_2<::MoleMole::InLevelPauseLevelTab, ::System::Collections::Generic::List_1<::MoleMole::ESystemSettingType>*>* ENNKHKCCIII)
	{
		return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::Dictionary_2<::MoleMole::InLevelPauseLevelTab, ::System::Collections::Generic::List_1<::MoleMole::ESystemSettingType>*>*))((::PBYTE)hIl2Cpp + HGOGDGCINOD_CMLDLLNNEIN_OFFSET))(this, ENNKHKCCIII);
	}

	::MoleMole::UIInLevelPauseDialogContext* BMFNNOCHLFG()
	{
		return ((::MoleMole::UIInLevelPauseDialogContext*(*)(::PVOID))((::PBYTE)hIl2Cpp + HGOGDGCINOD_BMFNNOCHLFG_OFFSET))(this);
	}

	::System::Void GLONDKDFOID()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + HGOGDGCINOD_GLONDKDFOID_OFFSET))(this);
	}

	static ::System::Void NBIHDEOMKCG(::System::Collections::Generic::List_1<::System::Collections::Generic::KeyValuePair_2<::FOLOGHLENFB*, ::System::Int32>>* JFNECEEFODK, ::UnityEngine::Vector3 KCBKCDOKKDA)
	{
		return ((::System::Void(*)(::System::Collections::Generic::List_1<::System::Collections::Generic::KeyValuePair_2<::FOLOGHLENFB*, ::System::Int32>>*, ::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + HGOGDGCINOD_NBIHDEOMKCG_OFFSET))(JFNECEEFODK, KCBKCDOKKDA);
	}

	::System::Void BBOAMDAENIG()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + HGOGDGCINOD_BBOAMDAENIG_OFFSET))(this);
	}

	::System::Void IFHNMAGGFAE()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + HGOGDGCINOD_IFHNMAGGFAE_OFFSET))(this);
	}

	::System::Void ONEMDJLHENJ(::System::EventArgs* KOIBHLHLMFC)
	{
		return ((::System::Void(*)(::PVOID, ::System::EventArgs*))((::PBYTE)hIl2Cpp + HGOGDGCINOD_ONEMDJLHENJ_OFFSET))(this, KOIBHLHLMFC);
	}

	::System::Void AMODKFGCBPJ(::MoleMole::Battle::Entity* MIALFKCCCPI)
	{
		return ((::System::Void(*)(::PVOID, ::MoleMole::Battle::Entity*))((::PBYTE)hIl2Cpp + HGOGDGCINOD_AMODKFGCBPJ_OFFSET))(this, MIALFKCCCPI);
	}

	::System::Void NPMBGPLECGM(::System::EventArgs* KOIBHLHLMFC)
	{
		return ((::System::Void(*)(::PVOID, ::System::EventArgs*))((::PBYTE)hIl2Cpp + HGOGDGCINOD_NPMBGPLECGM_OFFSET))(this, KOIBHLHLMFC);
	}
};
