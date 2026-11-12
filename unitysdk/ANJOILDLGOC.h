#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/FMPCODLIOLG.h"
#include "unitysdk/RPG/Client/UIFloatingTextType.h"
#include "unitysdk/RPG/GameCore/AttackDamageType.h"
#include "unitysdk/RPG/GameCore/DamateTextFontStyle.h"
#include "unitysdk/RPG/GameCore/ElementDamageType.h"
#include "unitysdk/RPG/GameCore/TeamType.h"
#include "unitysdk/RPG/GameCore/UIDamageTextType.h"
#include "unitysdk/UnityEngine/Vector2.h"
#include "unitysdk/CHMCAGBDPJH.h"
#include "unitysdk/IGKFNIEJGLM.h"
#include "unitysdk/RPG/Client/TextID.h"
#include "unitysdk/RPG/GameCore/FixPoint.h"
#include "unitysdk/System/Nullable_1.h"
#include "unitysdk/UnityEngine/Vector3.h"
class BODMMAAAOCE;
class CMJDEKHCHGA;
class DAMLDJLGFHB;
class DamageTextStyle;
class HDLBCFBLGKN;
class MLAGKIPMNJO;
class PAFPMNHFBME;
namespace RPG::Client { class PrefabLoadMeta; }
namespace RPG::Client { class SimpleText; }
namespace RPG::Client { class UIFollow3DTarget; }
namespace RPG::GameCore { class CharacterVisibleComponent; }
namespace RPG::GameCore { class GameEntity; }
namespace System { class Object; }
namespace System { class String; }
namespace System { template <typename T1, typename T2> class Tuple_2; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T> class HashSet_1; }
namespace System::Collections::Generic { template <typename T> class List_1; }
namespace UnityEngine { class Animation; }
namespace UnityEngine { class CanvasGroup; }
namespace UnityEngine { class Font; }
namespace UnityEngine { class GameObject; }
namespace UnityEngine { class RectTransform; }
namespace UnityEngine { class SimpleAnimation; }
namespace UnityEngine { class Transform; }
namespace UnityEngine::UI { class ContentSizeFitter; }
namespace UnityEngine::UI { class Image; }
namespace UnityEngine::UI { class LayoutGroup; }

