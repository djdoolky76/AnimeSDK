#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/GDMONJOAKHD.h"
#include "unitysdk/RPG/Client/OpenWorld/StreamingItemEnableReason.h"
#include "unitysdk/System/ValueTuple_2.h"
#include "unitysdk/GEEOPFIMJEM.h"
#include "unitysdk/RPG/Client/TriggerEffectCallbackParams.h"
class BJBDLDCDDJH;
class DBMBGHNGDCG;
class GDKHHPPIFBC;
class HPKACEPPPCA;
class KLEFGGIHGMI;
class LEAKCHFEDDK;
class LJFHKAJPFNE;
namespace RPG { class IReference; }
namespace RPG::Client { class MonoEffect; }
namespace RPG::Client::OpenWorld { class StreamingItemData; }
namespace RPG::Client::OpenWorld { class StreamingLayerDetail; }
namespace RPG::GameCore { class BlockNodeConfig; }
namespace System { class Action; }
namespace System { class Object; }
namespace System { class String; }
namespace System { template <typename T1, typename T2, typename T3, typename T4> class Action_4; }
namespace System { template <typename T1, typename T2, typename T3> class Action_3; }
namespace System { template <typename T1, typename T2> class Action_2; }
namespace System { template <typename T> class Action_1; }
namespace System::Collections { class IEnumerator; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T> class HashSet_1; }
namespace System::Collections::Generic { template <typename T> class List_1; }
namespace UnityEngine { class Animator; }
namespace UnityEngine { class GameObject; }
namespace UnityEngine { class Object; }

