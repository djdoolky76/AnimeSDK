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
namespace System { class Action; }
namespace System { class String; }
namespace UnityEngine { class Collider; }
namespace UnityEngine { class Renderer; }
namespace UnityEngine { class Rigidbody; }
namespace UnityEngine { class SphereCollider; }
namespace UnityEngine { class Transform; }

#define CFALFIPEHJH_ABJHPHBMMEH_OFFSET UNITYSDK_OFFSET(0xCA032F0)
#define CFALFIPEHJH_AJIIBDMLOAN_1_OFFSET UNITYSDK_OFFSET(0xC9FFD80)
#define CFALFIPEHJH_AJIIBDMLOAN_OFFSET UNITYSDK_OFFSET(0xC9FFA50)
#define CFALFIPEHJH_AKCLIDAFJCD_OFFSET UNITYSDK_OFFSET(0xCA037F0)
#define CFALFIPEHJH_ALMAHDAHPIM_OFFSET UNITYSDK_OFFSET(0xC9FF250)
#define CFALFIPEHJH_ALPMJHCCAGI_OFFSET UNITYSDK_OFFSET(0xCA02190)
#define CFALFIPEHJH_ANCBMMFJGKN_OFFSET UNITYSDK_OFFSET(0xCA03880)
#define CFALFIPEHJH_BCMCACOJOLC_OFFSET UNITYSDK_OFFSET(0xCA00FC0)
#define CFALFIPEHJH_BDEOEIHAGED_OFFSET UNITYSDK_OFFSET(0xC9FC770)
#define CFALFIPEHJH_BHLLBCGMMIE_OFFSET UNITYSDK_OFFSET(0xCA03790)
#define CFALFIPEHJH_BKPMKACPAKB_OFFSET UNITYSDK_OFFSET(0xCA038B0)
#define CFALFIPEHJH_BLPLAFPIJPC_OFFSET UNITYSDK_OFFSET(0xCA03810)
#define CFALFIPEHJH_CCTOR_OFFSET UNITYSDK_OFFSET(0xCA03D00)
#define CFALFIPEHJH_CDIJEMHCACM_OFFSET UNITYSDK_OFFSET(0xCA03980)
#define CFALFIPEHJH_CHAGGCMNOBF_OFFSET UNITYSDK_OFFSET(0xCA03890)
#define CFALFIPEHJH_CHEIGKCPGNP_OFFSET UNITYSDK_OFFSET(0xCA00100)
#define CFALFIPEHJH_CLKOHLCIMGF_OFFSET UNITYSDK_OFFSET(0xCA00750)
#define CFALFIPEHJH_COFLOCCNAFD_OFFSET UNITYSDK_OFFSET(0xCA01A40)
#define CFALFIPEHJH_CONJFLCNMHG_OFFSET UNITYSDK_OFFSET(0xCA01B50)
#define CFALFIPEHJH_CTOR_OFFSET UNITYSDK_OFFSET(0xC9FB4C0)
#define CFALFIPEHJH_DCMNFOIGFPC_OFFSET UNITYSDK_OFFSET(0xCA010E0)
#define CFALFIPEHJH_DDBKAALDNAE_OFFSET UNITYSDK_OFFSET(0xCA03A60)
#define CFALFIPEHJH_DISPOSE_OFFSET UNITYSDK_OFFSET(0xC9FBEE0)
#define CFALFIPEHJH_DKJCIABIJAM_OFFSET UNITYSDK_OFFSET(0xCA019A0)
#define CFALFIPEHJH_DNFAKKONAMH_1_OFFSET UNITYSDK_OFFSET(0xC9FFE40)
#define CFALFIPEHJH_DNFAKKONAMH_OFFSET UNITYSDK_OFFSET(0xC9FFB10)
#define CFALFIPEHJH_EFAPEFCJOIM_OFFSET UNITYSDK_OFFSET(0xC9FED70)
#define CFALFIPEHJH_EIHNIOOPLII_OFFSET UNITYSDK_OFFSET(0xCA00CD0)
#define CFALFIPEHJH_FGGBCDIOJBM_OFFSET UNITYSDK_OFFSET(0xCA01270)
#define CFALFIPEHJH_FGICNJPNNCB_OFFSET UNITYSDK_OFFSET(0xCA03860)
#define CFALFIPEHJH_FHKCMLOHADA_OFFSET UNITYSDK_OFFSET(0xCA02CB0)
#define CFALFIPEHJH_FPGCLKLMLNK_OFFSET UNITYSDK_OFFSET(0xCA03260)
#define CFALFIPEHJH_GET_HITFLYBYSUPERSTARCOUNT_OFFSET UNITYSDK_OFFSET(0xCA03CC0)
#define CFALFIPEHJH_GET_ID_OFFSET UNITYSDK_OFFSET(0xCA03780)
#define CFALFIPEHJH_GET_ISALLOWEVENT_OFFSET UNITYSDK_OFFSET(0xCA03CE0)
#define CFALFIPEHJH_GET_PROJECTILEHITCOUNT_OFFSET UNITYSDK_OFFSET(0xCA03CA0)
#define CFALFIPEHJH_GJIENLJDNGA_OFFSET UNITYSDK_OFFSET(0xCA03AF0)
#define CFALFIPEHJH_GKOIKCBJICD_OFFSET UNITYSDK_OFFSET(0xCA00340)
#define CFALFIPEHJH_GNDLAJNHHLN_OFFSET UNITYSDK_OFFSET(0xCA03C00)
#define CFALFIPEHJH_HBBNINNKFJN_OFFSET UNITYSDK_OFFSET(0xC9FC710)
#define CFALFIPEHJH_HBFMKEEBPDN_OFFSET UNITYSDK_OFFSET(0xC9FED20)
#define CFALFIPEHJH_HGKGCFILGID_OFFSET UNITYSDK_OFFSET(0xCA02940)
#define CFALFIPEHJH_HHMFILFAMNA_OFFSET UNITYSDK_OFFSET(0xCA03840)
#define CFALFIPEHJH_HJLMIPOGMEL_OFFSET UNITYSDK_OFFSET(0xCA028F0)
#define CFALFIPEHJH_HJNABFFJLFB_OFFSET UNITYSDK_OFFSET(0xCA03570)
#define CFALFIPEHJH_HLKEAAFOJGL_OFFSET UNITYSDK_OFFSET(0xCA03B20)
#define CFALFIPEHJH_HOOEPONKHFM_OFFSET UNITYSDK_OFFSET(0xCA03090)
#define CFALFIPEHJH_IBIMCLMLHFA_OFFSET UNITYSDK_OFFSET(0xCA00030)
#define CFALFIPEHJH_IECIAPPANHI_OFFSET UNITYSDK_OFFSET(0xCA00F40)
#define CFALFIPEHJH_IFDKIIDMHBN_OFFSET UNITYSDK_OFFSET(0xCA00E60)
#define CFALFIPEHJH_IHCHAKEGAKB_OFFSET UNITYSDK_OFFSET(0xCA02A10)
#define CFALFIPEHJH_IJCHBCGOIII_OFFSET UNITYSDK_OFFSET(0xCA03870)
#define CFALFIPEHJH_IOBHEADKJIK_OFFSET UNITYSDK_OFFSET(0xCA03680)
#define CFALFIPEHJH_IOBONOALKNH_1_OFFSET UNITYSDK_OFFSET(0xC9FFF70)
#define CFALFIPEHJH_IOBONOALKNH_OFFSET UNITYSDK_OFFSET(0xC9FFF00)
#define CFALFIPEHJH_JEFFONELMNB_OFFSET UNITYSDK_OFFSET(0xCA03BE0)
#define CFALFIPEHJH_JHHECJIODKO_OFFSET UNITYSDK_OFFSET(0xCA038A0)
#define CFALFIPEHJH_JIFGDDCKPJD_OFFSET UNITYSDK_OFFSET(0xCA007C0)
#define CFALFIPEHJH_JKNBMENBFGD_OFFSET UNITYSDK_OFFSET(0xC9FDBD0)
#define CFALFIPEHJH_JLANKNHFKCN_OFFSET UNITYSDK_OFFSET(0xC9FCC50)
#define CFALFIPEHJH_KAPDGHDJPHM_OFFSET UNITYSDK_OFFSET(0xC9FEDC0)
#define CFALFIPEHJH_KBAJPGMBONL_OFFSET UNITYSDK_OFFSET(0xC9FDBB0)
#define CFALFIPEHJH_KBCMJABGCHI_OFFSET UNITYSDK_OFFSET(0xCA03050)
#define CFALFIPEHJH_KGDABDGGGBI_OFFSET UNITYSDK_OFFSET(0xCA03140)
#define CFALFIPEHJH_KMPFFIKGOEK_OFFSET UNITYSDK_OFFSET(0xCA03820)
#define CFALFIPEHJH_KNKIMNEMDPK_OFFSET UNITYSDK_OFFSET(0xCA02890)
#define CFALFIPEHJH_KPJGDHLENIP_OFFSET UNITYSDK_OFFSET(0xC9FC1B0)
#define CFALFIPEHJH_LCKJFJJIBFM_OFFSET UNITYSDK_OFFSET(0xCA00830)
#define CFALFIPEHJH_LFCMJPFENEN_OFFSET UNITYSDK_OFFSET(0xCA02C60)
#define CFALFIPEHJH_LGIMCMOPFFN_OFFSET UNITYSDK_OFFSET(0xCA00950)
#define CFALFIPEHJH_LIDDMHGKLCG_OFFSET UNITYSDK_OFFSET(0xCA03800)
#define CFALFIPEHJH_LKCLIHMCHAD_OFFSET UNITYSDK_OFFSET(0xCA03180)
#define CFALFIPEHJH_LMAADBCDDCM_OFFSET UNITYSDK_OFFSET(0xCA03A80)
#define CFALFIPEHJH_LPOIMPCKDDJ_OFFSET UNITYSDK_OFFSET(0xCA00450)
#define CFALFIPEHJH_MBAJMMPBOMN_OFFSET UNITYSDK_OFFSET(0xCA03AE0)
#define CFALFIPEHJH_MBNNIGJOBGH_OFFSET UNITYSDK_OFFSET(0xC9FC900)
#define CFALFIPEHJH_MCAGCIADKKO_OFFSET UNITYSDK_OFFSET(0xCA00B60)
#define CFALFIPEHJH_MEJFIGGILPG_OFFSET UNITYSDK_OFFSET(0xCA03990)
#define CFALFIPEHJH_MELMFLDFNJD_OFFSET UNITYSDK_OFFSET(0xCA03A90)
#define CFALFIPEHJH_MFPOCPLPOCO_OFFSET UNITYSDK_OFFSET(0xCA03B10)
#define CFALFIPEHJH_MHJEMPPPKGB_OFFSET UNITYSDK_OFFSET(0xCA03B00)
#define CFALFIPEHJH_MOOENEIANFA_OFFSET UNITYSDK_OFFSET(0xCA01F60)
#define CFALFIPEHJH_NBJFLGNEBED_OFFSET UNITYSDK_OFFSET(0xC9FDCA0)
#define CFALFIPEHJH_NDHHEFMEPBM_OFFSET UNITYSDK_OFFSET(0xCA03400)
#define CFALFIPEHJH_NGFIDFLIHGA_OFFSET UNITYSDK_OFFSET(0xCA013E0)
#define CFALFIPEHJH_NIOPOKCOKKB_OFFSET UNITYSDK_OFFSET(0xCA03BD0)
#define CFALFIPEHJH_NPAFMEBNFOB_OFFSET UNITYSDK_OFFSET(0xC9FC9D0)
#define CFALFIPEHJH_OEEJMPKCEFF_OFFSET UNITYSDK_OFFSET(0xC9FD770)
#define CFALFIPEHJH_OHMHJFANEIF_OFFSET UNITYSDK_OFFSET(0xCA00ED0)
#define CFALFIPEHJH_ONLIAPJJNJM_OFFSET UNITYSDK_OFFSET(0xCA03830)
#define CFALFIPEHJH_PKJIAPOPIHJ_OFFSET UNITYSDK_OFFSET(0xCA03A70)
#define CFALFIPEHJH_PKJPJDFGPOP_OFFSET UNITYSDK_OFFSET(0xC9FEE10)
#define CFALFIPEHJH_PLOGFHDCFJB_OFFSET UNITYSDK_OFFSET(0xCA03BF0)
#define CFALFIPEHJH_PNMMOEFLFBH_OFFSET UNITYSDK_OFFSET(0xCA00580)
#define CFALFIPEHJH_SET_HITFLYBYSUPERSTARCOUNT_OFFSET UNITYSDK_OFFSET(0xCA03CD0)
#define CFALFIPEHJH_SET_ISALLOWEVENT_OFFSET UNITYSDK_OFFSET(0xCA03CF0)
#define CFALFIPEHJH_SET_PROJECTILEHITCOUNT_OFFSET UNITYSDK_OFFSET(0xCA03CB0)
#define CFALFIPEHJH__ACCELERATION_B__33_0_OFFSET UNITYSDK_OFFSET(0xCA03E50)

