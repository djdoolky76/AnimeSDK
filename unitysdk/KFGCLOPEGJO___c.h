#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Foundation/AssetPath.h"
#include "unitysdk/MoleMole/InputLogicEventType.h"
#include "unitysdk/OIOMFDOEHLH.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/System/TimeSpan.h"
#include "unitysdk/System/ValueTuple_2.h"
#include "unitysdk/System/ValueTuple_3.h"
#include "unitysdk/UnityEngine/UI/Extension/TitleShowType.h"
#include "unitysdk/UnityEngine/Color.h"
#include "unitysdk/UnityEngine/Quaternion.h"
#include "unitysdk/UnityEngine/Rect.h"
#include "unitysdk/UnityEngine/Vector2.h"
#include "unitysdk/UnityEngine/Vector3.h"

class FGCOIBFFCHB;
class FILNFMCNCFE;
class GCIMMDDIFBJ;
class IBENDELLLAO;
class LGINJIKKBJA;
class MPHPFDEODIG;
class PopText;
namespace MoleMole { class MonoGamepadSelectable; }
namespace MoleMole { class MonoInputKey; }
namespace MoleMole { class NotificationBadge; }
namespace MoleMole { class NotificationBadgeEx; }
namespace MoleMole { class ScaledContentSizeFitter; }
namespace MoleMole { class UIGeneralBtn03WidgetController; }
namespace MoleMole { class UIGeneralButtonController; }
namespace MoleMole { class UIInputFieldEx; }
namespace System { class String; }
namespace System { template <typename T1, typename T2> class Action_2; }
namespace System::Collections::Generic { template <typename T> class IEnumerable_1; }
namespace UnityEngine { class Camera; }
namespace UnityEngine { class CanvasGroup; }
namespace UnityEngine { class Component; }
namespace UnityEngine { class GameObject; }
namespace UnityEngine { class Material; }
namespace UnityEngine { class MonoBehaviour; }
namespace UnityEngine { class RenderTexture; }
namespace UnityEngine { class Texture; }
namespace UnityEngine::Events { class UnityAction; }
namespace UnityEngine::UI { class AspectRatioFitter; }
namespace UnityEngine::UI { class LayoutElement; }
namespace UnityEngine::UI { class Slider; }
namespace UnityEngine::UI::Extension { class ISetGrey; }
namespace UnityEngine::UI::Extension { class ISetInteractable; }
namespace UnityEngine::UI::Extension { class ISetKey; }
namespace UnityEngine::UI::Extension { class ISetText; }
namespace UnityEngine::UI::Extension { class PathGuide; }
namespace UnityEngine::UI::Extension { class UICircleProgress; }
namespace UnityEngine::UI::Extension { class UILinearProgressBar; }
namespace UnityEngine::UI::Extension { class UILocalizationText; }
namespace UnityEngine::UI::Extension { class UITextureOffsetModifier; }
namespace UnityEngine::UI::Extension { class UITimeWidget; }

#define KFGCLOPEGJO___C_AGKMCCHBLKC_OFFSET UNITYSDK_OFFSET(0x1994C330)
#define KFGCLOPEGJO___C_AIOAOPCPMCP_OFFSET UNITYSDK_OFFSET(0x1994A620)
#define KFGCLOPEGJO___C_ANLFNGPKJLA_OFFSET UNITYSDK_OFFSET(0x1994BDE0)
#define KFGCLOPEGJO___C_BAOAFMNPDBL_OFFSET UNITYSDK_OFFSET(0x19948F30)
#define KFGCLOPEGJO___C_BBKFIAHLMJO_OFFSET UNITYSDK_OFFSET(0x1994A2A0)
#define KFGCLOPEGJO___C_BDINEGLNEJM_OFFSET UNITYSDK_OFFSET(0x1994A0F0)
#define KFGCLOPEGJO___C_BEFONMFBAAP_OFFSET UNITYSDK_OFFSET(0x1994AEA0)
#define KFGCLOPEGJO___C_BEKNMIDJIIO_OFFSET UNITYSDK_OFFSET(0x19948A70)
#define KFGCLOPEGJO___C_BHBOKOKEPOC_OFFSET UNITYSDK_OFFSET(0x1994A740)
#define KFGCLOPEGJO___C_BHCCLPKKLHL_OFFSET UNITYSDK_OFFSET(0x1994A380)
#define KFGCLOPEGJO___C_BNPAAMPPEND_OFFSET UNITYSDK_OFFSET(0x1994B090)
#define KFGCLOPEGJO___C_BPIPMKIMAMN_OFFSET UNITYSDK_OFFSET(0x1994C3B0)
#define KFGCLOPEGJO___C_CKEAAFHJBDB_OFFSET UNITYSDK_OFFSET(0x19949200)
#define KFGCLOPEGJO___C_CMFAMCNIMKE_OFFSET UNITYSDK_OFFSET(0x1994A900)
#define KFGCLOPEGJO___C_CMHLIOODOMN_OFFSET UNITYSDK_OFFSET(0x199499E0)
#define KFGCLOPEGJO___C_COIKOJEDOIM_OFFSET UNITYSDK_OFFSET(0x19949030)
#define KFGCLOPEGJO___C_DEDNAJFJMPD_OFFSET UNITYSDK_OFFSET(0x1994A650)
#define KFGCLOPEGJO___C_DEGPLJIOHKA_OFFSET UNITYSDK_OFFSET(0x1994AFF0)
#define KFGCLOPEGJO___C_DGIKJEMNHLP_OFFSET UNITYSDK_OFFSET(0x1994AC90)
#define KFGCLOPEGJO___C_DLNBLAMMIML_OFFSET UNITYSDK_OFFSET(0x1994AF60)
#define KFGCLOPEGJO___C_EAACDEGMFHD_OFFSET UNITYSDK_OFFSET(0x1994AAE0)
#define KFGCLOPEGJO___C_EDMELNPKHEP_OFFSET UNITYSDK_OFFSET(0x1994B0F0)
#define KFGCLOPEGJO___C_EHFKHDCLOGE_OFFSET UNITYSDK_OFFSET(0x19949100)
#define KFGCLOPEGJO___C_EHLOFEANJCO_OFFSET UNITYSDK_OFFSET(0x1994C6E0)
#define KFGCLOPEGJO___C_EPFFCMKDOJO_OFFSET UNITYSDK_OFFSET(0x19949F80)
#define KFGCLOPEGJO___C_FCJOJELKKDE_OFFSET UNITYSDK_OFFSET(0x1994BA00)
#define KFGCLOPEGJO___C_FCMCBHMGDHO_OFFSET UNITYSDK_OFFSET(0x1994AED0)
#define KFGCLOPEGJO___C_FHGNALBLEDH_OFFSET UNITYSDK_OFFSET(0x1994A9D0)
#define KFGCLOPEGJO___C_FHPGFLICILE_OFFSET UNITYSDK_OFFSET(0x19949370)
#define KFGCLOPEGJO___C_FNIDKCNBFDP_OFFSET UNITYSDK_OFFSET(0x1994B860)
#define KFGCLOPEGJO___C_FPHJLKIHHGE_OFFSET UNITYSDK_OFFSET(0x199499C0)
#define KFGCLOPEGJO___C_GCMNNJNJJNH_OFFSET UNITYSDK_OFFSET(0x19948BD0)
#define KFGCLOPEGJO___C_GEPPOGPJLAI_OFFSET UNITYSDK_OFFSET(0x1994A3A0)
#define KFGCLOPEGJO___C_GFOHOJACABI_OFFSET UNITYSDK_OFFSET(0x1994BF80)
#define KFGCLOPEGJO___C_GIPMGCCNGIP_OFFSET UNITYSDK_OFFSET(0x19948D80)
#define KFGCLOPEGJO___C_GJACJNOJKKG_OFFSET UNITYSDK_OFFSET(0x1994C8A0)
#define KFGCLOPEGJO___C_HAKOHFAIPFC_OFFSET UNITYSDK_OFFSET(0x19948C00)
#define KFGCLOPEGJO___C_HBFMFEFAHFN_OFFSET UNITYSDK_OFFSET(0x19949060)
#define KFGCLOPEGJO___C_HBJDPPBFANO_OFFSET UNITYSDK_OFFSET(0x19949A30)
#define KFGCLOPEGJO___C_HELJLJKHKKI_OFFSET UNITYSDK_OFFSET(0x1994BFB0)
#define KFGCLOPEGJO___C_HHGCAFEPEMJ_OFFSET UNITYSDK_OFFSET(0x19949B70)
#define KFGCLOPEGJO___C_HMJEJCGGAKE_OFFSET UNITYSDK_OFFSET(0x19949DF0)
#define KFGCLOPEGJO___C_HMKMCCKMKHP_OFFSET UNITYSDK_OFFSET(0x1994A810)
#define KFGCLOPEGJO___C_HOGCJDLPIAF_OFFSET UNITYSDK_OFFSET(0x1994B0C0)
#define KFGCLOPEGJO___C_IFOBEPBIMDP_OFFSET UNITYSDK_OFFSET(0x1994BB80)
#define KFGCLOPEGJO___C_IIDHDBLLGPE_OFFSET UNITYSDK_OFFSET(0x199494F0)
#define KFGCLOPEGJO___C_IJMEKEOKKLM_OFFSET UNITYSDK_OFFSET(0x1994A4C0)
#define KFGCLOPEGJO___C_ILJBOBPDBBJ_OFFSET UNITYSDK_OFFSET(0x1994B990)
#define KFGCLOPEGJO___C_INCACIINMBC_OFFSET UNITYSDK_OFFSET(0x1994B5D0)
#define KFGCLOPEGJO___C_JADAJNFLGJP_OFFSET UNITYSDK_OFFSET(0x1994B050)
#define KFGCLOPEGJO___C_JCAJCICIHMK_OFFSET UNITYSDK_OFFSET(0x1994A960)
#define KFGCLOPEGJO___C_KBCAPPCHNNC_OFFSET UNITYSDK_OFFSET(0x1994A4A0)
#define KFGCLOPEGJO___C_KBLMOGGPJGD_OFFSET UNITYSDK_OFFSET(0x1994C040)
#define KFGCLOPEGJO___C_KGJKHPKBPHJ_OFFSET UNITYSDK_OFFSET(0x19948C80)
#define KFGCLOPEGJO___C_KGMKPPHMGJN_OFFSET UNITYSDK_OFFSET(0x1994A6D0)
#define KFGCLOPEGJO___C_KHCLPAMALLM_OFFSET UNITYSDK_OFFSET(0x1994B160)
#define KFGCLOPEGJO___C_KHEPMIGPPEM_OFFSET UNITYSDK_OFFSET(0x199491C0)
#define KFGCLOPEGJO___C_KMKOHAPFAOK_OFFSET UNITYSDK_OFFSET(0x1994C2B0)
#define KFGCLOPEGJO___C_KNKBJGDBAEJ_OFFSET UNITYSDK_OFFSET(0x1994A880)
#define KFGCLOPEGJO___C_LAAPAIKFBNH_OFFSET UNITYSDK_OFFSET(0x1994A460)
#define KFGCLOPEGJO___C_LCGIABJNNFC_OFFSET UNITYSDK_OFFSET(0x1994AD60)
#define KFGCLOPEGJO___C_LCPJCHNOPLM_OFFSET UNITYSDK_OFFSET(0x1994C0C0)
#define KFGCLOPEGJO___C_LDJPOLNDGAH_OFFSET UNITYSDK_OFFSET(0x199495C0)
#define KFGCLOPEGJO___C_LDPMADMINLL_OFFSET UNITYSDK_OFFSET(0x1994C820)
#define KFGCLOPEGJO___C_LJOJHBKEEFP_OFFSET UNITYSDK_OFFSET(0x1994AD20)
#define KFGCLOPEGJO___C_LMKKFIMEBND_OFFSET UNITYSDK_OFFSET(0x19949BB0)
#define KFGCLOPEGJO___C_LNJNPDHGIGL_OFFSET UNITYSDK_OFFSET(0x1994B6E0)
#define KFGCLOPEGJO___C_LPKENLCNIKI_OFFSET UNITYSDK_OFFSET(0x1994B220)
#define KFGCLOPEGJO___C_MCBNGJCDFEM_OFFSET UNITYSDK_OFFSET(0x19948A40)
#define KFGCLOPEGJO___C_MCDDMFKIKAD_OFFSET UNITYSDK_OFFSET(0x19949390)
#define KFGCLOPEGJO___C_MEAJLOOBFHL_OFFSET UNITYSDK_OFFSET(0x19949690)
#define KFGCLOPEGJO___C_MGANIDEAGEF_OFFSET UNITYSDK_OFFSET(0x19949950)
#define KFGCLOPEGJO___C_MGCODCEIFPB_OFFSET UNITYSDK_OFFSET(0x1994C930)
#define KFGCLOPEGJO___C_MIAPFPPLPAB_OFFSET UNITYSDK_OFFSET(0x1994A5F0)
#define KFGCLOPEGJO___C_MJNBKHBHDJC_OFFSET UNITYSDK_OFFSET(0x1994ABD0)
#define KFGCLOPEGJO___C_MLOJFKDAKEI_OFFSET UNITYSDK_OFFSET(0x1994BC10)
#define KFGCLOPEGJO___C_MMAILEBHGIG_OFFSET UNITYSDK_OFFSET(0x1994BC50)
#define KFGCLOPEGJO___C_MNKHEOLCCBH_OFFSET UNITYSDK_OFFSET(0x1994BE10)
#define KFGCLOPEGJO___C_NALPCEKPGNN_OFFSET UNITYSDK_OFFSET(0x1994BB10)
#define KFGCLOPEGJO___C_NAOEGDGEMNJ_OFFSET UNITYSDK_OFFSET(0x19949070)
#define KFGCLOPEGJO___C_NGCMPBDMEOB_OFFSET UNITYSDK_OFFSET(0x1994C150)
#define KFGCLOPEGJO___C_NIOECIAGDMM_OFFSET UNITYSDK_OFFSET(0x1994A570)
#define KFGCLOPEGJO___C_NKCPBDFLCLJ_OFFSET UNITYSDK_OFFSET(0x1994B900)
#define KFGCLOPEGJO___C_OAFIGAEMIIN_OFFSET UNITYSDK_OFFSET(0x1994C850)
#define KFGCLOPEGJO___C_OCENGCKGKDC_OFFSET UNITYSDK_OFFSET(0x19949660)
#define KFGCLOPEGJO___C_OCOHOGJIOBB_OFFSET UNITYSDK_OFFSET(0x19949010)
#define KFGCLOPEGJO___C_OKELLBHBHKL_OFFSET UNITYSDK_OFFSET(0x19949090)
#define KFGCLOPEGJO___C_OOCEIBNBNJF_OFFSET UNITYSDK_OFFSET(0x1994A440)
#define KFGCLOPEGJO___C_OPKPMJLHKOI_OFFSET UNITYSDK_OFFSET(0x1994A060)
#define KFGCLOPEGJO___C_PBHKHKMENMP_OFFSET UNITYSDK_OFFSET(0x1994C4B0)
#define KFGCLOPEGJO___C_PEPODHIPKEA_OFFSET UNITYSDK_OFFSET(0x199494D0)
#define KFGCLOPEGJO___C_PFOCNHGKCOG_OFFSET UNITYSDK_OFFSET(0x19948D60)
#define KFGCLOPEGJO___C_PJAPLINMPMM_OFFSET UNITYSDK_OFFSET(0x1994A7C0)
#define KFGCLOPEGJO___C_PKHGLEJGDPI_OFFSET UNITYSDK_OFFSET(0x1994C740)
#define KFGCLOPEGJO___C_PMFADMDBDOO_OFFSET UNITYSDK_OFFSET(0x1994B6A0)
#define KFGCLOPEGJO___C_PNDEEAGIKJM_OFFSET UNITYSDK_OFFSET(0x1994A010)
#define KFGCLOPEGJO___C_PNGGEHGAJBO_OFFSET UNITYSDK_OFFSET(0x19948B50)
#define KFGCLOPEGJO___C_PNIOEGDLFEC_OFFSET UNITYSDK_OFFSET(0x1994B7E0)
#define KFGCLOPEGJO___C__CCTOR_OFFSET UNITYSDK_OFFSET(0x199489F0)
#define KFGCLOPEGJO___C__CTOR_OFFSET UNITYSDK_OFFSET(0x19948A30)