#define BMIKHDAIIMO_AFOINLLGKHJ_OFFSET UNITYSDK_OFFSET(0xBDB83B0)
#define BMIKHDAIIMO_AHLJAAHIMLG_OFFSET UNITYSDK_OFFSET(0xBDB50B0)
#define BMIKHDAIIMO_ALBEJGHIMDF_OFFSET UNITYSDK_OFFSET(0xBDB0B40)
#define BMIKHDAIIMO_ANFNAOJBJHJ_OFFSET UNITYSDK_OFFSET(0xBDB2870)
#define BMIKHDAIIMO_BEELIJPKMJH_OFFSET UNITYSDK_OFFSET(0xBDB6B00)
#define BMIKHDAIIMO_BGBPEMJCGLH_OFFSET UNITYSDK_OFFSET(0xBDAF7A0)
#define BMIKHDAIIMO_BGIBFOBNBEK_OFFSET UNITYSDK_OFFSET(0xBDB4720)
#define BMIKHDAIIMO_BLFMDHEAFPK_OFFSET UNITYSDK_OFFSET(0xBDB1780)
#define BMIKHDAIIMO_CCTOR_OFFSET UNITYSDK_OFFSET(0xBDB8780)
#define BMIKHDAIIMO_CHBLMDEOMIB_OFFSET UNITYSDK_OFFSET(0xBDB2E00)
#define BMIKHDAIIMO_CHGPNCEFDIL_OFFSET UNITYSDK_OFFSET(0xBDAC270)
#define BMIKHDAIIMO_CTOR_OFFSET UNITYSDK_OFFSET(0xBDAD550)
#define BMIKHDAIIMO_DEFPLILGPEP_OFFSET UNITYSDK_OFFSET(0xBDB7B50)
#define BMIKHDAIIMO_DISPOSE_OFFSET UNITYSDK_OFFSET(0xBDB0270)
#define BMIKHDAIIMO_DLFJIBAFHFJ_OFFSET UNITYSDK_OFFSET(0xBDB12F0)
#define BMIKHDAIIMO_DLHKJOCBHLN_OFFSET UNITYSDK_OFFSET(0xBDB0920)
#define BMIKHDAIIMO_EAEAEGCEEGL_OFFSET UNITYSDK_OFFSET(0xBDB5280)
#define BMIKHDAIIMO_EAJIJLANAEK_OFFSET UNITYSDK_OFFSET(0xBDB2340)
#define BMIKHDAIIMO_EBBDALJMBNL_OFFSET UNITYSDK_OFFSET(0xBDAF520)
#define BMIKHDAIIMO_ECFFILNJHAK_OFFSET UNITYSDK_OFFSET(0xBDB5E10)
#define BMIKHDAIIMO_EHEFOMADFOL_OFFSET UNITYSDK_OFFSET(0xBDB1D20)
#define BMIKHDAIIMO_ENJMMHDCAPH_OFFSET UNITYSDK_OFFSET(0xBDB35A0)
#define BMIKHDAIIMO_FACEFFLCGCI_OFFSET UNITYSDK_OFFSET(0xBDB59F0)
#define BMIKHDAIIMO_FADLCKHHOOL_OFFSET UNITYSDK_OFFSET(0xBDB7750)
#define BMIKHDAIIMO_FHJPIOANBCD_OFFSET UNITYSDK_OFFSET(0xBDB81E0)
#define BMIKHDAIIMO_FLBNHJDAACM_OFFSET UNITYSDK_OFFSET(0xBDABB60)
#define BMIKHDAIIMO_FNKMIDCMPKI_OFFSET UNITYSDK_OFFSET(0xBDB2580)
#define BMIKHDAIIMO_GDGNCMOGJML_OFFSET UNITYSDK_OFFSET(0xBDB26C0)
#define BMIKHDAIIMO_GEBPEDNOGOO_OFFSET UNITYSDK_OFFSET(0xBDB0D40)
#define BMIKHDAIIMO_GEDIJPCNOFH_OFFSET UNITYSDK_OFFSET(0xBDAF0C0)
#define BMIKHDAIIMO_GJIAHHFDNML_OFFSET UNITYSDK_OFFSET(0xBDB62A0)
#define BMIKHDAIIMO_GLLGIMANCBA_OFFSET UNITYSDK_OFFSET(0xBDB50A0)
#define BMIKHDAIIMO_HCEACDJEPBK_OFFSET UNITYSDK_OFFSET(0xBDB6330)
#define BMIKHDAIIMO_HCENOJOGGDM_OFFSET UNITYSDK_OFFSET(0xBDB24B0)
#define BMIKHDAIIMO_HDEKKDINGBB_OFFSET UNITYSDK_OFFSET(0xBDB48C0)
#define BMIKHDAIIMO_HFHLAHLONIJ_OFFSET UNITYSDK_OFFSET(0xBDB3B50)
#define BMIKHDAIIMO_HGMIJIHFIGP_OFFSET UNITYSDK_OFFSET(0xBDB2AA0)
#define BMIKHDAIIMO_HHKDLOAEOKJ_OFFSET UNITYSDK_OFFSET(0xBDB1300)
#define BMIKHDAIIMO_HLIHPHLLDEG_OFFSET UNITYSDK_OFFSET(0xBDB1AD0)
#define BMIKHDAIIMO_HPBEIFPFOOF_OFFSET UNITYSDK_OFFSET(0xBDB6E80)
#define BMIKHDAIIMO_IAJBLHPAIFP_OFFSET UNITYSDK_OFFSET(0xBDB7F30)
#define BMIKHDAIIMO_ICLAFDDNBOA_OFFSET UNITYSDK_OFFSET(0xBDB53A0)
#define BMIKHDAIIMO_IHLPACOINJM_OFFSET UNITYSDK_OFFSET(0xBDB5120)
#define BMIKHDAIIMO_IIIKIOKBIKF_OFFSET UNITYSDK_OFFSET(0xBDAFBA0)
#define BMIKHDAIIMO_IKMEFIOAHML_OFFSET UNITYSDK_OFFSET(0xBDB0F50)
#define BMIKHDAIIMO_INACTIVEINSTANCE_OFFSET UNITYSDK_OFFSET(0xBDAF8A0)
#define BMIKHDAIIMO_INJDBOOGNOE_OFFSET UNITYSDK_OFFSET(0xBDAF930)
#define BMIKHDAIIMO_JAPPMFADAAH_OFFSET UNITYSDK_OFFSET(0xBDAFF60)
#define BMIKHDAIIMO_JHLEGDIMNJG_OFFSET UNITYSDK_OFFSET(0xBDB7ED0)
#define BMIKHDAIIMO_JLHCDBJEIDM_OFFSET UNITYSDK_OFFSET(0xBDB10F0)
#define BMIKHDAIIMO_JLOINJDNMFA_OFFSET UNITYSDK_OFFSET(0xBDB37D0)
#define BMIKHDAIIMO_KDGJDBJADMJ_OFFSET UNITYSDK_OFFSET(0xBDB4640)
#define BMIKHDAIIMO_KDNDFCJOKHM_OFFSET UNITYSDK_OFFSET(0xBDB5C30)
#define BMIKHDAIIMO_KGOMOMECIHL_OFFSET UNITYSDK_OFFSET(0xBDB3020)
#define BMIKHDAIIMO_KHFGDHIFNMC_OFFSET UNITYSDK_OFFSET(0xBDB2D40)
#define BMIKHDAIIMO_KIDLGGJOALC_OFFSET UNITYSDK_OFFSET(0xBDB4D90)
#define BMIKHDAIIMO_KLGHPJKPPON_OFFSET UNITYSDK_OFFSET(0xBDB72C0)
#define BMIKHDAIIMO_KPIHAJILPIK_OFFSET UNITYSDK_OFFSET(0xBDABF00)
#define BMIKHDAIIMO_LCIEOKMALAL_OFFSET UNITYSDK_OFFSET(0xBDAFAE0)
#define BMIKHDAIIMO_LHCNGJJPJCN_OFFSET UNITYSDK_OFFSET(0xBDB75C0)
#define BMIKHDAIIMO_LLLLNCDAJFK_OFFSET UNITYSDK_OFFSET(0xBDAE180)
#define BMIKHDAIIMO_LLODPNKLBKC_OFFSET UNITYSDK_OFFSET(0xBDB7900)
#define BMIKHDAIIMO_LPDBJPJFJLG_OFFSET UNITYSDK_OFFSET(0xBDAF600)
#define BMIKHDAIIMO_LPJLFDHLCHH_OFFSET UNITYSDK_OFFSET(0xBDB4440)
#define BMIKHDAIIMO_LPOOJDFADDC_OFFSET UNITYSDK_OFFSET(0xBDAF820)
#define BMIKHDAIIMO_MCEAADDOLPE_OFFSET UNITYSDK_OFFSET(0xBDABA90)
#define BMIKHDAIIMO_MCLGFELFJHM_OFFSET UNITYSDK_OFFSET(0xBDB2140)
#define BMIKHDAIIMO_MDEABOMOHED_OFFSET UNITYSDK_OFFSET(0xBDB6070)
#define BMIKHDAIIMO_MDLHOJFGKIB_OFFSET UNITYSDK_OFFSET(0xBDB79B0)
#define BMIKHDAIIMO_MFBJAAAEPAK_OFFSET UNITYSDK_OFFSET(0xBDB0EB0)
#define BMIKHDAIIMO_MKCJGBNEEOG_OFFSET UNITYSDK_OFFSET(0xBDB5650)
#define BMIKHDAIIMO_MLMKLHFECNO_OFFSET UNITYSDK_OFFSET(0xBDAFE50)
#define BMIKHDAIIMO_MMKIJPCILNG_OFFSET UNITYSDK_OFFSET(0xBDABF90)
#define BMIKHDAIIMO_MPFKGCBDEGN_OFFSET UNITYSDK_OFFSET(0xBDAF2A0)
#define BMIKHDAIIMO_NPAGEPHDKOH_OFFSET UNITYSDK_OFFSET(0xBDAF720)
#define BMIKHDAIIMO_NPNELEBEJAL_OFFSET UNITYSDK_OFFSET(0xBDB72D0)
#define BMIKHDAIIMO_OCELGEGCHLH_OFFSET UNITYSDK_OFFSET(0xBDAF590)
#define BMIKHDAIIMO_ODGAMDGHFKH_OFFSET UNITYSDK_OFFSET(0xBDAE0B0)
#define BMIKHDAIIMO_OFDKDNGKENC_OFFSET UNITYSDK_OFFSET(0xBDB7200)
#define BMIKHDAIIMO_OKNMKHEOMFN_OFFSET UNITYSDK_OFFSET(0xBDB8410)
#define BMIKHDAIIMO_OMLKMDONHBO_OFFSET UNITYSDK_OFFSET(0xBDB0F00)
#define BMIKHDAIIMO_SOLVEFOCUSSTATUS_OFFSET UNITYSDK_OFFSET(0xBDAFF10)
#define BMIKHDAIIMO___N__0_OFFSET UNITYSDK_OFFSET(0xBDB8850)

