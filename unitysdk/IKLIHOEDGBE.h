#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/RPGTools/Timeline/ColorGradingMaskWhitelist.h"
#include "unitysdk/RPGTools/Timeline/ColorGradingMaskWhitelist_MapEntity.h"
#include "unitysdk/RPGTools/Timeline/ColorGradingMaskWhitelist_StageItem.h"
#include "unitysdk/RPGTools/Timeline/ColorGradingMaskWhitelist_StoryVFX.h"
class DEBEAKKOHLN;
class DGDCNMMBMKA;
class IKLIHOEDGBE_AHGMNBFPJHK;
class IKLIHOEDGBE_AKIBBINFDFL;
class IKLIHOEDGBE_EKIKCHBFDHL;
class IKLIHOEDGBE_FLDICDMMIGD;
class IKLIHOEDGBE_OGNMMDLIAHJ;
namespace RPG::Client { class MonoEffect; }
namespace RPG::CustomRP { class ColorGradingMaskController; }
namespace RPG::GameCore { class GameEntity; }
namespace RPGTools::Timeline { class ColorGradingMaskWhitelist_StoryCharacter; }
namespace System { class Object; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T> class HashSet_1; }
namespace System::Collections::Generic { template <typename T> class List_1; }
namespace UnityEngine { class Renderer; }

