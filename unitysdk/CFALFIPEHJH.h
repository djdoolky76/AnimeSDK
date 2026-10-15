#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/ABDOMMLHNBC.h"
#include "unitysdk/IDHAIJDALAH_ValueModifyType.h"
#include "unitysdk/RPG/Client/ParkourGame/EModifyEngineFlags.h"
#include "unitysdk/UnityEngine/Quaternion.h"
#include "unitysdk/UnityEngine/RaycastHit.h"
#include "unitysdk/UnityEngine/Vector3.h"
class ABDOMMLHNBC;
class BIIJADGFFLF;
class CEHPHKFBPCG;
class CFALFIPEHJH;
class CFALFIPEHJH_LEIONODFFJE;
class DMPMGGKKIBH;
class IDHAIJDALAH;
class LEJFDHMDDKO;
class LOADPICBEPE;
class MEHEPKNJPOA;
class NBPCDMIHNMD;
namespace RPG::Client { class AttachPointMapping; }
namespace RPG::Client::ParkourGame { class MonoParkourCharacter; }
namespace RPG::Client::ParkourGame { class MonoParkourCharacterCollision; }
namespace RPG::Client::ParkourGame { class MonoParkourItem; }
namespace RPG::Client::ParkourGame { class ParkourGameLevelConfigAsset; }
namespace RPG::Client::ParkourGame { class ParkourSkillConfig; }
namespace RPG::GameCore { class GameEntity; }
namespace System { class String; }
namespace System { template <typename T> class Action_1; }
namespace UnityEngine { class Collider; }
namespace UnityEngine { class Renderer; }
namespace UnityEngine { class Rigidbody; }
namespace UnityEngine { class SphereCollider; }
namespace UnityEngine { class Transform; }

