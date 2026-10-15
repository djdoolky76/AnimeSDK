#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/GDMONJOAKHD.h"
#include "unitysdk/RPG/Client/OpenWorld/StreamingItemEnableReason.h"
#include "unitysdk/System/ValueTuple.h"
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
namespace System::Collections { class IEnumerator; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T> class HashSet_1; }
namespace System::Collections::Generic { template <typename T> class List_1; }
namespace UnityEngine { class Animator; }
namespace UnityEngine { class GameObject; }
namespace UnityEngine { class Object; }

#define BMIKHDAIIMO_AFOINLLGKHJ_OFFSET UNITYSDK_OFFSET(0xBDBC210)
#define BMIKHDAIIMO_AHLJAAHIMLG_OFFSET UNITYSDK_OFFSET(0xBDB8F20)
#define BMIKHDAIIMO_ALBEJGHIMDF_OFFSET UNITYSDK_OFFSET(0xBDB49D0)
#define BMIKHDAIIMO_ANFNAOJBJHJ_OFFSET UNITYSDK_OFFSET(0xBDB6700)
#define BMIKHDAIIMO_BEELIJPKMJH_OFFSET UNITYSDK_OFFSET(0xBDBA960)
#define BMIKHDAIIMO_BGBPEMJCGLH_OFFSET UNITYSDK_OFFSET(0xBDB3630)
#define BMIKHDAIIMO_BGIBFOBNBEK_OFFSET UNITYSDK_OFFSET(0xBDB8590)
#define BMIKHDAIIMO_BLFMDHEAFPK_OFFSET UNITYSDK_OFFSET(0xBDB5610)
#define BMIKHDAIIMO_CCTOR_OFFSET UNITYSDK_OFFSET(0xBDBC5E0)
#define BMIKHDAIIMO_CHBLMDEOMIB_OFFSET UNITYSDK_OFFSET(0xBDB6C90)
#define BMIKHDAIIMO_CHGPNCEFDIL_OFFSET UNITYSDK_OFFSET(0xBDB0110)
#define BMIKHDAIIMO_CTOR_OFFSET UNITYSDK_OFFSET(0xBDB13E0)
#define BMIKHDAIIMO_DEFPLILGPEP_OFFSET UNITYSDK_OFFSET(0xBDBB9B0)
#define BMIKHDAIIMO_DISPOSE_OFFSET UNITYSDK_OFFSET(0xBDB4100)
#define BMIKHDAIIMO_DLFJIBAFHFJ_OFFSET UNITYSDK_OFFSET(0xBDB5180)
#define BMIKHDAIIMO_DLHKJOCBHLN_OFFSET UNITYSDK_OFFSET(0xBDB47B0)
#define BMIKHDAIIMO_EAEAEGCEEGL_OFFSET UNITYSDK_OFFSET(0xBDB90F0)
#define BMIKHDAIIMO_EAJIJLANAEK_OFFSET UNITYSDK_OFFSET(0xBDB61D0)
#define BMIKHDAIIMO_EBBDALJMBNL_OFFSET UNITYSDK_OFFSET(0xBDB33B0)
#define BMIKHDAIIMO_ECFFILNJHAK_OFFSET UNITYSDK_OFFSET(0xBDB9C80)
#define BMIKHDAIIMO_EHEFOMADFOL_OFFSET UNITYSDK_OFFSET(0xBDB5BB0)
#define BMIKHDAIIMO_ENJMMHDCAPH_OFFSET UNITYSDK_OFFSET(0xBDB7430)
#define BMIKHDAIIMO_FACEFFLCGCI_OFFSET UNITYSDK_OFFSET(0xBDB9860)
#define BMIKHDAIIMO_FADLCKHHOOL_OFFSET UNITYSDK_OFFSET(0xBDBB5B0)
#define BMIKHDAIIMO_FHJPIOANBCD_OFFSET UNITYSDK_OFFSET(0xBDBC040)
#define BMIKHDAIIMO_FLBNHJDAACM_OFFSET UNITYSDK_OFFSET(0xBDAFA00)
#define BMIKHDAIIMO_FNKMIDCMPKI_OFFSET UNITYSDK_OFFSET(0xBDB6410)
#define BMIKHDAIIMO_GDGNCMOGJML_OFFSET UNITYSDK_OFFSET(0xBDB6550)
#define BMIKHDAIIMO_GEBPEDNOGOO_OFFSET UNITYSDK_OFFSET(0xBDB4BD0)
#define BMIKHDAIIMO_GEDIJPCNOFH_OFFSET UNITYSDK_OFFSET(0xBDB2F50)
#define BMIKHDAIIMO_GJIAHHFDNML_OFFSET UNITYSDK_OFFSET(0xBDBA110)
#define BMIKHDAIIMO_GLLGIMANCBA_OFFSET UNITYSDK_OFFSET(0xBDB8F10)
#define BMIKHDAIIMO_HCEACDJEPBK_OFFSET UNITYSDK_OFFSET(0xBDBA1A0)
#define BMIKHDAIIMO_HCENOJOGGDM_OFFSET UNITYSDK_OFFSET(0xBDB6340)
#define BMIKHDAIIMO_HDEKKDINGBB_OFFSET UNITYSDK_OFFSET(0xBDB8730)
#define BMIKHDAIIMO_HFHLAHLONIJ_OFFSET UNITYSDK_OFFSET(0xBDB79C0)
#define BMIKHDAIIMO_HGMIJIHFIGP_OFFSET UNITYSDK_OFFSET(0xBDB6930)
#define BMIKHDAIIMO_HHKDLOAEOKJ_OFFSET UNITYSDK_OFFSET(0xBDB5190)
#define BMIKHDAIIMO_HLIHPHLLDEG_OFFSET UNITYSDK_OFFSET(0xBDB5960)
#define BMIKHDAIIMO_HPBEIFPFOOF_OFFSET UNITYSDK_OFFSET(0xBDBACE0)
#define BMIKHDAIIMO_IAJBLHPAIFP_OFFSET UNITYSDK_OFFSET(0xBDBBD90)
#define BMIKHDAIIMO_ICLAFDDNBOA_OFFSET UNITYSDK_OFFSET(0xBDB9210)
#define BMIKHDAIIMO_IHLPACOINJM_OFFSET UNITYSDK_OFFSET(0xBDB8F90)
#define BMIKHDAIIMO_IIIKIOKBIKF_OFFSET UNITYSDK_OFFSET(0xBDB3A30)
#define BMIKHDAIIMO_IKMEFIOAHML_OFFSET UNITYSDK_OFFSET(0xBDB4DE0)
#define BMIKHDAIIMO_INACTIVEINSTANCE_OFFSET UNITYSDK_OFFSET(0xBDB3730)
#define BMIKHDAIIMO_INJDBOOGNOE_OFFSET UNITYSDK_OFFSET(0xBDB37C0)
#define BMIKHDAIIMO_JAPPMFADAAH_OFFSET UNITYSDK_OFFSET(0xBDB3DF0)
#define BMIKHDAIIMO_JHLEGDIMNJG_OFFSET UNITYSDK_OFFSET(0xBDBBD30)
#define BMIKHDAIIMO_JLHCDBJEIDM_OFFSET UNITYSDK_OFFSET(0xBDB4F80)
#define BMIKHDAIIMO_JLOINJDNMFA_OFFSET UNITYSDK_OFFSET(0xBDB7650)
#define BMIKHDAIIMO_KDGJDBJADMJ_OFFSET UNITYSDK_OFFSET(0xBDB84B0)
#define BMIKHDAIIMO_KDNDFCJOKHM_OFFSET UNITYSDK_OFFSET(0xBDB9AA0)
#define BMIKHDAIIMO_KGOMOMECIHL_OFFSET UNITYSDK_OFFSET(0xBDB6EB0)
#define BMIKHDAIIMO_KHFGDHIFNMC_OFFSET UNITYSDK_OFFSET(0xBDB6BD0)
#define BMIKHDAIIMO_KIDLGGJOALC_OFFSET UNITYSDK_OFFSET(0xBDB8C00)
#define BMIKHDAIIMO_KLGHPJKPPON_OFFSET UNITYSDK_OFFSET(0xBDBB120)
#define BMIKHDAIIMO_KPIHAJILPIK_OFFSET UNITYSDK_OFFSET(0xBDAFDA0)
#define BMIKHDAIIMO_LCIEOKMALAL_OFFSET UNITYSDK_OFFSET(0xBDB3970)
#define BMIKHDAIIMO_LHCNGJJPJCN_OFFSET UNITYSDK_OFFSET(0xBDBB420)
#define BMIKHDAIIMO_LLLLNCDAJFK_OFFSET UNITYSDK_OFFSET(0xBDB2010)
#define BMIKHDAIIMO_LLODPNKLBKC_OFFSET UNITYSDK_OFFSET(0xBDBB760)
#define BMIKHDAIIMO_LPDBJPJFJLG_OFFSET UNITYSDK_OFFSET(0xBDB3490)
#define BMIKHDAIIMO_LPJLFDHLCHH_OFFSET UNITYSDK_OFFSET(0xBDB82B0)
#define BMIKHDAIIMO_LPOOJDFADDC_OFFSET UNITYSDK_OFFSET(0xBDB36B0)
#define BMIKHDAIIMO_MCEAADDOLPE_OFFSET UNITYSDK_OFFSET(0xBDAF930)
#define BMIKHDAIIMO_MCLGFELFJHM_OFFSET UNITYSDK_OFFSET(0xBDB5FD0)
#define BMIKHDAIIMO_MDEABOMOHED_OFFSET UNITYSDK_OFFSET(0xBDB9EE0)
#define BMIKHDAIIMO_MDLHOJFGKIB_OFFSET UNITYSDK_OFFSET(0xBDBB810)
#define BMIKHDAIIMO_MFBJAAAEPAK_OFFSET UNITYSDK_OFFSET(0xBDB4D40)
#define BMIKHDAIIMO_MKCJGBNEEOG_OFFSET UNITYSDK_OFFSET(0xBDB94C0)
#define BMIKHDAIIMO_MLMKLHFECNO_OFFSET UNITYSDK_OFFSET(0xBDB3CE0)
#define BMIKHDAIIMO_MMKIJPCILNG_OFFSET UNITYSDK_OFFSET(0xBDAFE30)
#define BMIKHDAIIMO_MPFKGCBDEGN_OFFSET UNITYSDK_OFFSET(0xBDB3130)
#define BMIKHDAIIMO_NPAGEPHDKOH_OFFSET UNITYSDK_OFFSET(0xBDB35B0)
#define BMIKHDAIIMO_NPNELEBEJAL_OFFSET UNITYSDK_OFFSET(0xBDBB130)
#define BMIKHDAIIMO_OCELGEGCHLH_OFFSET UNITYSDK_OFFSET(0xBDB3420)
#define BMIKHDAIIMO_ODGAMDGHFKH_OFFSET UNITYSDK_OFFSET(0xBDB1F40)
#define BMIKHDAIIMO_OFDKDNGKENC_OFFSET UNITYSDK_OFFSET(0xBDBB060)
#define BMIKHDAIIMO_OKNMKHEOMFN_OFFSET UNITYSDK_OFFSET(0xBDBC270)
#define BMIKHDAIIMO_OMLKMDONHBO_OFFSET UNITYSDK_OFFSET(0xBDB4D90)
#define BMIKHDAIIMO_SOLVEFOCUSSTATUS_OFFSET UNITYSDK_OFFSET(0xBDB3DA0)
#define BMIKHDAIIMO___N__0_OFFSET UNITYSDK_OFFSET(0xBDBC6B0)