#define ANJOILDLGOC_AAHFKBIMABA_OFFSET UNITYSDK_OFFSET(0x16709820)
#define ANJOILDLGOC_AHBBDFJOLBL_OFFSET UNITYSDK_OFFSET(0x1670AE00)
#define ANJOILDLGOC_AIDMFNEIFOH_OFFSET UNITYSDK_OFFSET(0x1670B430)
#define ANJOILDLGOC_AKEDNFHBHLO_OFFSET UNITYSDK_OFFSET(0x1670BF80)
#define ANJOILDLGOC_AUTOBINDCALLBACK_OFFSET UNITYSDK_OFFSET(0x1670C2E0)
#define ANJOILDLGOC_AUTOREMOVECALLBACK_OFFSET UNITYSDK_OFFSET(0x1670C400)
#define ANJOILDLGOC_BBCJHNPLENB_OFFSET UNITYSDK_OFFSET(0x1670A430)
#define ANJOILDLGOC_BBEDBNEJIKJ_OFFSET UNITYSDK_OFFSET(0x16709910)
#define ANJOILDLGOC_BBIJCDDOGHJ_OFFSET UNITYSDK_OFFSET(0x1670A300)
#define ANJOILDLGOC_BCAMNAGBDDC_OFFSET UNITYSDK_OFFSET(0x1670ADA0)
#define ANJOILDLGOC_BCEEMEBGLGG_OFFSET UNITYSDK_OFFSET(0x1670A3A0)
#define ANJOILDLGOC_BDBCEHOCCCP_OFFSET UNITYSDK_OFFSET(0x1670B050)
#define ANJOILDLGOC_BFECNJGOIJI_OFFSET UNITYSDK_OFFSET(0x167064D0)
#define ANJOILDLGOC_BIOBBNGDGDF_OFFSET UNITYSDK_OFFSET(0x1670A800)
#define ANJOILDLGOC_BJKBMCEPBCJ_OFFSET UNITYSDK_OFFSET(0x1670B270)
#define ANJOILDLGOC_BJLGAKPFGPI_OFFSET UNITYSDK_OFFSET(0x1670B8D0)
#define ANJOILDLGOC_BLKAAEJPNBE_OFFSET UNITYSDK_OFFSET(0x16707BB0)
#define ANJOILDLGOC_BNAKANKCDJM_OFFSET UNITYSDK_OFFSET(0x16707AB0)
#define ANJOILDLGOC_BPNNDDHJPHO_OFFSET UNITYSDK_OFFSET(0x16707540)
#define ANJOILDLGOC_CCTOR_OFFSET UNITYSDK_OFFSET(0x1670DF60)
#define ANJOILDLGOC_CGABKPLCMOO_OFFSET UNITYSDK_OFFSET(0x1670BBC0)
#define ANJOILDLGOC_CIKAIGDDGNC_OFFSET UNITYSDK_OFFSET(0x1670ACB0)
#define ANJOILDLGOC_CMENKDFNLKN_OFFSET UNITYSDK_OFFSET(0x16707FD0)
#define ANJOILDLGOC_CTOR_OFFSET UNITYSDK_OFFSET(0x1670C4F0)
#define ANJOILDLGOC_DBBINCLKEBL_OFFSET UNITYSDK_OFFSET(0x16707780)
#define ANJOILDLGOC_DLBINDMECON_OFFSET UNITYSDK_OFFSET(0x1670B7B0)
#define ANJOILDLGOC_DMKJAJLNEBK_OFFSET UNITYSDK_OFFSET(0x16707320)
#define ANJOILDLGOC_DOGAJHCKDGN_OFFSET UNITYSDK_OFFSET(0x16707E30)
#define ANJOILDLGOC_DPGGDECJENG_OFFSET UNITYSDK_OFFSET(0x1670A8B0)
#define ANJOILDLGOC_ELFMECIJBFM_OFFSET UNITYSDK_OFFSET(0x167086E0)
#define ANJOILDLGOC_ELGFFIJPJGO_OFFSET UNITYSDK_OFFSET(0x16706A70)
#define ANJOILDLGOC_EMCBHIAHJOH_OFFSET UNITYSDK_OFFSET(0x1670A5A0)
#define ANJOILDLGOC_FCEGGNNJKNG_OFFSET UNITYSDK_OFFSET(0x16706550)
#define ANJOILDLGOC_FDDNFBKOPEO_OFFSET UNITYSDK_OFFSET(0x167083C0)
#define ANJOILDLGOC_FGKPPNIDDEA_OFFSET UNITYSDK_OFFSET(0x1670AEF0)
#define ANJOILDLGOC_FHJPGPKMHPE_OFFSET UNITYSDK_OFFSET(0x1670AF70)
#define ANJOILDLGOC_FPONIFNONMA_OFFSET UNITYSDK_OFFSET(0x16709EE0)
#define ANJOILDLGOC_GBCKGALGBFK_OFFSET UNITYSDK_OFFSET(0x1670B880)
#define ANJOILDLGOC_GET_TOPPRIORITY_OFFSET UNITYSDK_OFFSET(0x1670C050)
#define ANJOILDLGOC_GGHJALOAIOD_OFFSET UNITYSDK_OFFSET(0x1670AA00)
#define ANJOILDLGOC_GIMOICLMIOP_OFFSET UNITYSDK_OFFSET(0x1670C110)
#define ANJOILDLGOC_GMEMPDKHCNE_OFFSET UNITYSDK_OFFSET(0x167082B0)
#define ANJOILDLGOC_GOCLDGPEDBO_OFFSET UNITYSDK_OFFSET(0x1670A7A0)
#define ANJOILDLGOC_HBCFGBLMOAI_OFFSET UNITYSDK_OFFSET(0x16708DE0)
#define ANJOILDLGOC_IDNNMILIDLN_OFFSET UNITYSDK_OFFSET(0x16706C30)
#define ANJOILDLGOC_IJFBDGDOKFN_OFFSET UNITYSDK_OFFSET(0x1670B920)
#define ANJOILDLGOC_ILCIFBBJMHN_OFFSET UNITYSDK_OFFSET(0x16709110)
#define ANJOILDLGOC_IPDICBEBJKL_OFFSET UNITYSDK_OFFSET(0x16709E90)
#define ANJOILDLGOC_IPDMMOCAEPO_OFFSET UNITYSDK_OFFSET(0x1670C1D0)
#define ANJOILDLGOC_JCEONOPDFPL_OFFSET UNITYSDK_OFFSET(0x16709970)
#define ANJOILDLGOC_JCLCJMFLPEN_OFFSET UNITYSDK_OFFSET(0x167067C0)
#define ANJOILDLGOC_JCPEFMJABKD_OFFSET UNITYSDK_OFFSET(0x16706BD0)
#define ANJOILDLGOC_JJJJJJJFHOO_OFFSET UNITYSDK_OFFSET(0x1670C0B0)
#define ANJOILDLGOC_JMOGHCFMBBN_OFFSET UNITYSDK_OFFSET(0x16706290)
#define ANJOILDLGOC_KANDLICLHBO_OFFSET UNITYSDK_OFFSET(0x16709F80)
#define ANJOILDLGOC_KBNAELGOOAN_OFFSET UNITYSDK_OFFSET(0x1670B0E0)
#define ANJOILDLGOC_KBPMCFICODM_OFFSET UNITYSDK_OFFSET(0x16707700)
#define ANJOILDLGOC_KDNBBAGGHNL_OFFSET UNITYSDK_OFFSET(0x16709CF0)
#define ANJOILDLGOC_KGPADEBHHCF_OFFSET UNITYSDK_OFFSET(0x16708E70)
#define ANJOILDLGOC_KGPANCMMECP_OFFSET UNITYSDK_OFFSET(0x1670BB30)
#define ANJOILDLGOC_KMBKFDPBNDD_OFFSET UNITYSDK_OFFSET(0x167072A0)
#define ANJOILDLGOC_KOCDKMAGDHP_OFFSET UNITYSDK_OFFSET(0x16709BF0)
#define ANJOILDLGOC_LDFJMBHFDHP_OFFSET UNITYSDK_OFFSET(0x167073F0)
#define ANJOILDLGOC_LEAEJLELMLM_OFFSET UNITYSDK_OFFSET(0x1670AE50)
#define ANJOILDLGOC_LFHCAHAKADB_OFFSET UNITYSDK_OFFSET(0x16709A00)
#define ANJOILDLGOC_LKFJFGPFEJJ_OFFSET UNITYSDK_OFFSET(0x16707A20)
#define ANJOILDLGOC_MKNGAHPPLFB_1_OFFSET UNITYSDK_OFFSET(0x1670BEC0)
#define ANJOILDLGOC_MKNGAHPPLFB_OFFSET UNITYSDK_OFFSET(0x1670BD90)
#define ANJOILDLGOC_MLADMKEPCBO_OFFSET UNITYSDK_OFFSET(0x16708170)
#define ANJOILDLGOC_MNOMKBOEGME_OFFSET UNITYSDK_OFFSET(0x16706840)
#define ANJOILDLGOC_NAOGNDLGJFN_OFFSET UNITYSDK_OFFSET(0x16707140)
#define ANJOILDLGOC_NCGPFJEFEFM_OFFSET UNITYSDK_OFFSET(0x16709A90)
#define ANJOILDLGOC_NFDKHHOPHNI_OFFSET UNITYSDK_OFFSET(0x16709500)
#define ANJOILDLGOC_NGNHIBHOMEH_OFFSET UNITYSDK_OFFSET(0x167096D0)
#define ANJOILDLGOC_NLNDGOIKOJO_OFFSET UNITYSDK_OFFSET(0x16706AC0)
#define ANJOILDLGOC_OECGDLMMFKB_OFFSET UNITYSDK_OFFSET(0x16706730)
#define ANJOILDLGOC_OGMJAGMJOPN_OFFSET UNITYSDK_OFFSET(0x1670BA20)
#define ANJOILDLGOC_OKFGPKFMJDI_OFFSET UNITYSDK_OFFSET(0x16709B00)
#define ANJOILDLGOC_OKLNDHONALB_OFFSET UNITYSDK_OFFSET(0x16708060)
#define ANJOILDLGOC_PDCLAMCGOPB_OFFSET UNITYSDK_OFFSET(0x16709C60)
#define ANJOILDLGOC_SET_TOPPRIORITY_OFFSET UNITYSDK_OFFSET(0x1670C080)
#define ANJOILDLGOC__ONBIND_OFFSET UNITYSDK_OFFSET(0x16705200)
#define ANJOILDLGOC__ONDISPOSE_OFFSET UNITYSDK_OFFSET(0x167071F0)
#define ANJOILDLGOC__ONINITPARAMS_OFFSET UNITYSDK_OFFSET(0x16706890)
#define ANJOILDLGOC__ONTICK_OFFSET UNITYSDK_OFFSET(0x16706910)

