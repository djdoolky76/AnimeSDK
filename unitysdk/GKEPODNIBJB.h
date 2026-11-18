#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/PBJOCICFNGK.h"
#include "unitysdk/Cysharp/Threading/Tasks/UniTaskVoid.h"
#include "unitysdk/LIBOIKJGAIH.h"
#include "unitysdk/MoleMole/InputActionEvent.h"

class ADEJAGFCBHK;
class FGCOIBFFCHB;
class FILNFMCNCFE;
class GCIMMDDIFBJ;
class IOOIHHOJOPI;
class KCDKJNPJEDM;
class LGINJIKKBJA;
class PHBGAINMEEM;
namespace MoleMole { class AvatarShowSetting; }
namespace MoleMole { class UIGeneralToggleWidgetController; }
namespace MoleMole { class UISkinSetInfoWidgetController; }
namespace MoleMole { class UITabBtn01RowWidgetController; }
namespace MoleMole::Battle { class Entity; }
namespace System { class Object; }
namespace System::Collections::Generic { template <typename T> class List_1; }
namespace System::Threading { class CancellationTokenSource; }
namespace UnityEngine { class GameObject; }
namespace UnityEngine { class RectTransform; }
namespace UnityEngine::Rendering { class Volume; }
namespace UnityEngine::UI { class Text; }
namespace UnityEngine::UI::Extension { class InteractionRangeProcessor_LocalPosZ_ByScrollY; }
namespace UnityEngine::UI::Extension { class InteractionRangeProcessor_LocalPositionY_DragY; }
namespace UnityEngine::UI::Extension { class InteractionRangeProcessor_RotateY_ByDeltaX; }
namespace UnityEngine::UI::Extension { class UIImgEventTrigger; }
namespace UnityEngine::UI::Extension { class UILocalizationText; }
template <typename T> class CBCLGFEGHLJ_1;
template <typename T> class LJHFMILANJA_1;
template <typename T> class MEKABAIJMNM_1;