inline static constexpr unsigned int BMIKHDAIIMO_TypeDefinitionIndex = 73876;

	class BMIKHDAIIMO : public ::GDMONJOAKHD
	{
	public:
		::System::Collections::Generic::Dictionary_2<::RPG::Client::OpenWorld::StreamingItemData*, ::UnityEngine::Object*>* CFJHBCPDEKB; // 0x170
		::System::Collections::Generic::Dictionary_2<::RPG::Client::OpenWorld::StreamingItemData*, ::System::String*>* DFJPLPKPENC; // 0x178
		::System::Collections::Generic::Dictionary_2<::RPG::Client::OpenWorld::StreamingItemData*, ::System::Action*>* PEOEOEMOIBA; // 0x180
		::RPG::Client::OpenWorld::StreamingItemData* ILPEPNHECJG; // 0x188
		::System::Collections::Generic::Dictionary_2<::RPG::Client::OpenWorld::StreamingItemData*, ::RPG::Client::OpenWorld::StreamingItemData*>* BLIALOMGCAG; // 0x190
		::System::Action* GOHDFBGBNOG; // 0x198
		::System::Collections::Generic::HashSet_1<::UnityEngine::Animator*>* AFMMOAIHNNN; // 0x1A0
		::System::Collections::Generic::List_1<::System::Action*>* NGGPINFCDFM; // 0x1A8
		::System::Collections::Generic::List_1<::GDKHHPPIFBC*>* BABHOKBOIIM; // 0x1B0
		::System::Collections::Generic::Dictionary_2<::System::UInt32, ::RPG::Client::OpenWorld::StreamingItemData*>* PBLPABIEKAE; // 0x1B8
		::System::Collections::Generic::Dictionary_2<::RPG::Client::OpenWorld::StreamingItemData*, ::System::Action*>* DIAEPIJPBMN; // 0x1C0
		::System::Collections::Generic::List_1<::RPG::Client::OpenWorld::StreamingItemData*>* PEJCFIJGHOG; // 0x1C8
		::System::Collections::Generic::Dictionary_2<::RPG::Client::OpenWorld::StreamingItemData*, ::UnityEngine::GameObject*>* IEILHOMKHND; // 0x1D0
		::System::Action* KFGPOPEIHEC; // 0x1D8
		::System::Collections::Generic::Dictionary_2<::RPG::Client::OpenWorld::StreamingItemData*, ::System::Action*>* MNOFODNNJBK; // 0x1E0
		::System::Collections::Generic::Dictionary_2<::RPG::Client::OpenWorld::StreamingItemData*, ::UnityEngine::GameObject*>* OPGLLHKDIPA; // 0x1E8
		::UnityEngine::GameObject* DHIBMDEMIBN; // 0x1F0
		::System::Collections::Generic::Dictionary_2<::RPG::Client::OpenWorld::StreamingItemData*, ::System::Action*>* DBPAFIALIDA; // 0x1F8
		::System::String* BDIFNPNKGAB; // 0x200
		::System::Collections::Generic::Dictionary_2<::RPG::Client::OpenWorld::StreamingItemData*, ::System::Collections::Generic::List_1<::System::Action*>*>* GJCHMCLJJIC; // 0x208
		::System::Collections::Generic::Dictionary_2<::System::String*, ::UnityEngine::GameObject*>* EAKDMANOIKG; // 0x210
		::System::Collections::Generic::Dictionary_2<::RPG::Client::OpenWorld::StreamingItemData*, ::System::UInt32>* HPIAFGBPBJB; // 0x218
		::System::Collections::Generic::Dictionary_2<::RPG::Client::OpenWorld::StreamingItemData*, ::System::Action*>* ONBKLFIPFAE; // 0x220
		::System::Collections::Generic::Dictionary_2<::RPG::Client::OpenWorld::StreamingItemData*, ::System::Collections::Generic::List_1<::RPG::Client::OpenWorld::StreamingItemData*>*>* ANJNJBEADFP; // 0x228
		::System::Collections::Generic::List_1<::UnityEngine::GameObject*>* LGIOCJOIKCL; // 0x230
		::System::Action* LEKJGLHBHNK; // 0x238
		::System::Collections::Generic::Dictionary_2<::RPG::Client::OpenWorld::StreamingItemData*, ::System::ValueTuple>* HBJPLNOJHNH; // 0x240
		::System::Collections::Generic::HashSet_1<::RPG::Client::OpenWorld::StreamingItemData*>* EOEDOEHHFGD; // 0x248
		::System::Collections::Generic::List_1<::UnityEngine::Animator*>* OKAMPAIJNIG; // 0x250
		::UnityEngine::GameObject* OHOHNFLOJLD; // 0x258
		::System::Collections::Generic::HashSet_1<::GDKHHPPIFBC*>* NCFAJNNNLLO; // 0x260
		::System::Collections::Generic::Dictionary_2<::LEAKCHFEDDK*, ::DBMBGHNGDCG*>* GMGPNENHNDD; // 0x268
		::System::Collections::Generic::Dictionary_2<::RPG::Client::OpenWorld::StreamingItemData*, ::System::Action*>* AOGDLGCPLDM; // 0x270
		::System::Collections::Generic::Dictionary_2<::RPG::Client::OpenWorld::StreamingItemData*, ::UnityEngine::GameObject*>* BFKLKBLFDJM; // 0x278
		::System::Boolean PIPPPDPCLPP; // 0x280
		::System::Boolean OLOLCIBBIKP; // 0x281
		::System::Byte _padding0[0x2];
		::System::Int32 OKFIILBDBOP; // 0x284
		static ::Il2CppArray<::System::String*>** StaticGet_GMLKHGKIHND()
		{
			return (::Il2CppArray<::System::String*>**)UnitySDK::FromName("", "BMIKHDAIIMO")->GetStaticField(0x2E9F0);
		}

		static ::System::String** StaticGet_FKODHMAJOAB()
		{
			return (::System::String**)UnitySDK::FromName("", "BMIKHDAIIMO")->GetStaticField(0x2E9F8);
		}

		static ::System::Collections::Generic::List_1<::RPG::Client::OpenWorld::StreamingItemData*>** StaticGet_PJKACNCGFHN()
		{
			return (::System::Collections::Generic::List_1<::RPG::Client::OpenWorld::StreamingItemData*>**)UnitySDK::FromName("", "BMIKHDAIIMO")->GetStaticField(0x2EA00);
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

		::System::Void MCLGFELFJHM(::RPG::Client::OpenWorld::StreamingItemData* a1, ::System::Action* a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::OpenWorld::StreamingItemData*, ::System::Action*))((::PBYTE)hIl2Cpp + BMIKHDAIIMO_MCLGFELFJHM_OFFSET))(this, a1, a2);
		}

		::System::Void EAJIJLANAEK(::RPG::Client::OpenWorld::StreamingItemData* a1, ::System::Action* a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::OpenWorld::StreamingItemData*, ::System::Action*))((::PBYTE)hIl2Cpp + BMIKHDAIIMO_EAJIJLANAEK_OFFSET))(this, a1, a2);
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

		::System::Void ANFNAOJBJHJ(::RPG::Client::OpenWorld::StreamingItemData* a1, ::System::Action* a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::OpenWorld::StreamingItemData*, ::System::Action*))((::PBYTE)hIl2Cpp + BMIKHDAIIMO_ANFNAOJBJHJ_OFFSET))(this, a1, a2);
		}

		::System::Void HGMIJIHFIGP(::RPG::Client::OpenWorld::StreamingItemData* a1, ::System::Action* a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::OpenWorld::StreamingItemData*, ::System::Action*))((::PBYTE)hIl2Cpp + BMIKHDAIIMO_HGMIJIHFIGP_OFFSET))(this, a1, a2);
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

		::System::Int32 LPJLFDHLCHH(::System::Action* a1, ::RPG::Client::OpenWorld::StreamingItemData* a2, ::System::Int32 a3)
		{
			return ((::System::Int32(*)(::PVOID, ::System::Action*, ::RPG::Client::OpenWorld::StreamingItemData*, ::System::Int32))((::PBYTE)hIl2Cpp + BMIKHDAIIMO_LPJLFDHLCHH_OFFSET))(this, a1, a2, a3);
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

		::UnityEngine::GameObject* EHEFOMADFOL(::RPG::Client::OpenWorld::StreamingItemData* a1, ::System::Boolean a2, ::System::Action* a3, ::System::Boolean a4)
		{
			return ((::UnityEngine::GameObject*(*)(::PVOID, ::RPG::Client::OpenWorld::StreamingItemData*, ::System::Boolean, ::System::Action*, ::System::Boolean))((::PBYTE)hIl2Cpp + BMIKHDAIIMO_EHEFOMADFOL_OFFSET))(this, a1, a2, a3, a4);
		}

		::System::Void MDLHOJFGKIB(::RPG::Client::OpenWorld::StreamingItemData* a1, ::System::Action* a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::OpenWorld::StreamingItemData*, ::System::Action*))((::PBYTE)hIl2Cpp + BMIKHDAIIMO_MDLHOJFGKIB_OFFSET))(this, a1, a2);
		}

		::System::Boolean DEFPLILGPEP(::RPG::Client::OpenWorld::StreamingItemData* a1, ::System::Action* a2, ::System::Boolean a3)
		{
			return ((::System::Boolean(*)(::PVOID, ::RPG::Client::OpenWorld::StreamingItemData*, ::System::Action*, ::System::Boolean))((::PBYTE)hIl2Cpp + BMIKHDAIIMO_DEFPLILGPEP_OFFSET))(this, a1, a2, a3);
		}

		::System::Boolean JHLEGDIMNJG(::RPG::Client::OpenWorld::StreamingItemData* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::RPG::Client::OpenWorld::StreamingItemData*))((::PBYTE)hIl2Cpp + BMIKHDAIIMO_JHLEGDIMNJG_OFFSET))(this, a1);
		}

		::System::Boolean BEELIJPKMJH(::RPG::Client::OpenWorld::StreamingItemData* a1, ::System::Action* a2, ::System::Boolean a3)
		{
			return ((::System::Boolean(*)(::PVOID, ::RPG::Client::OpenWorld::StreamingItemData*, ::System::Action*, ::System::Boolean))((::PBYTE)hIl2Cpp + BMIKHDAIIMO_BEELIJPKMJH_OFFSET))(this, a1, a2, a3);
		}

		::System::Boolean HPBEIFPFOOF(::RPG::Client::OpenWorld::StreamingItemData* a1, ::System::Action* a2, ::System::Boolean a3)
		{
			return ((::System::Boolean(*)(::PVOID, ::RPG::Client::OpenWorld::StreamingItemData*, ::System::Action*, ::System::Boolean))((::PBYTE)hIl2Cpp + BMIKHDAIIMO_HPBEIFPFOOF_OFFSET))(this, a1, a2, a3);
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