inline static constexpr unsigned int CFALFIPEHJH_TypeDefinitionIndex = 74186;

	class CFALFIPEHJH : public ::ABDOMMLHNBC
	{
	public:
		::UnityEngine::Renderer* JAMDAALMOAL; // 0x10
		::System::Action* PNIMHENAFDD; // 0x18
		::UnityEngine::Rigidbody* HPAGDLDHKFC; // 0x20
		::RPG::Client::ParkourGame::MonoParkourCharacter* PFECGMGNMEN; // 0x28
		::UnityEngine::Transform* CPNELLAPDMK; // 0x30
		::UnityEngine::SphereCollider* GBDKBLPAHEL; // 0x38
		::RPG::Client::ParkourGame::MonoParkourCharacterCollision* APCFEAKEOAE; // 0x40
		::RPG::GameCore::GameEntity* KAKEIDJDNHJ; // 0x48
		::CEHPHKFBPCG* LLFEHKABAIA; // 0x50
		::UnityEngine::Transform* PDJGEDNLBKJ; // 0x58
		::MEHEPKNJPOA* NELLPHEKEPH; // 0x60
		::System::Action* HIBOENHDHJL; // 0x68
		::IDHAIJDALAH* HICEHCKKEPK; // 0x70
		::CFALFIPEHJH_LEIONODFFJE* CPBIJHKPFAN; // 0x78
		::RPG::Client::AttachPointMapping* MDOMBPFNPGB; // 0x80
		::DMPMGGKKIBH* LGEGKIKIPOB; // 0x88
		::LEJFDHMDDKO* NJFFGCELHIM; // 0x90
		::System::Single PBGACDOMKMP; // 0x98
		::System::Single BALALBMPPCA; // 0x9C
		::System::Int32 BBFBPDMGAMM; // 0xA0
		::System::Single HPCHCEFOKJB; // 0xA4
		::System::Single LJBKILGNJCF; // 0xA8
		::System::Single AAFLIBHMNCE; // 0xAC
		::System::Int32 GDMLAIGPALB; // 0xB0
		::System::Int32 _ProjectileHitCount_k__BackingField; // 0xB4
		::System::Int32 _HitFlyBySuperStarCount_k__BackingField; // 0xB8
		::System::Single CKHICIBGKEL; // 0xBC
		::System::Single NLIFGOAGCCG; // 0xC0
		::System::Int32 ACPFCFJFJBL; // 0xC4
		::System::Int32 OAIEBAKJKIG; // 0xC8
		::System::Int32 HKCIBHFGLFN; // 0xCC
		::UnityEngine::Quaternion NCMEPPHLGEG; // 0xD0
		::System::Single EBGCFKAKLPP; // 0xE0
		::UnityEngine::Vector3 MIFKHBDOGLN; // 0xE4
		::System::Single DDPJNLAFNAN; // 0xF0
		::System::Boolean _IsAllowEvent_k__BackingField; // 0xF4
		::System::Boolean JDPGFIBLFOP; // 0xF5
		::System::Boolean HNALEMBOBFE; // 0xF6
		::System::Boolean BKAKGPKNDFO; // 0xF7
		::System::Int32 _ID_k__BackingField; // 0xF8
		::System::Single BINPBMJJKMN; // 0xFC
		::System::Single GHABAAOGBNO; // 0x100
		::System::Single EJDHAEPMICP; // 0x104
		static ::Il2CppArray<::UnityEngine::RaycastHit>** StaticGet_OMBHOLNCLJJ()
		{
			return (::Il2CppArray<::UnityEngine::RaycastHit>**)UnitySDK::FromName("", "CFALFIPEHJH")->GetStaticField(0x1E730);
		}

		static ::Il2CppArray<::UnityEngine::Collider*>** StaticGet_JIOHMMHFBPH()
		{
			return (::Il2CppArray<::UnityEngine::Collider*>**)UnitySDK::FromName("", "CFALFIPEHJH")->GetStaticField(0x1E738);
		}

		static ::System::Int32* StaticGet_AMMFGDCIGGE()
		{
			return (::System::Int32*)UnitySDK::FromName("", "CFALFIPEHJH")->GetStaticField(0x6F70);
		}

		static ::System::Int32* StaticGet_CGOMGBONLGB()
		{
			return (::System::Int32*)UnitySDK::FromName("", "CFALFIPEHJH")->GetStaticField(0x6F74);
		}

		static ::System::Int32* StaticGet_GHCEDPMCNNO()
		{
			return (::System::Int32*)UnitySDK::FromName("", "CFALFIPEHJH")->GetStaticField(0x6F78);
		}

		static ::System::Int32* StaticGet_AFBBDLEDFPC()
		{
			return (::System::Int32*)UnitySDK::FromName("", "CFALFIPEHJH")->GetStaticField(0x6F7C);
		}

		static ::System::Int32* StaticGet_PJFCJEGHHJN()
		{
			return (::System::Int32*)UnitySDK::FromName("", "CFALFIPEHJH")->GetStaticField(0x6F80);
		}

		static ::System::Int32* StaticGet_BEMFCHDNNII()
		{
			return (::System::Int32*)UnitySDK::FromName("", "CFALFIPEHJH")->GetStaticField(0x6F84);
		}

		static ::System::Int32* StaticGet_NGGAJKCHILG()
		{
			return (::System::Int32*)UnitySDK::FromName("", "CFALFIPEHJH")->GetStaticField(0x6F88);
		}

		static ::System::Int32* StaticGet_IHPPEKCLIPD()
		{
			return (::System::Int32*)UnitySDK::FromName("", "CFALFIPEHJH")->GetStaticField(0x6F8C);
		}

		static ::System::Int32* StaticGet_LEDGDEBNMPP()
		{
			return (::System::Int32*)UnitySDK::FromName("", "CFALFIPEHJH")->GetStaticField(0x6F90);
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