inline static constexpr unsigned int ANJOILDLGOC_TypeDefinitionIndex = 74448;

	class ANJOILDLGOC : public ::FMPCODLIOLG
	{
	public:
		::HDLBCFBLGKN* NNOEDFOPALA; // 0x60
		::System::Collections::Generic::HashSet_1<::System::String*>* GIPEKGCEBKE; // 0x68
		::UnityEngine::UI::Image* EPNEIHOANLA; // 0x70
		::System::Collections::Generic::List_1<::System::Tuple_2<::RPG::Client::UIFloatingTextType, ::System::String*>*>* DHFGJOEDJEK; // 0x78
		::RPG::Client::PrefabLoadMeta* LDGBDIOFKMG; // 0x80
		::UnityEngine::Transform* DDIBIHFEBNN; // 0x88
		::UnityEngine::Transform* BDGOLLLFLMC; // 0x90
		::UnityEngine::CanvasGroup* LDECKNEDNPI; // 0x98
		::PAFPMNHFBME* EOAPKKDMOGN; // 0xA0
		::PAFPMNHFBME* DBLPPCLEGKG; // 0xA8
		::UnityEngine::UI::ContentSizeFitter* PFIOEBPHDFI; // 0xB0
		::DAMLDJLGFHB* OEDKHBAHFLG; // 0xB8
		::System::String* AMMFAOBBPCN; // 0xC0
		::RPG::GameCore::GameEntity* OJAHLJGABMJ; // 0xC8
		::UnityEngine::RectTransform* NEEDDJHCCND; // 0xD0
		::PAFPMNHFBME* JMOHIINCDJO; // 0xD8
		::HDLBCFBLGKN* OMBGONFDNKD; // 0xE0
		::UnityEngine::UI::Image* NBMGFFBNGEI; // 0xE8
		::Il2CppArray<::PAFPMNHFBME*>* PCIIKFOIAJA; // 0xF0
		::UnityEngine::UI::Image* GGIPJAFLBJG; // 0xF8
		::RPG::GameCore::CharacterVisibleComponent* PLDFJEONENF; // 0x100
		::System::Collections::Generic::List_1<::System::Tuple_2<::RPG::Client::UIFloatingTextType, ::System::String*>*>* HAGGCOIDLBJ; // 0x108
		::RPG::Client::UIFollow3DTarget* MCMALLKMDNC; // 0x110
		::UnityEngine::Animation* BAFAAEFEBPJ; // 0x118
		::System::Collections::Generic::List_1<::System::Object*>* HJFBEPJBHEA; // 0x120
		::Il2CppArray<::System::String*>* BELIHCMGEAP; // 0x128
		::PAFPMNHFBME* PCFDOMBLHBK; // 0x130
		::UnityEngine::SimpleAnimation* OAGGNBHMKDP; // 0x138
		::System::Collections::Generic::List_1<::System::Tuple_2<::RPG::Client::UIFloatingTextType, ::System::String*>*>* KLKONCAMEMD; // 0x140
		::UnityEngine::Transform* FCIHODBGEFL; // 0x148
		::UnityEngine::GameObject* FDMNEAEDFHE; // 0x150
		::UnityEngine::Transform* LFGMLJCCPCH; // 0x158
		::System::Collections::Generic::List_1<::HDLBCFBLGKN*>* BBBAHLJAIGL; // 0x160
		::System::Collections::Generic::List_1<::RPG::Client::SimpleText*>* LGILMMCGOGL; // 0x168
		::System::Collections::Generic::Dictionary_2<::RPG::GameCore::DamateTextFontStyle, ::UnityEngine::Font*>* AKNJNJCEFHI; // 0x170
		::PAFPMNHFBME* GNOKHINJONA; // 0x178
		::System::Collections::Generic::Dictionary_2<::RPG::GameCore::DamateTextFontStyle, ::System::String*>* INAAGBFBAHM; // 0x180
		::UnityEngine::Transform* MEAEKCCGFCN; // 0x188
		::HDLBCFBLGKN* OFAJEHEKHOJ; // 0x190
		::CMJDEKHCHGA* DFGACLPFJAG; // 0x198
		::UnityEngine::UI::LayoutGroup* BPPBHGGCBCH; // 0x1A0
		::HDLBCFBLGKN* GHJINFGDKGA; // 0x1A8
		::BODMMAAAOCE* DBKMNEAPLDL; // 0x1B0
		::UnityEngine::Transform* HJMKFAGJIJK; // 0x1B8
		::System::Boolean FMNEEONAMNO; // 0x1C0
		::System::Byte _padding0[0x3];
		::System::Single HBDJCFFDGDD; // 0x1C4
		::RPG::GameCore::UIDamageTextType DBNPLBHAGAK; // 0x1C8
		::RPG::GameCore::DamateTextFontStyle IJMCKCJJKIO; // 0x1CC
		::RPG::GameCore::TeamType AHJJPBGGOMK; // 0x1D0
		::System::Single IONFONLCDPF; // 0x1D4
		::System::Single NGMPALMFOKL; // 0x1D8
		::UnityEngine::Vector2 IDGKNMLPGDL; // 0x1DC
		::System::Boolean JFICJNIJEEF; // 0x1E4
		::System::Boolean MCAPIAKDMAA; // 0x1E5
		::System::Boolean MKMANBDNKOE; // 0x1E6
		::System::Boolean POGICBHCJIB; // 0x1E7
		static ::RPG::Client::UIFloatingTextType* StaticGet_NLJOLBBHFGE()
		{
			return (::RPG::Client::UIFloatingTextType*)UnitySDK::FromName("", "ANJOILDLGOC")->GetStaticField(0x6D80);
		}

		static ::System::Int32* StaticGet__TopPriority_k__BackingField()
		{
			return (::System::Int32*)UnitySDK::FromName("", "ANJOILDLGOC")->GetStaticField(0x6D84);
		}

		// static const ::System::String* HLGKMIDBBAE; // 0x0
		// static const ::System::String* DIIKAJKIELN; // 0x0
		// static const ::System::String* JCPPELPKKCL; // 0x0
		// static const ::System::String* GKBPLMIHJEB; // 0x0
		// static const ::System::String* AALPMBONBHL; // 0x0
		// static const ::System::String* LECMFHLPFMB; // 0x0
		// static const ::System::String* KHGCFCONFCE; // 0x0
		// static const ::System::String* BCFBABOOIOP; // 0x0
		// static const ::System::String* FLMHKEPCAJN; // 0x0
		// static const ::System::String* MMPFBOJAGBC; // 0x0
		// static const ::System::String* BALINMINBEH; // 0x0
		// static const ::System::String* COHHKHMIALA; // 0x0
		// static const ::System::String* HJNONKGHIHE; // 0x0
		// static const ::System::String* BODOECOBKEJ; // 0x0
		// static const ::System::String* APIBFLFJKDG; // 0x0
		// static const ::System::String* OGLJPMOEGBJ; // 0x0
		// static const ::System::String* OLOEIOGALGN; // 0x0
		// static const ::System::String* PGPFCHLCIHA; // 0x0
		// static const ::System::String* BEFAAMKANFC; // 0x0
		// static const ::System::String* MDLAPNAJHLJ; // 0x0
		// static const ::System::Object ILBDFAMFIIE; // 0x0
		// static const ::System::Object DEEELBPNKAE; // 0x0
		// static const ::System::Object HEMLEDIIGPB; // 0x0
		// static const ::System::String* KLOHNJIJOAF; // 0x0
		// static const ::System::String* LJIKDLEPPKE; // 0x0
		// static const ::System::String* NGLELEEFOOI; // 0x0
		// static const ::System::String* LKFJNJJEBGF; // 0x0
		// static const ::System::String* EJLLLIKHKMI; // 0x0
		// static const ::System::String* JKBDJHCFKEP; // 0x0
		// static const ::System::String* KKHODKIKGED; // 0x0
		// static const ::System::String* GCJJPMICABD; // 0x0
		// static const ::System::String* GDFKDDLDACB; // 0x0
		// static const ::System::String* DJNCPMIDDJE; // 0x0
		// static const ::System::String* EFGHHFABHAJ; // 0x0
		// static const ::System::String* NEELGIMCPKF; // 0x0
		// static const ::System::String* HHGOEDMPBCB; // 0x0
		// static const ::System::String* EMBNBDLBLDN; // 0x0
		// static const ::System::String* DCOAJMLJIJG; // 0x0
		// static const ::System::String* LDEEIEEGGOB; // 0x0
		// static const ::System::String* FGFICDBMOIN; // 0x0
		// static const ::System::Object HAOKFOMALML; // 0x0
		// static const ::System::Object OKEAMKKKKHF; // 0x0
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ANJOILDLGOC_CTOR_OFFSET))(this);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + ANJOILDLGOC_CCTOR_OFFSET))();
		}

		::System::Void _OnBind()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ANJOILDLGOC__ONBIND_OFFSET))(this);
		}

		::System::Void JMOGHCFMBBN()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ANJOILDLGOC_JMOGHCFMBBN_OFFSET))(this);
		}

		::System::Void _OnInitParams(::IGKFNIEJGLM a1)
		{
			return ((::System::Void(*)(::PVOID, ::IGKFNIEJGLM))((::PBYTE)hIl2Cpp + ANJOILDLGOC__ONINITPARAMS_OFFSET))(this, a1);
		}

		::System::Void _OnTick(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + ANJOILDLGOC__ONTICK_OFFSET))(this, a1);
		}

		::System::Void _OnDispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ANJOILDLGOC__ONDISPOSE_OFFSET))(this);
		}

		::System::Void DMKJAJLNEBK()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ANJOILDLGOC_DMKJAJLNEBK_OFFSET))(this);
		}

		::System::Void KBPMCFICODM(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + ANJOILDLGOC_KBPMCFICODM_OFFSET))(this, a1);
		}

		::System::Void DBBINCLKEBL(::UnityEngine::GameObject* a1, ::UnityEngine::Vector3 a2, ::UnityEngine::Vector3 a3, ::System::Boolean a4, ::System::Boolean a5)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::GameObject*, ::UnityEngine::Vector3, ::UnityEngine::Vector3, ::System::Boolean, ::System::Boolean))((::PBYTE)hIl2Cpp + ANJOILDLGOC_DBBINCLKEBL_OFFSET))(this, a1, a2, a3, a4, a5);
		}

		::System::Void LKFJFGPFEJJ(::RPG::GameCore::GameEntity* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::GameEntity*))((::PBYTE)hIl2Cpp + ANJOILDLGOC_LKFJFGPFEJJ_OFFSET))(this, a1);
		}

		::System::Void BNAKANKCDJM()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ANJOILDLGOC_BNAKANKCDJM_OFFSET))(this);
		}

		::System::Void BLKAAEJPNBE(::RPG::GameCore::FixPoint a1, ::System::Boolean a2, ::DamageTextStyle* a3, ::System::Single a4, ::System::Single a5)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::FixPoint, ::System::Boolean, ::DamageTextStyle*, ::System::Single, ::System::Single))((::PBYTE)hIl2Cpp + ANJOILDLGOC_BLKAAEJPNBE_OFFSET))(this, a1, a2, a3, a4, a5);
		}

		::System::Void CMENKDFNLKN(::RPG::GameCore::DamateTextFontStyle a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::DamateTextFontStyle))((::PBYTE)hIl2Cpp + ANJOILDLGOC_CMENKDFNLKN_OFFSET))(this, a1);
		}

		::System::Void FDDNFBKOPEO(::RPG::Client::UIFloatingTextType a1, ::DamageTextStyle* a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::UIFloatingTextType, ::DamageTextStyle*))((::PBYTE)hIl2Cpp + ANJOILDLGOC_FDDNFBKOPEO_OFFSET))(this, a1, a2);
		}

		::System::Void HBCFGBLMOAI(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + ANJOILDLGOC_HBCFGBLMOAI_OFFSET))(this, a1);
		}

		::System::Void KGPADEBHHCF(::System::String* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + ANJOILDLGOC_KGPADEBHHCF_OFFSET))(this, a1);
		}

		::System::Void ILCIFBBJMHN(::RPG::GameCore::AttackDamageType a1, ::DamageTextStyle* a2, ::System::Nullable_1<::RPG::GameCore::ElementDamageType> a3, ::System::Single a4, ::RPG::Client::UIFloatingTextType a5)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::AttackDamageType, ::DamageTextStyle*, ::System::Nullable_1<::RPG::GameCore::ElementDamageType>, ::System::Single, ::RPG::Client::UIFloatingTextType))((::PBYTE)hIl2Cpp + ANJOILDLGOC_ILCIFBBJMHN_OFFSET))(this, a1, a2, a3, a4, a5);
		}

		::System::Void NGNHIBHOMEH()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ANJOILDLGOC_NGNHIBHOMEH_OFFSET))(this);
		}

		static ::System::Boolean BBEDBNEJIKJ(::RPG::Client::UIFloatingTextType a1)
		{
			return ((::System::Boolean(*)(::RPG::Client::UIFloatingTextType))((::PBYTE)hIl2Cpp + ANJOILDLGOC_BBEDBNEJIKJ_OFFSET))(a1);
		}

		::System::Boolean JCEONOPDFPL()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + ANJOILDLGOC_JCEONOPDFPL_OFFSET))(this);
		}

		::System::Void LFHCAHAKADB()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ANJOILDLGOC_LFHCAHAKADB_OFFSET))(this);
		}

		::System::Void NFDKHHOPHNI(::RPG::GameCore::AttackDamageType a1, ::System::Boolean a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::AttackDamageType, ::System::Boolean))((::PBYTE)hIl2Cpp + ANJOILDLGOC_NFDKHHOPHNI_OFFSET))(this, a1, a2);
		}

		::System::String* OKFGPKFMJDI(::RPG::GameCore::AttackDamageType a1)
		{
			return ((::System::String*(*)(::PVOID, ::RPG::GameCore::AttackDamageType))((::PBYTE)hIl2Cpp + ANJOILDLGOC_OKFGPKFMJDI_OFFSET))(this, a1);
		}

		::UnityEngine::GameObject* AAHFKBIMABA(::System::String* a1, ::UnityEngine::Transform* a2)
		{
			return ((::UnityEngine::GameObject*(*)(::PVOID, ::System::String*, ::UnityEngine::Transform*))((::PBYTE)hIl2Cpp + ANJOILDLGOC_AAHFKBIMABA_OFFSET))(this, a1, a2);
		}

		::System::Void KMBKFDPBNDD()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ANJOILDLGOC_KMBKFDPBNDD_OFFSET))(this);
		}

		::System::Void KOCDKMAGDHP(::System::String* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + ANJOILDLGOC_KOCDKMAGDHP_OFFSET))(this, a1);
		}

		::System::Void PDCLAMCGOPB(::System::String* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + ANJOILDLGOC_PDCLAMCGOPB_OFFSET))(this, a1);
		}

		::System::Void KDNBBAGGHNL(::RPG::Client::TextID a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::TextID))((::PBYTE)hIl2Cpp + ANJOILDLGOC_KDNBBAGGHNL_OFFSET))(this, a1);
		}

		::System::Void IPDICBEBJKL()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ANJOILDLGOC_IPDICBEBJKL_OFFSET))(this);
		}

		::System::Void FPONIFNONMA(::DamageTextStyle* a1)
		{
			return ((::System::Void(*)(::PVOID, ::DamageTextStyle*))((::PBYTE)hIl2Cpp + ANJOILDLGOC_FPONIFNONMA_OFFSET))(this, a1);
		}

		::System::Void BBIJCDDOGHJ(::DamageTextStyle* a1)
		{
			return ((::System::Void(*)(::PVOID, ::DamageTextStyle*))((::PBYTE)hIl2Cpp + ANJOILDLGOC_BBIJCDDOGHJ_OFFSET))(this, a1);
		}

		::System::Void KANDLICLHBO(::RPG::Client::TextID a1, ::DamageTextStyle* a2, ::System::Single a3, ::System::Int32 a4)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::TextID, ::DamageTextStyle*, ::System::Single, ::System::Int32))((::PBYTE)hIl2Cpp + ANJOILDLGOC_KANDLICLHBO_OFFSET))(this, a1, a2, a3, a4);
		}

		::System::Void BCEEMEBGLGG(::DamageTextStyle* a1)
		{
			return ((::System::Void(*)(::PVOID, ::DamageTextStyle*))((::PBYTE)hIl2Cpp + ANJOILDLGOC_BCEEMEBGLGG_OFFSET))(this, a1);
		}

		::System::Void BBCJHNPLENB(::RPG::GameCore::FixPoint a1, ::RPG::Client::UIFloatingTextType a2, ::CHMCAGBDPJH a3)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::FixPoint, ::RPG::Client::UIFloatingTextType, ::CHMCAGBDPJH))((::PBYTE)hIl2Cpp + ANJOILDLGOC_BBCJHNPLENB_OFFSET))(this, a1, a2, a3);
		}

		::System::Void GOCLDGPEDBO()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ANJOILDLGOC_GOCLDGPEDBO_OFFSET))(this);
		}

		::System::Void DPGGDECJENG(::RPG::GameCore::FixPoint a1, ::RPG::Client::UIFloatingTextType a2, ::CHMCAGBDPJH a3)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::FixPoint, ::RPG::Client::UIFloatingTextType, ::CHMCAGBDPJH))((::PBYTE)hIl2Cpp + ANJOILDLGOC_DPGGDECJENG_OFFSET))(this, a1, a2, a3);
		}

		::System::Void GGHJALOAIOD(::System::String* a1, ::RPG::Client::UIFloatingTextType a2, ::System::Single a3)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*, ::RPG::Client::UIFloatingTextType, ::System::Single))((::PBYTE)hIl2Cpp + ANJOILDLGOC_GGHJALOAIOD_OFFSET))(this, a1, a2, a3);
		}

		::System::Void CIKAIGDDGNC(::System::String* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + ANJOILDLGOC_CIKAIGDDGNC_OFFSET))(this, a1);
		}

		::System::Void BCAMNAGBDDC(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + ANJOILDLGOC_BCAMNAGBDDC_OFFSET))(this, a1);
		}

		::System::Void AHBBDFJOLBL(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + ANJOILDLGOC_AHBBDFJOLBL_OFFSET))(this, a1);
		}

		::System::Void LEAEJLELMLM(::System::Int32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + ANJOILDLGOC_LEAEJLELMLM_OFFSET))(this, a1);
		}

		::System::Boolean ELGFFIJPJGO()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + ANJOILDLGOC_ELGFFIJPJGO_OFFSET))(this);
		}

		::System::String* EMCBHIAHJOH(::RPG::Client::UIFloatingTextType a1, ::System::Boolean a2, ::CHMCAGBDPJH a3)
		{
			return ((::System::String*(*)(::PVOID, ::RPG::Client::UIFloatingTextType, ::System::Boolean, ::CHMCAGBDPJH))((::PBYTE)hIl2Cpp + ANJOILDLGOC_EMCBHIAHJOH_OFFSET))(this, a1, a2, a3);
		}

		::System::Void FHJPGPKMHPE(::MLAGKIPMNJO* a1)
		{
			return ((::System::Void(*)(::PVOID, ::MLAGKIPMNJO*))((::PBYTE)hIl2Cpp + ANJOILDLGOC_FHJPGPKMHPE_OFFSET))(this, a1);
		}

		::System::Void BDBCEHOCCCP()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ANJOILDLGOC_BDBCEHOCCCP_OFFSET))(this);
		}

		::System::Collections::Generic::List_1<::System::Tuple_2<::RPG::Client::UIFloatingTextType, ::System::String*>*>* FGKPPNIDDEA()
		{
			return ((::System::Collections::Generic::List_1<::System::Tuple_2<::RPG::Client::UIFloatingTextType, ::System::String*>*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + ANJOILDLGOC_FGKPPNIDDEA_OFFSET))(this);
		}

		::System::Void DOGAJHCKDGN(::System::Int64 a1, ::DamageTextStyle* a2, ::System::Single a3, ::System::Single a4)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int64, ::DamageTextStyle*, ::System::Single, ::System::Single))((::PBYTE)hIl2Cpp + ANJOILDLGOC_DOGAJHCKDGN_OFFSET))(this, a1, a2, a3, a4);
		}

		::System::Void BJKBMCEPBCJ(::System::String* a1, ::DamageTextStyle* a2, ::System::Single a3, ::System::Single a4)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*, ::DamageTextStyle*, ::System::Single, ::System::Single))((::PBYTE)hIl2Cpp + ANJOILDLGOC_BJKBMCEPBCJ_OFFSET))(this, a1, a2, a3, a4);
		}

		::System::Void KBNAELGOOAN(::System::String* a1, ::DamageTextStyle* a2, ::System::Single a3, ::System::Single a4)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*, ::DamageTextStyle*, ::System::Single, ::System::Single))((::PBYTE)hIl2Cpp + ANJOILDLGOC_KBNAELGOOAN_OFFSET))(this, a1, a2, a3, a4);
		}

		::System::Void AIDMFNEIFOH(::System::Int32 a1, ::System::String* a2, ::DamageTextStyle* a3, ::System::Single a4, ::System::Single a5)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::String*, ::DamageTextStyle*, ::System::Single, ::System::Single))((::PBYTE)hIl2Cpp + ANJOILDLGOC_AIDMFNEIFOH_OFFSET))(this, a1, a2, a3, a4, a5);
		}

		::System::Void NAOGNDLGJFN(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + ANJOILDLGOC_NAOGNDLGJFN_OFFSET))(this, a1);
		}

		::System::Void BPNNDDHJPHO()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ANJOILDLGOC_BPNNDDHJPHO_OFFSET))(this);
		}

		::System::Void DLBINDMECON(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + ANJOILDLGOC_DLBINDMECON_OFFSET))(this, a1);
		}

		::System::Void JCLCJMFLPEN(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + ANJOILDLGOC_JCLCJMFLPEN_OFFSET))(this, a1);
		}

		::RPG::GameCore::TeamType GBCKGALGBFK()
		{
			return ((::RPG::GameCore::TeamType(*)(::PVOID))((::PBYTE)hIl2Cpp + ANJOILDLGOC_GBCKGALGBFK_OFFSET))(this);
		}

		::System::Void BJLGAKPFGPI(::RPG::GameCore::UIDamageTextType a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::UIDamageTextType))((::PBYTE)hIl2Cpp + ANJOILDLGOC_BJLGAKPFGPI_OFFSET))(this, a1);
		}

		::System::Void NCGPFJEFEFM()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ANJOILDLGOC_NCGPFJEFEFM_OFFSET))(this);
		}

		::System::Void IJFBDGDOKFN()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ANJOILDLGOC_IJFBDGDOKFN_OFFSET))(this);
		}

		::System::Boolean JCPEFMJABKD()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + ANJOILDLGOC_JCPEFMJABKD_OFFSET))(this);
		}

		::System::Void IDNNMILIDLN()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ANJOILDLGOC_IDNNMILIDLN_OFFSET))(this);
		}

		::System::Void BIOBBNGDGDF(::System::String* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + ANJOILDLGOC_BIOBBNGDGDF_OFFSET))(this, a1);
		}

		::System::Void OGMJAGMJOPN(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + ANJOILDLGOC_OGMJAGMJOPN_OFFSET))(this, a1);
		}

		::System::Void LDFJMBHFDHP()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ANJOILDLGOC_LDFJMBHFDHP_OFFSET))(this);
		}

		::System::Boolean NLNDGOIKOJO()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + ANJOILDLGOC_NLNDGOIKOJO_OFFSET))(this);
		}

		::System::Void KGPANCMMECP(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + ANJOILDLGOC_KGPANCMMECP_OFFSET))(this, a1);
		}

		::System::Void FCEGGNNJKNG()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ANJOILDLGOC_FCEGGNNJKNG_OFFSET))(this);
		}

		::System::Void OECGDLMMFKB()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ANJOILDLGOC_OECGDLMMFKB_OFFSET))(this);
		}

		::System::Void MNOMKBOEGME()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ANJOILDLGOC_MNOMKBOEGME_OFFSET))(this);
		}

		::System::Void CGABKPLCMOO()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ANJOILDLGOC_CGABKPLCMOO_OFFSET))(this);
		}

		::System::Void MKNGAHPPLFB(::PAFPMNHFBME* a1)
		{
			return ((::System::Void(*)(::PVOID, ::PAFPMNHFBME*))((::PBYTE)hIl2Cpp + ANJOILDLGOC_MKNGAHPPLFB_OFFSET))(this, a1);
		}

		::System::Void MKNGAHPPLFB_1(::HDLBCFBLGKN* a1)
		{
			return ((::System::Void(*)(::PVOID, ::HDLBCFBLGKN*))((::PBYTE)hIl2Cpp + ANJOILDLGOC_MKNGAHPPLFB_1_OFFSET))(this, a1);
		}

		::System::Void OKLNDHONALB()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ANJOILDLGOC_OKLNDHONALB_OFFSET))(this);
		}

		::System::Void GMEMPDKHCNE(::UnityEngine::Font* a1)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Font*))((::PBYTE)hIl2Cpp + ANJOILDLGOC_GMEMPDKHCNE_OFFSET))(this, a1);
		}

		::UnityEngine::Font* MLADMKEPCBO(::RPG::GameCore::DamateTextFontStyle a1)
		{
			return ((::UnityEngine::Font*(*)(::PVOID, ::RPG::GameCore::DamateTextFontStyle))((::PBYTE)hIl2Cpp + ANJOILDLGOC_MLADMKEPCBO_OFFSET))(this, a1);
		}

		::UnityEngine::Font* AKEDNFHBHLO(::RPG::GameCore::DamateTextFontStyle a1)
		{
			return ((::UnityEngine::Font*(*)(::PVOID, ::RPG::GameCore::DamateTextFontStyle))((::PBYTE)hIl2Cpp + ANJOILDLGOC_AKEDNFHBHLO_OFFSET))(this, a1);
		}

		static ::System::Int32 get_TopPriority()
		{
			return ((::System::Int32(*)())((::PBYTE)hIl2Cpp + ANJOILDLGOC_GET_TOPPRIORITY_OFFSET))();
		}

		static ::System::Void set_TopPriority(::System::Int32 a1)
		{
			return ((::System::Void(*)(::System::Int32))((::PBYTE)hIl2Cpp + ANJOILDLGOC_SET_TOPPRIORITY_OFFSET))(a1);
		}

		::System::Single JJJJJJJFHOO()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + ANJOILDLGOC_JJJJJJJFHOO_OFFSET))(this);
		}

		::System::Void BFECNJGOIJI()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ANJOILDLGOC_BFECNJGOIJI_OFFSET))(this);
		}

		::System::Void ELFMECIJBFM(::RPG::Client::UIFloatingTextType a1, ::DamageTextStyle* a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::UIFloatingTextType, ::DamageTextStyle*))((::PBYTE)hIl2Cpp + ANJOILDLGOC_ELFMECIJBFM_OFFSET))(this, a1, a2);
		}

		::System::Void GIMOICLMIOP(::System::Object* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + ANJOILDLGOC_GIMOICLMIOP_OFFSET))(this, a1);
		}

		::System::Void IPDMMOCAEPO(::System::Object* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + ANJOILDLGOC_IPDMMOCAEPO_OFFSET))(this, a1);
		}

		::System::Void AutoBindCallback()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ANJOILDLGOC_AUTOBINDCALLBACK_OFFSET))(this);
		}

		::System::Void AutoRemoveCallback()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ANJOILDLGOC_AUTOREMOVECALLBACK_OFFSET))(this);
		}

	};