#define CFALFIPEHJH_ABJHPHBMMEH_OFFSET UNITYSDK_OFFSET(0xC9FC300)
#define CFALFIPEHJH_AJIIBDMLOAN_1_OFFSET UNITYSDK_OFFSET(0xC9F8DD0)
#define CFALFIPEHJH_AJIIBDMLOAN_OFFSET UNITYSDK_OFFSET(0xC9F8AA0)
#define CFALFIPEHJH_AKCLIDAFJCD_OFFSET UNITYSDK_OFFSET(0xC9FC7F0)
#define CFALFIPEHJH_ALMAHDAHPIM_OFFSET UNITYSDK_OFFSET(0xC9F82A0)
#define CFALFIPEHJH_ALPMJHCCAGI_OFFSET UNITYSDK_OFFSET(0xC9FB1C0)
#define CFALFIPEHJH_ANCBMMFJGKN_OFFSET UNITYSDK_OFFSET(0xC9FC880)
#define CFALFIPEHJH_BCMCACOJOLC_OFFSET UNITYSDK_OFFSET(0xC9FA000)
#define CFALFIPEHJH_BDEOEIHAGED_OFFSET UNITYSDK_OFFSET(0xC9F5790)
#define CFALFIPEHJH_BHLLBCGMMIE_OFFSET UNITYSDK_OFFSET(0xC9FC7A0)
#define CFALFIPEHJH_BKPMKACPAKB_OFFSET UNITYSDK_OFFSET(0xC9FC8B0)
#define CFALFIPEHJH_BLPLAFPIJPC_OFFSET UNITYSDK_OFFSET(0xC9FC810)
#define CFALFIPEHJH_CCTOR_OFFSET UNITYSDK_OFFSET(0xC9FCD10)
#define CFALFIPEHJH_CDIJEMHCACM_OFFSET UNITYSDK_OFFSET(0xC9FC980)
#define CFALFIPEHJH_CHAGGCMNOBF_OFFSET UNITYSDK_OFFSET(0xC9FC890)
#define CFALFIPEHJH_CHEIGKCPGNP_OFFSET UNITYSDK_OFFSET(0xC9F9140)
#define CFALFIPEHJH_CLKOHLCIMGF_OFFSET UNITYSDK_OFFSET(0xC9F9790)
#define CFALFIPEHJH_COFLOCCNAFD_OFFSET UNITYSDK_OFFSET(0xC9FAA80)
#define CFALFIPEHJH_CONJFLCNMHG_OFFSET UNITYSDK_OFFSET(0xC9FAB90)
#define CFALFIPEHJH_CTOR_OFFSET UNITYSDK_OFFSET(0xC9F44F0)
#define CFALFIPEHJH_DCMNFOIGFPC_OFFSET UNITYSDK_OFFSET(0xC9FA120)
#define CFALFIPEHJH_DDBKAALDNAE_OFFSET UNITYSDK_OFFSET(0xC9FCA60)
#define CFALFIPEHJH_DISPOSE_OFFSET UNITYSDK_OFFSET(0xC9F4F10)
#define CFALFIPEHJH_DKJCIABIJAM_OFFSET UNITYSDK_OFFSET(0xC9FA9E0)
#define CFALFIPEHJH_DNFAKKONAMH_1_OFFSET UNITYSDK_OFFSET(0xC9F8E90)
#define CFALFIPEHJH_DNFAKKONAMH_OFFSET UNITYSDK_OFFSET(0xC9F8B60)
#define CFALFIPEHJH_EFAPEFCJOIM_OFFSET UNITYSDK_OFFSET(0xC9F7DA0)
#define CFALFIPEHJH_EIHNIOOPLII_OFFSET UNITYSDK_OFFSET(0xC9F9D10)
#define CFALFIPEHJH_FGGBCDIOJBM_OFFSET UNITYSDK_OFFSET(0xC9FA2B0)
#define CFALFIPEHJH_FGICNJPNNCB_OFFSET UNITYSDK_OFFSET(0xC9FC860)
#define CFALFIPEHJH_FHKCMLOHADA_OFFSET UNITYSDK_OFFSET(0xC9FBCD0)
#define CFALFIPEHJH_FPGCLKLMLNK_OFFSET UNITYSDK_OFFSET(0xC9FC270)
#define CFALFIPEHJH_GET_HITFLYBYSUPERSTARCOUNT_OFFSET UNITYSDK_OFFSET(0xC9FCCD0)
#define CFALFIPEHJH_GET_ID_OFFSET UNITYSDK_OFFSET(0xC9FC790)
#define CFALFIPEHJH_GET_ISALLOWEVENT_OFFSET UNITYSDK_OFFSET(0xC9FCCF0)
#define CFALFIPEHJH_GET_PROJECTILEHITCOUNT_OFFSET UNITYSDK_OFFSET(0xC9FCCB0)
#define CFALFIPEHJH_GJIENLJDNGA_OFFSET UNITYSDK_OFFSET(0xC9FCB00)
#define CFALFIPEHJH_GKOIKCBJICD_OFFSET UNITYSDK_OFFSET(0xC9F9380)
#define CFALFIPEHJH_GNDLAJNHHLN_OFFSET UNITYSDK_OFFSET(0xC9FCC10)
#define CFALFIPEHJH_HBBNINNKFJN_OFFSET UNITYSDK_OFFSET(0xC9F5730)
#define CFALFIPEHJH_HBFMKEEBPDN_OFFSET UNITYSDK_OFFSET(0xC9F7D40)
#define CFALFIPEHJH_HGKGCFILGID_OFFSET UNITYSDK_OFFSET(0xC9FB960)
#define CFALFIPEHJH_HHMFILFAMNA_OFFSET UNITYSDK_OFFSET(0xC9FC840)
#define CFALFIPEHJH_HJLMIPOGMEL_OFFSET UNITYSDK_OFFSET(0xC9FB910)
#define CFALFIPEHJH_HJNABFFJLFB_OFFSET UNITYSDK_OFFSET(0xC9FC580)
#define CFALFIPEHJH_HLKEAAFOJGL_OFFSET UNITYSDK_OFFSET(0xC9FCB30)
#define CFALFIPEHJH_HOOEPONKHFM_OFFSET UNITYSDK_OFFSET(0xC9FC0A0)
#define CFALFIPEHJH_IBIMCLMLHFA_OFFSET UNITYSDK_OFFSET(0xC9F9070)
#define CFALFIPEHJH_IECIAPPANHI_OFFSET UNITYSDK_OFFSET(0xC9F9F80)
#define CFALFIPEHJH_IFDKIIDMHBN_OFFSET UNITYSDK_OFFSET(0xC9F9EA0)
#define CFALFIPEHJH_IHCHAKEGAKB_OFFSET UNITYSDK_OFFSET(0xC9FBA30)
#define CFALFIPEHJH_IJCHBCGOIII_OFFSET UNITYSDK_OFFSET(0xC9FC870)
#define CFALFIPEHJH_IOBHEADKJIK_OFFSET UNITYSDK_OFFSET(0xC9FC690)
#define CFALFIPEHJH_IOBONOALKNH_1_OFFSET UNITYSDK_OFFSET(0xC9F8FC0)
#define CFALFIPEHJH_IOBONOALKNH_OFFSET UNITYSDK_OFFSET(0xC9F8F50)
#define CFALFIPEHJH_JEFFONELMNB_OFFSET UNITYSDK_OFFSET(0xC9FCBF0)
#define CFALFIPEHJH_JHHECJIODKO_OFFSET UNITYSDK_OFFSET(0xC9FC8A0)
#define CFALFIPEHJH_JIFGDDCKPJD_OFFSET UNITYSDK_OFFSET(0xC9F9800)
#define CFALFIPEHJH_JKNBMENBFGD_OFFSET UNITYSDK_OFFSET(0xC9F6BE0)
#define CFALFIPEHJH_JLANKNHFKCN_OFFSET UNITYSDK_OFFSET(0xC9F5C70)
#define CFALFIPEHJH_KAPDGHDJPHM_OFFSET UNITYSDK_OFFSET(0xC9F7E00)
#define CFALFIPEHJH_KBAJPGMBONL_OFFSET UNITYSDK_OFFSET(0xC9F6BC0)
#define CFALFIPEHJH_KBCMJABGCHI_OFFSET UNITYSDK_OFFSET(0xC9FC060)
#define CFALFIPEHJH_KGDABDGGGBI_OFFSET UNITYSDK_OFFSET(0xC9FC150)
#define CFALFIPEHJH_KMPFFIKGOEK_OFFSET UNITYSDK_OFFSET(0xC9FC820)
#define CFALFIPEHJH_KNKIMNEMDPK_OFFSET UNITYSDK_OFFSET(0xC9FB8C0)
#define CFALFIPEHJH_KPJGDHLENIP_OFFSET UNITYSDK_OFFSET(0xC9F51C0)
#define CFALFIPEHJH_LCKJFJJIBFM_OFFSET UNITYSDK_OFFSET(0xC9F9870)
#define CFALFIPEHJH_LFCMJPFENEN_OFFSET UNITYSDK_OFFSET(0xC9FBC80)
#define CFALFIPEHJH_LGIMCMOPFFN_OFFSET UNITYSDK_OFFSET(0xC9F9990)
#define CFALFIPEHJH_LIDDMHGKLCG_OFFSET UNITYSDK_OFFSET(0xC9FC800)
#define CFALFIPEHJH_LKCLIHMCHAD_OFFSET UNITYSDK_OFFSET(0xC9FC190)
#define CFALFIPEHJH_LMAADBCDDCM_OFFSET UNITYSDK_OFFSET(0xC9FCA80)
#define CFALFIPEHJH_LPOIMPCKDDJ_OFFSET UNITYSDK_OFFSET(0xC9F9490)
#define CFALFIPEHJH_MBAJMMPBOMN_OFFSET UNITYSDK_OFFSET(0xC9FCAF0)
#define CFALFIPEHJH_MBNNIGJOBGH_OFFSET UNITYSDK_OFFSET(0xC9F5920)
#define CFALFIPEHJH_MCAGCIADKKO_OFFSET UNITYSDK_OFFSET(0xC9F9BA0)
#define CFALFIPEHJH_MEJFIGGILPG_OFFSET UNITYSDK_OFFSET(0xC9FC990)
#define CFALFIPEHJH_MELMFLDFNJD_OFFSET UNITYSDK_OFFSET(0xC9FCA90)
#define CFALFIPEHJH_MFPOCPLPOCO_OFFSET UNITYSDK_OFFSET(0xC9FCB20)
#define CFALFIPEHJH_MHJEMPPPKGB_OFFSET UNITYSDK_OFFSET(0xC9FCB10)
#define CFALFIPEHJH_MOOENEIANFA_OFFSET UNITYSDK_OFFSET(0xC9FAF90)
#define CFALFIPEHJH_NBJFLGNEBED_OFFSET UNITYSDK_OFFSET(0xC9F6CB0)
#define CFALFIPEHJH_NDHHEFMEPBM_OFFSET UNITYSDK_OFFSET(0xC9FC410)
#define CFALFIPEHJH_NGFIDFLIHGA_OFFSET UNITYSDK_OFFSET(0xC9FA420)
#define CFALFIPEHJH_NIOPOKCOKKB_OFFSET UNITYSDK_OFFSET(0xC9FCBE0)
#define CFALFIPEHJH_NPAFMEBNFOB_OFFSET UNITYSDK_OFFSET(0xC9F59F0)
#define CFALFIPEHJH_OEEJMPKCEFF_OFFSET UNITYSDK_OFFSET(0xC9F6780)
#define CFALFIPEHJH_OHMHJFANEIF_OFFSET UNITYSDK_OFFSET(0xC9F9F10)
#define CFALFIPEHJH_ONLIAPJJNJM_OFFSET UNITYSDK_OFFSET(0xC9FC830)
#define CFALFIPEHJH_PKJIAPOPIHJ_OFFSET UNITYSDK_OFFSET(0xC9FCA70)
#define CFALFIPEHJH_PKJPJDFGPOP_OFFSET UNITYSDK_OFFSET(0xC9F7E60)
#define CFALFIPEHJH_PLOGFHDCFJB_OFFSET UNITYSDK_OFFSET(0xC9FCC00)
#define CFALFIPEHJH_PNMMOEFLFBH_OFFSET UNITYSDK_OFFSET(0xC9F95C0)
#define CFALFIPEHJH_SET_HITFLYBYSUPERSTARCOUNT_OFFSET UNITYSDK_OFFSET(0xC9FCCE0)
#define CFALFIPEHJH_SET_ISALLOWEVENT_OFFSET UNITYSDK_OFFSET(0xC9FCD00)
#define CFALFIPEHJH_SET_PROJECTILEHITCOUNT_OFFSET UNITYSDK_OFFSET(0xC9FCCC0)
#define CFALFIPEHJH__ACCELERATION_B__33_0_OFFSET UNITYSDK_OFFSET(0xC9FCE60)