inline static constexpr unsigned int KFGCLOPEGJO___c_TypeDefinitionIndex = 78959;

class KFGCLOPEGJO___c : public ::System::Object
{
public:
	static ::System::Action_2<::UnityEngine::Component*, ::UnityEngine::Vector2>** StaticGet___9__62_0()
	{
		return (::System::Action_2<::UnityEngine::Component*, ::UnityEngine::Vector2>**)Il2CppClass::FromTypeDefinitionIndex(KFGCLOPEGJO___c_TypeDefinitionIndex)->GetStaticField(0x410D0);
	}
	static ::System::Action_2<::MoleMole::UIGeneralBtn03WidgetController*, ::UnityEngine::Color>** StaticGet___9__4_3()
	{
		return (::System::Action_2<::MoleMole::UIGeneralBtn03WidgetController*, ::UnityEngine::Color>**)Il2CppClass::FromTypeDefinitionIndex(KFGCLOPEGJO___c_TypeDefinitionIndex)->GetStaticField(0x410D8);
	}
	static ::System::Action_2<::FGCOIBFFCHB*, ::System::String*>** StaticGet___9__19_0()
	{
		return (::System::Action_2<::FGCOIBFFCHB*, ::System::String*>**)Il2CppClass::FromTypeDefinitionIndex(KFGCLOPEGJO___c_TypeDefinitionIndex)->GetStaticField(0x410E0);
	}
	static ::System::Action_2<::UnityEngine::UI::Extension::ISetKey*, ::System::ValueTuple_2<::System::String*, ::Il2CppArray<::System::Object*>*>>** StaticGet___9__11_0()
	{
		return (::System::Action_2<::UnityEngine::UI::Extension::ISetKey*, ::System::ValueTuple_2<::System::String*, ::Il2CppArray<::System::Object*>*>>**)Il2CppClass::FromTypeDefinitionIndex(KFGCLOPEGJO___c_TypeDefinitionIndex)->GetStaticField(0x410E8);
	}
	static ::System::Action_2<::MoleMole::MonoInputKey*, ::MoleMole::InputLogicEventType>** StaticGet___9__87_0()
	{
		return (::System::Action_2<::MoleMole::MonoInputKey*, ::MoleMole::InputLogicEventType>**)Il2CppClass::FromTypeDefinitionIndex(KFGCLOPEGJO___c_TypeDefinitionIndex)->GetStaticField(0x410F0);
	}
	static ::System::Action_2<::UnityEngine::UI::Extension::UITimeWidget*, ::System::String*>** StaticGet___9__50_0()
	{
		return (::System::Action_2<::UnityEngine::UI::Extension::UITimeWidget*, ::System::String*>**)Il2CppClass::FromTypeDefinitionIndex(KFGCLOPEGJO___c_TypeDefinitionIndex)->GetStaticField(0x410F8);
	}
	static ::System::Action_2<::UnityEngine::Component*, ::UnityEngine::Quaternion>** StaticGet___9__75_0()
	{
		return (::System::Action_2<::UnityEngine::Component*, ::UnityEngine::Quaternion>**)Il2CppClass::FromTypeDefinitionIndex(KFGCLOPEGJO___c_TypeDefinitionIndex)->GetStaticField(0x41100);
	}
	static ::System::Action_2<::UnityEngine::UI::AspectRatioFitter*, ::System::Single>** StaticGet___9__80_0()
	{
		return (::System::Action_2<::UnityEngine::UI::AspectRatioFitter*, ::System::Single>**)Il2CppClass::FromTypeDefinitionIndex(KFGCLOPEGJO___c_TypeDefinitionIndex)->GetStaticField(0x41108);
	}
	static ::System::Action_2<::MoleMole::NotificationBadge*, ::IBENDELLLAO*>** StaticGet___9__85_1()
	{
		return (::System::Action_2<::MoleMole::NotificationBadge*, ::IBENDELLLAO*>**)Il2CppClass::FromTypeDefinitionIndex(KFGCLOPEGJO___c_TypeDefinitionIndex)->GetStaticField(0x41110);
	}
	static ::System::Action_2<::LGINJIKKBJA*, ::UnityEngine::Events::UnityAction*>** StaticGet___9__27_0()
	{
		return (::System::Action_2<::LGINJIKKBJA*, ::UnityEngine::Events::UnityAction*>**)Il2CppClass::FromTypeDefinitionIndex(KFGCLOPEGJO___c_TypeDefinitionIndex)->GetStaticField(0x41118);
	}
	static ::System::Object** StaticGet___9()
	{
		return (::System::Object**)Il2CppClass::FromTypeDefinitionIndex(KFGCLOPEGJO___c_TypeDefinitionIndex)->GetStaticField(0x41120);
	}
	static ::System::Action_2<::UnityEngine::UI::Extension::PathGuide*, ::UnityEngine::Color>** StaticGet___9__71_0()
	{
		return (::System::Action_2<::UnityEngine::UI::Extension::PathGuide*, ::UnityEngine::Color>**)Il2CppClass::FromTypeDefinitionIndex(KFGCLOPEGJO___c_TypeDefinitionIndex)->GetStaticField(0x41128);
	}
	static ::System::Action_2<::FILNFMCNCFE*, ::UnityEngine::RenderTexture*>** StaticGet___9__25_0()
	{
		return (::System::Action_2<::FILNFMCNCFE*, ::UnityEngine::RenderTexture*>**)Il2CppClass::FromTypeDefinitionIndex(KFGCLOPEGJO___c_TypeDefinitionIndex)->GetStaticField(0x41130);
	}
	static ::System::Action_2<::PopText*, ::System::String*>** StaticGet___9__9_0()
	{
		return (::System::Action_2<::PopText*, ::System::String*>**)Il2CppClass::FromTypeDefinitionIndex(KFGCLOPEGJO___c_TypeDefinitionIndex)->GetStaticField(0x41138);
	}
	static ::System::Action_2<::UnityEngine::UI::Extension::UILocalizationText*, ::UnityEngine::Color>** StaticGet___9__4_0()
	{
		return (::System::Action_2<::UnityEngine::UI::Extension::UILocalizationText*, ::UnityEngine::Color>**)Il2CppClass::FromTypeDefinitionIndex(KFGCLOPEGJO___c_TypeDefinitionIndex)->GetStaticField(0x41140);
	}
	static ::System::Action_2<::UnityEngine::UI::Slider*, ::System::Single>** StaticGet___9__56_0()
	{
		return (::System::Action_2<::UnityEngine::UI::Slider*, ::System::Single>**)Il2CppClass::FromTypeDefinitionIndex(KFGCLOPEGJO___c_TypeDefinitionIndex)->GetStaticField(0x41148);
	}
	static ::System::Action_2<::MPHPFDEODIG*, ::System::String*>** StaticGet___9__38_0()
	{
		return (::System::Action_2<::MPHPFDEODIG*, ::System::String*>**)Il2CppClass::FromTypeDefinitionIndex(KFGCLOPEGJO___c_TypeDefinitionIndex)->GetStaticField(0x41150);
	}
	static ::System::Action_2<::UnityEngine::GameObject*, ::System::Collections::Generic::IEnumerable_1<::UnityEngine::Vector2>*>** StaticGet___9__71_2()
	{
		return (::System::Action_2<::UnityEngine::GameObject*, ::System::Collections::Generic::IEnumerable_1<::UnityEngine::Vector2>*>**)Il2CppClass::FromTypeDefinitionIndex(KFGCLOPEGJO___c_TypeDefinitionIndex)->GetStaticField(0x41158);
	}
	static ::System::Action_2<::UnityEngine::UI::Extension::ISetKey*, ::System::ValueTuple_2<::System::String*, ::System::Object*>>** StaticGet___9__12_0()
	{
		return (::System::Action_2<::UnityEngine::UI::Extension::ISetKey*, ::System::ValueTuple_2<::System::String*, ::System::Object*>>**)Il2CppClass::FromTypeDefinitionIndex(KFGCLOPEGJO___c_TypeDefinitionIndex)->GetStaticField(0x41160);
	}
	static ::System::Action_2<::UnityEngine::GameObject*, ::System::String*>** StaticGet___9__38_2()
	{
		return (::System::Action_2<::UnityEngine::GameObject*, ::System::String*>**)Il2CppClass::FromTypeDefinitionIndex(KFGCLOPEGJO___c_TypeDefinitionIndex)->GetStaticField(0x41168);
	}
	static ::System::Action_2<::MoleMole::UIGeneralBtn03WidgetController*, ::System::Boolean>** StaticGet___9__36_1()
	{
		return (::System::Action_2<::MoleMole::UIGeneralBtn03WidgetController*, ::System::Boolean>**)Il2CppClass::FromTypeDefinitionIndex(KFGCLOPEGJO___c_TypeDefinitionIndex)->GetStaticField(0x41170);
	}
	static ::System::Action_2<::FILNFMCNCFE*, ::UnityEngine::Rect>** StaticGet___9__72_1()
	{
		return (::System::Action_2<::FILNFMCNCFE*, ::UnityEngine::Rect>**)Il2CppClass::FromTypeDefinitionIndex(KFGCLOPEGJO___c_TypeDefinitionIndex)->GetStaticField(0x41178);
	}
	static ::System::Action_2<::UnityEngine::Component*, ::UnityEngine::Vector3>** StaticGet___9__73_0()
	{
		return (::System::Action_2<::UnityEngine::Component*, ::UnityEngine::Vector3>**)Il2CppClass::FromTypeDefinitionIndex(KFGCLOPEGJO___c_TypeDefinitionIndex)->GetStaticField(0x41180);
	}
	static ::System::Action_2<::MPHPFDEODIG*, ::UnityEngine::Vector3>** StaticGet___9__76_1()
	{
		return (::System::Action_2<::MPHPFDEODIG*, ::UnityEngine::Vector3>**)Il2CppClass::FromTypeDefinitionIndex(KFGCLOPEGJO___c_TypeDefinitionIndex)->GetStaticField(0x41188);
	}
	static ::System::Action_2<::UnityEngine::UI::Extension::ISetInteractable*, ::System::Boolean>** StaticGet___9__36_0()
	{
		return (::System::Action_2<::UnityEngine::UI::Extension::ISetInteractable*, ::System::Boolean>**)Il2CppClass::FromTypeDefinitionIndex(KFGCLOPEGJO___c_TypeDefinitionIndex)->GetStaticField(0x41190);
	}
	static ::System::Action_2<::MPHPFDEODIG*, ::UnityEngine::Vector2>** StaticGet___9__64_1()
	{
		return (::System::Action_2<::MPHPFDEODIG*, ::UnityEngine::Vector2>**)Il2CppClass::FromTypeDefinitionIndex(KFGCLOPEGJO___c_TypeDefinitionIndex)->GetStaticField(0x41198);
	}
	static ::System::Action_2<::UnityEngine::Component*, ::System::ValueTuple_2<::UnityEngine::Vector2, ::UnityEngine::Vector2>>** StaticGet___9__68_0()
	{
		return (::System::Action_2<::UnityEngine::Component*, ::System::ValueTuple_2<::UnityEngine::Vector2, ::UnityEngine::Vector2>>**)Il2CppClass::FromTypeDefinitionIndex(KFGCLOPEGJO___c_TypeDefinitionIndex)->GetStaticField(0x411A0);
	}
	static ::System::Action_2<::MoleMole::NotificationBadgeEx*, ::IBENDELLLAO*>** StaticGet___9__85_0()
	{
		return (::System::Action_2<::MoleMole::NotificationBadgeEx*, ::IBENDELLLAO*>**)Il2CppClass::FromTypeDefinitionIndex(KFGCLOPEGJO___c_TypeDefinitionIndex)->GetStaticField(0x411A8);
	}
	static ::System::Action_2<::UnityEngine::MonoBehaviour*, ::System::Boolean>** StaticGet___9__32_1()
	{
		return (::System::Action_2<::UnityEngine::MonoBehaviour*, ::System::Boolean>**)Il2CppClass::FromTypeDefinitionIndex(KFGCLOPEGJO___c_TypeDefinitionIndex)->GetStaticField(0x411B0);
	}
	static ::System::Action_2<::UnityEngine::UI::Extension::ISetText*, ::System::String*>** StaticGet___9__8_0()
	{
		return (::System::Action_2<::UnityEngine::UI::Extension::ISetText*, ::System::String*>**)Il2CppClass::FromTypeDefinitionIndex(KFGCLOPEGJO___c_TypeDefinitionIndex)->GetStaticField(0x411B8);
	}
	static ::System::Action_2<::UnityEngine::UI::Extension::UITimeWidget*, ::System::Int64>** StaticGet___9__49_0()
	{
		return (::System::Action_2<::UnityEngine::UI::Extension::UITimeWidget*, ::System::Int64>**)Il2CppClass::FromTypeDefinitionIndex(KFGCLOPEGJO___c_TypeDefinitionIndex)->GetStaticField(0x411C0);
	}
	static ::System::Action_2<::FGCOIBFFCHB*, ::Foundation::AssetPath>** StaticGet___9__20_0()
	{
		return (::System::Action_2<::FGCOIBFFCHB*, ::Foundation::AssetPath>**)Il2CppClass::FromTypeDefinitionIndex(KFGCLOPEGJO___c_TypeDefinitionIndex)->GetStaticField(0x411C8);
	}
	static ::System::Action_2<::MPHPFDEODIG*, ::UnityEngine::Vector2>** StaticGet___9__69_1()
	{
		return (::System::Action_2<::MPHPFDEODIG*, ::UnityEngine::Vector2>**)Il2CppClass::FromTypeDefinitionIndex(KFGCLOPEGJO___c_TypeDefinitionIndex)->GetStaticField(0x411D0);
	}
	static ::System::Action_2<::UnityEngine::Component*, ::UnityEngine::Vector3>** StaticGet___9__59_0()
	{
		return (::System::Action_2<::UnityEngine::Component*, ::UnityEngine::Vector3>**)Il2CppClass::FromTypeDefinitionIndex(KFGCLOPEGJO___c_TypeDefinitionIndex)->GetStaticField(0x411D8);
	}
	static ::System::Action_2<::FGCOIBFFCHB*, ::Foundation::AssetPath>** StaticGet___9__17_0()
	{
		return (::System::Action_2<::FGCOIBFFCHB*, ::Foundation::AssetPath>**)Il2CppClass::FromTypeDefinitionIndex(KFGCLOPEGJO___c_TypeDefinitionIndex)->GetStaticField(0x411E0);
	}
	static ::System::Action_2<::MPHPFDEODIG*, ::UnityEngine::Vector3>** StaticGet___9__66_1()
	{
		return (::System::Action_2<::MPHPFDEODIG*, ::UnityEngine::Vector3>**)Il2CppClass::FromTypeDefinitionIndex(KFGCLOPEGJO___c_TypeDefinitionIndex)->GetStaticField(0x411E8);
	}
	static ::System::Action_2<::UnityEngine::UI::Extension::UITimeWidget*, ::System::TimeSpan>** StaticGet___9__53_0()
	{
		return (::System::Action_2<::UnityEngine::UI::Extension::UITimeWidget*, ::System::TimeSpan>**)Il2CppClass::FromTypeDefinitionIndex(KFGCLOPEGJO___c_TypeDefinitionIndex)->GetStaticField(0x411F0);
	}
	static ::System::Action_2<::UnityEngine::GameObject*, ::System::Boolean>** StaticGet___9__31_2()
	{
		return (::System::Action_2<::UnityEngine::GameObject*, ::System::Boolean>**)Il2CppClass::FromTypeDefinitionIndex(KFGCLOPEGJO___c_TypeDefinitionIndex)->GetStaticField(0x411F8);
	}
	static ::System::Action_2<::UnityEngine::Component*, ::UnityEngine::Vector3>** StaticGet___9__66_0()
	{
		return (::System::Action_2<::UnityEngine::Component*, ::UnityEngine::Vector3>**)Il2CppClass::FromTypeDefinitionIndex(KFGCLOPEGJO___c_TypeDefinitionIndex)->GetStaticField(0x41200);
	}
	static ::System::Action_2<::UnityEngine::Component*, ::System::String*>** StaticGet___9__38_1()
	{
		return (::System::Action_2<::UnityEngine::Component*, ::System::String*>**)Il2CppClass::FromTypeDefinitionIndex(KFGCLOPEGJO___c_TypeDefinitionIndex)->GetStaticField(0x41208);
	}
	static ::System::Action_2<::UnityEngine::UI::Extension::ISetText*, ::System::String*>** StaticGet___9__7_0()
	{
		return (::System::Action_2<::UnityEngine::UI::Extension::ISetText*, ::System::String*>**)Il2CppClass::FromTypeDefinitionIndex(KFGCLOPEGJO___c_TypeDefinitionIndex)->GetStaticField(0x41210);
	}
	static ::System::Action_2<::FILNFMCNCFE*, ::UnityEngine::Texture*>** StaticGet___9__21_0()
	{
		return (::System::Action_2<::FILNFMCNCFE*, ::UnityEngine::Texture*>**)Il2CppClass::FromTypeDefinitionIndex(KFGCLOPEGJO___c_TypeDefinitionIndex)->GetStaticField(0x41218);
	}
	static ::System::Action_2<::MPHPFDEODIG*, ::UnityEngine::Vector2>** StaticGet___9__63_1()
	{
		return (::System::Action_2<::MPHPFDEODIG*, ::UnityEngine::Vector2>**)Il2CppClass::FromTypeDefinitionIndex(KFGCLOPEGJO___c_TypeDefinitionIndex)->GetStaticField(0x41220);
	}
	static ::System::Action_2<::MPHPFDEODIG*, ::UnityEngine::Quaternion>** StaticGet___9__77_1()
	{
		return (::System::Action_2<::MPHPFDEODIG*, ::UnityEngine::Quaternion>**)Il2CppClass::FromTypeDefinitionIndex(KFGCLOPEGJO___c_TypeDefinitionIndex)->GetStaticField(0x41228);
	}
	static ::System::Action_2<::MPHPFDEODIG*, ::UnityEngine::Vector2>** StaticGet___9__62_1()
	{
		return (::System::Action_2<::MPHPFDEODIG*, ::UnityEngine::Vector2>**)Il2CppClass::FromTypeDefinitionIndex(KFGCLOPEGJO___c_TypeDefinitionIndex)->GetStaticField(0x41230);
	}
	static ::System::Action_2<::MoleMole::UIGeneralButtonController*, ::OIOMFDOEHLH>** StaticGet___9__29_0()
	{
		return (::System::Action_2<::MoleMole::UIGeneralButtonController*, ::OIOMFDOEHLH>**)Il2CppClass::FromTypeDefinitionIndex(KFGCLOPEGJO___c_TypeDefinitionIndex)->GetStaticField(0x41238);
	}
	static ::System::Action_2<::GCIMMDDIFBJ*, ::System::String*>** StaticGet___9__94_0()
	{
		return (::System::Action_2<::GCIMMDDIFBJ*, ::System::String*>**)Il2CppClass::FromTypeDefinitionIndex(KFGCLOPEGJO___c_TypeDefinitionIndex)->GetStaticField(0x41240);
	}
	static ::System::Action_2<::MoleMole::ScaledContentSizeFitter*, ::System::Single>** StaticGet___9__61_0()
	{
		return (::System::Action_2<::MoleMole::ScaledContentSizeFitter*, ::System::Single>**)Il2CppClass::FromTypeDefinitionIndex(KFGCLOPEGJO___c_TypeDefinitionIndex)->GetStaticField(0x41248);
	}
	static ::System::Action_2<::UnityEngine::Component*, ::UnityEngine::Vector3>** StaticGet___9__76_0()
	{
		return (::System::Action_2<::UnityEngine::Component*, ::UnityEngine::Vector3>**)Il2CppClass::FromTypeDefinitionIndex(KFGCLOPEGJO___c_TypeDefinitionIndex)->GetStaticField(0x41250);
	}
	static ::System::Action_2<::GCIMMDDIFBJ*, ::System::Boolean>** StaticGet___9__93_0()
	{
		return (::System::Action_2<::GCIMMDDIFBJ*, ::System::Boolean>**)Il2CppClass::FromTypeDefinitionIndex(KFGCLOPEGJO___c_TypeDefinitionIndex)->GetStaticField(0x41258);
	}
	static ::System::Action_2<::UnityEngine::Component*, ::UnityEngine::Vector2>** StaticGet___9__67_0()
	{
		return (::System::Action_2<::UnityEngine::Component*, ::UnityEngine::Vector2>**)Il2CppClass::FromTypeDefinitionIndex(KFGCLOPEGJO___c_TypeDefinitionIndex)->GetStaticField(0x41260);
	}
	static ::System::Action_2<::FGCOIBFFCHB*, ::UnityEngine::Color>** StaticGet___9__4_2()
	{
		return (::System::Action_2<::FGCOIBFFCHB*, ::UnityEngine::Color>**)Il2CppClass::FromTypeDefinitionIndex(KFGCLOPEGJO___c_TypeDefinitionIndex)->GetStaticField(0x41268);
	}
	static ::System::Action_2<::UnityEngine::UI::Extension::ISetKey*, ::System::String*>** StaticGet___9__10_0()
	{
		return (::System::Action_2<::UnityEngine::UI::Extension::ISetKey*, ::System::String*>**)Il2CppClass::FromTypeDefinitionIndex(KFGCLOPEGJO___c_TypeDefinitionIndex)->GetStaticField(0x41270);
	}
	static ::System::Action_2<::MPHPFDEODIG*, ::UnityEngine::Vector2>** StaticGet___9__60_1()
	{
		return (::System::Action_2<::MPHPFDEODIG*, ::UnityEngine::Vector2>**)Il2CppClass::FromTypeDefinitionIndex(KFGCLOPEGJO___c_TypeDefinitionIndex)->GetStaticField(0x41278);
	}
	static ::System::Action_2<::UnityEngine::UI::Extension::ISetGrey*, ::System::Boolean>** StaticGet___9__16_0()
	{
		return (::System::Action_2<::UnityEngine::UI::Extension::ISetGrey*, ::System::Boolean>**)Il2CppClass::FromTypeDefinitionIndex(KFGCLOPEGJO___c_TypeDefinitionIndex)->GetStaticField(0x41280);
	}
	static ::System::Action_2<::FGCOIBFFCHB*, ::System::Int32>** StaticGet___9__23_0()
	{
		return (::System::Action_2<::FGCOIBFFCHB*, ::System::Int32>**)Il2CppClass::FromTypeDefinitionIndex(KFGCLOPEGJO___c_TypeDefinitionIndex)->GetStaticField(0x41288);
	}
	static ::System::Action_2<::UnityEngine::UI::Extension::ISetKey*, ::System::ValueTuple_3<::System::String*, ::System::Object*, ::System::Object*>>** StaticGet___9__13_0()
	{
		return (::System::Action_2<::UnityEngine::UI::Extension::ISetKey*, ::System::ValueTuple_3<::System::String*, ::System::Object*, ::System::Object*>>**)Il2CppClass::FromTypeDefinitionIndex(KFGCLOPEGJO___c_TypeDefinitionIndex)->GetStaticField(0x41290);
	}
	static ::System::Action_2<::MoleMole::MonoGamepadSelectable*, ::System::Boolean>** StaticGet___9__86_0()
	{
		return (::System::Action_2<::MoleMole::MonoGamepadSelectable*, ::System::Boolean>**)Il2CppClass::FromTypeDefinitionIndex(KFGCLOPEGJO___c_TypeDefinitionIndex)->GetStaticField(0x41298);
	}
	static ::System::Action_2<::FGCOIBFFCHB*, ::System::Boolean>** StaticGet___9__35_0()
	{
		return (::System::Action_2<::FGCOIBFFCHB*, ::System::Boolean>**)Il2CppClass::FromTypeDefinitionIndex(KFGCLOPEGJO___c_TypeDefinitionIndex)->GetStaticField(0x412A0);
	}
	static ::System::Action_2<::UnityEngine::Component*, ::UnityEngine::Vector2>** StaticGet___9__63_0()
	{
		return (::System::Action_2<::UnityEngine::Component*, ::UnityEngine::Vector2>**)Il2CppClass::FromTypeDefinitionIndex(KFGCLOPEGJO___c_TypeDefinitionIndex)->GetStaticField(0x412A8);
	}
	static ::System::Action_2<::UnityEngine::Component*, ::UnityEngine::Quaternion>** StaticGet___9__77_0()
	{
		return (::System::Action_2<::UnityEngine::Component*, ::UnityEngine::Quaternion>**)Il2CppClass::FromTypeDefinitionIndex(KFGCLOPEGJO___c_TypeDefinitionIndex)->GetStaticField(0x412B0);
	}
	static ::System::Action_2<::MoleMole::UIInputFieldEx*, ::System::String*>** StaticGet___9__14_0()
	{
		return (::System::Action_2<::MoleMole::UIInputFieldEx*, ::System::String*>**)Il2CppClass::FromTypeDefinitionIndex(KFGCLOPEGJO___c_TypeDefinitionIndex)->GetStaticField(0x412B8);
	}
	static ::System::Action_2<::UnityEngine::UI::LayoutElement*, ::UnityEngine::Vector2>** StaticGet___9__78_0()
	{
		return (::System::Action_2<::UnityEngine::UI::LayoutElement*, ::UnityEngine::Vector2>**)Il2CppClass::FromTypeDefinitionIndex(KFGCLOPEGJO___c_TypeDefinitionIndex)->GetStaticField(0x412C0);
	}
	static ::System::Action_2<::UnityEngine::UI::Extension::UILinearProgressBar*, ::System::Single>** StaticGet___9__65_0()
	{
		return (::System::Action_2<::UnityEngine::UI::Extension::UILinearProgressBar*, ::System::Single>**)Il2CppClass::FromTypeDefinitionIndex(KFGCLOPEGJO___c_TypeDefinitionIndex)->GetStaticField(0x412C8);
	}
	static ::System::Action_2<::UnityEngine::UI::Extension::PathGuide*, ::System::Collections::Generic::IEnumerable_1<::UnityEngine::Vector2>*>** StaticGet___9__71_1()
	{
		return (::System::Action_2<::UnityEngine::UI::Extension::PathGuide*, ::System::Collections::Generic::IEnumerable_1<::UnityEngine::Vector2>*>**)Il2CppClass::FromTypeDefinitionIndex(KFGCLOPEGJO___c_TypeDefinitionIndex)->GetStaticField(0x412D0);
	}
	static ::System::Action_2<::MPHPFDEODIG*, ::System::Int32>** StaticGet___9__33_0()
	{
		return (::System::Action_2<::MPHPFDEODIG*, ::System::Int32>**)Il2CppClass::FromTypeDefinitionIndex(KFGCLOPEGJO___c_TypeDefinitionIndex)->GetStaticField(0x412D8);
	}
	static ::System::Action_2<::UnityEngine::Component*, ::UnityEngine::Vector2>** StaticGet___9__69_0()
	{
		return (::System::Action_2<::UnityEngine::Component*, ::UnityEngine::Vector2>**)Il2CppClass::FromTypeDefinitionIndex(KFGCLOPEGJO___c_TypeDefinitionIndex)->GetStaticField(0x412E0);
	}
	static ::System::Action_2<::MPHPFDEODIG*, ::UnityEngine::Vector3>** StaticGet___9__74_1()
	{
		return (::System::Action_2<::MPHPFDEODIG*, ::UnityEngine::Vector3>**)Il2CppClass::FromTypeDefinitionIndex(KFGCLOPEGJO___c_TypeDefinitionIndex)->GetStaticField(0x412E8);
	}
	static ::System::Action_2<::UnityEngine::Component*, ::UnityEngine::Vector2>** StaticGet___9__70_0()
	{
		return (::System::Action_2<::UnityEngine::Component*, ::UnityEngine::Vector2>**)Il2CppClass::FromTypeDefinitionIndex(KFGCLOPEGJO___c_TypeDefinitionIndex)->GetStaticField(0x412F0);
	}
	static ::System::Action_2<::UnityEngine::Camera*, ::UnityEngine::RenderTexture*>** StaticGet___9__92_0()
	{
		return (::System::Action_2<::UnityEngine::Camera*, ::UnityEngine::RenderTexture*>**)Il2CppClass::FromTypeDefinitionIndex(KFGCLOPEGJO___c_TypeDefinitionIndex)->GetStaticField(0x412F8);
	}
	static ::System::Action_2<::UnityEngine::Component*, ::System::Int32>** StaticGet___9__33_1()
	{
		return (::System::Action_2<::UnityEngine::Component*, ::System::Int32>**)Il2CppClass::FromTypeDefinitionIndex(KFGCLOPEGJO___c_TypeDefinitionIndex)->GetStaticField(0x41300);
	}
	static ::System::Action_2<::MoleMole::UIGeneralButtonController*, ::UnityEngine::Events::UnityAction*>** StaticGet___9__27_1()
	{
		return (::System::Action_2<::MoleMole::UIGeneralButtonController*, ::UnityEngine::Events::UnityAction*>**)Il2CppClass::FromTypeDefinitionIndex(KFGCLOPEGJO___c_TypeDefinitionIndex)->GetStaticField(0x41308);
	}
	static ::System::Action_2<::UnityEngine::Component*, ::System::Boolean>** StaticGet___9__31_1()
	{
		return (::System::Action_2<::UnityEngine::Component*, ::System::Boolean>**)Il2CppClass::FromTypeDefinitionIndex(KFGCLOPEGJO___c_TypeDefinitionIndex)->GetStaticField(0x41310);
	}
	static ::System::Action_2<::UnityEngine::Component*, ::UnityEngine::Vector3>** StaticGet___9__74_0()
	{
		return (::System::Action_2<::UnityEngine::Component*, ::UnityEngine::Vector3>**)Il2CppClass::FromTypeDefinitionIndex(KFGCLOPEGJO___c_TypeDefinitionIndex)->GetStaticField(0x41318);
	}
	static ::System::Action_2<::UnityEngine::UI::Extension::UITimeWidget*, ::System::String*>** StaticGet___9__52_0()
	{
		return (::System::Action_2<::UnityEngine::UI::Extension::UITimeWidget*, ::System::String*>**)Il2CppClass::FromTypeDefinitionIndex(KFGCLOPEGJO___c_TypeDefinitionIndex)->GetStaticField(0x41320);
	}
	static ::System::Action_2<::MPHPFDEODIG*, ::UnityEngine::Vector2>** StaticGet___9__67_1()
	{
		return (::System::Action_2<::MPHPFDEODIG*, ::UnityEngine::Vector2>**)Il2CppClass::FromTypeDefinitionIndex(KFGCLOPEGJO___c_TypeDefinitionIndex)->GetStaticField(0x41328);
	}
	static ::System::Action_2<::MPHPFDEODIG*, ::UnityEngine::Quaternion>** StaticGet___9__75_1()
	{
		return (::System::Action_2<::MPHPFDEODIG*, ::UnityEngine::Quaternion>**)Il2CppClass::FromTypeDefinitionIndex(KFGCLOPEGJO___c_TypeDefinitionIndex)->GetStaticField(0x41330);
	}
	static ::System::Action_2<::MPHPFDEODIG*, ::System::ValueTuple_2<::UnityEngine::Vector2, ::UnityEngine::Vector2>>** StaticGet___9__68_1()
	{
		return (::System::Action_2<::MPHPFDEODIG*, ::System::ValueTuple_2<::UnityEngine::Vector2, ::UnityEngine::Vector2>>**)Il2CppClass::FromTypeDefinitionIndex(KFGCLOPEGJO___c_TypeDefinitionIndex)->GetStaticField(0x41338);
	}
	static ::System::Action_2<::MoleMole::MonoInputKey*, ::System::Boolean>** StaticGet___9__89_0()
	{
		return (::System::Action_2<::MoleMole::MonoInputKey*, ::System::Boolean>**)Il2CppClass::FromTypeDefinitionIndex(KFGCLOPEGJO___c_TypeDefinitionIndex)->GetStaticField(0x41340);
	}
	static ::System::Action_2<::MPHPFDEODIG*, ::UnityEngine::Vector2>** StaticGet___9__70_1()
	{
		return (::System::Action_2<::MPHPFDEODIG*, ::UnityEngine::Vector2>**)Il2CppClass::FromTypeDefinitionIndex(KFGCLOPEGJO___c_TypeDefinitionIndex)->GetStaticField(0x41348);
	}
	static ::System::Action_2<::UnityEngine::UI::Extension::UITimeWidget*, ::UnityEngine::UI::Extension::TitleShowType>** StaticGet___9__120_0()
	{
		return (::System::Action_2<::UnityEngine::UI::Extension::UITimeWidget*, ::UnityEngine::UI::Extension::TitleShowType>**)Il2CppClass::FromTypeDefinitionIndex(KFGCLOPEGJO___c_TypeDefinitionIndex)->GetStaticField(0x41350);
	}
	static ::System::Action_2<::UnityEngine::Component*, ::UnityEngine::Vector2>** StaticGet___9__64_0()
	{
		return (::System::Action_2<::UnityEngine::Component*, ::UnityEngine::Vector2>**)Il2CppClass::FromTypeDefinitionIndex(KFGCLOPEGJO___c_TypeDefinitionIndex)->GetStaticField(0x41358);
	}
	static ::System::Action_2<::FGCOIBFFCHB*, ::System::String*>** StaticGet___9__18_0()
	{
		return (::System::Action_2<::FGCOIBFFCHB*, ::System::String*>**)Il2CppClass::FromTypeDefinitionIndex(KFGCLOPEGJO___c_TypeDefinitionIndex)->GetStaticField(0x41360);
	}
	static ::System::Action_2<::FILNFMCNCFE*, ::UnityEngine::Color>** StaticGet___9__4_1()
	{
		return (::System::Action_2<::FILNFMCNCFE*, ::UnityEngine::Color>**)Il2CppClass::FromTypeDefinitionIndex(KFGCLOPEGJO___c_TypeDefinitionIndex)->GetStaticField(0x41368);
	}
	static ::System::Action_2<::FGCOIBFFCHB*, ::System::String*>** StaticGet___9__22_0()
	{
		return (::System::Action_2<::FGCOIBFFCHB*, ::System::String*>**)Il2CppClass::FromTypeDefinitionIndex(KFGCLOPEGJO___c_TypeDefinitionIndex)->GetStaticField(0x41370);
	}
	static ::System::Action_2<::UnityEngine::UI::Extension::UITextureOffsetModifier*, ::UnityEngine::Rect>** StaticGet___9__72_0()
	{
		return (::System::Action_2<::UnityEngine::UI::Extension::UITextureOffsetModifier*, ::UnityEngine::Rect>**)Il2CppClass::FromTypeDefinitionIndex(KFGCLOPEGJO___c_TypeDefinitionIndex)->GetStaticField(0x41378);
	}
	static ::System::Action_2<::MoleMole::MonoInputKey*, ::System::ValueTuple_2<::MoleMole::InputLogicEventType, ::System::String*>>** StaticGet___9__88_0()
	{
		return (::System::Action_2<::MoleMole::MonoInputKey*, ::System::ValueTuple_2<::MoleMole::InputLogicEventType, ::System::String*>>**)Il2CppClass::FromTypeDefinitionIndex(KFGCLOPEGJO___c_TypeDefinitionIndex)->GetStaticField(0x41380);
	}
	static ::System::Action_2<::UnityEngine::Component*, ::UnityEngine::Vector2>** StaticGet___9__60_0()
	{
		return (::System::Action_2<::UnityEngine::Component*, ::UnityEngine::Vector2>**)Il2CppClass::FromTypeDefinitionIndex(KFGCLOPEGJO___c_TypeDefinitionIndex)->GetStaticField(0x41388);
	}
	static ::System::Action_2<::UnityEngine::CanvasGroup*, ::System::Single>** StaticGet___9__37_0()
	{
		return (::System::Action_2<::UnityEngine::CanvasGroup*, ::System::Single>**)Il2CppClass::FromTypeDefinitionIndex(KFGCLOPEGJO___c_TypeDefinitionIndex)->GetStaticField(0x41390);
	}
	static ::System::Action_2<::UnityEngine::UI::Extension::UICircleProgress*, ::System::Single>** StaticGet___9__90_0()
	{
		return (::System::Action_2<::UnityEngine::UI::Extension::UICircleProgress*, ::System::Single>**)Il2CppClass::FromTypeDefinitionIndex(KFGCLOPEGJO___c_TypeDefinitionIndex)->GetStaticField(0x41398);
	}
	static ::System::Action_2<::MPHPFDEODIG*, ::System::Boolean>** StaticGet___9__32_0()
	{
		return (::System::Action_2<::MPHPFDEODIG*, ::System::Boolean>**)Il2CppClass::FromTypeDefinitionIndex(KFGCLOPEGJO___c_TypeDefinitionIndex)->GetStaticField(0x413A0);
	}
	static ::System::Action_2<::FGCOIBFFCHB*, ::UnityEngine::Material*>** StaticGet___9__26_0()
	{
		return (::System::Action_2<::FGCOIBFFCHB*, ::UnityEngine::Material*>**)Il2CppClass::FromTypeDefinitionIndex(KFGCLOPEGJO___c_TypeDefinitionIndex)->GetStaticField(0x413A8);
	}
	static ::System::Action_2<::UnityEngine::UI::LayoutElement*, ::System::Boolean>** StaticGet___9__79_0()
	{
		return (::System::Action_2<::UnityEngine::UI::LayoutElement*, ::System::Boolean>**)Il2CppClass::FromTypeDefinitionIndex(KFGCLOPEGJO___c_TypeDefinitionIndex)->GetStaticField(0x413B0);
	}
	static ::System::Action_2<::UnityEngine::UI::Extension::UILinearProgressBar*, ::System::Single>** StaticGet___9__58_0()
	{
		return (::System::Action_2<::UnityEngine::UI::Extension::UILinearProgressBar*, ::System::Single>**)Il2CppClass::FromTypeDefinitionIndex(KFGCLOPEGJO___c_TypeDefinitionIndex)->GetStaticField(0x413B8);
	}
	static ::System::Action_2<::MPHPFDEODIG*, ::UnityEngine::Vector3>** StaticGet___9__73_1()
	{
		return (::System::Action_2<::MPHPFDEODIG*, ::UnityEngine::Vector3>**)Il2CppClass::FromTypeDefinitionIndex(KFGCLOPEGJO___c_TypeDefinitionIndex)->GetStaticField(0x413C0);
	}
	static ::System::Action_2<::UnityEngine::UI::Extension::UITimeWidget*, ::System::Boolean>** StaticGet___9__121_0()
	{
		return (::System::Action_2<::UnityEngine::UI::Extension::UITimeWidget*, ::System::Boolean>**)Il2CppClass::FromTypeDefinitionIndex(KFGCLOPEGJO___c_TypeDefinitionIndex)->GetStaticField(0x413C8);
	}
	static ::System::Action_2<::MPHPFDEODIG*, ::UnityEngine::Vector3>** StaticGet___9__59_1()
	{
		return (::System::Action_2<::MPHPFDEODIG*, ::UnityEngine::Vector3>**)Il2CppClass::FromTypeDefinitionIndex(KFGCLOPEGJO___c_TypeDefinitionIndex)->GetStaticField(0x413D0);
	}
	static ::System::Action_2<::MPHPFDEODIG*, ::System::Boolean>** StaticGet___9__31_0()
	{
		return (::System::Action_2<::MPHPFDEODIG*, ::System::Boolean>**)Il2CppClass::FromTypeDefinitionIndex(KFGCLOPEGJO___c_TypeDefinitionIndex)->GetStaticField(0x413D8);
	}
	static ::System::Action_2<::FGCOIBFFCHB*, ::System::Single>** StaticGet___9__57_0()
	{
		return (::System::Action_2<::FGCOIBFFCHB*, ::System::Single>**)Il2CppClass::FromTypeDefinitionIndex(KFGCLOPEGJO___c_TypeDefinitionIndex)->GetStaticField(0x413E0);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + KFGCLOPEGJO___C__CCTOR_OFFSET))();
	}

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + KFGCLOPEGJO___C__CTOR_OFFSET))(this);
	}

	::System::Void MCBNGJCDFEM(::UnityEngine::UI::Extension::PathGuide* GBELIHABEDH, ::UnityEngine::Color EGEGIMGMJHN)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::UI::Extension::PathGuide*, ::UnityEngine::Color))((::PBYTE)hIl2Cpp + KFGCLOPEGJO___C_MCBNGJCDFEM_OFFSET))(this, GBELIHABEDH, EGEGIMGMJHN);
	}

	::System::Void BEKNMIDJIIO(::FGCOIBFFCHB* GBELIHABEDH, ::Foundation::AssetPath EGEGIMGMJHN)
	{
		return ((::System::Void(*)(::PVOID, ::FGCOIBFFCHB*, ::Foundation::AssetPath))((::PBYTE)hIl2Cpp + KFGCLOPEGJO___C_BEKNMIDJIIO_OFFSET))(this, GBELIHABEDH, EGEGIMGMJHN);
	}

	::System::Void PNGGEHGAJBO(::UnityEngine::Component* GBELIHABEDH, ::UnityEngine::Vector2 EGEGIMGMJHN)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::Component*, ::UnityEngine::Vector2))((::PBYTE)hIl2Cpp + KFGCLOPEGJO___C_PNGGEHGAJBO_OFFSET))(this, GBELIHABEDH, EGEGIMGMJHN);
	}

	::System::Void GCMNNJNJJNH(::MPHPFDEODIG* GBELIHABEDH, ::System::Boolean EGEGIMGMJHN)
	{
		return ((::System::Void(*)(::PVOID, ::MPHPFDEODIG*, ::System::Boolean))((::PBYTE)hIl2Cpp + KFGCLOPEGJO___C_GCMNNJNJJNH_OFFSET))(this, GBELIHABEDH, EGEGIMGMJHN);
	}

	::System::Void HAKOHFAIPFC(::MoleMole::UIGeneralBtn03WidgetController* MNOMCCLBJAO, ::System::Boolean EGEGIMGMJHN)
	{
		return ((::System::Void(*)(::PVOID, ::MoleMole::UIGeneralBtn03WidgetController*, ::System::Boolean))((::PBYTE)hIl2Cpp + KFGCLOPEGJO___C_HAKOHFAIPFC_OFFSET))(this, MNOMCCLBJAO, EGEGIMGMJHN);
	}

	::System::Void KGJKHPKBPHJ(::UnityEngine::UI::Extension::ISetText* GBELIHABEDH, ::System::String* EGEGIMGMJHN)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::UI::Extension::ISetText*, ::System::String*))((::PBYTE)hIl2Cpp + KFGCLOPEGJO___C_KGJKHPKBPHJ_OFFSET))(this, GBELIHABEDH, EGEGIMGMJHN);
	}

	::System::Void PFOCNHGKCOG(::FGCOIBFFCHB* GBELIHABEDH, ::System::Boolean EGEGIMGMJHN)
	{
		return ((::System::Void(*)(::PVOID, ::FGCOIBFFCHB*, ::System::Boolean))((::PBYTE)hIl2Cpp + KFGCLOPEGJO___C_PFOCNHGKCOG_OFFSET))(this, GBELIHABEDH, EGEGIMGMJHN);
	}

	::System::Void GIPMGCCNGIP(::UnityEngine::Component* GBELIHABEDH, ::System::String* EGEGIMGMJHN)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::Component*, ::System::String*))((::PBYTE)hIl2Cpp + KFGCLOPEGJO___C_GIPMGCCNGIP_OFFSET))(this, GBELIHABEDH, EGEGIMGMJHN);
	}

	::System::Void BAOAFMNPDBL(::UnityEngine::UI::Extension::ISetInteractable* GBELIHABEDH, ::System::Boolean EGEGIMGMJHN)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::UI::Extension::ISetInteractable*, ::System::Boolean))((::PBYTE)hIl2Cpp + KFGCLOPEGJO___C_BAOAFMNPDBL_OFFSET))(this, GBELIHABEDH, EGEGIMGMJHN);
	}

	::System::Void OCOHOGJIOBB(::UnityEngine::UI::Extension::UITimeWidget* GBELIHABEDH, ::System::String* EGEGIMGMJHN)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::UI::Extension::UITimeWidget*, ::System::String*))((::PBYTE)hIl2Cpp + KFGCLOPEGJO___C_OCOHOGJIOBB_OFFSET))(this, GBELIHABEDH, EGEGIMGMJHN);
	}

	::System::Void COIKOJEDOIM(::UnityEngine::UI::LayoutElement* GBELIHABEDH, ::System::Boolean EGEGIMGMJHN)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::UI::LayoutElement*, ::System::Boolean))((::PBYTE)hIl2Cpp + KFGCLOPEGJO___C_COIKOJEDOIM_OFFSET))(this, GBELIHABEDH, EGEGIMGMJHN);
	}

	::System::Void HBFMFEFAHFN(::UnityEngine::GameObject* JEIDPPCEHLD, ::System::Collections::Generic::IEnumerable_1<::UnityEngine::Vector2>* EGEGIMGMJHN)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::GameObject*, ::System::Collections::Generic::IEnumerable_1<::UnityEngine::Vector2>*))((::PBYTE)hIl2Cpp + KFGCLOPEGJO___C_HBFMFEFAHFN_OFFSET))(this, JEIDPPCEHLD, EGEGIMGMJHN);
	}

	::System::Void NAOEGDGEMNJ(::UnityEngine::UI::Extension::UITimeWidget* GBELIHABEDH, ::System::TimeSpan EGEGIMGMJHN)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::UI::Extension::UITimeWidget*, ::System::TimeSpan))((::PBYTE)hIl2Cpp + KFGCLOPEGJO___C_NAOEGDGEMNJ_OFFSET))(this, GBELIHABEDH, EGEGIMGMJHN);
	}

	::System::Void OKELLBHBHKL(::UnityEngine::UI::Extension::UILocalizationText* GBELIHABEDH, ::UnityEngine::Color EGEGIMGMJHN)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::UI::Extension::UILocalizationText*, ::UnityEngine::Color))((::PBYTE)hIl2Cpp + KFGCLOPEGJO___C_OKELLBHBHKL_OFFSET))(this, GBELIHABEDH, EGEGIMGMJHN);
	}

	::System::Void EHFKHDCLOGE(::UnityEngine::UI::Extension::UILinearProgressBar* GBELIHABEDH, ::System::Single EGEGIMGMJHN)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::UI::Extension::UILinearProgressBar*, ::System::Single))((::PBYTE)hIl2Cpp + KFGCLOPEGJO___C_EHFKHDCLOGE_OFFSET))(this, GBELIHABEDH, EGEGIMGMJHN);
	}

	::System::Void KHEPMIGPPEM(::MPHPFDEODIG* GBELIHABEDH, ::UnityEngine::Quaternion EGEGIMGMJHN)
	{
		return ((::System::Void(*)(::PVOID, ::MPHPFDEODIG*, ::UnityEngine::Quaternion))((::PBYTE)hIl2Cpp + KFGCLOPEGJO___C_KHEPMIGPPEM_OFFSET))(this, GBELIHABEDH, EGEGIMGMJHN);
	}

	::System::Void CKEAAFHJBDB(::FILNFMCNCFE* GBELIHABEDH, ::UnityEngine::Texture* EGEGIMGMJHN)
	{
		return ((::System::Void(*)(::PVOID, ::FILNFMCNCFE*, ::UnityEngine::Texture*))((::PBYTE)hIl2Cpp + KFGCLOPEGJO___C_CKEAAFHJBDB_OFFSET))(this, GBELIHABEDH, EGEGIMGMJHN);
	}

	::System::Void FHPGFLICILE(::FGCOIBFFCHB* GBELIHABEDH, ::UnityEngine::Material* EGEGIMGMJHN)
	{
		return ((::System::Void(*)(::PVOID, ::FGCOIBFFCHB*, ::UnityEngine::Material*))((::PBYTE)hIl2Cpp + KFGCLOPEGJO___C_FHPGFLICILE_OFFSET))(this, GBELIHABEDH, EGEGIMGMJHN);
	}

	::System::Void MCDDMFKIKAD(::UnityEngine::GameObject* GBELIHABEDH, ::System::Boolean EGEGIMGMJHN)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::GameObject*, ::System::Boolean))((::PBYTE)hIl2Cpp + KFGCLOPEGJO___C_MCDDMFKIKAD_OFFSET))(this, GBELIHABEDH, EGEGIMGMJHN);
	}

	::System::Void PEPODHIPKEA(::UnityEngine::UI::Extension::UITimeWidget* GBELIHABEDH, ::System::Boolean EGEGIMGMJHN)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::UI::Extension::UITimeWidget*, ::System::Boolean))((::PBYTE)hIl2Cpp + KFGCLOPEGJO___C_PEPODHIPKEA_OFFSET))(this, GBELIHABEDH, EGEGIMGMJHN);
	}

	::System::Void IIDHDBLLGPE(::UnityEngine::Component* GBELIHABEDH, ::System::ValueTuple_2<::UnityEngine::Vector2, ::UnityEngine::Vector2> EGEGIMGMJHN)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::Component*, ::System::ValueTuple_2<::UnityEngine::Vector2, ::UnityEngine::Vector2>))((::PBYTE)hIl2Cpp + KFGCLOPEGJO___C_IIDHDBLLGPE_OFFSET))(this, GBELIHABEDH, EGEGIMGMJHN);
	}

	::System::Void LDJPOLNDGAH(::FILNFMCNCFE* GBELIHABEDH, ::UnityEngine::Rect EGEGIMGMJHN)
	{
		return ((::System::Void(*)(::PVOID, ::FILNFMCNCFE*, ::UnityEngine::Rect))((::PBYTE)hIl2Cpp + KFGCLOPEGJO___C_LDJPOLNDGAH_OFFSET))(this, GBELIHABEDH, EGEGIMGMJHN);
	}

	::System::Void OCENGCKGKDC(::UnityEngine::CanvasGroup* GBELIHABEDH, ::System::Single EGEGIMGMJHN)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::CanvasGroup*, ::System::Single))((::PBYTE)hIl2Cpp + KFGCLOPEGJO___C_OCENGCKGKDC_OFFSET))(this, GBELIHABEDH, EGEGIMGMJHN);
	}

	::System::Void MEAJLOOBFHL(::UnityEngine::UI::Extension::ISetKey* GBELIHABEDH, ::System::ValueTuple_2<::System::String*, ::System::Object*> EGEGIMGMJHN)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::UI::Extension::ISetKey*, ::System::ValueTuple_2<::System::String*, ::System::Object*>))((::PBYTE)hIl2Cpp + KFGCLOPEGJO___C_MEAJLOOBFHL_OFFSET))(this, GBELIHABEDH, EGEGIMGMJHN);
	}

	::System::Void MGANIDEAGEF(::MPHPFDEODIG* GBELIHABEDH, ::UnityEngine::Vector2 EGEGIMGMJHN)
	{
		return ((::System::Void(*)(::PVOID, ::MPHPFDEODIG*, ::UnityEngine::Vector2))((::PBYTE)hIl2Cpp + KFGCLOPEGJO___C_MGANIDEAGEF_OFFSET))(this, GBELIHABEDH, EGEGIMGMJHN);
	}

	::System::Void FPHJLKIHHGE(::MoleMole::MonoGamepadSelectable* GBELIHABEDH, ::System::Boolean EGEGIMGMJHN)
	{
		return ((::System::Void(*)(::PVOID, ::MoleMole::MonoGamepadSelectable*, ::System::Boolean))((::PBYTE)hIl2Cpp + KFGCLOPEGJO___C_FPHJLKIHHGE_OFFSET))(this, GBELIHABEDH, EGEGIMGMJHN);
	}

	::System::Void CMHLIOODOMN(::UnityEngine::Component* GBELIHABEDH, ::UnityEngine::Vector3 EGEGIMGMJHN)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::Component*, ::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + KFGCLOPEGJO___C_CMHLIOODOMN_OFFSET))(this, GBELIHABEDH, EGEGIMGMJHN);
	}

	::System::Void HBJDPPBFANO(::UnityEngine::MonoBehaviour* GBELIHABEDH, ::System::Boolean EGEGIMGMJHN)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::MonoBehaviour*, ::System::Boolean))((::PBYTE)hIl2Cpp + KFGCLOPEGJO___C_HBJDPPBFANO_OFFSET))(this, GBELIHABEDH, EGEGIMGMJHN);
	}

	::System::Void HHGCAFEPEMJ(::MPHPFDEODIG* GBELIHABEDH, ::UnityEngine::Quaternion EGEGIMGMJHN)
	{
		return ((::System::Void(*)(::PVOID, ::MPHPFDEODIG*, ::UnityEngine::Quaternion))((::PBYTE)hIl2Cpp + KFGCLOPEGJO___C_HHGCAFEPEMJ_OFFSET))(this, GBELIHABEDH, EGEGIMGMJHN);
	}

	::System::Void LMKKFIMEBND(::UnityEngine::Component* GBELIHABEDH, ::UnityEngine::Vector2 EGEGIMGMJHN)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::Component*, ::UnityEngine::Vector2))((::PBYTE)hIl2Cpp + KFGCLOPEGJO___C_LMKKFIMEBND_OFFSET))(this, GBELIHABEDH, EGEGIMGMJHN);
	}

	::System::Void HMJEJCGGAKE(::UnityEngine::GameObject* GBELIHABEDH, ::System::String* EGEGIMGMJHN)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::GameObject*, ::System::String*))((::PBYTE)hIl2Cpp + KFGCLOPEGJO___C_HMJEJCGGAKE_OFFSET))(this, GBELIHABEDH, EGEGIMGMJHN);
	}

	::System::Void EPFFCMKDOJO(::UnityEngine::Component* GBELIHABEDH, ::UnityEngine::Vector3 EGEGIMGMJHN)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::Component*, ::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + KFGCLOPEGJO___C_EPFFCMKDOJO_OFFSET))(this, GBELIHABEDH, EGEGIMGMJHN);
	}

	::System::Void PNDEEAGIKJM(::UnityEngine::Component* GBELIHABEDH, ::UnityEngine::Quaternion EGEGIMGMJHN)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::Component*, ::UnityEngine::Quaternion))((::PBYTE)hIl2Cpp + KFGCLOPEGJO___C_PNDEEAGIKJM_OFFSET))(this, GBELIHABEDH, EGEGIMGMJHN);
	}

	::System::Void OPKPMJLHKOI(::UnityEngine::Component* GBELIHABEDH, ::UnityEngine::Vector3 EGEGIMGMJHN)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::Component*, ::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + KFGCLOPEGJO___C_OPKPMJLHKOI_OFFSET))(this, GBELIHABEDH, EGEGIMGMJHN);
	}

	::System::Void BDINEGLNEJM(::MPHPFDEODIG* GBELIHABEDH, ::System::String* EGEGIMGMJHN)
	{
		return ((::System::Void(*)(::PVOID, ::MPHPFDEODIG*, ::System::String*))((::PBYTE)hIl2Cpp + KFGCLOPEGJO___C_BDINEGLNEJM_OFFSET))(this, GBELIHABEDH, EGEGIMGMJHN);
	}

	::System::Void BBKFIAHLMJO(::UnityEngine::UI::Extension::ISetGrey* GBELIHABEDH, ::System::Boolean EGEGIMGMJHN)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::UI::Extension::ISetGrey*, ::System::Boolean))((::PBYTE)hIl2Cpp + KFGCLOPEGJO___C_BBKFIAHLMJO_OFFSET))(this, GBELIHABEDH, EGEGIMGMJHN);
	}

	::System::Void BHCCLPKKLHL(::UnityEngine::UI::AspectRatioFitter* GBELIHABEDH, ::System::Single EGEGIMGMJHN)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::UI::AspectRatioFitter*, ::System::Single))((::PBYTE)hIl2Cpp + KFGCLOPEGJO___C_BHCCLPKKLHL_OFFSET))(this, GBELIHABEDH, EGEGIMGMJHN);
	}

	::System::Void GEPPOGPJLAI(::UnityEngine::UI::Extension::UITimeWidget* GBELIHABEDH, ::System::String* EGEGIMGMJHN)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::UI::Extension::UITimeWidget*, ::System::String*))((::PBYTE)hIl2Cpp + KFGCLOPEGJO___C_GEPPOGPJLAI_OFFSET))(this, GBELIHABEDH, EGEGIMGMJHN);
	}

	::System::Void OOCEIBNBNJF(::UnityEngine::UI::Extension::UITimeWidget* GBELIHABEDH, ::UnityEngine::UI::Extension::TitleShowType EGEGIMGMJHN)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::UI::Extension::UITimeWidget*, ::UnityEngine::UI::Extension::TitleShowType))((::PBYTE)hIl2Cpp + KFGCLOPEGJO___C_OOCEIBNBNJF_OFFSET))(this, GBELIHABEDH, EGEGIMGMJHN);
	}

	::System::Void LAAPAIKFBNH(::GCIMMDDIFBJ* GBELIHABEDH, ::System::Boolean EGEGIMGMJHN)
	{
		return ((::System::Void(*)(::PVOID, ::GCIMMDDIFBJ*, ::System::Boolean))((::PBYTE)hIl2Cpp + KFGCLOPEGJO___C_LAAPAIKFBNH_OFFSET))(this, GBELIHABEDH, EGEGIMGMJHN);
	}

	::System::Void KBCAPPCHNNC(::UnityEngine::UI::Extension::UITimeWidget* GBELIHABEDH, ::System::Int64 EGEGIMGMJHN)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::UI::Extension::UITimeWidget*, ::System::Int64))((::PBYTE)hIl2Cpp + KFGCLOPEGJO___C_KBCAPPCHNNC_OFFSET))(this, GBELIHABEDH, EGEGIMGMJHN);
	}

	::System::Void IJMEKEOKKLM(::MoleMole::UIInputFieldEx* GBELIHABEDH, ::System::String* EGEGIMGMJHN)
	{
		return ((::System::Void(*)(::PVOID, ::MoleMole::UIInputFieldEx*, ::System::String*))((::PBYTE)hIl2Cpp + KFGCLOPEGJO___C_IJMEKEOKKLM_OFFSET))(this, GBELIHABEDH, EGEGIMGMJHN);
	}

	::System::Void NIOECIAGDMM(::MoleMole::NotificationBadge* GBELIHABEDH, ::IBENDELLLAO* EGEGIMGMJHN)
	{
		return ((::System::Void(*)(::PVOID, ::MoleMole::NotificationBadge*, ::IBENDELLLAO*))((::PBYTE)hIl2Cpp + KFGCLOPEGJO___C_NIOECIAGDMM_OFFSET))(this, GBELIHABEDH, EGEGIMGMJHN);
	}

	::System::Void MIAPFPPLPAB(::MPHPFDEODIG* GBELIHABEDH, ::System::Int32 EGEGIMGMJHN)
	{
		return ((::System::Void(*)(::PVOID, ::MPHPFDEODIG*, ::System::Int32))((::PBYTE)hIl2Cpp + KFGCLOPEGJO___C_MIAPFPPLPAB_OFFSET))(this, GBELIHABEDH, EGEGIMGMJHN);
	}

	::System::Void AIOAOPCPMCP(::MoleMole::MonoInputKey* GBELIHABEDH, ::MoleMole::InputLogicEventType EGEGIMGMJHN)
	{
		return ((::System::Void(*)(::PVOID, ::MoleMole::MonoInputKey*, ::MoleMole::InputLogicEventType))((::PBYTE)hIl2Cpp + KFGCLOPEGJO___C_AIOAOPCPMCP_OFFSET))(this, GBELIHABEDH, EGEGIMGMJHN);
	}

	::System::Void DEDNAJFJMPD(::MPHPFDEODIG* GBELIHABEDH, ::UnityEngine::Vector3 EGEGIMGMJHN)
	{
		return ((::System::Void(*)(::PVOID, ::MPHPFDEODIG*, ::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + KFGCLOPEGJO___C_DEDNAJFJMPD_OFFSET))(this, GBELIHABEDH, EGEGIMGMJHN);
	}

	::System::Void KGMKPPHMGJN(::MPHPFDEODIG* GBELIHABEDH, ::UnityEngine::Vector2 EGEGIMGMJHN)
	{
		return ((::System::Void(*)(::PVOID, ::MPHPFDEODIG*, ::UnityEngine::Vector2))((::PBYTE)hIl2Cpp + KFGCLOPEGJO___C_KGMKPPHMGJN_OFFSET))(this, GBELIHABEDH, EGEGIMGMJHN);
	}

	::System::Void BHBOKOKEPOC(::MPHPFDEODIG* GBELIHABEDH, ::UnityEngine::Vector3 EGEGIMGMJHN)
	{
		return ((::System::Void(*)(::PVOID, ::MPHPFDEODIG*, ::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + KFGCLOPEGJO___C_BHBOKOKEPOC_OFFSET))(this, GBELIHABEDH, EGEGIMGMJHN);
	}

	::System::Void PJAPLINMPMM(::UnityEngine::Component* GBELIHABEDH, ::UnityEngine::Quaternion EGEGIMGMJHN)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::Component*, ::UnityEngine::Quaternion))((::PBYTE)hIl2Cpp + KFGCLOPEGJO___C_PJAPLINMPMM_OFFSET))(this, GBELIHABEDH, EGEGIMGMJHN);
	}

	::System::Void HMKMCCKMKHP(::FGCOIBFFCHB* GBELIHABEDH, ::System::Single EGEGIMGMJHN)
	{
		return ((::System::Void(*)(::PVOID, ::FGCOIBFFCHB*, ::System::Single))((::PBYTE)hIl2Cpp + KFGCLOPEGJO___C_HMKMCCKMKHP_OFFSET))(this, GBELIHABEDH, EGEGIMGMJHN);
	}

	::System::Void KNKBJGDBAEJ(::PopText* GBELIHABEDH, ::System::String* EGEGIMGMJHN)
	{
		return ((::System::Void(*)(::PVOID, ::PopText*, ::System::String*))((::PBYTE)hIl2Cpp + KFGCLOPEGJO___C_KNKBJGDBAEJ_OFFSET))(this, GBELIHABEDH, EGEGIMGMJHN);
	}

	::System::Void CMFAMCNIMKE(::MoleMole::MonoInputKey* GBELIHABEDH, ::System::Boolean EGEGIMGMJHN)
	{
		return ((::System::Void(*)(::PVOID, ::MoleMole::MonoInputKey*, ::System::Boolean))((::PBYTE)hIl2Cpp + KFGCLOPEGJO___C_CMFAMCNIMKE_OFFSET))(this, GBELIHABEDH, EGEGIMGMJHN);
	}

	::System::Void JCAJCICIHMK(::MPHPFDEODIG* GBELIHABEDH, ::UnityEngine::Vector2 EGEGIMGMJHN)
	{
		return ((::System::Void(*)(::PVOID, ::MPHPFDEODIG*, ::UnityEngine::Vector2))((::PBYTE)hIl2Cpp + KFGCLOPEGJO___C_JCAJCICIHMK_OFFSET))(this, GBELIHABEDH, EGEGIMGMJHN);
	}

	::System::Void FHGNALBLEDH(::UnityEngine::Component* GBELIHABEDH, ::UnityEngine::Vector2 EGEGIMGMJHN)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::Component*, ::UnityEngine::Vector2))((::PBYTE)hIl2Cpp + KFGCLOPEGJO___C_FHGNALBLEDH_OFFSET))(this, GBELIHABEDH, EGEGIMGMJHN);
	}

	::System::Void EAACDEGMFHD(::LGINJIKKBJA* GBELIHABEDH, ::UnityEngine::Events::UnityAction* EGEGIMGMJHN)
	{
		return ((::System::Void(*)(::PVOID, ::LGINJIKKBJA*, ::UnityEngine::Events::UnityAction*))((::PBYTE)hIl2Cpp + KFGCLOPEGJO___C_EAACDEGMFHD_OFFSET))(this, GBELIHABEDH, EGEGIMGMJHN);
	}

	::System::Void MJNBKHBHDJC(::MPHPFDEODIG* GBELIHABEDH, ::System::ValueTuple_2<::UnityEngine::Vector2, ::UnityEngine::Vector2> EGEGIMGMJHN)
	{
		return ((::System::Void(*)(::PVOID, ::MPHPFDEODIG*, ::System::ValueTuple_2<::UnityEngine::Vector2, ::UnityEngine::Vector2>))((::PBYTE)hIl2Cpp + KFGCLOPEGJO___C_MJNBKHBHDJC_OFFSET))(this, GBELIHABEDH, EGEGIMGMJHN);
	}

	::System::Void DGIKJEMNHLP(::UnityEngine::UI::Slider* GBELIHABEDH, ::System::Single EGEGIMGMJHN)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::UI::Slider*, ::System::Single))((::PBYTE)hIl2Cpp + KFGCLOPEGJO___C_DGIKJEMNHLP_OFFSET))(this, GBELIHABEDH, EGEGIMGMJHN);
	}

	::System::Void LJOJHBKEEFP(::MoleMole::UIGeneralButtonController* GBELIHABEDH, ::OIOMFDOEHLH EGEGIMGMJHN)
	{
		return ((::System::Void(*)(::PVOID, ::MoleMole::UIGeneralButtonController*, ::OIOMFDOEHLH))((::PBYTE)hIl2Cpp + KFGCLOPEGJO___C_LJOJHBKEEFP_OFFSET))(this, GBELIHABEDH, EGEGIMGMJHN);
	}

	::System::Void LCGIABJNNFC(::UnityEngine::Component* GBELIHABEDH, ::System::Boolean EGEGIMGMJHN)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::Component*, ::System::Boolean))((::PBYTE)hIl2Cpp + KFGCLOPEGJO___C_LCGIABJNNFC_OFFSET))(this, GBELIHABEDH, EGEGIMGMJHN);
	}

	::System::Void BEFONMFBAAP(::MPHPFDEODIG* GBELIHABEDH, ::System::Boolean EGEGIMGMJHN)
	{
		return ((::System::Void(*)(::PVOID, ::MPHPFDEODIG*, ::System::Boolean))((::PBYTE)hIl2Cpp + KFGCLOPEGJO___C_BEFONMFBAAP_OFFSET))(this, GBELIHABEDH, EGEGIMGMJHN);
	}

	::System::Void FCMCBHMGDHO(::FILNFMCNCFE* GBELIHABEDH, ::UnityEngine::Color EGEGIMGMJHN)
	{
		return ((::System::Void(*)(::PVOID, ::FILNFMCNCFE*, ::UnityEngine::Color))((::PBYTE)hIl2Cpp + KFGCLOPEGJO___C_FCMCBHMGDHO_OFFSET))(this, GBELIHABEDH, EGEGIMGMJHN);
	}

	::System::Void DLNBLAMMIML(::UnityEngine::Component* GBELIHABEDH, ::UnityEngine::Vector3 EGEGIMGMJHN)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::Component*, ::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + KFGCLOPEGJO___C_DLNBLAMMIML_OFFSET))(this, GBELIHABEDH, EGEGIMGMJHN);
	}

	::System::Void DEGPLJIOHKA(::UnityEngine::UI::LayoutElement* GBELIHABEDH, ::UnityEngine::Vector2 EGEGIMGMJHN)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::UI::LayoutElement*, ::UnityEngine::Vector2))((::PBYTE)hIl2Cpp + KFGCLOPEGJO___C_DEGPLJIOHKA_OFFSET))(this, GBELIHABEDH, EGEGIMGMJHN);
	}

	::System::Void JADAJNFLGJP(::MPHPFDEODIG* GBELIHABEDH, ::UnityEngine::Vector3 EGEGIMGMJHN)
	{
		return ((::System::Void(*)(::PVOID, ::MPHPFDEODIG*, ::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + KFGCLOPEGJO___C_JADAJNFLGJP_OFFSET))(this, GBELIHABEDH, EGEGIMGMJHN);
	}

	::System::Void BNPAAMPPEND(::UnityEngine::Camera* GBELIHABEDH, ::UnityEngine::RenderTexture* EGEGIMGMJHN)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::Camera*, ::UnityEngine::RenderTexture*))((::PBYTE)hIl2Cpp + KFGCLOPEGJO___C_BNPAAMPPEND_OFFSET))(this, GBELIHABEDH, EGEGIMGMJHN);
	}

	::System::Void HOGCJDLPIAF(::UnityEngine::UI::Extension::UITextureOffsetModifier* GBELIHABEDH, ::UnityEngine::Rect EGEGIMGMJHN)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::UI::Extension::UITextureOffsetModifier*, ::UnityEngine::Rect))((::PBYTE)hIl2Cpp + KFGCLOPEGJO___C_HOGCJDLPIAF_OFFSET))(this, GBELIHABEDH, EGEGIMGMJHN);
	}

	::System::Void EDMELNPKHEP(::MPHPFDEODIG* GBELIHABEDH, ::UnityEngine::Vector2 EGEGIMGMJHN)
	{
		return ((::System::Void(*)(::PVOID, ::MPHPFDEODIG*, ::UnityEngine::Vector2))((::PBYTE)hIl2Cpp + KFGCLOPEGJO___C_EDMELNPKHEP_OFFSET))(this, GBELIHABEDH, EGEGIMGMJHN);
	}

	::System::Void KHCLPAMALLM(::UnityEngine::UI::Extension::UILinearProgressBar* GBELIHABEDH, ::System::Single EGEGIMGMJHN)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::UI::Extension::UILinearProgressBar*, ::System::Single))((::PBYTE)hIl2Cpp + KFGCLOPEGJO___C_KHCLPAMALLM_OFFSET))(this, GBELIHABEDH, EGEGIMGMJHN);
	}

	::System::Void LPKENLCNIKI(::UnityEngine::UI::Extension::ISetKey* GBELIHABEDH, ::System::ValueTuple_3<::System::String*, ::System::Object*, ::System::Object*> EGEGIMGMJHN)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::UI::Extension::ISetKey*, ::System::ValueTuple_3<::System::String*, ::System::Object*, ::System::Object*>))((::PBYTE)hIl2Cpp + KFGCLOPEGJO___C_LPKENLCNIKI_OFFSET))(this, GBELIHABEDH, EGEGIMGMJHN);
	}

	::System::Void INCACIINMBC(::UnityEngine::UI::Extension::UICircleProgress* GBELIHABEDH, ::System::Single EGEGIMGMJHN)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::UI::Extension::UICircleProgress*, ::System::Single))((::PBYTE)hIl2Cpp + KFGCLOPEGJO___C_INCACIINMBC_OFFSET))(this, GBELIHABEDH, EGEGIMGMJHN);
	}

	::System::Void PMFADMDBDOO(::MoleMole::NotificationBadgeEx* GBELIHABEDH, ::IBENDELLLAO* EGEGIMGMJHN)
	{
		return ((::System::Void(*)(::PVOID, ::MoleMole::NotificationBadgeEx*, ::IBENDELLLAO*))((::PBYTE)hIl2Cpp + KFGCLOPEGJO___C_PMFADMDBDOO_OFFSET))(this, GBELIHABEDH, EGEGIMGMJHN);
	}

	::System::Void LNJNPDHGIGL(::MPHPFDEODIG* GBELIHABEDH, ::UnityEngine::Vector2 EGEGIMGMJHN)
	{
		return ((::System::Void(*)(::PVOID, ::MPHPFDEODIG*, ::UnityEngine::Vector2))((::PBYTE)hIl2Cpp + KFGCLOPEGJO___C_LNJNPDHGIGL_OFFSET))(this, GBELIHABEDH, EGEGIMGMJHN);
	}

	::System::Void PNIOEGDLFEC(::UnityEngine::Component* GBELIHABEDH, ::UnityEngine::Vector2 EGEGIMGMJHN)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::Component*, ::UnityEngine::Vector2))((::PBYTE)hIl2Cpp + KFGCLOPEGJO___C_PNIOEGDLFEC_OFFSET))(this, GBELIHABEDH, EGEGIMGMJHN);
	}

	::System::Void FNIDKCNBFDP(::FGCOIBFFCHB* GBELIHABEDH, ::System::String* EGEGIMGMJHN)
	{
		return ((::System::Void(*)(::PVOID, ::FGCOIBFFCHB*, ::System::String*))((::PBYTE)hIl2Cpp + KFGCLOPEGJO___C_FNIDKCNBFDP_OFFSET))(this, GBELIHABEDH, EGEGIMGMJHN);
	}

	::System::Void NKCPBDFLCLJ(::FGCOIBFFCHB* GBELIHABEDH, ::Foundation::AssetPath EGEGIMGMJHN)
	{
		return ((::System::Void(*)(::PVOID, ::FGCOIBFFCHB*, ::Foundation::AssetPath))((::PBYTE)hIl2Cpp + KFGCLOPEGJO___C_NKCPBDFLCLJ_OFFSET))(this, GBELIHABEDH, EGEGIMGMJHN);
	}

	::System::Void ILJBOBPDBBJ(::MoleMole::ScaledContentSizeFitter* GBELIHABEDH, ::System::Single EGEGIMGMJHN)
	{
		return ((::System::Void(*)(::PVOID, ::MoleMole::ScaledContentSizeFitter*, ::System::Single))((::PBYTE)hIl2Cpp + KFGCLOPEGJO___C_ILJBOBPDBBJ_OFFSET))(this, GBELIHABEDH, EGEGIMGMJHN);
	}

	::System::Void FCJOJELKKDE(::UnityEngine::Component* GBELIHABEDH, ::UnityEngine::Vector2 EGEGIMGMJHN)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::Component*, ::UnityEngine::Vector2))((::PBYTE)hIl2Cpp + KFGCLOPEGJO___C_FCJOJELKKDE_OFFSET))(this, GBELIHABEDH, EGEGIMGMJHN);
	}

	::System::Void NALPCEKPGNN(::FGCOIBFFCHB* GBELIHABEDH, ::System::String* EGEGIMGMJHN)
	{
		return ((::System::Void(*)(::PVOID, ::FGCOIBFFCHB*, ::System::String*))((::PBYTE)hIl2Cpp + KFGCLOPEGJO___C_NALPCEKPGNN_OFFSET))(this, GBELIHABEDH, EGEGIMGMJHN);
	}

	::System::Void IFOBEPBIMDP(::FGCOIBFFCHB* GBELIHABEDH, ::UnityEngine::Color EGEGIMGMJHN)
	{
		return ((::System::Void(*)(::PVOID, ::FGCOIBFFCHB*, ::UnityEngine::Color))((::PBYTE)hIl2Cpp + KFGCLOPEGJO___C_IFOBEPBIMDP_OFFSET))(this, GBELIHABEDH, EGEGIMGMJHN);
	}

	::System::Void MLOJFKDAKEI(::UnityEngine::UI::Extension::PathGuide* GBELIHABEDH, ::System::Collections::Generic::IEnumerable_1<::UnityEngine::Vector2>* EGEGIMGMJHN)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::UI::Extension::PathGuide*, ::System::Collections::Generic::IEnumerable_1<::UnityEngine::Vector2>*))((::PBYTE)hIl2Cpp + KFGCLOPEGJO___C_MLOJFKDAKEI_OFFSET))(this, GBELIHABEDH, EGEGIMGMJHN);
	}

	::System::Void MMAILEBHGIG(::UnityEngine::UI::Extension::ISetKey* GBELIHABEDH, ::System::ValueTuple_2<::System::String*, ::Il2CppArray<::System::Object*>*> EGEGIMGMJHN)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::UI::Extension::ISetKey*, ::System::ValueTuple_2<::System::String*, ::Il2CppArray<::System::Object*>*>))((::PBYTE)hIl2Cpp + KFGCLOPEGJO___C_MMAILEBHGIG_OFFSET))(this, GBELIHABEDH, EGEGIMGMJHN);
	}

	::System::Void ANLFNGPKJLA(::MoleMole::UIGeneralBtn03WidgetController* MNOMCCLBJAO, ::UnityEngine::Color EGEGIMGMJHN)
	{
		return ((::System::Void(*)(::PVOID, ::MoleMole::UIGeneralBtn03WidgetController*, ::UnityEngine::Color))((::PBYTE)hIl2Cpp + KFGCLOPEGJO___C_ANLFNGPKJLA_OFFSET))(this, MNOMCCLBJAO, EGEGIMGMJHN);
	}

	::System::Void MNKHEOLCCBH(::UnityEngine::UI::Extension::ISetKey* GBELIHABEDH, ::System::String* EGEGIMGMJHN)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::UI::Extension::ISetKey*, ::System::String*))((::PBYTE)hIl2Cpp + KFGCLOPEGJO___C_MNKHEOLCCBH_OFFSET))(this, GBELIHABEDH, EGEGIMGMJHN);
	}

	::System::Void GFOHOJACABI(::FILNFMCNCFE* GBELIHABEDH, ::UnityEngine::RenderTexture* EGEGIMGMJHN)
	{
		return ((::System::Void(*)(::PVOID, ::FILNFMCNCFE*, ::UnityEngine::RenderTexture*))((::PBYTE)hIl2Cpp + KFGCLOPEGJO___C_GFOHOJACABI_OFFSET))(this, GBELIHABEDH, EGEGIMGMJHN);
	}

	::System::Void HELJLJKHKKI(::FGCOIBFFCHB* GBELIHABEDH, ::System::Int32 EGEGIMGMJHN)
	{
		return ((::System::Void(*)(::PVOID, ::FGCOIBFFCHB*, ::System::Int32))((::PBYTE)hIl2Cpp + KFGCLOPEGJO___C_HELJLJKHKKI_OFFSET))(this, GBELIHABEDH, EGEGIMGMJHN);
	}

	::System::Void KBLMOGGPJGD(::UnityEngine::Component* GBELIHABEDH, ::UnityEngine::Vector2 EGEGIMGMJHN)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::Component*, ::UnityEngine::Vector2))((::PBYTE)hIl2Cpp + KFGCLOPEGJO___C_KBLMOGGPJGD_OFFSET))(this, GBELIHABEDH, EGEGIMGMJHN);
	}

	::System::Void LCPJCHNOPLM(::UnityEngine::Component* GBELIHABEDH, ::UnityEngine::Vector3 EGEGIMGMJHN)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::Component*, ::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + KFGCLOPEGJO___C_LCPJCHNOPLM_OFFSET))(this, GBELIHABEDH, EGEGIMGMJHN);
	}

	::System::Void NGCMPBDMEOB(::UnityEngine::Component* GBELIHABEDH, ::System::Int32 EGEGIMGMJHN)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::Component*, ::System::Int32))((::PBYTE)hIl2Cpp + KFGCLOPEGJO___C_NGCMPBDMEOB_OFFSET))(this, GBELIHABEDH, EGEGIMGMJHN);
	}

	::System::Void KMKOHAPFAOK(::MPHPFDEODIG* GBELIHABEDH, ::UnityEngine::Vector3 EGEGIMGMJHN)
	{
		return ((::System::Void(*)(::PVOID, ::MPHPFDEODIG*, ::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + KFGCLOPEGJO___C_KMKOHAPFAOK_OFFSET))(this, GBELIHABEDH, EGEGIMGMJHN);
	}

	::System::Void AGKMCCHBLKC(::MPHPFDEODIG* GBELIHABEDH, ::UnityEngine::Vector3 EGEGIMGMJHN)
	{
		return ((::System::Void(*)(::PVOID, ::MPHPFDEODIG*, ::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + KFGCLOPEGJO___C_AGKMCCHBLKC_OFFSET))(this, GBELIHABEDH, EGEGIMGMJHN);
	}

	::System::Void BPIPMKIMAMN(::MPHPFDEODIG* GBELIHABEDH, ::UnityEngine::Vector2 EGEGIMGMJHN)
	{
		return ((::System::Void(*)(::PVOID, ::MPHPFDEODIG*, ::UnityEngine::Vector2))((::PBYTE)hIl2Cpp + KFGCLOPEGJO___C_BPIPMKIMAMN_OFFSET))(this, GBELIHABEDH, EGEGIMGMJHN);
	}

	::System::Void PBHKHKMENMP(::MPHPFDEODIG* GBELIHABEDH, ::UnityEngine::Vector2 EGEGIMGMJHN)
	{
		return ((::System::Void(*)(::PVOID, ::MPHPFDEODIG*, ::UnityEngine::Vector2))((::PBYTE)hIl2Cpp + KFGCLOPEGJO___C_PBHKHKMENMP_OFFSET))(this, GBELIHABEDH, EGEGIMGMJHN);
	}

	::System::Void EHLOFEANJCO(::MoleMole::UIGeneralButtonController* GBELIHABEDH, ::UnityEngine::Events::UnityAction* EGEGIMGMJHN)
	{
		return ((::System::Void(*)(::PVOID, ::MoleMole::UIGeneralButtonController*, ::UnityEngine::Events::UnityAction*))((::PBYTE)hIl2Cpp + KFGCLOPEGJO___C_EHLOFEANJCO_OFFSET))(this, GBELIHABEDH, EGEGIMGMJHN);
	}

	::System::Void PKHGLEJGDPI(::UnityEngine::UI::Extension::ISetText* GBELIHABEDH, ::System::String* EGEGIMGMJHN)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::UI::Extension::ISetText*, ::System::String*))((::PBYTE)hIl2Cpp + KFGCLOPEGJO___C_PKHGLEJGDPI_OFFSET))(this, GBELIHABEDH, EGEGIMGMJHN);
	}

	::System::Void LDPMADMINLL(::MoleMole::MonoInputKey* GBELIHABEDH, ::System::ValueTuple_2<::MoleMole::InputLogicEventType, ::System::String*> EGEGIMGMJHN)
	{
		return ((::System::Void(*)(::PVOID, ::MoleMole::MonoInputKey*, ::System::ValueTuple_2<::MoleMole::InputLogicEventType, ::System::String*>))((::PBYTE)hIl2Cpp + KFGCLOPEGJO___C_LDPMADMINLL_OFFSET))(this, GBELIHABEDH, EGEGIMGMJHN);
	}

	::System::Void OAFIGAEMIIN(::FGCOIBFFCHB* GBELIHABEDH, ::System::String* EGEGIMGMJHN)
	{
		return ((::System::Void(*)(::PVOID, ::FGCOIBFFCHB*, ::System::String*))((::PBYTE)hIl2Cpp + KFGCLOPEGJO___C_OAFIGAEMIIN_OFFSET))(this, GBELIHABEDH, EGEGIMGMJHN);
	}

	::System::Void GJACJNOJKKG(::GCIMMDDIFBJ* GBELIHABEDH, ::System::String* EGEGIMGMJHN)
	{
		return ((::System::Void(*)(::PVOID, ::GCIMMDDIFBJ*, ::System::String*))((::PBYTE)hIl2Cpp + KFGCLOPEGJO___C_GJACJNOJKKG_OFFSET))(this, GBELIHABEDH, EGEGIMGMJHN);
	}

	::System::Void MGCODCEIFPB(::UnityEngine::Component* GBELIHABEDH, ::UnityEngine::Vector2 EGEGIMGMJHN)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::Component*, ::UnityEngine::Vector2))((::PBYTE)hIl2Cpp + KFGCLOPEGJO___C_MGCODCEIFPB_OFFSET))(this, GBELIHABEDH, EGEGIMGMJHN);
	}
};