#define GKEPODNIBJB_ABEBNHBKGPG_OFFSET UNITYSDK_OFFSET(0x14901A90)
#define GKEPODNIBJB_ADOBCKIOBPC_OFFSET UNITYSDK_OFFSET(0x18A07120)
#define GKEPODNIBJB_AJOPABLOOIN_OFFSET UNITYSDK_OFFSET(0x18A06E10)
#define GKEPODNIBJB_ALMOKABGMEJ_OFFSET UNITYSDK_OFFSET(0x18A05290)
#define GKEPODNIBJB_APCBIHKJGBA_OFFSET UNITYSDK_OFFSET(0x18A05960)
#define GKEPODNIBJB_APNJHOPKHEB_OFFSET UNITYSDK_OFFSET(0x14901CA0)
#define GKEPODNIBJB_BEGMNCEOIEA_OFFSET UNITYSDK_OFFSET(0x18A06E20)
#define GKEPODNIBJB_BJCFGDDNHLG_OFFSET UNITYSDK_OFFSET(0x14902760)
#define GKEPODNIBJB_BKBAKJNKFFO_OFFSET UNITYSDK_OFFSET(0x14902C00)
#define GKEPODNIBJB_CCPBMIBLMFP_OFFSET UNITYSDK_OFFSET(0x18A05780)
#define GKEPODNIBJB_CIOABGMELON_OFFSET UNITYSDK_OFFSET(0x18A05770)
#define GKEPODNIBJB_CJIPJHHDBAA_OFFSET UNITYSDK_OFFSET(0x18A04EA0)
#define GKEPODNIBJB_COGNDIPPDOG_OFFSET UNITYSDK_OFFSET(0x18A05750)
#define GKEPODNIBJB_DBOMAJHCHHO_OFFSET UNITYSDK_OFFSET(0x18A070B0)
#define GKEPODNIBJB_DFEHNNJAAMF_OFFSET UNITYSDK_OFFSET(0x18A06B00)
#define GKEPODNIBJB_DHDMDDPLIKP_OFFSET UNITYSDK_OFFSET(0x18A070E0)
#define GKEPODNIBJB_DHNGHKBMELP_OFFSET UNITYSDK_OFFSET(0x18A04C70)
#define GKEPODNIBJB_DHPEIBCOPPN_OFFSET UNITYSDK_OFFSET(0x18A06E00)
#define GKEPODNIBJB_DJBOHOEEBFD_OFFSET UNITYSDK_OFFSET(0x18A06B10)
#define GKEPODNIBJB_DLJEAGFGEBN_OFFSET UNITYSDK_OFFSET(0x18A06EC0)
#define GKEPODNIBJB_EBOHDLCHMDK_OFFSET UNITYSDK_OFFSET(0x18A07100)
#define GKEPODNIBJB_EJIFLPEMEDL_OFFSET UNITYSDK_OFFSET(0x18A070F0)
#define GKEPODNIBJB_EJMLADDEHAE_OFFSET UNITYSDK_OFFSET(0x18A03600)
#define GKEPODNIBJB_ELFOBBMAMBB_OFFSET UNITYSDK_OFFSET(0x14902BE0)
#define GKEPODNIBJB_FEGOPPFEGHJ_OFFSET UNITYSDK_OFFSET(0x14901A10)
#define GKEPODNIBJB_FPJMONGAPMN_OFFSET UNITYSDK_OFFSET(0x18A05280)
#define GKEPODNIBJB_GDNGINBFAGB_OFFSET UNITYSDK_OFFSET(0x18A05940)
#define GKEPODNIBJB_GFBJLHMNBAD_OFFSET UNITYSDK_OFFSET(0x18A070D0)
#define GKEPODNIBJB_GGIGEDFBCMJ_OFFSET UNITYSDK_OFFSET(0x14903150)
#define GKEPODNIBJB_GIJGALKAMHI_OFFSET UNITYSDK_OFFSET(0x18A05760)
#define GKEPODNIBJB_GLJPMGEDBHJ_OFFSET UNITYSDK_OFFSET(0x18A05970)
#define GKEPODNIBJB_GLLAKJNBIDA_OFFSET UNITYSDK_OFFSET(0x18A05380)
#define GKEPODNIBJB_GNKKCLOILPE_OFFSET UNITYSDK_OFFSET(0x18A052B0)
#define GKEPODNIBJB_GOIOJNNNBND_OFFSET UNITYSDK_OFFSET(0x18A06760)
#define GKEPODNIBJB_HEDLENBPHDC_OFFSET UNITYSDK_OFFSET(0x18A070C0)
#define GKEPODNIBJB_HFEHKFMGKEL_OFFSET UNITYSDK_OFFSET(0x18A04FC0)
#define GKEPODNIBJB_HGODBKEJPOC_OFFSET UNITYSDK_OFFSET(0x18A06AD0)
#define GKEPODNIBJB_HHIHBGEPMHF_OFFSET UNITYSDK_OFFSET(0x18A07110)
#define GKEPODNIBJB_HKNJNDPLBBN_OFFSET UNITYSDK_OFFSET(0x18A07510)
#define GKEPODNIBJB_HMAIHOMFFAG_OFFSET UNITYSDK_OFFSET(0x18A04EB0)
#define GKEPODNIBJB_HPAGJAGOGHL_OFFSET UNITYSDK_OFFSET(0x14902200)
#define GKEPODNIBJB_ILLCPNBALML_OFFSET UNITYSDK_OFFSET(0x14902BF0)
#define GKEPODNIBJB_JDKGBGLJJOH_OFFSET UNITYSDK_OFFSET(0x18A06850)
#define GKEPODNIBJB_JFAKBAIJGBD_OFFSET UNITYSDK_OFFSET(0x14902C10)
#define GKEPODNIBJB_JFIDKJDALDM_OFFSET UNITYSDK_OFFSET(0x18A07520)
#define GKEPODNIBJB_JLCFFIFHJOA_OFFSET UNITYSDK_OFFSET(0x18A06740)
#define GKEPODNIBJB_JOBBMFKOODB_OFFSET UNITYSDK_OFFSET(0x14903140)
#define GKEPODNIBJB_KANIGHOIOIJ_OFFSET UNITYSDK_OFFSET(0x18A06750)
#define GKEPODNIBJB_KGMOKKBIHOF_OFFSET UNITYSDK_OFFSET(0x149021F0)
#define GKEPODNIBJB_KKAIGIHHABH_OFFSET UNITYSDK_OFFSET(0x14902140)
#define GKEPODNIBJB_KOOCANOOHCN_OFFSET UNITYSDK_OFFSET(0x18A06E30)
#define GKEPODNIBJB_LBDMAMJPFJA_OFFSET UNITYSDK_OFFSET(0x14902BD0)
#define GKEPODNIBJB_LKNBCFOKJLO_OFFSET UNITYSDK_OFFSET(0x149034B0)
#define GKEPODNIBJB_LNCOEJKNFMN_OFFSET UNITYSDK_OFFSET(0x18A067C0)
#define GKEPODNIBJB_LOFLEPACBPM_OFFSET UNITYSDK_OFFSET(0x18A06AF0)
#define GKEPODNIBJB_MEELMHCAOMH_OFFSET UNITYSDK_OFFSET(0x18A04F10)
#define GKEPODNIBJB_MELCMNFEKHK_OFFSET UNITYSDK_OFFSET(0x18A066F0)
#define GKEPODNIBJB_MMKELONDHPE_OFFSET UNITYSDK_OFFSET(0x18A05790)
#define GKEPODNIBJB_MNNGLBBHNFL_OFFSET UNITYSDK_OFFSET(0x18A06D70)
#define GKEPODNIBJB_MOBEKMALMAL_OFFSET UNITYSDK_OFFSET(0x18A05370)
#define GKEPODNIBJB_MOKINDNACHI_OFFSET UNITYSDK_OFFSET(0x18A048B0)
#define GKEPODNIBJB_MPJDECDFJFB_OFFSET UNITYSDK_OFFSET(0x18A057A0)
#define GKEPODNIBJB_NAECEFCOCJG_OFFSET UNITYSDK_OFFSET(0x18A05260)
#define GKEPODNIBJB_NHNCOLOEJJK_OFFSET UNITYSDK_OFFSET(0x18A05D40)
#define GKEPODNIBJB_NLNPJGEFKKD_OFFSET UNITYSDK_OFFSET(0x18A052A0)
#define GKEPODNIBJB_NPKBDILPMHJ_OFFSET UNITYSDK_OFFSET(0x14902160)
#define GKEPODNIBJB_OAPAMLHNNNO_OFFSET UNITYSDK_OFFSET(0x18A05270)
#define GKEPODNIBJB_OCHFLNFHLJL_OFFSET UNITYSDK_OFFSET(0x18A077B0)
#define GKEPODNIBJB_OCMDANPJLPE_OFFSET UNITYSDK_OFFSET(0x14901CE0)
#define GKEPODNIBJB_OENEDOMLBBI_OFFSET UNITYSDK_OFFSET(0x18A05950)
#define GKEPODNIBJB_OFDFFPKCPFN_OFFSET UNITYSDK_OFFSET(0x149020C0)
#define GKEPODNIBJB_OKLLAIFLCPE_OFFSET UNITYSDK_OFFSET(0x14902150)
#define GKEPODNIBJB_OLDHAMAGEHK_OFFSET UNITYSDK_OFFSET(0x18A05930)
#define GKEPODNIBJB_ONMHDGGLFFG_OFFSET UNITYSDK_OFFSET(0x14902020)
#define GKEPODNIBJB_PCCICLNLDDK_OFFSET UNITYSDK_OFFSET(0x14902770)
#define GKEPODNIBJB_PILPKINFMBA_OFFSET UNITYSDK_OFFSET(0x18A04930)
#define GKEPODNIBJB_PMMHDKJFNOG_OFFSET UNITYSDK_OFFSET(0x18A04F20)
#define GKEPODNIBJB_PPEDCPPIPOD_OFFSET UNITYSDK_OFFSET(0x18A070A0)
#define GKEPODNIBJB__CTOR_OFFSET UNITYSDK_OFFSET(0x18A04E40)