inline static constexpr unsigned int CFALFIPEHJH_TypeDefinitionIndex = 74185;

	class CFALFIPEHJH : public ::ABDOMMLHNBC
	{
	public:
		::LEJFDHMDDKO* NJFFGCELHIM; // 0x10
		::UnityEngine::Transform* PDJGEDNLBKJ; // 0x18
		::RPG::Client::ParkourGame::MonoParkourCharacterCollision* APCFEAKEOAE; // 0x20
		::System::Action_1<::ABDOMMLHNBC*>* PNIMHENAFDD; // 0x28
		::UnityEngine::Rigidbody* HPAGDLDHKFC; // 0x30
		::MEHEPKNJPOA* NELLPHEKEPH; // 0x38
		::UnityEngine::SphereCollider* GBDKBLPAHEL; // 0x40
		::RPG::Client::ParkourGame::MonoParkourCharacter* PFECGMGNMEN; // 0x48
		::System::Action_1<::ABDOMMLHNBC*>* HIBOENHDHJL; // 0x50
		::RPG::Client::AttachPointMapping* MDOMBPFNPGB; // 0x58
		::DMPMGGKKIBH* LGEGKIKIPOB; // 0x60
		::UnityEngine::Renderer* JAMDAALMOAL; // 0x68
		::CEHPHKFBPCG* LLFEHKABAIA; // 0x70
		::IDHAIJDALAH* HICEHCKKEPK; // 0x78
		::CFALFIPEHJH_LEIONODFFJE* CPBIJHKPFAN; // 0x80
		::RPG::GameCore::GameEntity* KAKEIDJDNHJ; // 0x88
		::UnityEngine::Transform* CPNELLAPDMK; // 0x90
		::System::Single DDPJNLAFNAN; // 0x98
		::System::Int32 _ProjectileHitCount_k__BackingField; // 0x9C
		::System::Int32 ACPFCFJFJBL; // 0xA0
		::UnityEngine::Quaternion NCMEPPHLGEG; // 0xA4
		::System::Single EJDHAEPMICP; // 0xB4
		::System::Int32 OAIEBAKJKIG; // 0xB8
		::System::Single LJBKILGNJCF; // 0xBC
		::System::Single NLIFGOAGCCG; // 0xC0
		::System::Boolean HNALEMBOBFE; // 0xC4
		::System::Boolean _IsAllowEvent_k__BackingField; // 0xC5
		::System::Boolean BKAKGPKNDFO; // 0xC6
		::System::Boolean JDPGFIBLFOP; // 0xC7
		::System::Single BINPBMJJKMN; // 0xC8
		::System::Int32 GDMLAIGPALB; // 0xCC
		::UnityEngine::Vector3 MIFKHBDOGLN; // 0xD0
		::System::Single GHABAAOGBNO; // 0xDC
		::System::Single EBGCFKAKLPP; // 0xE0
		::System::Single BALALBMPPCA; // 0xE4
		::System::Int32 _HitFlyBySuperStarCount_k__BackingField; // 0xE8
		::System::Single PBGACDOMKMP; // 0xEC
		::System::Int32 HKCIBHFGLFN; // 0xF0
		::System::Single CKHICIBGKEL; // 0xF4
		::System::Int32 BBFBPDMGAMM; // 0xF8
		::System::Single HPCHCEFOKJB; // 0xFC
		::System::Single AAFLIBHMNCE; // 0x100
		::System::Int32 _ID_k__BackingField; // 0x104
		static ::Il2CppArray<::UnityEngine::RaycastHit>** StaticGet_OMBHOLNCLJJ()
		{
			return (::Il2CppArray<::UnityEngine::RaycastHit>**)UnitySDK::FromName("", "CFALFIPEHJH")->GetStaticField(0x1E740);
		}

		static ::Il2CppArray<::UnityEngine::Collider*>** StaticGet_JIOHMMHFBPH()
		{
			return (::Il2CppArray<::UnityEngine::Collider*>**)UnitySDK::FromName("", "CFALFIPEHJH")->GetStaticField(0x1E748);
		}

		static ::System::Int32* StaticGet_IHPPEKCLIPD()
		{
			return (::System::Int32*)UnitySDK::FromName("", "CFALFIPEHJH")->GetStaticField(0x6E60);
		}

		static ::System::Int32* StaticGet_NGGAJKCHILG()
		{
			return (::System::Int32*)UnitySDK::FromName("", "CFALFIPEHJH")->GetStaticField(0x6E64);
		}

		static ::System::Int32* StaticGet_AFBBDLEDFPC()
		{
			return (::System::Int32*)UnitySDK::FromName("", "CFALFIPEHJH")->GetStaticField(0x6E68);
		}

		static ::System::Int32* StaticGet_GHCEDPMCNNO()
		{
			return (::System::Int32*)UnitySDK::FromName("", "CFALFIPEHJH")->GetStaticField(0x6E6C);
		}

		static ::System::Int32* StaticGet_LEDGDEBNMPP()
		{
			return (::System::Int32*)UnitySDK::FromName("", "CFALFIPEHJH")->GetStaticField(0x6E70);
		}

		static ::System::Int32* StaticGet_CGOMGBONLGB()
		{
			return (::System::Int32*)UnitySDK::FromName("", "CFALFIPEHJH")->GetStaticField(0x6E74);
		}

		static ::System::Int32* StaticGet_AMMFGDCIGGE()
		{
			return (::System::Int32*)UnitySDK::FromName("", "CFALFIPEHJH")->GetStaticField(0x6E78);
		}

		static ::System::Int32* StaticGet_BEMFCHDNNII()
		{
			return (::System::Int32*)UnitySDK::FromName("", "CFALFIPEHJH")->GetStaticField(0x6E7C);
		}

		static ::System::Int32* StaticGet_PJFCJEGHHJN()
		{
			return (::System::Int32*)UnitySDK::FromName("", "CFALFIPEHJH")->GetStaticField(0x6E80);
		}

		// static const ::System::Object EMJBCHODBIE; // 0x0
		// static const ::System::Object CKMCJOPNLHH; // 0x0
		// static const ::System::Object AOEIBAAIHAO; // 0x0
		// static const ::System::Object HJNMKBDGHJB; // 0x0
		::System::Void _ctor(::System::Int32 a1, ::RPG::Client::ParkourGame::MonoParkourCharacter* a2, ::DMPMGGKKIBH* a3)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::RPG::Client::ParkourGame::MonoParkourCharacter*, ::DMPMGGKKIBH*))((::PBYTE)hIl2Cpp + CFALFIPEHJH_CTOR_OFFSET))(this, a1, a2, a3);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CFALFIPEHJH_CCTOR_OFFSET))();
		}

		::System::Void Dispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CFALFIPEHJH_DISPOSE_OFFSET))(this);
		}

		::System::Void KPJGDHLENIP(::System::Int32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + CFALFIPEHJH_KPJGDHLENIP_OFFSET))(this, a1);
		}

		::System::Void NPAFMEBNFOB()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CFALFIPEHJH_NPAFMEBNFOB_OFFSET))(this);
		}

		::System::Void JLANKNHFKCN(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CFALFIPEHJH_JLANKNHFKCN_OFFSET))(this, a1);
		}

		::System::Void HBBNINNKFJN()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CFALFIPEHJH_HBBNINNKFJN_OFFSET))(this);
		}

		::System::Void BDEOEIHAGED()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CFALFIPEHJH_BDEOEIHAGED_OFFSET))(this);
		}

		::System::Void NBJFLGNEBED(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CFALFIPEHJH_NBJFLGNEBED_OFFSET))(this, a1);
		}

		::System::Boolean AJIIBDMLOAN(::System::Boolean a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + CFALFIPEHJH_AJIIBDMLOAN_OFFSET))(this, a1);
		}

		::System::Boolean AJIIBDMLOAN_1(::System::Int32 a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + CFALFIPEHJH_AJIIBDMLOAN_1_OFFSET))(this, a1);
		}

		::System::Single JKNBMENBFGD()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + CFALFIPEHJH_JKNBMENBFGD_OFFSET))(this);
		}

		::System::Single OEEJMPKCEFF()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + CFALFIPEHJH_OEEJMPKCEFF_OFFSET))(this);
		}

		::System::Boolean IOBONOALKNH(::System::Int32 a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + CFALFIPEHJH_IOBONOALKNH_OFFSET))(this, a1);
		}

		::System::Boolean IOBONOALKNH_1(::System::Int32 a1, ::System::Int32 a2, ::System::Single a3, ::System::Int32 a4)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Int32, ::System::Int32, ::System::Single, ::System::Int32))((::PBYTE)hIl2Cpp + CFALFIPEHJH_IOBONOALKNH_1_OFFSET))(this, a1, a2, a3, a4);
		}

		::UnityEngine::Transform* IBIMCLMLHFA(::System::String* a1)
		{
			return ((::UnityEngine::Transform*(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + CFALFIPEHJH_IBIMCLMLHFA_OFFSET))(this, a1);
		}

		::System::Boolean CHEIGKCPGNP(::CFALFIPEHJH* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::CFALFIPEHJH*))((::PBYTE)hIl2Cpp + CFALFIPEHJH_CHEIGKCPGNP_OFFSET))(this, a1);
		}

		::System::Void GKOIKCBJICD(::NBPCDMIHNMD* a1)
		{
			return ((::System::Void(*)(::PVOID, ::NBPCDMIHNMD*))((::PBYTE)hIl2Cpp + CFALFIPEHJH_GKOIKCBJICD_OFFSET))(this, a1);
		}

		::System::Void CLKOHLCIMGF(::CFALFIPEHJH* a1)
		{
			return ((::System::Void(*)(::PVOID, ::CFALFIPEHJH*))((::PBYTE)hIl2Cpp + CFALFIPEHJH_CLKOHLCIMGF_OFFSET))(this, a1);
		}

		::System::Void JIFGDDCKPJD(::BIIJADGFFLF* a1)
		{
			return ((::System::Void(*)(::PVOID, ::BIIJADGFFLF*))((::PBYTE)hIl2Cpp + CFALFIPEHJH_JIFGDDCKPJD_OFFSET))(this, a1);
		}

		::System::Void LCKJFJJIBFM(::System::Int32 a1, ::System::String* a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::String*))((::PBYTE)hIl2Cpp + CFALFIPEHJH_LCKJFJJIBFM_OFFSET))(this, a1, a2);
		}

		::System::Void LGIMCMOPFFN(::System::Int32 a1, ::System::Int32 a2, ::System::Single a3, ::System::Boolean a4, ::System::Boolean a5, ::System::Boolean a6)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::Int32, ::System::Single, ::System::Boolean, ::System::Boolean, ::System::Boolean))((::PBYTE)hIl2Cpp + CFALFIPEHJH_LGIMCMOPFFN_OFFSET))(this, a1, a2, a3, a4, a5, a6);
		}

		::System::Void IFDKIIDMHBN()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CFALFIPEHJH_IFDKIIDMHBN_OFFSET))(this);
		}

		::System::Void PNMMOEFLFBH(::System::Int32 a1, ::System::Int32 a2, ::System::Single a3, ::System::Single a4, ::System::Boolean a5, ::System::Boolean a6)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::Int32, ::System::Single, ::System::Single, ::System::Boolean, ::System::Boolean))((::PBYTE)hIl2Cpp + CFALFIPEHJH_PNMMOEFLFBH_OFFSET))(this, a1, a2, a3, a4, a5, a6);
		}

		::System::Void OHMHJFANEIF()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CFALFIPEHJH_OHMHJFANEIF_OFFSET))(this);
		}

		::System::Void IECIAPPANHI()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CFALFIPEHJH_IECIAPPANHI_OFFSET))(this);
		}

		::LEJFDHMDDKO* BCMCACOJOLC(::RPG::Client::ParkourGame::ParkourSkillConfig* a1)
		{
			return ((::LEJFDHMDDKO*(*)(::PVOID, ::RPG::Client::ParkourGame::ParkourSkillConfig*))((::PBYTE)hIl2Cpp + CFALFIPEHJH_BCMCACOJOLC_OFFSET))(this, a1);
		}

		::System::Void DCMNFOIGFPC(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CFALFIPEHJH_DCMNFOIGFPC_OFFSET))(this, a1);
		}

		::System::Void FGGBCDIOJBM(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CFALFIPEHJH_FGGBCDIOJBM_OFFSET))(this, a1);
		}

		::System::Void NGFIDFLIHGA(::RPG::Client::ParkourGame::MonoParkourItem* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::ParkourGame::MonoParkourItem*))((::PBYTE)hIl2Cpp + CFALFIPEHJH_NGFIDFLIHGA_OFFSET))(this, a1);
		}

		::System::Void COFLOCCNAFD(::BIIJADGFFLF* a1, ::System::Single a2)
		{
			return ((::System::Void(*)(::PVOID, ::BIIJADGFFLF*, ::System::Single))((::PBYTE)hIl2Cpp + CFALFIPEHJH_COFLOCCNAFD_OFFSET))(this, a1, a2);
		}

		::System::Void ALMAHDAHPIM(::UnityEngine::Vector3 a1, ::UnityEngine::Quaternion a2)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Vector3, ::UnityEngine::Quaternion))((::PBYTE)hIl2Cpp + CFALFIPEHJH_ALMAHDAHPIM_OFFSET))(this, a1, a2);
		}

		::System::Void CONJFLCNMHG(::UnityEngine::Collider* a1)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Collider*))((::PBYTE)hIl2Cpp + CFALFIPEHJH_CONJFLCNMHG_OFFSET))(this, a1);
		}

		::UnityEngine::Quaternion PKJPJDFGPOP(::UnityEngine::Quaternion a1)
		{
			return ((::UnityEngine::Quaternion(*)(::PVOID, ::UnityEngine::Quaternion))((::PBYTE)hIl2Cpp + CFALFIPEHJH_PKJPJDFGPOP_OFFSET))(this, a1);
		}

		::System::Void ALPMJHCCAGI(::RPG::Client::ParkourGame::MonoParkourCharacter* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::ParkourGame::MonoParkourCharacter*))((::PBYTE)hIl2Cpp + CFALFIPEHJH_ALPMJHCCAGI_OFFSET))(this, a1);
		}

		::System::Void HJLMIPOGMEL(::CFALFIPEHJH* a1)
		{
			return ((::System::Void(*)(::PVOID, ::CFALFIPEHJH*))((::PBYTE)hIl2Cpp + CFALFIPEHJH_HJLMIPOGMEL_OFFSET))(this, a1);
		}

		::System::Void LPOIMPCKDDJ(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + CFALFIPEHJH_LPOIMPCKDDJ_OFFSET))(this, a1);
		}

		::System::Boolean DNFAKKONAMH(::System::Boolean a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + CFALFIPEHJH_DNFAKKONAMH_OFFSET))(this, a1);
		}

		::System::Boolean DNFAKKONAMH_1(::System::Int32 a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + CFALFIPEHJH_DNFAKKONAMH_1_OFFSET))(this, a1);
		}

		::System::Void MCAGCIADKKO(::IDHAIJDALAH_ValueModifyType a1, ::System::Int32 a2, ::System::Int32 a3, ::System::Single a4, ::System::Boolean a5, ::RPG::Client::ParkourGame::EModifyEngineFlags a6)
		{
			return ((::System::Void(*)(::PVOID, ::IDHAIJDALAH_ValueModifyType, ::System::Int32, ::System::Int32, ::System::Single, ::System::Boolean, ::RPG::Client::ParkourGame::EModifyEngineFlags))((::PBYTE)hIl2Cpp + CFALFIPEHJH_MCAGCIADKKO_OFFSET))(this, a1, a2, a3, a4, a5, a6);
		}

		::System::Void HGKGCFILGID()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CFALFIPEHJH_HGKGCFILGID_OFFSET))(this);
		}

		::System::Void IHCHAKEGAKB()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CFALFIPEHJH_IHCHAKEGAKB_OFFSET))(this);
		}

		::System::Void EIHNIOOPLII(::IDHAIJDALAH_ValueModifyType a1, ::System::Int32 a2, ::System::Int32 a3, ::System::Single a4, ::System::Boolean a5, ::RPG::Client::ParkourGame::EModifyEngineFlags a6, ::RPG::Client::ParkourGame::EModifyEngineFlags a7)
		{
			return ((::System::Void(*)(::PVOID, ::IDHAIJDALAH_ValueModifyType, ::System::Int32, ::System::Int32, ::System::Single, ::System::Boolean, ::RPG::Client::ParkourGame::EModifyEngineFlags, ::RPG::Client::ParkourGame::EModifyEngineFlags))((::PBYTE)hIl2Cpp + CFALFIPEHJH_EIHNIOOPLII_OFFSET))(this, a1, a2, a3, a4, a5, a6, a7);
		}

		::System::Void LFCMJPFENEN(::System::Int32 a1, ::System::Boolean a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::Boolean))((::PBYTE)hIl2Cpp + CFALFIPEHJH_LFCMJPFENEN_OFFSET))(this, a1, a2);
		}

		::System::Void FHKCMLOHADA(::System::Int32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + CFALFIPEHJH_FHKCMLOHADA_OFFSET))(this, a1);
		}

		::System::Void KBCMJABGCHI()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CFALFIPEHJH_KBCMJABGCHI_OFFSET))(this);
		}

		::System::Void HOOEPONKHFM()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CFALFIPEHJH_HOOEPONKHFM_OFFSET))(this);
		}

		::System::Void KGDABDGGGBI()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CFALFIPEHJH_KGDABDGGGBI_OFFSET))(this);
		}

		::System::Void LKCLIHMCHAD()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CFALFIPEHJH_LKCLIHMCHAD_OFFSET))(this);
		}

		::System::Void FPGCLKLMLNK(::System::Int32 a1, ::System::Boolean a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::Boolean))((::PBYTE)hIl2Cpp + CFALFIPEHJH_FPGCLKLMLNK_OFFSET))(this, a1, a2);
		}

		::System::Void ABJHPHBMMEH(::System::Int32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + CFALFIPEHJH_ABJHPHBMMEH_OFFSET))(this, a1);
		}

		::System::Void NDHHEFMEPBM()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CFALFIPEHJH_NDHHEFMEPBM_OFFSET))(this);
		}

		::System::Void HJNABFFJLFB(::System::Int32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + CFALFIPEHJH_HJNABFFJLFB_OFFSET))(this, a1);
		}

		::System::Void IOBHEADKJIK()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CFALFIPEHJH_IOBHEADKJIK_OFFSET))(this);
		}

		::System::Int32 get_ID()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CFALFIPEHJH_GET_ID_OFFSET))(this);
		}

		::LOADPICBEPE* BHLLBCGMMIE()
		{
			return ((::LOADPICBEPE*(*)(::PVOID))((::PBYTE)hIl2Cpp + CFALFIPEHJH_BHLLBCGMMIE_OFFSET))(this);
		}

		::IDHAIJDALAH* AKCLIDAFJCD()
		{
			return ((::IDHAIJDALAH*(*)(::PVOID))((::PBYTE)hIl2Cpp + CFALFIPEHJH_AKCLIDAFJCD_OFFSET))(this);
		}

		::RPG::Client::ParkourGame::MonoParkourCharacter* LIDDMHGKLCG()
		{
			return ((::RPG::Client::ParkourGame::MonoParkourCharacter*(*)(::PVOID))((::PBYTE)hIl2Cpp + CFALFIPEHJH_LIDDMHGKLCG_OFFSET))(this);
		}

		::UnityEngine::Transform* BLPLAFPIJPC()
		{
			return ((::UnityEngine::Transform*(*)(::PVOID))((::PBYTE)hIl2Cpp + CFALFIPEHJH_BLPLAFPIJPC_OFFSET))(this);
		}

		::UnityEngine::Renderer* KMPFFIKGOEK()
		{
			return ((::UnityEngine::Renderer*(*)(::PVOID))((::PBYTE)hIl2Cpp + CFALFIPEHJH_KMPFFIKGOEK_OFFSET))(this);
		}

		::UnityEngine::Collider* ONLIAPJJNJM()
		{
			return ((::UnityEngine::Collider*(*)(::PVOID))((::PBYTE)hIl2Cpp + CFALFIPEHJH_ONLIAPJJNJM_OFFSET))(this);
		}

		::RPG::Client::ParkourGame::ParkourGameLevelConfigAsset* KNKIMNEMDPK()
		{
			return ((::RPG::Client::ParkourGame::ParkourGameLevelConfigAsset*(*)(::PVOID))((::PBYTE)hIl2Cpp + CFALFIPEHJH_KNKIMNEMDPK_OFFSET))(this);
		}

		::UnityEngine::Vector3 HHMFILFAMNA()
		{
			return ((::UnityEngine::Vector3(*)(::PVOID))((::PBYTE)hIl2Cpp + CFALFIPEHJH_HHMFILFAMNA_OFFSET))(this);
		}

		::UnityEngine::Vector3 MOOENEIANFA()
		{
			return ((::UnityEngine::Vector3(*)(::PVOID))((::PBYTE)hIl2Cpp + CFALFIPEHJH_MOOENEIANFA_OFFSET))(this);
		}

		::System::Boolean FGICNJPNNCB()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CFALFIPEHJH_FGICNJPNNCB_OFFSET))(this);
		}

		::System::Void IJCHBCGOIII(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + CFALFIPEHJH_IJCHBCGOIII_OFFSET))(this, a1);
		}

		::System::Boolean ANCBMMFJGKN()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CFALFIPEHJH_ANCBMMFJGKN_OFFSET))(this);
		}

		::System::Void CHAGGCMNOBF(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + CFALFIPEHJH_CHAGGCMNOBF_OFFSET))(this, a1);
		}

		::System::Int32 JHHECJIODKO()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CFALFIPEHJH_JHHECJIODKO_OFFSET))(this);
		}

		::System::Void BKPMKACPAKB(::System::Int32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + CFALFIPEHJH_BKPMKACPAKB_OFFSET))(this, a1);
		}

		::System::Int32 CDIJEMHCACM()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CFALFIPEHJH_CDIJEMHCACM_OFFSET))(this);
		}

		::System::Void MBNNIGJOBGH(::System::Int32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + CFALFIPEHJH_MBNNIGJOBGH_OFFSET))(this, a1);
		}

		::System::Single MEJFIGGILPG()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + CFALFIPEHJH_MEJFIGGILPG_OFFSET))(this);
		}

		::System::Int32 DDBKAALDNAE()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CFALFIPEHJH_DDBKAALDNAE_OFFSET))(this);
		}

		::System::Int32 PKJIAPOPIHJ()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CFALFIPEHJH_PKJIAPOPIHJ_OFFSET))(this);
		}

		::System::Single LMAADBCDDCM()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + CFALFIPEHJH_LMAADBCDDCM_OFFSET))(this);
		}

		::System::Single MELMFLDFNJD()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + CFALFIPEHJH_MELMFLDFNJD_OFFSET))(this);
		}

		::System::Single MBAJMMPBOMN()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + CFALFIPEHJH_MBAJMMPBOMN_OFFSET))(this);
		}

		::System::Single GJIENLJDNGA()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + CFALFIPEHJH_GJIENLJDNGA_OFFSET))(this);
		}

		::System::Single MHJEMPPPKGB()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + CFALFIPEHJH_MHJEMPPPKGB_OFFSET))(this);
		}

		::System::Boolean KBAJPGMBONL()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CFALFIPEHJH_KBAJPGMBONL_OFFSET))(this);
		}

		::System::Single MFPOCPLPOCO()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + CFALFIPEHJH_MFPOCPLPOCO_OFFSET))(this);
		}

		::System::UInt32 HLKEAAFOJGL()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + CFALFIPEHJH_HLKEAAFOJGL_OFFSET))(this);
		}

		::CEHPHKFBPCG* NIOPOKCOKKB()
		{
			return ((::CEHPHKFBPCG*(*)(::PVOID))((::PBYTE)hIl2Cpp + CFALFIPEHJH_NIOPOKCOKKB_OFFSET))(this);
		}

		::MEHEPKNJPOA* JEFFONELMNB()
		{
			return ((::MEHEPKNJPOA*(*)(::PVOID))((::PBYTE)hIl2Cpp + CFALFIPEHJH_JEFFONELMNB_OFFSET))(this);
		}

		::DMPMGGKKIBH* PLOGFHDCFJB()
		{
			return ((::DMPMGGKKIBH*(*)(::PVOID))((::PBYTE)hIl2Cpp + CFALFIPEHJH_PLOGFHDCFJB_OFFSET))(this);
		}

		::System::Boolean GNDLAJNHHLN()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CFALFIPEHJH_GNDLAJNHHLN_OFFSET))(this);
		}

		::System::Boolean DKJCIABIJAM()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CFALFIPEHJH_DKJCIABIJAM_OFFSET))(this);
		}

		::System::Int32 get_ProjectileHitCount()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CFALFIPEHJH_GET_PROJECTILEHITCOUNT_OFFSET))(this);
		}

		::System::Void set_ProjectileHitCount(::System::Int32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + CFALFIPEHJH_SET_PROJECTILEHITCOUNT_OFFSET))(this, a1);
		}

		::System::Int32 get_HitFlyBySuperStarCount()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CFALFIPEHJH_GET_HITFLYBYSUPERSTARCOUNT_OFFSET))(this);
		}

		::System::Void set_HitFlyBySuperStarCount(::System::Int32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + CFALFIPEHJH_SET_HITFLYBYSUPERSTARCOUNT_OFFSET))(this, a1);
		}

		::System::Boolean get_IsAllowEvent()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CFALFIPEHJH_GET_ISALLOWEVENT_OFFSET))(this);
		}

		::System::Void set_IsAllowEvent(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + CFALFIPEHJH_SET_ISALLOWEVENT_OFFSET))(this, a1);
		}

		::System::Single HBFMKEEBPDN()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + CFALFIPEHJH_HBFMKEEBPDN_OFFSET))(this);
		}

		::System::Single EFAPEFCJOIM()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + CFALFIPEHJH_EFAPEFCJOIM_OFFSET))(this);
		}

		::System::Single KAPDGHDJPHM()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + CFALFIPEHJH_KAPDGHDJPHM_OFFSET))(this);
		}

		::System::Boolean _Acceleration_b__33_0()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CFALFIPEHJH__ACCELERATION_B__33_0_OFFSET))(this);
		}

	};