inline static constexpr unsigned int BMIKHDAIIMO_TypeDefinitionIndex = 73875;

	class BMIKHDAIIMO : public ::GDMONJOAKHD
	{
	public:
		::System::Collections::Generic::List_1<::UnityEngine::GameObject*>* LGIOCJOIKCL; // 0x170
		::System::Collections::Generic::Dictionary_2<::RPG::Client::OpenWorld::StreamingItemData*, ::System::Collections::Generic::List_1<::System::Action_2<::HPKACEPPPCA*, ::RPG::Client::OpenWorld::StreamingItemData*>*>*>* GJCHMCLJJIC; // 0x178
		::System::Collections::Generic::List_1<::GDKHHPPIFBC*>* BABHOKBOIIM; // 0x180
		::System::Collections::Generic::Dictionary_2<::RPG::Client::OpenWorld::StreamingItemData*, ::System::Action*>* PEOEOEMOIBA; // 0x188
		::System::Collections::Generic::List_1<::RPG::Client::OpenWorld::StreamingItemData*>* PEJCFIJGHOG; // 0x190
		::UnityEngine::GameObject* DHIBMDEMIBN; // 0x198
		::System::Collections::Generic::Dictionary_2<::System::UInt32, ::RPG::Client::OpenWorld::StreamingItemData*>* PBLPABIEKAE; // 0x1A0
		::System::Collections::Generic::Dictionary_2<::RPG::Client::OpenWorld::StreamingItemData*, ::System::Action_2<::UnityEngine::GameObject*, ::RPG::Client::OpenWorld::StreamingItemData*>*>* AOGDLGCPLDM; // 0x1A8
		::System::Collections::Generic::HashSet_1<::GDKHHPPIFBC*>* NCFAJNNNLLO; // 0x1B0
		::System::Collections::Generic::Dictionary_2<::RPG::Client::OpenWorld::StreamingItemData*, ::System::Action_2<::UnityEngine::GameObject*, ::RPG::Client::OpenWorld::StreamingItemData*>*>* MNOFODNNJBK; // 0x1B8
		::System::Collections::Generic::Dictionary_2<::RPG::Client::OpenWorld::StreamingItemData*, ::UnityEngine::GameObject*>* BFKLKBLFDJM; // 0x1C0
		::System::Collections::Generic::Dictionary_2<::RPG::Client::OpenWorld::StreamingItemData*, ::RPG::Client::OpenWorld::StreamingItemData*>* BLIALOMGCAG; // 0x1C8
		::System::Action_4<::RPG::IReference*, ::RPG::Client::OpenWorld::StreamingItemData*, ::UnityEngine::GameObject*, ::System::Boolean>* KFGPOPEIHEC; // 0x1D0
		::System::Collections::Generic::Dictionary_2<::RPG::Client::OpenWorld::StreamingItemData*, ::System::String*>* DFJPLPKPENC; // 0x1D8
		::UnityEngine::GameObject* OHOHNFLOJLD; // 0x1E0
		::System::Collections::Generic::Dictionary_2<::RPG::Client::OpenWorld::StreamingItemData*, ::System::Action_2<::RPG::Client::OpenWorld::StreamingItemData*, ::UnityEngine::GameObject*>*>* ONBKLFIPFAE; // 0x1E8
		::System::Action_3<::UnityEngine::Object*, ::RPG::IReference*, ::RPG::Client::OpenWorld::StreamingItemData*>* GOHDFBGBNOG; // 0x1F0
		::System::Collections::Generic::List_1<::System::Action*>* NGGPINFCDFM; // 0x1F8
		::System::Collections::Generic::Dictionary_2<::LEAKCHFEDDK*, ::DBMBGHNGDCG*>* GMGPNENHNDD; // 0x200
		::System::Collections::Generic::Dictionary_2<::RPG::Client::OpenWorld::StreamingItemData*, ::System::Action_3<::RPG::Client::OpenWorld::StreamingItemData*, ::UnityEngine::GameObject*, ::UnityEngine::GameObject*>*>* DBPAFIALIDA; // 0x208
		::System::Collections::Generic::Dictionary_2<::RPG::Client::OpenWorld::StreamingItemData*, ::UnityEngine::GameObject*>* OPGLLHKDIPA; // 0x210
		::RPG::Client::OpenWorld::StreamingItemData* ILPEPNHECJG; // 0x218
		::System::Collections::Generic::Dictionary_2<::RPG::Client::OpenWorld::StreamingItemData*, ::System::Collections::Generic::List_1<::RPG::Client::OpenWorld::StreamingItemData*>*>* ANJNJBEADFP; // 0x220
		::System::Collections::Generic::Dictionary_2<::RPG::Client::OpenWorld::StreamingItemData*, ::System::ValueTuple_2<::System::String*, ::System::Int32>>* HBJPLNOJHNH; // 0x228
		::System::Collections::Generic::HashSet_1<::UnityEngine::Animator*>* AFMMOAIHNNN; // 0x230
		::System::Collections::Generic::Dictionary_2<::RPG::Client::OpenWorld::StreamingItemData*, ::UnityEngine::Object*>* CFJHBCPDEKB; // 0x238
		::System::Collections::Generic::HashSet_1<::RPG::Client::OpenWorld::StreamingItemData*>* EOEDOEHHFGD; // 0x240
		::System::Collections::Generic::Dictionary_2<::RPG::Client::OpenWorld::StreamingItemData*, ::System::Action_1<::RPG::Client::OpenWorld::StreamingItemData*>*>* DIAEPIJPBMN; // 0x248
		::System::Collections::Generic::Dictionary_2<::RPG::Client::OpenWorld::StreamingItemData*, ::System::UInt32>* HPIAFGBPBJB; // 0x250
		::System::Collections::Generic::Dictionary_2<::RPG::Client::OpenWorld::StreamingItemData*, ::UnityEngine::GameObject*>* IEILHOMKHND; // 0x258
		::System::Collections::Generic::List_1<::UnityEngine::Animator*>* OKAMPAIJNIG; // 0x260
		::System::Action* LEKJGLHBHNK; // 0x268
		::System::Collections::Generic::Dictionary_2<::System::String*, ::UnityEngine::GameObject*>* EAKDMANOIKG; // 0x270
		::System::String* BDIFNPNKGAB; // 0x278
		::System::Int32 OKFIILBDBOP; // 0x280
		::System::Boolean PIPPPDPCLPP; // 0x284
		::System::Boolean OLOLCIBBIKP; // 0x285
		static ::System::String** StaticGet_FKODHMAJOAB()
		{
			return (::System::String**)UnitySDK::FromName("", "BMIKHDAIIMO")->GetStaticField(0x2E770);
		}

		static ::System::Collections::Generic::List_1<::RPG::Client::OpenWorld::StreamingItemData*>** StaticGet_PJKACNCGFHN()
		{
			return (::System::Collections::Generic::List_1<::RPG::Client::OpenWorld::StreamingItemData*>**)UnitySDK::FromName("", "BMIKHDAIIMO")->GetStaticField(0x2E778);
		}

		static ::Il2CppArray<::System::String*>** StaticGet_GMLKHGKIHND()
		{
			return (::Il2CppArray<::System::String*>**)UnitySDK::FromName("", "BMIKHDAIIMO")->GetStaticField(0x2E780);
		}

		::System::Void _ctor(::RPG::Client::OpenWorld::StreamingLayerDetail* a1, ::LJFHKAJPFNE* a2, ::KLEFGGIHGMI* a3, ::UnityEngine::GameObject* a4, ::UnityEngine::GameObject* a5)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::OpenWorld::StreamingLayerDetail*, ::LJFHKAJPFNE*, ::KLEFGGIHGMI*, ::UnityEngine::GameObject*, ::UnityEngine::GameObject*))((::PBYTE)hIl2Cpp + BMIKHDAIIMO_CTOR_OFFSET))(this, a1, a2, a3, a4, a5);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + BMIKHDAIIMO_CCTOR_OFFSET))();
		}

		::System::Void MCEAADDOLPE(::RPG::IReference* a1, ::RPG::Client::OpenWorld::StreamingItemData* a2, ::UnityEngine::GameObject* a3, ::System::Boolean a4)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::IReference*, ::RPG::Client::OpenWorld::StreamingItemData*, ::UnityEngine::GameObject*, ::System::Boolean))((::PBYTE)hIl2Cpp + BMIKHDAIIMO_MCEAADDOLPE_OFFSET))(this, a1, a2, a3, a4);
		}

		::System::Void MMKIJPCILNG(::UnityEngine::Object* a1, ::RPG::IReference* a2, ::RPG::Client::OpenWorld::StreamingItemData* a3)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Object*, ::RPG::IReference*, ::RPG::Client::OpenWorld::StreamingItemData*))((::PBYTE)hIl2Cpp + BMIKHDAIIMO_MMKIJPCILNG_OFFSET))(this, a1, a2, a3);
		}

		::System::Void LLLLNCDAJFK()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BMIKHDAIIMO_LLLLNCDAJFK_OFFSET))(this);
		}

		::System::Void EBBDALJMBNL(::RPG::Client::OpenWorld::StreamingItemData* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::OpenWorld::StreamingItemData*))((::PBYTE)hIl2Cpp + BMIKHDAIIMO_EBBDALJMBNL_OFFSET))(this, a1);
		}

		::System::Collections::IEnumerator* OCELGEGCHLH()
		{
			return ((::System::Collections::IEnumerator*(*)(::PVOID))((::PBYTE)hIl2Cpp + BMIKHDAIIMO_OCELGEGCHLH_OFFSET))(this);
		}

		::UnityEngine::GameObject* LPDBJPJFJLG(::RPG::Client::OpenWorld::StreamingItemData* a1)
		{
			return ((::UnityEngine::GameObject*(*)(::PVOID, ::RPG::Client::OpenWorld::StreamingItemData*))((::PBYTE)hIl2Cpp + BMIKHDAIIMO_LPDBJPJFJLG_OFFSET))(this, a1);
		}

		::HPKACEPPPCA* NPAGEPHDKOH(::RPG::Client::OpenWorld::StreamingItemData* a1)
		{
			return ((::HPKACEPPPCA*(*)(::PVOID, ::RPG::Client::OpenWorld::StreamingItemData*))((::PBYTE)hIl2Cpp + BMIKHDAIIMO_NPAGEPHDKOH_OFFSET))(this, a1);
		}

		::System::Boolean BGBPEMJCGLH(::RPG::Client::OpenWorld::StreamingItemData* a1, ::System::Boolean a2)
		{
			return ((::System::Boolean(*)(::PVOID, ::RPG::Client::OpenWorld::StreamingItemData*, ::System::Boolean))((::PBYTE)hIl2Cpp + BMIKHDAIIMO_BGBPEMJCGLH_OFFSET))(this, a1, a2);
		}

		::System::Boolean LPOOJDFADDC(::RPG::Client::OpenWorld::StreamingItemData* a1, ::System::Boolean a2)
		{
			return ((::System::Boolean(*)(::PVOID, ::RPG::Client::OpenWorld::StreamingItemData*, ::System::Boolean))((::PBYTE)hIl2Cpp + BMIKHDAIIMO_LPOOJDFADDC_OFFSET))(this, a1, a2);
		}

		::System::Boolean InActiveInstance(::HPKACEPPPCA* a1, ::System::Boolean a2, ::System::Boolean a3)
		{
			return ((::System::Boolean(*)(::PVOID, ::HPKACEPPPCA*, ::System::Boolean, ::System::Boolean))((::PBYTE)hIl2Cpp + BMIKHDAIIMO_INACTIVEINSTANCE_OFFSET))(this, a1, a2, a3);
		}

		::UnityEngine::GameObject* INJDBOOGNOE(::System::String* a1)
		{
			return ((::UnityEngine::GameObject*(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + BMIKHDAIIMO_INJDBOOGNOE_OFFSET))(this, a1);
		}

		::UnityEngine::GameObject* LCIEOKMALAL(::RPG::Client::OpenWorld::StreamingItemData* a1)
		{
			return ((::UnityEngine::GameObject*(*)(::PVOID, ::RPG::Client::OpenWorld::StreamingItemData*))((::PBYTE)hIl2Cpp + BMIKHDAIIMO_LCIEOKMALAL_OFFSET))(this, a1);
		}

		::System::Void IIIKIOKBIKF(::UnityEngine::GameObject* a1, ::RPG::GameCore::BlockNodeConfig* a2, ::BJBDLDCDDJH* a3, ::System::String* a4)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::GameObject*, ::RPG::GameCore::BlockNodeConfig*, ::BJBDLDCDDJH*, ::System::String*))((::PBYTE)hIl2Cpp + BMIKHDAIIMO_IIIKIOKBIKF_OFFSET))(this, a1, a2, a3, a4);
		}

		::System::Void MLMKLHFECNO(::UnityEngine::GameObject* a1, ::RPG::GameCore::BlockNodeConfig* a2, ::BJBDLDCDDJH* a3, ::System::String* a4)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::GameObject*, ::RPG::GameCore::BlockNodeConfig*, ::BJBDLDCDDJH*, ::System::String*))((::PBYTE)hIl2Cpp + BMIKHDAIIMO_MLMKLHFECNO_OFFSET))(this, a1, a2, a3, a4);
		}

		::System::Void SolveFocusStatus(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + BMIKHDAIIMO_SOLVEFOCUSSTATUS_OFFSET))(this, a1);
		}

		::System::Void JAPPMFADAAH(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + BMIKHDAIIMO_JAPPMFADAAH_OFFSET))(this, a1);
		}

		::System::Void Dispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BMIKHDAIIMO_DISPOSE_OFFSET))(this);
		}

		::System::Void ALBEJGHIMDF(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + BMIKHDAIIMO_ALBEJGHIMDF_OFFSET))(this, a1);
		}

		::System::Void MFBJAAAEPAK(::RPG::Client::OpenWorld::StreamingItemData* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::OpenWorld::StreamingItemData*))((::PBYTE)hIl2Cpp + BMIKHDAIIMO_MFBJAAAEPAK_OFFSET))(this, a1);
		}

		::UnityEngine::GameObject* OMLKMDONHBO()
		{
			return ((::UnityEngine::GameObject*(*)(::PVOID))((::PBYTE)hIl2Cpp + BMIKHDAIIMO_OMLKMDONHBO_OFFSET))(this);
		}

		::System::Void IKMEFIOAHML(::System::Boolean a1, ::System::Action* a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean, ::System::Action*))((::PBYTE)hIl2Cpp + BMIKHDAIIMO_IKMEFIOAHML_OFFSET))(this, a1, a2);
		}

		::System::Void JLHCDBJEIDM(::System::Action* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Action*))((::PBYTE)hIl2Cpp + BMIKHDAIIMO_JLHCDBJEIDM_OFFSET))(this, a1);
		}

		::System::Void MPFKGCBDEGN()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BMIKHDAIIMO_MPFKGCBDEGN_OFFSET))(this);
		}

		::System::Void HHKDLOAEOKJ(::UnityEngine::GameObject* a1)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::GameObject*))((::PBYTE)hIl2Cpp + BMIKHDAIIMO_HHKDLOAEOKJ_OFFSET))(this, a1);
		}

		::System::Void BLFMDHEAFPK()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BMIKHDAIIMO_BLFMDHEAFPK_OFFSET))(this);
		}

		::HPKACEPPPCA* HLIHPHLLDEG(::RPG::Client::OpenWorld::StreamingItemData* a1)
		{
			return ((::HPKACEPPPCA*(*)(::PVOID, ::RPG::Client::OpenWorld::StreamingItemData*))((::PBYTE)hIl2Cpp + BMIKHDAIIMO_HLIHPHLLDEG_OFFSET))(this, a1);
		}

		::System::Void MCLGFELFJHM(::RPG::Client::OpenWorld::StreamingItemData* a1, ::System::Action_2<::HPKACEPPPCA*, ::RPG::Client::OpenWorld::StreamingItemData*>* a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::OpenWorld::StreamingItemData*, ::System::Action_2<::HPKACEPPPCA*, ::RPG::Client::OpenWorld::StreamingItemData*>*))((::PBYTE)hIl2Cpp + BMIKHDAIIMO_MCLGFELFJHM_OFFSET))(this, a1, a2);
		}

		::System::Void EAJIJLANAEK(::RPG::Client::OpenWorld::StreamingItemData* a1, ::System::Action_2<::HPKACEPPPCA*, ::RPG::Client::OpenWorld::StreamingItemData*>* a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::OpenWorld::StreamingItemData*, ::System::Action_2<::HPKACEPPPCA*, ::RPG::Client::OpenWorld::StreamingItemData*>*))((::PBYTE)hIl2Cpp + BMIKHDAIIMO_EAJIJLANAEK_OFFSET))(this, a1, a2);
		}

		::System::Boolean HCENOJOGGDM(::RPG::Client::OpenWorld::StreamingItemData* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::RPG::Client::OpenWorld::StreamingItemData*))((::PBYTE)hIl2Cpp + BMIKHDAIIMO_HCENOJOGGDM_OFFSET))(this, a1);
		}

		::System::Void FNKMIDCMPKI(::RPG::Client::OpenWorld::StreamingItemData* a1, ::HPKACEPPPCA* a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::OpenWorld::StreamingItemData*, ::HPKACEPPPCA*))((::PBYTE)hIl2Cpp + BMIKHDAIIMO_FNKMIDCMPKI_OFFSET))(this, a1, a2);
		}

		::System::Void GDGNCMOGJML(::RPG::Client::OpenWorld::StreamingItemData* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::OpenWorld::StreamingItemData*))((::PBYTE)hIl2Cpp + BMIKHDAIIMO_GDGNCMOGJML_OFFSET))(this, a1);
		}

		static ::System::Void GEBPEDNOGOO(::RPG::Client::OpenWorld::StreamingItemData* a1, ::System::UInt32 a2)
		{
			return ((::System::Void(*)(::RPG::Client::OpenWorld::StreamingItemData*, ::System::UInt32))((::PBYTE)hIl2Cpp + BMIKHDAIIMO_GEBPEDNOGOO_OFFSET))(a1, a2);
		}

		::System::Void ANFNAOJBJHJ(::RPG::Client::OpenWorld::StreamingItemData* a1, ::System::Action_2<::UnityEngine::GameObject*, ::RPG::Client::OpenWorld::StreamingItemData*>* a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::OpenWorld::StreamingItemData*, ::System::Action_2<::UnityEngine::GameObject*, ::RPG::Client::OpenWorld::StreamingItemData*>*))((::PBYTE)hIl2Cpp + BMIKHDAIIMO_ANFNAOJBJHJ_OFFSET))(this, a1, a2);
		}

		::System::Void HGMIJIHFIGP(::RPG::Client::OpenWorld::StreamingItemData* a1, ::System::Action_2<::UnityEngine::GameObject*, ::RPG::Client::OpenWorld::StreamingItemData*>* a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::OpenWorld::StreamingItemData*, ::System::Action_2<::UnityEngine::GameObject*, ::RPG::Client::OpenWorld::StreamingItemData*>*))((::PBYTE)hIl2Cpp + BMIKHDAIIMO_HGMIJIHFIGP_OFFSET))(this, a1, a2);
		}

		::System::Void KPIHAJILPIK()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BMIKHDAIIMO_KPIHAJILPIK_OFFSET))(this);
		}

		::System::Void CHGPNCEFDIL(::RPG::Client::OpenWorld::StreamingItemData* a1, ::UnityEngine::Object* a2, ::System::Boolean a3, ::System::String* a4)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::OpenWorld::StreamingItemData*, ::UnityEngine::Object*, ::System::Boolean, ::System::String*))((::PBYTE)hIl2Cpp + BMIKHDAIIMO_CHGPNCEFDIL_OFFSET))(this, a1, a2, a3, a4);
		}

		::System::Void FLBNHJDAACM(::RPG::Client::OpenWorld::StreamingItemData* a1, ::UnityEngine::GameObject* a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::OpenWorld::StreamingItemData*, ::UnityEngine::GameObject*))((::PBYTE)hIl2Cpp + BMIKHDAIIMO_FLBNHJDAACM_OFFSET))(this, a1, a2);
		}

		::System::Void KGOMOMECIHL(::System::Collections::Generic::List_1<::RPG::Client::OpenWorld::StreamingItemData*>* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::List_1<::RPG::Client::OpenWorld::StreamingItemData*>*))((::PBYTE)hIl2Cpp + BMIKHDAIIMO_KGOMOMECIHL_OFFSET))(this, a1);
		}

		::System::Void ENJMMHDCAPH(::RPG::Client::MonoEffect* a1, ::RPG::Client::TriggerEffectCallbackParams a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::MonoEffect*, ::RPG::Client::TriggerEffectCallbackParams))((::PBYTE)hIl2Cpp + BMIKHDAIIMO_ENJMMHDCAPH_OFFSET))(this, a1, a2);
		}

		::System::Void HFHLAHLONIJ(::System::Collections::Generic::List_1<::RPG::Client::OpenWorld::StreamingItemData*>* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::List_1<::RPG::Client::OpenWorld::StreamingItemData*>*))((::PBYTE)hIl2Cpp + BMIKHDAIIMO_HFHLAHLONIJ_OFFSET))(this, a1);
		}

		::System::Int32 LPJLFDHLCHH(::System::Action_1<::UnityEngine::Object*>* a1, ::RPG::Client::OpenWorld::StreamingItemData* a2, ::System::Int32 a3)
		{
			return ((::System::Int32(*)(::PVOID, ::System::Action_1<::UnityEngine::Object*>*, ::RPG::Client::OpenWorld::StreamingItemData*, ::System::Int32))((::PBYTE)hIl2Cpp + BMIKHDAIIMO_LPJLFDHLCHH_OFFSET))(this, a1, a2, a3);
		}

		::UnityEngine::Object* JLOINJDNMFA(::RPG::Client::OpenWorld::StreamingItemData* a1, ::System::Int32 a2)
		{
			return ((::UnityEngine::Object*(*)(::PVOID, ::RPG::Client::OpenWorld::StreamingItemData*, ::System::Int32))((::PBYTE)hIl2Cpp + BMIKHDAIIMO_JLOINJDNMFA_OFFSET))(this, a1, a2);
		}

		static ::System::String* KDGJDBJADMJ(::System::Int32 a1, ::GEEOPFIMJEM a2)
		{
			return ((::System::String*(*)(::System::Int32, ::GEEOPFIMJEM))((::PBYTE)hIl2Cpp + BMIKHDAIIMO_KDGJDBJADMJ_OFFSET))(a1, a2);
		}

		::System::Void GEDIJPCNOFH()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BMIKHDAIIMO_GEDIJPCNOFH_OFFSET))(this);
		}

		::System::Void BGIBFOBNBEK(::System::Collections::Generic::List_1<::System::Object*>* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::List_1<::System::Object*>*))((::PBYTE)hIl2Cpp + BMIKHDAIIMO_BGIBFOBNBEK_OFFSET))(this, a1);
		}

		::System::Void HDEKKDINGBB(::RPG::Client::OpenWorld::StreamingItemData* a1, ::System::Boolean a2, ::System::Boolean a3, ::RPG::Client::OpenWorld::StreamingItemEnableReason a4, ::System::Boolean a5)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::OpenWorld::StreamingItemData*, ::System::Boolean, ::System::Boolean, ::RPG::Client::OpenWorld::StreamingItemEnableReason, ::System::Boolean))((::PBYTE)hIl2Cpp + BMIKHDAIIMO_HDEKKDINGBB_OFFSET))(this, a1, a2, a3, a4, a5);
		}

		::System::Void KIDLGGJOALC()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BMIKHDAIIMO_KIDLGGJOALC_OFFSET))(this);
		}

		::System::Boolean DLFJIBAFHFJ()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + BMIKHDAIIMO_DLFJIBAFHFJ_OFFSET))(this);
		}

		::System::Boolean GLLGIMANCBA()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + BMIKHDAIIMO_GLLGIMANCBA_OFFSET))(this);
		}

		::System::Collections::Generic::List_1<::UnityEngine::GameObject*>* AHLJAAHIMLG(::System::Int32 a1)
		{
			return ((::System::Collections::Generic::List_1<::UnityEngine::GameObject*>*(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + BMIKHDAIIMO_AHLJAAHIMLG_OFFSET))(this, a1);
		}

		::System::Void ODGAMDGHFKH()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BMIKHDAIIMO_ODGAMDGHFKH_OFFSET))(this);
		}

		::System::Void DLHKJOCBHLN()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BMIKHDAIIMO_DLHKJOCBHLN_OFFSET))(this);
		}

		::System::Void EAEAEGCEEGL(::GDKHHPPIFBC* a1)
		{
			return ((::System::Void(*)(::PVOID, ::GDKHHPPIFBC*))((::PBYTE)hIl2Cpp + BMIKHDAIIMO_EAEAEGCEEGL_OFFSET))(this, a1);
		}

		::System::Void ICLAFDDNBOA(::RPG::Client::OpenWorld::StreamingItemData* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::OpenWorld::StreamingItemData*))((::PBYTE)hIl2Cpp + BMIKHDAIIMO_ICLAFDDNBOA_OFFSET))(this, a1);
		}

		::System::Void FACEFFLCGCI(::RPG::Client::OpenWorld::StreamingItemData* a1, ::RPG::Client::OpenWorld::StreamingItemData* a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::OpenWorld::StreamingItemData*, ::RPG::Client::OpenWorld::StreamingItemData*))((::PBYTE)hIl2Cpp + BMIKHDAIIMO_FACEFFLCGCI_OFFSET))(this, a1, a2);
		}

		::System::Void KDNDFCJOKHM(::RPG::Client::OpenWorld::StreamingItemData* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::OpenWorld::StreamingItemData*))((::PBYTE)hIl2Cpp + BMIKHDAIIMO_KDNDFCJOKHM_OFFSET))(this, a1);
		}

		::System::Void ECFFILNJHAK(::RPG::Client::OpenWorld::StreamingItemData* a1, ::System::Action* a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::OpenWorld::StreamingItemData*, ::System::Action*))((::PBYTE)hIl2Cpp + BMIKHDAIIMO_ECFFILNJHAK_OFFSET))(this, a1, a2);
		}

		::System::Void MDEABOMOHED(::RPG::Client::OpenWorld::StreamingItemData* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::OpenWorld::StreamingItemData*))((::PBYTE)hIl2Cpp + BMIKHDAIIMO_MDEABOMOHED_OFFSET))(this, a1);
		}

		::System::Void GJIAHHFDNML(::RPG::Client::OpenWorld::StreamingItemData* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::OpenWorld::StreamingItemData*))((::PBYTE)hIl2Cpp + BMIKHDAIIMO_GJIAHHFDNML_OFFSET))(this, a1);
		}

		::System::Void HCEACDJEPBK(::GDKHHPPIFBC* a1, ::UnityEngine::Object* a2)
		{
			return ((::System::Void(*)(::PVOID, ::GDKHHPPIFBC*, ::UnityEngine::Object*))((::PBYTE)hIl2Cpp + BMIKHDAIIMO_HCEACDJEPBK_OFFSET))(this, a1, a2);
		}

		::System::Void OFDKDNGKENC()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BMIKHDAIIMO_OFDKDNGKENC_OFFSET))(this);
		}

		::System::Void NPNELEBEJAL(::GDKHHPPIFBC* a1)
		{
			return ((::System::Void(*)(::PVOID, ::GDKHHPPIFBC*))((::PBYTE)hIl2Cpp + BMIKHDAIIMO_NPNELEBEJAL_OFFSET))(this, a1);
		}

		::System::Void LHCNGJJPJCN()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BMIKHDAIIMO_LHCNGJJPJCN_OFFSET))(this);
		}

		::System::Void MKCJGBNEEOG(::RPG::Client::OpenWorld::StreamingItemData* a1, ::UnityEngine::GameObject* a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::OpenWorld::StreamingItemData*, ::UnityEngine::GameObject*))((::PBYTE)hIl2Cpp + BMIKHDAIIMO_MKCJGBNEEOG_OFFSET))(this, a1, a2);
		}

		::System::Void LLODPNKLBKC(::RPG::Client::OpenWorld::StreamingItemData* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::OpenWorld::StreamingItemData*))((::PBYTE)hIl2Cpp + BMIKHDAIIMO_LLODPNKLBKC_OFFSET))(this, a1);
		}

		::UnityEngine::GameObject* EHEFOMADFOL(::RPG::Client::OpenWorld::StreamingItemData* a1, ::System::Boolean a2, ::System::Action_2<::UnityEngine::GameObject*, ::RPG::Client::OpenWorld::StreamingItemData*>* a3, ::System::Boolean a4)
		{
			return ((::UnityEngine::GameObject*(*)(::PVOID, ::RPG::Client::OpenWorld::StreamingItemData*, ::System::Boolean, ::System::Action_2<::UnityEngine::GameObject*, ::RPG::Client::OpenWorld::StreamingItemData*>*, ::System::Boolean))((::PBYTE)hIl2Cpp + BMIKHDAIIMO_EHEFOMADFOL_OFFSET))(this, a1, a2, a3, a4);
		}

		::System::Void MDLHOJFGKIB(::RPG::Client::OpenWorld::StreamingItemData* a1, ::System::Action_2<::UnityEngine::GameObject*, ::RPG::Client::OpenWorld::StreamingItemData*>* a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::OpenWorld::StreamingItemData*, ::System::Action_2<::UnityEngine::GameObject*, ::RPG::Client::OpenWorld::StreamingItemData*>*))((::PBYTE)hIl2Cpp + BMIKHDAIIMO_MDLHOJFGKIB_OFFSET))(this, a1, a2);
		}

		::System::Boolean DEFPLILGPEP(::RPG::Client::OpenWorld::StreamingItemData* a1, ::System::Action_1<::RPG::Client::OpenWorld::StreamingItemData*>* a2, ::System::Boolean a3)
		{
			return ((::System::Boolean(*)(::PVOID, ::RPG::Client::OpenWorld::StreamingItemData*, ::System::Action_1<::RPG::Client::OpenWorld::StreamingItemData*>*, ::System::Boolean))((::PBYTE)hIl2Cpp + BMIKHDAIIMO_DEFPLILGPEP_OFFSET))(this, a1, a2, a3);
		}

		::System::Boolean JHLEGDIMNJG(::RPG::Client::OpenWorld::StreamingItemData* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::RPG::Client::OpenWorld::StreamingItemData*))((::PBYTE)hIl2Cpp + BMIKHDAIIMO_JHLEGDIMNJG_OFFSET))(this, a1);
		}

		::System::Boolean BEELIJPKMJH(::RPG::Client::OpenWorld::StreamingItemData* a1, ::System::Action_3<::RPG::Client::OpenWorld::StreamingItemData*, ::UnityEngine::GameObject*, ::UnityEngine::GameObject*>* a2, ::System::Boolean a3)
		{
			return ((::System::Boolean(*)(::PVOID, ::RPG::Client::OpenWorld::StreamingItemData*, ::System::Action_3<::RPG::Client::OpenWorld::StreamingItemData*, ::UnityEngine::GameObject*, ::UnityEngine::GameObject*>*, ::System::Boolean))((::PBYTE)hIl2Cpp + BMIKHDAIIMO_BEELIJPKMJH_OFFSET))(this, a1, a2, a3);
		}

		::System::Boolean HPBEIFPFOOF(::RPG::Client::OpenWorld::StreamingItemData* a1, ::System::Action_2<::RPG::Client::OpenWorld::StreamingItemData*, ::UnityEngine::GameObject*>* a2, ::System::Boolean a3)
		{
			return ((::System::Boolean(*)(::PVOID, ::RPG::Client::OpenWorld::StreamingItemData*, ::System::Action_2<::RPG::Client::OpenWorld::StreamingItemData*, ::UnityEngine::GameObject*>*, ::System::Boolean))((::PBYTE)hIl2Cpp + BMIKHDAIIMO_HPBEIFPFOOF_OFFSET))(this, a1, a2, a3);
		}

		::System::Void CHBLMDEOMIB(::RPG::Client::OpenWorld::StreamingItemData* a1, ::RPG::Client::OpenWorld::StreamingItemData* a2, ::UnityEngine::GameObject* a3, ::System::Boolean a4, ::UnityEngine::GameObject* a5)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::OpenWorld::StreamingItemData*, ::RPG::Client::OpenWorld::StreamingItemData*, ::UnityEngine::GameObject*, ::System::Boolean, ::UnityEngine::GameObject*))((::PBYTE)hIl2Cpp + BMIKHDAIIMO_CHBLMDEOMIB_OFFSET))(this, a1, a2, a3, a4, a5);
		}

		::RPG::Client::OpenWorld::StreamingItemData* KHFGDHIFNMC(::RPG::Client::OpenWorld::StreamingItemData* a1)
		{
			return ((::RPG::Client::OpenWorld::StreamingItemData*(*)(::PVOID, ::RPG::Client::OpenWorld::StreamingItemData*))((::PBYTE)hIl2Cpp + BMIKHDAIIMO_KHFGDHIFNMC_OFFSET))(this, a1);
		}

		::System::Void IAJBLHPAIFP(::RPG::Client::OpenWorld::StreamingItemData* a1, ::System::Object* a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::OpenWorld::StreamingItemData*, ::System::Object*))((::PBYTE)hIl2Cpp + BMIKHDAIIMO_IAJBLHPAIFP_OFFSET))(this, a1, a2);
		}

		::System::Boolean KLGHPJKPPON()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + BMIKHDAIIMO_KLGHPJKPPON_OFFSET))(this);
		}

		::System::Void FADLCKHHOOL()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BMIKHDAIIMO_FADLCKHHOOL_OFFSET))(this);
		}

		::System::Void FHJPIOANBCD()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BMIKHDAIIMO_FHJPIOANBCD_OFFSET))(this);
		}

		::System::Void AFOINLLGKHJ()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BMIKHDAIIMO_AFOINLLGKHJ_OFFSET))(this);
		}

		::System::Void OKNMKHEOMFN()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BMIKHDAIIMO_OKNMKHEOMFN_OFFSET))(this);
		}

		::System::Void IHLPACOINJM()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BMIKHDAIIMO_IHLPACOINJM_OFFSET))(this);
		}

		::System::Collections::IEnumerator* __n__0()
		{
			return ((::System::Collections::IEnumerator*(*)(::PVOID))((::PBYTE)hIl2Cpp + BMIKHDAIIMO___N__0_OFFSET))(this);
		}

	};