inline static constexpr unsigned int GKEPODNIBJB_TypeDefinitionIndex = 50387;

class GKEPODNIBJB : public ::PBJOCICFNGK
{
public:
	// static const ::System::String* GLKPMDMHANO; // 0x0
	// static const ::System::String* EJIEJMPKIPJ; // 0x0
	::FGCOIBFFCHB* _LFEKEAPKBJE_k__BackingField; // 0x50
	::CBCLGFEGHLJ_1<::MoleMole::UISkinSetInfoWidgetController*>* _IEKBPNHECOE_k__BackingField; // 0x58
	::System::Collections::Generic::List_1<::System::Int32>* ANFOOBNKJML; // 0x60
	::PHBGAINMEEM* NFOBOOECKPB; // 0x68
	::ADEJAGFCBHK* _OLIHAOAGHHK_k__BackingField; // 0x70
	::UnityEngine::UI::Extension::InteractionRangeProcessor_LocalPositionY_DragY* JNCLKABPKOL; // 0x78
	::UnityEngine::RectTransform* _EKHIDKOLBJB_k__BackingField; // 0x80
	::System::Threading::CancellationTokenSource* PDBKDNGODGG; // 0x88
	::FILNFMCNCFE* _KOOAAAMKLAN_k__BackingField; // 0x90
	::UnityEngine::Rendering::Volume* HPNLDNJOKAO; // 0x98
	::MoleMole::UISkinSetInfoWidgetController* ECDALNKILLP; // 0xA0
	::LGINJIKKBJA* _ANGHNNNNPIB_k__BackingField; // 0xA8
	::MoleMole::Battle::Entity* AFMJLNGLHBO; // 0xB0
	::LJHFMILANJA_1<::System::Object*>* _NFMCJBAAGIF_k__BackingField; // 0xB8
	::GCIMMDDIFBJ* _ODNDEFOFMPC_k__BackingField; // 0xC0
	::System::Collections::Generic::List_1<::MEKABAIJMNM_1<::MoleMole::UITabBtn01RowWidgetController*>*>* _EHJFNHAFNAD_k__BackingField; // 0xC8
	::UnityEngine::RectTransform* _LDKCKFNAPLF_k__BackingField; // 0xD0
	::FGCOIBFFCHB* _CBONICLNODP_k__BackingField; // 0xD8
	::ADEJAGFCBHK* _NEEBGIJIJKC_k__BackingField; // 0xE0
	::UnityEngine::RectTransform* _JLOGHMHGIKL_k__BackingField; // 0xE8
	::UnityEngine::RectTransform* _BLGJOLGNFIE_k__BackingField; // 0xF0
	::System::Collections::Generic::List_1<::UnityEngine::UI::Extension::InteractionRangeProcessor_RotateY_ByDeltaX*>* MCHFMGANMON; // 0xF8
	::UnityEngine::UI::Extension::UILocalizationText* _PIOEMHPEBFE_k__BackingField; // 0x100
	::GCIMMDDIFBJ* _PGELLMPCJCI_k__BackingField; // 0x108
	::GCIMMDDIFBJ* _GKAFIFKJCGL_k__BackingField; // 0x110
	::UnityEngine::UI::Extension::UIImgEventTrigger* _MGFKAMMCFCM_k__BackingField; // 0x118
	::UnityEngine::RectTransform* _GFGMKGLJAKK_k__BackingField; // 0x120
	::UnityEngine::UI::Text* _KGJHAMOKBMI_k__BackingField; // 0x128
	::KCDKJNPJEDM* ILINILGJEBI; // 0x130
	::UnityEngine::UI::Extension::InteractionRangeProcessor_LocalPosZ_ByScrollY* BDKMFBMJLFE; // 0x138
	::MEKABAIJMNM_1<::MoleMole::UIGeneralToggleWidgetController*>* _AAMPIJLBNPK_k__BackingField; // 0x140
	::System::Int32 KEMOFKKCJGD; // 0x148
	::System::Boolean OONJMLPHKGA; // 0x14C
	::System::Boolean ANPGGCPFMBE; // 0x14D
	::System::Boolean PKLAFJNEDFN; // 0x14E
	::System::Boolean FLBDGBLOJFP; // 0x14F
	::System::Int32 GMHPIPCFMGI; // 0x150
	::System::Int32 HHMLLOGCMPE; // 0x154

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + GKEPODNIBJB__CTOR_OFFSET))(this);
	}

	::System::Void EJMLADDEHAE(::LIBOIKJGAIH& EIEOJFEPMAB, ::IOOIHHOJOPI* IOKOLJDCKPN)
	{
		return ((::System::Void(*)(::PVOID, ::LIBOIKJGAIH&, ::IOOIHHOJOPI*))((::PBYTE)hIl2Cpp + GKEPODNIBJB_EJMLADDEHAE_OFFSET))(this, EIEOJFEPMAB, IOKOLJDCKPN);
	}

	::System::Void MOKINDNACHI()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + GKEPODNIBJB_MOKINDNACHI_OFFSET))(this);
	}

	::System::Void PILPKINFMBA()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + GKEPODNIBJB_PILPKINFMBA_OFFSET))(this);
	}

	::System::Void CJIPJHHDBAA(::UnityEngine::RectTransform* EGEGIMGMJHN)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::RectTransform*))((::PBYTE)hIl2Cpp + GKEPODNIBJB_CJIPJHHDBAA_OFFSET))(this, EGEGIMGMJHN);
	}

	::System::Void HMAIHOMFFAG()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + GKEPODNIBJB_HMAIHOMFFAG_OFFSET))(this);
	}

	::System::Collections::Generic::List_1<::MEKABAIJMNM_1<::MoleMole::UITabBtn01RowWidgetController*>*>* MEELMHCAOMH()
	{
		return ((::System::Collections::Generic::List_1<::MEKABAIJMNM_1<::MoleMole::UITabBtn01RowWidgetController*>*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + GKEPODNIBJB_MEELMHCAOMH_OFFSET))(this);
	}

	::Cysharp::Threading::Tasks::UniTaskVoid PMMHDKJFNOG(::System::Int32 PKMFBJMJCOO, ::System::UInt32 CJPLACFCFBP)
	{
		return ((::Cysharp::Threading::Tasks::UniTaskVoid(*)(::PVOID, ::System::Int32, ::System::UInt32))((::PBYTE)hIl2Cpp + GKEPODNIBJB_PMMHDKJFNOG_OFFSET))(this, PKMFBJMJCOO, CJPLACFCFBP);
	}

	::System::Void DHNGHKBMELP()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + GKEPODNIBJB_DHNGHKBMELP_OFFSET))(this);
	}

	::System::Boolean HFEHKFMGKEL(::MoleMole::InputActionEvent MLNBANAGAEE)
	{
		return ((::System::Boolean(*)(::PVOID, ::MoleMole::InputActionEvent))((::PBYTE)hIl2Cpp + GKEPODNIBJB_HFEHKFMGKEL_OFFSET))(this, MLNBANAGAEE);
	}

	::UnityEngine::RectTransform* NAECEFCOCJG()
	{
		return ((::UnityEngine::RectTransform*(*)(::PVOID))((::PBYTE)hIl2Cpp + GKEPODNIBJB_NAECEFCOCJG_OFFSET))(this);
	}

	::System::Void OAPAMLHNNNO(::FILNFMCNCFE* EGEGIMGMJHN)
	{
		return ((::System::Void(*)(::PVOID, ::FILNFMCNCFE*))((::PBYTE)hIl2Cpp + GKEPODNIBJB_OAPAMLHNNNO_OFFSET))(this, EGEGIMGMJHN);
	}

	::System::Void FPJMONGAPMN(::MEKABAIJMNM_1<::MoleMole::UIGeneralToggleWidgetController*>* EGEGIMGMJHN)
	{
		return ((::System::Void(*)(::PVOID, ::MEKABAIJMNM_1<::MoleMole::UIGeneralToggleWidgetController*>*))((::PBYTE)hIl2Cpp + GKEPODNIBJB_FPJMONGAPMN_OFFSET))(this, EGEGIMGMJHN);
	}

	::System::Void ALMOKABGMEJ(::UnityEngine::UI::Extension::UIImgEventTrigger* EGEGIMGMJHN)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::UI::Extension::UIImgEventTrigger*))((::PBYTE)hIl2Cpp + GKEPODNIBJB_ALMOKABGMEJ_OFFSET))(this, EGEGIMGMJHN);
	}

	::System::Void NLNPJGEFKKD(::System::Collections::Generic::List_1<::MEKABAIJMNM_1<::MoleMole::UITabBtn01RowWidgetController*>*>* EGEGIMGMJHN)
	{
		return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::List_1<::MEKABAIJMNM_1<::MoleMole::UITabBtn01RowWidgetController*>*>*))((::PBYTE)hIl2Cpp + GKEPODNIBJB_NLNPJGEFKKD_OFFSET))(this, EGEGIMGMJHN);
	}

	::MoleMole::AvatarShowSetting* GNKKCLOILPE(::System::Int32 PKMFBJMJCOO, ::System::Int32 CJPLACFCFBP)
	{
		return ((::MoleMole::AvatarShowSetting*(*)(::PVOID, ::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + GKEPODNIBJB_GNKKCLOILPE_OFFSET))(this, PKMFBJMJCOO, CJPLACFCFBP);
	}

	::System::Void MOBEKMALMAL(::UnityEngine::RectTransform* EGEGIMGMJHN)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::RectTransform*))((::PBYTE)hIl2Cpp + GKEPODNIBJB_MOBEKMALMAL_OFFSET))(this, EGEGIMGMJHN);
	}

	::System::Void GLLAKJNBIDA()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + GKEPODNIBJB_GLLAKJNBIDA_OFFSET))(this);
	}

	::System::Void COGNDIPPDOG(::LGINJIKKBJA* EGEGIMGMJHN)
	{
		return ((::System::Void(*)(::PVOID, ::LGINJIKKBJA*))((::PBYTE)hIl2Cpp + GKEPODNIBJB_COGNDIPPDOG_OFFSET))(this, EGEGIMGMJHN);
	}

	::UnityEngine::UI::Extension::UIImgEventTrigger* GIJGALKAMHI()
	{
		return ((::UnityEngine::UI::Extension::UIImgEventTrigger*(*)(::PVOID))((::PBYTE)hIl2Cpp + GKEPODNIBJB_GIJGALKAMHI_OFFSET))(this);
	}

	::System::Void CIOABGMELON(::ADEJAGFCBHK* EGEGIMGMJHN)
	{
		return ((::System::Void(*)(::PVOID, ::ADEJAGFCBHK*))((::PBYTE)hIl2Cpp + GKEPODNIBJB_CIOABGMELON_OFFSET))(this, EGEGIMGMJHN);
	}

	::System::Void CCPBMIBLMFP(::FGCOIBFFCHB* EGEGIMGMJHN)
	{
		return ((::System::Void(*)(::PVOID, ::FGCOIBFFCHB*))((::PBYTE)hIl2Cpp + GKEPODNIBJB_CCPBMIBLMFP_OFFSET))(this, EGEGIMGMJHN);
	}

	::System::Void MMKELONDHPE(::UnityEngine::UI::Extension::UILocalizationText* EGEGIMGMJHN)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::UI::Extension::UILocalizationText*))((::PBYTE)hIl2Cpp + GKEPODNIBJB_MMKELONDHPE_OFFSET))(this, EGEGIMGMJHN);
	}

	::System::Void MPJDECDFJFB(::System::Int32 HBHJAMLMMKK, ::UnityEngine::GameObject* EKOPMGIPNOB)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32, ::UnityEngine::GameObject*))((::PBYTE)hIl2Cpp + GKEPODNIBJB_MPJDECDFJFB_OFFSET))(this, HBHJAMLMMKK, EKOPMGIPNOB);
	}

	::System::Void OLDHAMAGEHK(::UnityEngine::UI::Text* EGEGIMGMJHN)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::UI::Text*))((::PBYTE)hIl2Cpp + GKEPODNIBJB_OLDHAMAGEHK_OFFSET))(this, EGEGIMGMJHN);
	}

	::System::Void GDNGINBFAGB(::GCIMMDDIFBJ* EGEGIMGMJHN)
	{
		return ((::System::Void(*)(::PVOID, ::GCIMMDDIFBJ*))((::PBYTE)hIl2Cpp + GKEPODNIBJB_GDNGINBFAGB_OFFSET))(this, EGEGIMGMJHN);
	}

	::UnityEngine::RectTransform* OENEDOMLBBI()
	{
		return ((::UnityEngine::RectTransform*(*)(::PVOID))((::PBYTE)hIl2Cpp + GKEPODNIBJB_OENEDOMLBBI_OFFSET))(this);
	}

	::System::Void APCBIHKJGBA(::UnityEngine::RectTransform* EGEGIMGMJHN)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::RectTransform*))((::PBYTE)hIl2Cpp + GKEPODNIBJB_APCBIHKJGBA_OFFSET))(this, EGEGIMGMJHN);
	}

	::System::Void GLJPMGEDBHJ()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + GKEPODNIBJB_GLJPMGEDBHJ_OFFSET))(this);
	}

	::System::Void NHNCOLOEJJK()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + GKEPODNIBJB_NHNCOLOEJJK_OFFSET))(this);
	}

	::System::Void MELCMNFEKHK()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + GKEPODNIBJB_MELCMNFEKHK_OFFSET))(this);
	}

	::UnityEngine::UI::Extension::UILocalizationText* JLCFFIFHJOA()
	{
		return ((::UnityEngine::UI::Extension::UILocalizationText*(*)(::PVOID))((::PBYTE)hIl2Cpp + GKEPODNIBJB_JLCFFIFHJOA_OFFSET))(this);
	}

	::FILNFMCNCFE* KANIGHOIOIJ()
	{
		return ((::FILNFMCNCFE*(*)(::PVOID))((::PBYTE)hIl2Cpp + GKEPODNIBJB_KANIGHOIOIJ_OFFSET))(this);
	}

	::System::Void GOIOJNNNBND()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + GKEPODNIBJB_GOIOJNNNBND_OFFSET))(this);
	}

	::System::Void LNCOEJKNFMN(::System::Single PIIPCLCCOIG)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + GKEPODNIBJB_LNCOEJKNFMN_OFFSET))(this, PIIPCLCCOIG);
	}

	::System::Void JDKGBGLJJOH()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + GKEPODNIBJB_JDKGBGLJJOH_OFFSET))(this);
	}

	::System::Void HGODBKEJPOC()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + GKEPODNIBJB_HGODBKEJPOC_OFFSET))(this);
	}

	::FGCOIBFFCHB* LOFLEPACBPM()
	{
		return ((::FGCOIBFFCHB*(*)(::PVOID))((::PBYTE)hIl2Cpp + GKEPODNIBJB_LOFLEPACBPM_OFFSET))(this);
	}

	::System::Void DFEHNNJAAMF(::ADEJAGFCBHK* EGEGIMGMJHN)
	{
		return ((::System::Void(*)(::PVOID, ::ADEJAGFCBHK*))((::PBYTE)hIl2Cpp + GKEPODNIBJB_DFEHNNJAAMF_OFFSET))(this, EGEGIMGMJHN);
	}

	::System::Void DJBOHOEEBFD()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + GKEPODNIBJB_DJBOHOEEBFD_OFFSET))(this);
	}

	::System::Void MNNGLBBHNFL(::System::Single PIIPCLCCOIG)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + GKEPODNIBJB_MNNGLBBHNFL_OFFSET))(this, PIIPCLCCOIG);
	}

	::System::Void DHPEIBCOPPN(::UnityEngine::RectTransform* EGEGIMGMJHN)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::RectTransform*))((::PBYTE)hIl2Cpp + GKEPODNIBJB_DHPEIBCOPPN_OFFSET))(this, EGEGIMGMJHN);
	}

	::CBCLGFEGHLJ_1<::MoleMole::UISkinSetInfoWidgetController*>* AJOPABLOOIN()
	{
		return ((::CBCLGFEGHLJ_1<::MoleMole::UISkinSetInfoWidgetController*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + GKEPODNIBJB_AJOPABLOOIN_OFFSET))(this);
	}

	::System::Void BEGMNCEOIEA(::LJHFMILANJA_1<::System::Object*>* EGEGIMGMJHN)
	{
		return ((::System::Void(*)(::PVOID, ::LJHFMILANJA_1<::System::Object*>*))((::PBYTE)hIl2Cpp + GKEPODNIBJB_BEGMNCEOIEA_OFFSET))(this, EGEGIMGMJHN);
	}

	::System::Void KOOCANOOHCN(::System::Single PIIPCLCCOIG)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + GKEPODNIBJB_KOOCANOOHCN_OFFSET))(this, PIIPCLCCOIG);
	}

	::System::Void DLJEAGFGEBN()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + GKEPODNIBJB_DLJEAGFGEBN_OFFSET))(this);
	}

	::GCIMMDDIFBJ* PPEDCPPIPOD()
	{
		return ((::GCIMMDDIFBJ*(*)(::PVOID))((::PBYTE)hIl2Cpp + GKEPODNIBJB_PPEDCPPIPOD_OFFSET))(this);
	}

	::System::Void DBOMAJHCHHO(::UnityEngine::RectTransform* EGEGIMGMJHN)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::RectTransform*))((::PBYTE)hIl2Cpp + GKEPODNIBJB_DBOMAJHCHHO_OFFSET))(this, EGEGIMGMJHN);
	}

	::System::Void HEDLENBPHDC(::FGCOIBFFCHB* EGEGIMGMJHN)
	{
		return ((::System::Void(*)(::PVOID, ::FGCOIBFFCHB*))((::PBYTE)hIl2Cpp + GKEPODNIBJB_HEDLENBPHDC_OFFSET))(this, EGEGIMGMJHN);
	}

	::LJHFMILANJA_1<::System::Object*>* GFBJLHMNBAD()
	{
		return ((::LJHFMILANJA_1<::System::Object*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + GKEPODNIBJB_GFBJLHMNBAD_OFFSET))(this);
	}

	::ADEJAGFCBHK* DHDMDDPLIKP()
	{
		return ((::ADEJAGFCBHK*(*)(::PVOID))((::PBYTE)hIl2Cpp + GKEPODNIBJB_DHDMDDPLIKP_OFFSET))(this);
	}

	::GCIMMDDIFBJ* EJIFLPEMEDL()
	{
		return ((::GCIMMDDIFBJ*(*)(::PVOID))((::PBYTE)hIl2Cpp + GKEPODNIBJB_EJIFLPEMEDL_OFFSET))(this);
	}

	::LGINJIKKBJA* EBOHDLCHMDK()
	{
		return ((::LGINJIKKBJA*(*)(::PVOID))((::PBYTE)hIl2Cpp + GKEPODNIBJB_EBOHDLCHMDK_OFFSET))(this);
	}

	::System::Void HHIHBGEPMHF(::CBCLGFEGHLJ_1<::MoleMole::UISkinSetInfoWidgetController*>* EGEGIMGMJHN)
	{
		return ((::System::Void(*)(::PVOID, ::CBCLGFEGHLJ_1<::MoleMole::UISkinSetInfoWidgetController*>*))((::PBYTE)hIl2Cpp + GKEPODNIBJB_HHIHBGEPMHF_OFFSET))(this, EGEGIMGMJHN);
	}

	::System::Boolean ADOBCKIOBPC(::MoleMole::InputActionEvent MLNBANAGAEE)
	{
		return ((::System::Boolean(*)(::PVOID, ::MoleMole::InputActionEvent))((::PBYTE)hIl2Cpp + GKEPODNIBJB_ADOBCKIOBPC_OFFSET))(this, MLNBANAGAEE);
	}

	::MEKABAIJMNM_1<::MoleMole::UIGeneralToggleWidgetController*>* HKNJNDPLBBN()
	{
		return ((::MEKABAIJMNM_1<::MoleMole::UIGeneralToggleWidgetController*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + GKEPODNIBJB_HKNJNDPLBBN_OFFSET))(this);
	}

	::System::Void JFIDKJDALDM()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + GKEPODNIBJB_JFIDKJDALDM_OFFSET))(this);
	}

	::System::Void OCHFLNFHLJL(::KCDKJNPJEDM* LELIFHJKLEH)
	{
		return ((::System::Void(*)(::PVOID, ::KCDKJNPJEDM*))((::PBYTE)hIl2Cpp + GKEPODNIBJB_OCHFLNFHLJL_OFFSET))(this, LELIFHJKLEH);
	}

	::System::Void FEGOPPFEGHJ()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + GKEPODNIBJB_FEGOPPFEGHJ_OFFSET))(this);
	}

	::System::Void ABEBNHBKGPG(::System::Int32 ABHBKFJKINO)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + GKEPODNIBJB_ABEBNHBKGPG_OFFSET))(this, ABHBKFJKINO);
	}

	::System::Void APNJHOPKHEB()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + GKEPODNIBJB_APNJHOPKHEB_OFFSET))(this);
	}

	::System::Void OCMDANPJLPE(::System::Boolean CPHDDAGKHLB)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + GKEPODNIBJB_OCMDANPJLPE_OFFSET))(this, CPHDDAGKHLB);
	}

	::System::Boolean ONMHDGGLFFG(::MoleMole::InputActionEvent MLNBANAGAEE)
	{
		return ((::System::Boolean(*)(::PVOID, ::MoleMole::InputActionEvent))((::PBYTE)hIl2Cpp + GKEPODNIBJB_ONMHDGGLFFG_OFFSET))(this, MLNBANAGAEE);
	}

	::System::Void OFDFFPKCPFN()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + GKEPODNIBJB_OFDFFPKCPFN_OFFSET))(this);
	}

	::ADEJAGFCBHK* KKAIGIHHABH()
	{
		return ((::ADEJAGFCBHK*(*)(::PVOID))((::PBYTE)hIl2Cpp + GKEPODNIBJB_KKAIGIHHABH_OFFSET))(this);
	}

	::System::Void OKLLAIFLCPE(::GCIMMDDIFBJ* EGEGIMGMJHN)
	{
		return ((::System::Void(*)(::PVOID, ::GCIMMDDIFBJ*))((::PBYTE)hIl2Cpp + GKEPODNIBJB_OKLLAIFLCPE_OFFSET))(this, EGEGIMGMJHN);
	}

	::System::Void NPKBDILPMHJ()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + GKEPODNIBJB_NPKBDILPMHJ_OFFSET))(this);
	}

	::FGCOIBFFCHB* KGMOKKBIHOF()
	{
		return ((::FGCOIBFFCHB*(*)(::PVOID))((::PBYTE)hIl2Cpp + GKEPODNIBJB_KGMOKKBIHOF_OFFSET))(this);
	}

	::System::Void HPAGJAGOGHL()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + GKEPODNIBJB_HPAGJAGOGHL_OFFSET))(this);
	}

	::UnityEngine::UI::Text* BJCFGDDNHLG()
	{
		return ((::UnityEngine::UI::Text*(*)(::PVOID))((::PBYTE)hIl2Cpp + GKEPODNIBJB_BJCFGDDNHLG_OFFSET))(this);
	}

	::System::Void PCCICLNLDDK()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + GKEPODNIBJB_PCCICLNLDDK_OFFSET))(this);
	}

	::System::Void LBDMAMJPFJA(::GCIMMDDIFBJ* EGEGIMGMJHN)
	{
		return ((::System::Void(*)(::PVOID, ::GCIMMDDIFBJ*))((::PBYTE)hIl2Cpp + GKEPODNIBJB_LBDMAMJPFJA_OFFSET))(this, EGEGIMGMJHN);
	}

	::UnityEngine::RectTransform* ELFOBBMAMBB()
	{
		return ((::UnityEngine::RectTransform*(*)(::PVOID))((::PBYTE)hIl2Cpp + GKEPODNIBJB_ELFOBBMAMBB_OFFSET))(this);
	}

	::GCIMMDDIFBJ* ILLCPNBALML()
	{
		return ((::GCIMMDDIFBJ*(*)(::PVOID))((::PBYTE)hIl2Cpp + GKEPODNIBJB_ILLCPNBALML_OFFSET))(this);
	}

	::UnityEngine::RectTransform* BKBAKJNKFFO()
	{
		return ((::UnityEngine::RectTransform*(*)(::PVOID))((::PBYTE)hIl2Cpp + GKEPODNIBJB_BKBAKJNKFFO_OFFSET))(this);
	}

	::System::Void JFAKBAIJGBD()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + GKEPODNIBJB_JFAKBAIJGBD_OFFSET))(this);
	}

	::UnityEngine::RectTransform* JOBBMFKOODB()
	{
		return ((::UnityEngine::RectTransform*(*)(::PVOID))((::PBYTE)hIl2Cpp + GKEPODNIBJB_JOBBMFKOODB_OFFSET))(this);
	}

	::System::Void GGIGEDFBCMJ(::System::Int32 HBHJAMLMMKK)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + GKEPODNIBJB_GGIGEDFBCMJ_OFFSET))(this, HBHJAMLMMKK);
	}

	::System::Void LKNBCFOKJLO()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + GKEPODNIBJB_LKNBCFOKJLO_OFFSET))(this);
	}
};