#define IKLIHOEDGBE_ACNEKNPLAOA_OFFSET UNITYSDK_OFFSET(0x16498880)
#define IKLIHOEDGBE_ALGFGFDNIBO_OFFSET UNITYSDK_OFFSET(0x164988F0)
#define IKLIHOEDGBE_APMDNBJPCJF_OFFSET UNITYSDK_OFFSET(0x164966E0)
#define IKLIHOEDGBE_BBDMHOHDGDC_OFFSET UNITYSDK_OFFSET(0x16496B80)
#define IKLIHOEDGBE_BFLIHKHOBJN_OFFSET UNITYSDK_OFFSET(0x164945B0)
#define IKLIHOEDGBE_BKJLBBLFIAA_OFFSET UNITYSDK_OFFSET(0x16496C00)
#define IKLIHOEDGBE_BOJDDAKPIPJ_OFFSET UNITYSDK_OFFSET(0x16495F00)
#define IKLIHOEDGBE_CCEFCJEHEJC_OFFSET UNITYSDK_OFFSET(0x164959A0)
#define IKLIHOEDGBE_CEFNHMOBOOF_OFFSET UNITYSDK_OFFSET(0x16496EC0)
#define IKLIHOEDGBE_CNHJGDHJJBN_OFFSET UNITYSDK_OFFSET(0x16496740)
#define IKLIHOEDGBE_CTOR_OFFSET UNITYSDK_OFFSET(0x16493DD0)
#define IKLIHOEDGBE_DCOPELNHNLO_OFFSET UNITYSDK_OFFSET(0x16495090)
#define IKLIHOEDGBE_DEBJNNLKMNC_OFFSET UNITYSDK_OFFSET(0x164961A0)
#define IKLIHOEDGBE_DHAFJJELHIG_OFFSET UNITYSDK_OFFSET(0x16494E30)
#define IKLIHOEDGBE_DISPOSE_OFFSET UNITYSDK_OFFSET(0x164943B0)
#define IKLIHOEDGBE_DLNPDBNMJBP_OFFSET UNITYSDK_OFFSET(0x16495340)
#define IKLIHOEDGBE_FAPHFOCFOPA_OFFSET UNITYSDK_OFFSET(0x16494D50)
#define IKLIHOEDGBE_FBKFIGHDGCB_OFFSET UNITYSDK_OFFSET(0x164970F0)
#define IKLIHOEDGBE_FGAMIBBFPDC_OFFSET UNITYSDK_OFFSET(0x16496140)
#define IKLIHOEDGBE_FGBPNLOGKGK_OFFSET UNITYSDK_OFFSET(0x16496230)
#define IKLIHOEDGBE_FHMALMGDJJM_OFFSET UNITYSDK_OFFSET(0x16494BD0)
#define IKLIHOEDGBE_FHMGPOFAJGG_OFFSET UNITYSDK_OFFSET(0x16495910)
#define IKLIHOEDGBE_FIIPNMKPGMB_OFFSET UNITYSDK_OFFSET(0x16495D60)
#define IKLIHOEDGBE_FPELJANJFIM_OFFSET UNITYSDK_OFFSET(0x16497340)
#define IKLIHOEDGBE_GKNGHGBPPNM_OFFSET UNITYSDK_OFFSET(0x164946E0)
#define IKLIHOEDGBE_GLKDFELEEHC_OFFSET UNITYSDK_OFFSET(0x16495A20)
#define IKLIHOEDGBE_HDEIHFDFCMA_OFFSET UNITYSDK_OFFSET(0x164996E0)
#define IKLIHOEDGBE_HNMAPAHIEGK_OFFSET UNITYSDK_OFFSET(0x164967A0)
#define IKLIHOEDGBE_IEGNMOODDAK_OFFSET UNITYSDK_OFFSET(0x16494CB0)
#define IKLIHOEDGBE_IKNACHGHMEJ_OFFSET UNITYSDK_OFFSET(0x16494660)
#define IKLIHOEDGBE_KCLIALDKIBA_OFFSET UNITYSDK_OFFSET(0x16497070)
#define IKLIHOEDGBE_KEODEGLPGKH_OFFSET UNITYSDK_OFFSET(0x16497170)
#define IKLIHOEDGBE_KHLNIPOLLJC_OFFSET UNITYSDK_OFFSET(0x16495400)
#define IKLIHOEDGBE_KJHDBEGCIBN_OFFSET UNITYSDK_OFFSET(0x16498950)
#define IKLIHOEDGBE_KKHNHNOIFDO_OFFSET UNITYSDK_OFFSET(0x16496380)
#define IKLIHOEDGBE_KLODBBFJLFH_OFFSET UNITYSDK_OFFSET(0x164978A0)
#define IKLIHOEDGBE_MBLMCFMKGMG_OFFSET UNITYSDK_OFFSET(0x164982B0)
#define IKLIHOEDGBE_MEKCACOMAGD_OFFSET UNITYSDK_OFFSET(0x16496F30)
#define IKLIHOEDGBE_MKJOLKCPIJM_OFFSET UNITYSDK_OFFSET(0x164944C0)
#define IKLIHOEDGBE_MLFOEEBEDGF_1_OFFSET UNITYSDK_OFFSET(0x16499180)
#define IKLIHOEDGBE_MLFOEEBEDGF_OFFSET UNITYSDK_OFFSET(0x16499080)
#define IKLIHOEDGBE_NABCPENOKGI_OFFSET UNITYSDK_OFFSET(0x16497A30)
#define IKLIHOEDGBE_NCHHIAFMNHF_OFFSET UNITYSDK_OFFSET(0x16495270)
#define IKLIHOEDGBE_NJALKEEBCEC_OFFSET UNITYSDK_OFFSET(0x16499750)
#define IKLIHOEDGBE_NMHIICHBDFO_OFFSET UNITYSDK_OFFSET(0x16497390)
#define IKLIHOEDGBE_OMJIPNCKFEH_OFFSET UNITYSDK_OFFSET(0x164960A0)
#define IKLIHOEDGBE_PAGKOAEOLKA_OFFSET UNITYSDK_OFFSET(0x16494B70)
#define IKLIHOEDGBE_PAJGDIOMBNF_OFFSET UNITYSDK_OFFSET(0x16497820)
#define IKLIHOEDGBE_PAPNBICLMBA_OFFSET UNITYSDK_OFFSET(0x164955B0)
#define IKLIHOEDGBE_PDIJGFHHAIH_OFFSET UNITYSDK_OFFSET(0x16495BC0)
#define IKLIHOEDGBE_PDKLDMNAJBO_OFFSET UNITYSDK_OFFSET(0x16495210)
#define IKLIHOEDGBE_PJPFIHFAHGO_OFFSET UNITYSDK_OFFSET(0x16494400)
#define IKLIHOEDGBE_PLGKPHFMHCC_OFFSET UNITYSDK_OFFSET(0x16499670)
#define IKLIHOEDGBE_PNGFPLFEECK_OFFSET UNITYSDK_OFFSET(0x16497410)
#define IKLIHOEDGBE_PPHJJDELKJN_OFFSET UNITYSDK_OFFSET(0x16496E70)

	class IKLIHOEDGBE : public ::System::Object
	{
	public:
		::System::Collections::Generic::HashSet_1<::UnityEngine::Renderer*>* KFCOHOPKIAO; // 0x10
		::System::Collections::Generic::List_1<::System::String*>* LBFJGFAOALN; // 0x18
		::System::Collections::Generic::Dictionary_2<::System::String*, ::System::Object*>* DKPJKINJMAA; // 0x20
		::System::Collections::Generic::Dictionary_2<::System::String*, ::System::Object*>* LBPHPMGLPBF; // 0x28
		::System::Collections::Generic::Dictionary_2<::UnityEngine::Renderer*, ::System::Int32>* IOCOBLPCCGO; // 0x30
		::DGDCNMMBMKA* AEEKINDJLDO; // 0x38
		::System::Collections::Generic::List_1<::UnityEngine::Renderer*>* KMBFPPCIBHB; // 0x40
		::RPG::CustomRP::ColorGradingMaskController* FAOAPEIDIPH; // 0x48
		::System::Collections::Generic::List_1<::UnityEngine::Renderer*>* CCILLPLEOIJ; // 0x50
		::System::Collections::Generic::List_1<::DEBEAKKOHLN*>* DKCOIGNAENF; // 0x58
		::System::Collections::Generic::Dictionary_2<::System::String*, ::System::Object*>* ABOBKDPKBDA; // 0x60
		::System::Collections::Generic::HashSet_1<::System::String*>* LCFMOFNHDDH; // 0x68
		::System::Collections::Generic::List_1<::UnityEngine::Renderer*>* JKIOENGGKBF; // 0x70
		::System::Collections::Generic::Dictionary_2<::System::String*, ::System::Object*>* PJGHGFDOJMI; // 0x78
		::System::Collections::Generic::HashSet_1<::RPG::GameCore::GameEntity*>* IKIPMIEOGEA; // 0x80
		::System::Collections::Generic::Dictionary_2<::UnityEngine::Renderer*, ::System::Object*>* BIGCCEEFEDG; // 0x88
		::System::Collections::Generic::HashSet_1<::System::String*>* GOFOGEIOFHD; // 0x90
		::System::Boolean BNINAAHJBDN; // 0x98
		::System::Boolean GEOHNLMMLKM; // 0x99
		::System::Boolean NBGHGLAMCHE; // 0x9A
		::System::Boolean NFJCBOGHIDL; // 0x9B
		::System::Void _ctor(::DGDCNMMBMKA* a1)
		{
			return ((::System::Void(*)(::PVOID, ::DGDCNMMBMKA*))((::PBYTE)hIl2Cpp + IKLIHOEDGBE_CTOR_OFFSET))(this, a1);
		}

		::System::Void Dispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + IKLIHOEDGBE_DISPOSE_OFFSET))(this);
		}

		::System::Void PJPFIHFAHGO()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + IKLIHOEDGBE_PJPFIHFAHGO_OFFSET))(this);
		}

		::System::Void PAGKOAEOLKA(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + IKLIHOEDGBE_PAGKOAEOLKA_OFFSET))(this, a1);
		}

		::System::Void IEGNMOODDAK(::RPGTools::Timeline::ColorGradingMaskWhitelist a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPGTools::Timeline::ColorGradingMaskWhitelist))((::PBYTE)hIl2Cpp + IKLIHOEDGBE_IEGNMOODDAK_OFFSET))(this, a1);
		}

		::System::Void PDKLDMNAJBO()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + IKLIHOEDGBE_PDKLDMNAJBO_OFFSET))(this);
		}

		::System::Void DHAFJJELHIG()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + IKLIHOEDGBE_DHAFJJELHIG_OFFSET))(this);
		}

		::System::Void BFLIHKHOBJN()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + IKLIHOEDGBE_BFLIHKHOBJN_OFFSET))(this);
		}

		::System::Void IKNACHGHMEJ()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + IKLIHOEDGBE_IKNACHGHMEJ_OFFSET))(this);
		}

		::System::Void FAPHFOCFOPA()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + IKLIHOEDGBE_FAPHFOCFOPA_OFFSET))(this);
		}

		::System::Void MKJOLKCPIJM()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + IKLIHOEDGBE_MKJOLKCPIJM_OFFSET))(this);
		}

		::System::Void NCHHIAFMNHF(::System::Object* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + IKLIHOEDGBE_NCHHIAFMNHF_OFFSET))(this, a1);
		}

		::System::Void KHLNIPOLLJC(::System::Object* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + IKLIHOEDGBE_KHLNIPOLLJC_OFFSET))(this, a1);
		}

		::System::Void DCOPELNHNLO(::RPGTools::Timeline::ColorGradingMaskWhitelist a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPGTools::Timeline::ColorGradingMaskWhitelist))((::PBYTE)hIl2Cpp + IKLIHOEDGBE_DCOPELNHNLO_OFFSET))(this, a1);
		}

		::System::Void FHMGPOFAJGG()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + IKLIHOEDGBE_FHMGPOFAJGG_OFFSET))(this);
		}

		::System::Void OMJIPNCKFEH()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + IKLIHOEDGBE_OMJIPNCKFEH_OFFSET))(this);
		}

		::System::Collections::Generic::List_1<::UnityEngine::Renderer*>* FGAMIBBFPDC()
		{
			return ((::System::Collections::Generic::List_1<::UnityEngine::Renderer*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + IKLIHOEDGBE_FGAMIBBFPDC_OFFSET))(this);
		}

		::System::Void DEBJNNLKMNC(::System::Collections::Generic::List_1<::UnityEngine::Renderer*>* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::List_1<::UnityEngine::Renderer*>*))((::PBYTE)hIl2Cpp + IKLIHOEDGBE_DEBJNNLKMNC_OFFSET))(this, a1);
		}

		::System::Void FGBPNLOGKGK(::UnityEngine::Renderer* a1)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Renderer*))((::PBYTE)hIl2Cpp + IKLIHOEDGBE_FGBPNLOGKGK_OFFSET))(this, a1);
		}

		::System::Void CCEFCJEHEJC(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + IKLIHOEDGBE_CCEFCJEHEJC_OFFSET))(this, a1);
		}

		::System::Void GLKDFELEEHC(::Il2CppArray<::System::Object*>* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Il2CppArray<::System::Object*>*))((::PBYTE)hIl2Cpp + IKLIHOEDGBE_GLKDFELEEHC_OFFSET))(this, a1);
		}

		::System::String* APMDNBJPCJF(::RPGTools::Timeline::ColorGradingMaskWhitelist_StoryCharacter* a1)
		{
			return ((::System::String*(*)(::PVOID, ::RPGTools::Timeline::ColorGradingMaskWhitelist_StoryCharacter*))((::PBYTE)hIl2Cpp + IKLIHOEDGBE_APMDNBJPCJF_OFFSET))(this, a1);
		}

		::System::Void CNHJGDHJJBN(::IKLIHOEDGBE_AHGMNBFPJHK* a1, ::RPGTools::Timeline::ColorGradingMaskWhitelist_StoryCharacter* a2)
		{
			return ((::System::Void(*)(::PVOID, ::IKLIHOEDGBE_AHGMNBFPJHK*, ::RPGTools::Timeline::ColorGradingMaskWhitelist_StoryCharacter*))((::PBYTE)hIl2Cpp + IKLIHOEDGBE_CNHJGDHJJBN_OFFSET))(this, a1, a2);
		}

		::IKLIHOEDGBE_AHGMNBFPJHK* HNMAPAHIEGK(::RPGTools::Timeline::ColorGradingMaskWhitelist_StoryCharacter* a1)
		{
			return ((::IKLIHOEDGBE_AHGMNBFPJHK*(*)(::PVOID, ::RPGTools::Timeline::ColorGradingMaskWhitelist_StoryCharacter*))((::PBYTE)hIl2Cpp + IKLIHOEDGBE_HNMAPAHIEGK_OFFSET))(this, a1);
		}

		::System::Void BBDMHOHDGDC(::IKLIHOEDGBE_AHGMNBFPJHK* a1)
		{
			return ((::System::Void(*)(::PVOID, ::IKLIHOEDGBE_AHGMNBFPJHK*))((::PBYTE)hIl2Cpp + IKLIHOEDGBE_BBDMHOHDGDC_OFFSET))(this, a1);
		}

		::System::Void PDIJGFHHAIH(::Il2CppArray<::System::Object*>* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Il2CppArray<::System::Object*>*))((::PBYTE)hIl2Cpp + IKLIHOEDGBE_PDIJGFHHAIH_OFFSET))(this, a1);
		}

		::System::String* PPHJJDELKJN(::RPGTools::Timeline::ColorGradingMaskWhitelist_StoryVFX a1)
		{
			return ((::System::String*(*)(::PVOID, ::RPGTools::Timeline::ColorGradingMaskWhitelist_StoryVFX))((::PBYTE)hIl2Cpp + IKLIHOEDGBE_PPHJJDELKJN_OFFSET))(this, a1);
		}

		::System::Void CEFNHMOBOOF(::IKLIHOEDGBE_OGNMMDLIAHJ* a1, ::RPGTools::Timeline::ColorGradingMaskWhitelist_StoryVFX a2)
		{
			return ((::System::Void(*)(::PVOID, ::IKLIHOEDGBE_OGNMMDLIAHJ*, ::RPGTools::Timeline::ColorGradingMaskWhitelist_StoryVFX))((::PBYTE)hIl2Cpp + IKLIHOEDGBE_CEFNHMOBOOF_OFFSET))(this, a1, a2);
		}

		::IKLIHOEDGBE_OGNMMDLIAHJ* MEKCACOMAGD(::RPGTools::Timeline::ColorGradingMaskWhitelist_StoryVFX a1)
		{
			return ((::IKLIHOEDGBE_OGNMMDLIAHJ*(*)(::PVOID, ::RPGTools::Timeline::ColorGradingMaskWhitelist_StoryVFX))((::PBYTE)hIl2Cpp + IKLIHOEDGBE_MEKCACOMAGD_OFFSET))(this, a1);
		}

		::System::Void KCLIALDKIBA(::IKLIHOEDGBE_OGNMMDLIAHJ* a1)
		{
			return ((::System::Void(*)(::PVOID, ::IKLIHOEDGBE_OGNMMDLIAHJ*))((::PBYTE)hIl2Cpp + IKLIHOEDGBE_KCLIALDKIBA_OFFSET))(this, a1);
		}

		::System::Void FIIPNMKPGMB(::Il2CppArray<::System::Object*>* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Il2CppArray<::System::Object*>*))((::PBYTE)hIl2Cpp + IKLIHOEDGBE_FIIPNMKPGMB_OFFSET))(this, a1);
		}

		::System::Void FBKFIGHDGCB(::IKLIHOEDGBE_EKIKCHBFDHL* a1, ::RPGTools::Timeline::ColorGradingMaskWhitelist_StageItem a2)
		{
			return ((::System::Void(*)(::PVOID, ::IKLIHOEDGBE_EKIKCHBFDHL*, ::RPGTools::Timeline::ColorGradingMaskWhitelist_StageItem))((::PBYTE)hIl2Cpp + IKLIHOEDGBE_FBKFIGHDGCB_OFFSET))(this, a1, a2);
		}

		::IKLIHOEDGBE_EKIKCHBFDHL* KEODEGLPGKH(::RPGTools::Timeline::ColorGradingMaskWhitelist_StageItem a1)
		{
			return ((::IKLIHOEDGBE_EKIKCHBFDHL*(*)(::PVOID, ::RPGTools::Timeline::ColorGradingMaskWhitelist_StageItem))((::PBYTE)hIl2Cpp + IKLIHOEDGBE_KEODEGLPGKH_OFFSET))(this, a1);
		}

		::System::Void FPELJANJFIM(::IKLIHOEDGBE_EKIKCHBFDHL* a1)
		{
			return ((::System::Void(*)(::PVOID, ::IKLIHOEDGBE_EKIKCHBFDHL*))((::PBYTE)hIl2Cpp + IKLIHOEDGBE_FPELJANJFIM_OFFSET))(this, a1);
		}

		::System::Void BOJDDAKPIPJ(::Il2CppArray<::System::Object*>* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Il2CppArray<::System::Object*>*))((::PBYTE)hIl2Cpp + IKLIHOEDGBE_BOJDDAKPIPJ_OFFSET))(this, a1);
		}

		::System::Void NMHIICHBDFO(::IKLIHOEDGBE_FLDICDMMIGD* a1, ::RPGTools::Timeline::ColorGradingMaskWhitelist_MapEntity a2)
		{
			return ((::System::Void(*)(::PVOID, ::IKLIHOEDGBE_FLDICDMMIGD*, ::RPGTools::Timeline::ColorGradingMaskWhitelist_MapEntity))((::PBYTE)hIl2Cpp + IKLIHOEDGBE_NMHIICHBDFO_OFFSET))(this, a1, a2);
		}

		::IKLIHOEDGBE_FLDICDMMIGD* PNGFPLFEECK(::RPGTools::Timeline::ColorGradingMaskWhitelist_MapEntity a1)
		{
			return ((::IKLIHOEDGBE_FLDICDMMIGD*(*)(::PVOID, ::RPGTools::Timeline::ColorGradingMaskWhitelist_MapEntity))((::PBYTE)hIl2Cpp + IKLIHOEDGBE_PNGFPLFEECK_OFFSET))(this, a1);
		}

		::System::Void PAJGDIOMBNF(::IKLIHOEDGBE_FLDICDMMIGD* a1)
		{
			return ((::System::Void(*)(::PVOID, ::IKLIHOEDGBE_FLDICDMMIGD*))((::PBYTE)hIl2Cpp + IKLIHOEDGBE_PAJGDIOMBNF_OFFSET))(this, a1);
		}

		::System::Void DLNPDBNMJBP(::RPG::Client::MonoEffect* a1, ::RPG::GameCore::GameEntity* a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::MonoEffect*, ::RPG::GameCore::GameEntity*))((::PBYTE)hIl2Cpp + IKLIHOEDGBE_DLNPDBNMJBP_OFFSET))(this, a1, a2);
		}

		::System::Void PAPNBICLMBA(::IKLIHOEDGBE_AKIBBINFDFL* a1)
		{
			return ((::System::Void(*)(::PVOID, ::IKLIHOEDGBE_AKIBBINFDFL*))((::PBYTE)hIl2Cpp + IKLIHOEDGBE_PAPNBICLMBA_OFFSET))(this, a1);
		}

		::System::Void BKJLBBLFIAA(::IKLIHOEDGBE_AKIBBINFDFL* a1)
		{
			return ((::System::Void(*)(::PVOID, ::IKLIHOEDGBE_AKIBBINFDFL*))((::PBYTE)hIl2Cpp + IKLIHOEDGBE_BKJLBBLFIAA_OFFSET))(this, a1);
		}

		::System::Void KLODBBFJLFH(::IKLIHOEDGBE_AKIBBINFDFL* a1)
		{
			return ((::System::Void(*)(::PVOID, ::IKLIHOEDGBE_AKIBBINFDFL*))((::PBYTE)hIl2Cpp + IKLIHOEDGBE_KLODBBFJLFH_OFFSET))(this, a1);
		}

		::System::Void NABCPENOKGI(::DEBEAKKOHLN* a1, ::System::Single a2, ::System::Single a3)
		{
			return ((::System::Void(*)(::PVOID, ::DEBEAKKOHLN*, ::System::Single, ::System::Single))((::PBYTE)hIl2Cpp + IKLIHOEDGBE_NABCPENOKGI_OFFSET))(this, a1, a2, a3);
		}

		::System::Void MBLMCFMKGMG(::DEBEAKKOHLN* a1, ::System::Single a2)
		{
			return ((::System::Void(*)(::PVOID, ::DEBEAKKOHLN*, ::System::Single))((::PBYTE)hIl2Cpp + IKLIHOEDGBE_MBLMCFMKGMG_OFFSET))(this, a1, a2);
		}

		::System::Void FHMALMGDJJM(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + IKLIHOEDGBE_FHMALMGDJJM_OFFSET))(this, a1);
		}

		::System::Void MLFOEEBEDGF(::IKLIHOEDGBE_AKIBBINFDFL* a1, ::System::Single a2)
		{
			return ((::System::Void(*)(::PVOID, ::IKLIHOEDGBE_AKIBBINFDFL*, ::System::Single))((::PBYTE)hIl2Cpp + IKLIHOEDGBE_MLFOEEBEDGF_OFFSET))(this, a1, a2);
		}

		::System::Void MLFOEEBEDGF_1(::DEBEAKKOHLN* a1, ::System::Single a2)
		{
			return ((::System::Void(*)(::PVOID, ::DEBEAKKOHLN*, ::System::Single))((::PBYTE)hIl2Cpp + IKLIHOEDGBE_MLFOEEBEDGF_1_OFFSET))(this, a1, a2);
		}

		::System::Void KJHDBEGCIBN(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + IKLIHOEDGBE_KJHDBEGCIBN_OFFSET))(this, a1);
		}

		::System::Void KKHNHNOIFDO()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + IKLIHOEDGBE_KKHNHNOIFDO_OFFSET))(this);
		}

		::System::Single ACNEKNPLAOA(::System::Single a1)
		{
			return ((::System::Single(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + IKLIHOEDGBE_ACNEKNPLAOA_OFFSET))(this, a1);
		}

		::System::Single PLGKPHFMHCC(::System::Single a1)
		{
			return ((::System::Single(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + IKLIHOEDGBE_PLGKPHFMHCC_OFFSET))(this, a1);
		}

		::System::Single ALGFGFDNIBO()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + IKLIHOEDGBE_ALGFGFDNIBO_OFFSET))(this);
		}

		::System::String* HDEIHFDFCMA(::RPGTools::Timeline::ColorGradingMaskWhitelist_StageItem a1)
		{
			return ((::System::String*(*)(::PVOID, ::RPGTools::Timeline::ColorGradingMaskWhitelist_StageItem))((::PBYTE)hIl2Cpp + IKLIHOEDGBE_HDEIHFDFCMA_OFFSET))(this, a1);
		}

		::System::String* NJALKEEBCEC(::RPGTools::Timeline::ColorGradingMaskWhitelist_MapEntity a1)
		{
			return ((::System::String*(*)(::PVOID, ::RPGTools::Timeline::ColorGradingMaskWhitelist_MapEntity))((::PBYTE)hIl2Cpp + IKLIHOEDGBE_NJALKEEBCEC_OFFSET))(this, a1);
		}

		::System::Void GKNGHGBPPNM()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + IKLIHOEDGBE_GKNGHGBPPNM_OFFSET))(this);
		}

	};
