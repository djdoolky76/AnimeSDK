#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/HBCMHADMLOP.h"
#include "unitysdk/RPG/GameCore/SwitchMascotSection.h"
#include "unitysdk/System/ValueTuple_2.h"
#include "unitysdk/UnityEngine/Quaternion.h"
#include "unitysdk/UnityEngine/Vector3.h"
class EKFMIDBJDIA;
class JCDNNAFPNPL_AMLNEOKBDKL;
class KNKPLOGICFO;
class KOJOJDPPIEO;
namespace RPG::Client { class AchievementData; }
namespace RPG::Client { class MonoDroneAirwallControl; }
namespace RPG::Client { class MonoEffect; }
namespace RPG::Client { class SwitchMascotPuzzleBoard; }
namespace RPG::GameCore { class AdventureCharacterController; }
namespace RPG::GameCore { class CharacterInputData; }
namespace RPG::GameCore { class GameEntity; }
namespace RPG::GameCore { class MazePuzzleSwitchMascotRow; }
namespace RPG::GameCore { class SwitchMascotConfig; }
namespace System { class Object; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T> class List_1; }
namespace UnityEngine { class GameObject; }
namespace UnityEngine { class Transform; }

#define JCDNNAFPNPL_AELNLIPDBHL_OFFSET UNITYSDK_OFFSET(0x16941C60)
#define JCDNNAFPNPL_ANHPDJKGCEP_OFFSET UNITYSDK_OFFSET(0x169427A0)
#define JCDNNAFPNPL_APIKPBPJOGO_OFFSET UNITYSDK_OFFSET(0x16940A40)
#define JCDNNAFPNPL_BBCLLDKDDON_OFFSET UNITYSDK_OFFSET(0x16941520)
#define JCDNNAFPNPL_CAGBPCICJDJ_OFFSET UNITYSDK_OFFSET(0x1693E8D0)
#define JCDNNAFPNPL_CCTOR_OFFSET UNITYSDK_OFFSET(0x16945610)
#define JCDNNAFPNPL_CEMBGIJCNBL_OFFSET UNITYSDK_OFFSET(0x169435B0)
#define JCDNNAFPNPL_CIDBLPFMMJC_OFFSET UNITYSDK_OFFSET(0x16943730)
#define JCDNNAFPNPL_CIKFNMLFKLP_OFFSET UNITYSDK_OFFSET(0x16943040)
#define JCDNNAFPNPL_CKIKILGFJGE_OFFSET UNITYSDK_OFFSET(0x16941F00)
#define JCDNNAFPNPL_CTOR_OFFSET UNITYSDK_OFFSET(0x16945520)
#define JCDNNAFPNPL_DBCFFHCDKLP_OFFSET UNITYSDK_OFFSET(0x16945280)
#define JCDNNAFPNPL_DFFCHNLKELO_OFFSET UNITYSDK_OFFSET(0x169419F0)
#define JCDNNAFPNPL_DGBGOIHKJOL_OFFSET UNITYSDK_OFFSET(0x16943990)
#define JCDNNAFPNPL_DLBADHHBGPG_OFFSET UNITYSDK_OFFSET(0x16945330)
#define JCDNNAFPNPL_EKADMCJJPOD_OFFSET UNITYSDK_OFFSET(0x16940860)
#define JCDNNAFPNPL_EKMHEABCPMD_OFFSET UNITYSDK_OFFSET(0x169433D0)
#define JCDNNAFPNPL_FJFNMDJBJLK_OFFSET UNITYSDK_OFFSET(0x16943670)
#define JCDNNAFPNPL_FMDBBCLNDOH_OFFSET UNITYSDK_OFFSET(0x16941AA0)
#define JCDNNAFPNPL_FMGHJDAONJH_OFFSET UNITYSDK_OFFSET(0x1693E860)
#define JCDNNAFPNPL_GAGFPOJOPMI_OFFSET UNITYSDK_OFFSET(0x16944FD0)
#define JCDNNAFPNPL_GEBAGDANMLI_OFFSET UNITYSDK_OFFSET(0x16940C00)
#define JCDNNAFPNPL_GET_NEEDTICK_OFFSET UNITYSDK_OFFSET(0x16940F90)
#define JCDNNAFPNPL_GJJNHJNNPEA_OFFSET UNITYSDK_OFFSET(0x169437F0)
#define JCDNNAFPNPL_GKGMOMMJEGM_OFFSET UNITYSDK_OFFSET(0x169407B0)
#define JCDNNAFPNPL_HGFDKCODMPL_OFFSET UNITYSDK_OFFSET(0x169427F0)
#define JCDNNAFPNPL_HGNCIBIMMFB_OFFSET UNITYSDK_OFFSET(0x1693E7B0)
#define JCDNNAFPNPL_HIMJPFAIHNI_OFFSET UNITYSDK_OFFSET(0x16940380)
#define JCDNNAFPNPL_HJOMAMMJIJO_OFFSET UNITYSDK_OFFSET(0x16943190)
#define JCDNNAFPNPL_ICKFJEPKELF_OFFSET UNITYSDK_OFFSET(0x1693FF70)
#define JCDNNAFPNPL_IFEFNKLMFCC_OFFSET UNITYSDK_OFFSET(0x169431E0)
#define JCDNNAFPNPL_INOALFJMCML_OFFSET UNITYSDK_OFFSET(0x16941B70)
#define JCDNNAFPNPL_IONBCCPDIMO_OFFSET UNITYSDK_OFFSET(0x1693F680)
#define JCDNNAFPNPL_JALHFNNMFBA_OFFSET UNITYSDK_OFFSET(0x16941D60)
#define JCDNNAFPNPL_JIILGPLFDAF_OFFSET UNITYSDK_OFFSET(0x16943550)
#define JCDNNAFPNPL_JLJNOGAGCLA_OFFSET UNITYSDK_OFFSET(0x16944640)
#define JCDNNAFPNPL_JOIDAPJBPNO_OFFSET UNITYSDK_OFFSET(0x16944F10)
#define JCDNNAFPNPL_KAOIHHCJFDO_OFFSET UNITYSDK_OFFSET(0x1693E400)
#define JCDNNAFPNPL_KFCKALDHIHA_OFFSET UNITYSDK_OFFSET(0x16943370)
#define JCDNNAFPNPL_KHKKHDNILKI_OFFSET UNITYSDK_OFFSET(0x16943250)
#define JCDNNAFPNPL_KIPAOIDDHGA_OFFSET UNITYSDK_OFFSET(0x16945500)
#define JCDNNAFPNPL_KLFOLJENAIO_OFFSET UNITYSDK_OFFSET(0x1693F4D0)
#define JCDNNAFPNPL_KNJNPJINDMC_OFFSET UNITYSDK_OFFSET(0x169417D0)
#define JCDNNAFPNPL_LFKDIIMIELO_OFFSET UNITYSDK_OFFSET(0x169414B0)
#define JCDNNAFPNPL_LGGGOMPGBBA_OFFSET UNITYSDK_OFFSET(0x1693FD30)
#define JCDNNAFPNPL_LHDNJCHMLAG_OFFSET UNITYSDK_OFFSET(0x16940230)
#define JCDNNAFPNPL_LLPJFCDLDHI_OFFSET UNITYSDK_OFFSET(0x16943AD0)
#define JCDNNAFPNPL_LMJFMGEKBCK_OFFSET UNITYSDK_OFFSET(0x16942400)
#define JCDNNAFPNPL_MHELJODPAJF_OFFSET UNITYSDK_OFFSET(0x16941AF0)
#define JCDNNAFPNPL_MIEMLIBAGAO_OFFSET UNITYSDK_OFFSET(0x169400E0)
#define JCDNNAFPNPL_MMNAGBOIHIM_OFFSET UNITYSDK_OFFSET(0x1693EAF0)
#define JCDNNAFPNPL_MODIDCIHLLJ_OFFSET UNITYSDK_OFFSET(0x16941E30)
#define JCDNNAFPNPL_NACDDCKNDNM_OFFSET UNITYSDK_OFFSET(0x16941050)
#define JCDNNAFPNPL_NBMAJKDGMHK_OFFSET UNITYSDK_OFFSET(0x16944980)
#define JCDNNAFPNPL_NDAPKMFLJGB_OFFSET UNITYSDK_OFFSET(0x16944730)
#define JCDNNAFPNPL_NDCJMPMNJCI_OFFSET UNITYSDK_OFFSET(0x1693F870)
#define JCDNNAFPNPL_NEBBGDJFJMO_OFFSET UNITYSDK_OFFSET(0x169445B0)
#define JCDNNAFPNPL_NFDNJLABMLD_OFFSET UNITYSDK_OFFSET(0x16941A50)
#define JCDNNAFPNPL_NGCHEIBOFGJ_OFFSET UNITYSDK_OFFSET(0x16941CC0)
#define JCDNNAFPNPL_NKFEJMDMCGM_OFFSET UNITYSDK_OFFSET(0x16945510)
#define JCDNNAFPNPL_NMCFJKBHFOO_OFFSET UNITYSDK_OFFSET(0x16944A50)
#define JCDNNAFPNPL_OBILEHAAGLP_OFFSET UNITYSDK_OFFSET(0x16940580)
#define JCDNNAFPNPL_OCGKMGIBKKF_OFFSET UNITYSDK_OFFSET(0x1693E640)
#define JCDNNAFPNPL_ODGFEJPEGKG_OFFSET UNITYSDK_OFFSET(0x1693FB10)
#define JCDNNAFPNPL_OENHEOCOKPH_OFFSET UNITYSDK_OFFSET(0x16943B90)
#define JCDNNAFPNPL_OLGHJLOENKG_OFFSET UNITYSDK_OFFSET(0x16945130)
#define JCDNNAFPNPL_OMFNJLGIFGL_OFFSET UNITYSDK_OFFSET(0x16942740)
#define JCDNNAFPNPL_ONINIT_OFFSET UNITYSDK_OFFSET(0x1693E010)
#define JCDNNAFPNPL_ONUNINIT_OFFSET UNITYSDK_OFFSET(0x1693FBC0)
#define JCDNNAFPNPL_PEPKNEGLLBJ_OFFSET UNITYSDK_OFFSET(0x169444C0)
#define JCDNNAFPNPL_PLIONAKOBGG_OFFSET UNITYSDK_OFFSET(0x1693ED90)
#define JCDNNAFPNPL_TICK_OFFSET UNITYSDK_OFFSET(0x16940FA0)

inline static constexpr unsigned int JCDNNAFPNPL_TypeDefinitionIndex = 61589;

	class JCDNNAFPNPL : public ::HBCMHADMLOP
	{
	public:
		::RPG::GameCore::GameEntity* JCCHOIPFHHD; // 0x20
		::RPG::Client::AchievementData* CDNGGCPCIFD; // 0x28
		::UnityEngine::GameObject* DMJELFIBKLK; // 0x30
		::RPG::GameCore::SwitchMascotConfig* PCCAFFNJDIA; // 0x38
		::System::Collections::Generic::List_1<::RPG::GameCore::GameEntity*>* NMFBMOGMMLH; // 0x40
		::RPG::GameCore::MazePuzzleSwitchMascotRow* EJOFABGJDON; // 0x48
		::RPG::GameCore::GameEntity* JOBPFANPAJH; // 0x50
		::System::Collections::Generic::List_1<::RPG::Client::MonoEffect*>* MHPLNGIFNNB; // 0x58
		::System::Collections::Generic::Dictionary_2<::System::ValueTuple_2<::System::UInt32, ::System::UInt32>, ::System::Object*>* MOHJMJACDCJ; // 0x60
		::KNKPLOGICFO* IAHFCNHAAGA; // 0x68
		::RPG::GameCore::AdventureCharacterController* CPIIOIPAAKK; // 0x70
		::RPG::Client::SwitchMascotPuzzleBoard* CCAHGFIABKE; // 0x78
		::RPG::Client::MonoDroneAirwallControl* JACOMHFDIHJ; // 0x80
		::System::UInt64 COOGOKOECMC; // 0x88
		::System::Single KAHNKBDCEIA; // 0x90
		::System::Boolean FAAPJLLNIEN; // 0x94
		::System::Boolean FGEBLCBKFHE; // 0x95
		::System::Boolean KFPJOPKOFDJ; // 0x96
		::System::Boolean KLLOJCGKPPJ; // 0x97
		::System::Int32 KMPIAHHLBCD; // 0x98
		::System::Int32 CDKAGPNGKCI; // 0x9C
		::System::Single JMEDDCINOBG; // 0xA0
		::System::Single JOAAJHBNBPP; // 0xA4
		::System::Boolean GCACKIEFFBB; // 0xA8
		::System::Boolean IPPDPKBEEKL; // 0xA9
		static ::System::String** StaticGet_PPOCNNJIMAK()
		{
			return (::System::String**)UnitySDK::FromName("", "JCDNNAFPNPL")->GetStaticField(0x62830);
		}

		static ::System::String** StaticGet_JAIPMDNACOG()
		{
			return (::System::String**)UnitySDK::FromName("", "JCDNNAFPNPL")->GetStaticField(0x62838);
		}

		static ::System::String** StaticGet_PCBLIDCMKMJ()
		{
			return (::System::String**)UnitySDK::FromName("", "JCDNNAFPNPL")->GetStaticField(0x62840);
		}

		static ::System::UInt32* StaticGet_NPBLCGECMAG()
		{
			return (::System::UInt32*)UnitySDK::FromName("", "JCDNNAFPNPL")->GetStaticField(0x142D0);
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + JCDNNAFPNPL_CTOR_OFFSET))(this);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + JCDNNAFPNPL_CCTOR_OFFSET))();
		}

		::System::Void OnInit()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + JCDNNAFPNPL_ONINIT_OFFSET))(this);
		}

		::System::Void OnUninit()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + JCDNNAFPNPL_ONUNINIT_OFFSET))(this);
		}

		::System::Boolean get_NeedTick()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + JCDNNAFPNPL_GET_NEEDTICK_OFFSET))(this);
		}

		::System::Void Tick(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + JCDNNAFPNPL_TICK_OFFSET))(this, a1);
		}

		::System::Void DFFCHNLKELO(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + JCDNNAFPNPL_DFFCHNLKELO_OFFSET))(this, a1);
		}

		::System::Void NFDNJLABMLD()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + JCDNNAFPNPL_NFDNJLABMLD_OFFSET))(this);
		}

		::System::Int32 FMDBBCLNDOH()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + JCDNNAFPNPL_FMDBBCLNDOH_OFFSET))(this);
		}

		::System::Void MHELJODPAJF(::System::Int32 a1, ::System::Boolean a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::Boolean))((::PBYTE)hIl2Cpp + JCDNNAFPNPL_MHELJODPAJF_OFFSET))(this, a1, a2);
		}

		::System::Void AELNLIPDBHL(::System::Int32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + JCDNNAFPNPL_AELNLIPDBHL_OFFSET))(this, a1);
		}

		::System::Boolean NGCHEIBOFGJ(::System::UInt32 a1, ::System::UInt32 a2)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::UInt32, ::System::UInt32))((::PBYTE)hIl2Cpp + JCDNNAFPNPL_NGCHEIBOFGJ_OFFSET))(this, a1, a2);
		}

		::System::Int32 JALHFNNMFBA(::System::UInt32 a1, ::System::UInt32 a2)
		{
			return ((::System::Int32(*)(::PVOID, ::System::UInt32, ::System::UInt32))((::PBYTE)hIl2Cpp + JCDNNAFPNPL_JALHFNNMFBA_OFFSET))(this, a1, a2);
		}

		::System::Int32 MODIDCIHLLJ(::System::UInt32 a1, ::System::UInt32 a2)
		{
			return ((::System::Int32(*)(::PVOID, ::System::UInt32, ::System::UInt32))((::PBYTE)hIl2Cpp + JCDNNAFPNPL_MODIDCIHLLJ_OFFSET))(this, a1, a2);
		}

		::System::Void CKIKILGFJGE(::RPG::GameCore::SwitchMascotSection a1, ::System::Boolean a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::SwitchMascotSection, ::System::Boolean))((::PBYTE)hIl2Cpp + JCDNNAFPNPL_CKIKILGFJGE_OFFSET))(this, a1, a2);
		}

		::System::Void LMJFMGEKBCK(::RPG::GameCore::SwitchMascotSection a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::SwitchMascotSection))((::PBYTE)hIl2Cpp + JCDNNAFPNPL_LMJFMGEKBCK_OFFSET))(this, a1);
		}

		::System::Void OMFNJLGIFGL(::RPG::GameCore::GameEntity* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::GameEntity*))((::PBYTE)hIl2Cpp + JCDNNAFPNPL_OMFNJLGIFGL_OFFSET))(this, a1);
		}

		::System::Boolean ANHPDJKGCEP()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + JCDNNAFPNPL_ANHPDJKGCEP_OFFSET))(this);
		}

		::System::Void HGFDKCODMPL(::RPG::GameCore::GameEntity* a1, ::UnityEngine::Vector3 a2, ::UnityEngine::Quaternion a3, ::System::Boolean a4)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::GameEntity*, ::UnityEngine::Vector3, ::UnityEngine::Quaternion, ::System::Boolean))((::PBYTE)hIl2Cpp + JCDNNAFPNPL_HGFDKCODMPL_OFFSET))(this, a1, a2, a3, a4);
		}

		::System::Void HJOMAMMJIJO(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + JCDNNAFPNPL_HJOMAMMJIJO_OFFSET))(this, a1);
		}

		::System::Void IFEFNKLMFCC(::RPG::GameCore::GameEntity* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::GameEntity*))((::PBYTE)hIl2Cpp + JCDNNAFPNPL_IFEFNKLMFCC_OFFSET))(this, a1);
		}

		::System::Void KAOIHHCJFDO()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + JCDNNAFPNPL_KAOIHHCJFDO_OFFSET))(this);
		}

		::System::Void LGGGOMPGBBA()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + JCDNNAFPNPL_LGGGOMPGBBA_OFFSET))(this);
		}

		::System::Void OCGKMGIBKKF()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + JCDNNAFPNPL_OCGKMGIBKKF_OFFSET))(this);
		}

		::System::Void ICKFJEPKELF()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + JCDNNAFPNPL_ICKFJEPKELF_OFFSET))(this);
		}

		::System::Void KFCKALDHIHA(::System::Object* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + JCDNNAFPNPL_KFCKALDHIHA_OFFSET))(this, a1);
		}

		::System::Void JIILGPLFDAF(::System::Object* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + JCDNNAFPNPL_JIILGPLFDAF_OFFSET))(this, a1);
		}

		::System::Void CEMBGIJCNBL(::System::Object* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + JCDNNAFPNPL_CEMBGIJCNBL_OFFSET))(this, a1);
		}

		::System::Void FJFNMDJBJLK(::System::Object* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + JCDNNAFPNPL_FJFNMDJBJLK_OFFSET))(this, a1);
		}

		::System::Void CIDBLPFMMJC(::System::Object* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + JCDNNAFPNPL_CIDBLPFMMJC_OFFSET))(this, a1);
		}

		::System::Void GJJNHJNNPEA(::System::Object* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + JCDNNAFPNPL_GJJNHJNNPEA_OFFSET))(this, a1);
		}

		::System::Void DGBGOIHKJOL(::System::Object* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + JCDNNAFPNPL_DGBGOIHKJOL_OFFSET))(this, a1);
		}

		::System::Void LLPJFCDLDHI(::EKFMIDBJDIA* a1)
		{
			return ((::System::Void(*)(::PVOID, ::EKFMIDBJDIA*))((::PBYTE)hIl2Cpp + JCDNNAFPNPL_LLPJFCDLDHI_OFFSET))(this, a1);
		}

		::System::Void PEPKNEGLLBJ(::EKFMIDBJDIA* a1)
		{
			return ((::System::Void(*)(::PVOID, ::EKFMIDBJDIA*))((::PBYTE)hIl2Cpp + JCDNNAFPNPL_PEPKNEGLLBJ_OFFSET))(this, a1);
		}

		::System::Void ODGFEJPEGKG()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + JCDNNAFPNPL_ODGFEJPEGKG_OFFSET))(this);
		}

		::System::Void EKMHEABCPMD(::System::String* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + JCDNNAFPNPL_EKMHEABCPMD_OFFSET))(this, a1);
		}

		::System::Void MMNAGBOIHIM()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + JCDNNAFPNPL_MMNAGBOIHIM_OFFSET))(this);
		}

		::System::Void MIEMLIBAGAO()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + JCDNNAFPNPL_MIEMLIBAGAO_OFFSET))(this);
		}

		::System::Void NACDDCKNDNM()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + JCDNNAFPNPL_NACDDCKNDNM_OFFSET))(this);
		}

		::System::Void NEBBGDJFJMO(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + JCDNNAFPNPL_NEBBGDJFJMO_OFFSET))(this, a1);
		}

		::System::Void PLIONAKOBGG()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + JCDNNAFPNPL_PLIONAKOBGG_OFFSET))(this);
		}

		::System::Void LHDNJCHMLAG()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + JCDNNAFPNPL_LHDNJCHMLAG_OFFSET))(this);
		}

		::System::Void JLJNOGAGCLA(::RPG::GameCore::CharacterInputData* a1, ::System::Single a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::CharacterInputData*, ::System::Single))((::PBYTE)hIl2Cpp + JCDNNAFPNPL_JLJNOGAGCLA_OFFSET))(this, a1, a2);
		}

		::System::Void NBMAJKDGMHK(::RPG::GameCore::CharacterInputData* a1, ::System::Single a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::CharacterInputData*, ::System::Single))((::PBYTE)hIl2Cpp + JCDNNAFPNPL_NBMAJKDGMHK_OFFSET))(this, a1, a2);
		}

		::System::Void NDAPKMFLJGB(::RPG::GameCore::CharacterInputData* a1, ::System::Single a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::CharacterInputData*, ::System::Single))((::PBYTE)hIl2Cpp + JCDNNAFPNPL_NDAPKMFLJGB_OFFSET))(this, a1, a2);
		}

		::System::Void KLFOLJENAIO()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + JCDNNAFPNPL_KLFOLJENAIO_OFFSET))(this);
		}

		::System::Int32 NMCFJKBHFOO(::Il2CppArray<::KOJOJDPPIEO*>* a1, ::RPG::GameCore::SwitchMascotSection a2)
		{
			return ((::System::Int32(*)(::PVOID, ::Il2CppArray<::KOJOJDPPIEO*>*, ::RPG::GameCore::SwitchMascotSection))((::PBYTE)hIl2Cpp + JCDNNAFPNPL_NMCFJKBHFOO_OFFSET))(this, a1, a2);
		}

		::System::Void HIMJPFAIHNI()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + JCDNNAFPNPL_HIMJPFAIHNI_OFFSET))(this);
		}

		::System::Void OENHEOCOKPH(::RPG::GameCore::GameEntity* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::GameEntity*))((::PBYTE)hIl2Cpp + JCDNNAFPNPL_OENHEOCOKPH_OFFSET))(this, a1);
		}

		::JCDNNAFPNPL_AMLNEOKBDKL* JOIDAPJBPNO(::System::UInt32 a1, ::System::UInt32 a2)
		{
			return ((::JCDNNAFPNPL_AMLNEOKBDKL*(*)(::PVOID, ::System::UInt32, ::System::UInt32))((::PBYTE)hIl2Cpp + JCDNNAFPNPL_JOIDAPJBPNO_OFFSET))(this, a1, a2);
		}

		::System::Void OLGHJLOENKG(::RPG::GameCore::GameEntity* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::GameEntity*))((::PBYTE)hIl2Cpp + JCDNNAFPNPL_OLGHJLOENKG_OFFSET))(this, a1);
		}

		::UnityEngine::Vector3 GAGFPOJOPMI(::UnityEngine::Vector3 a1)
		{
			return ((::UnityEngine::Vector3(*)(::PVOID, ::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + JCDNNAFPNPL_GAGFPOJOPMI_OFFSET))(this, a1);
		}

		::System::Void OBILEHAAGLP()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + JCDNNAFPNPL_OBILEHAAGLP_OFFSET))(this);
		}

		::System::Void FMGHJDAONJH()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + JCDNNAFPNPL_FMGHJDAONJH_OFFSET))(this);
		}

		::System::Void INOALFJMCML()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + JCDNNAFPNPL_INOALFJMCML_OFFSET))(this);
		}

		::System::Void CAGBPCICJDJ()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + JCDNNAFPNPL_CAGBPCICJDJ_OFFSET))(this);
		}

		::System::Void GKGMOMMJEGM()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + JCDNNAFPNPL_GKGMOMMJEGM_OFFSET))(this);
		}

		::System::Void LFKDIIMIELO(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + JCDNNAFPNPL_LFKDIIMIELO_OFFSET))(this, a1);
		}

		::System::Void DBCFFHCDKLP(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + JCDNNAFPNPL_DBCFFHCDKLP_OFFSET))(this, a1);
		}

		::System::Void NDCJMPMNJCI()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + JCDNNAFPNPL_NDCJMPMNJCI_OFFSET))(this);
		}

		::System::Void GEBAGDANMLI()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + JCDNNAFPNPL_GEBAGDANMLI_OFFSET))(this);
		}

		::System::Void IONBCCPDIMO()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + JCDNNAFPNPL_IONBCCPDIMO_OFFSET))(this);
		}

		::System::Void EKADMCJJPOD()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + JCDNNAFPNPL_EKADMCJJPOD_OFFSET))(this);
		}

		::System::Void BBCLLDKDDON(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + JCDNNAFPNPL_BBCLLDKDDON_OFFSET))(this, a1);
		}

		::System::ValueTuple_2<::UnityEngine::Transform*, ::System::String*> CIKFNMLFKLP(::RPG::GameCore::GameEntity* a1)
		{
			return ((::System::ValueTuple_2<::UnityEngine::Transform*, ::System::String*>(*)(::PVOID, ::RPG::GameCore::GameEntity*))((::PBYTE)hIl2Cpp + JCDNNAFPNPL_CIKFNMLFKLP_OFFSET))(this, a1);
		}

		::System::Void KNJNPJINDMC(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + JCDNNAFPNPL_KNJNPJINDMC_OFFSET))(this, a1);
		}

		::System::Void DLBADHHBGPG(::UnityEngine::Transform* a1)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Transform*))((::PBYTE)hIl2Cpp + JCDNNAFPNPL_DLBADHHBGPG_OFFSET))(this, a1);
		}

		::System::Void APIKPBPJOGO()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + JCDNNAFPNPL_APIKPBPJOGO_OFFSET))(this);
		}

		::System::Void HGNCIBIMMFB()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + JCDNNAFPNPL_HGNCIBIMMFB_OFFSET))(this);
		}

		::System::Void KHKKHDNILKI(::RPG::Client::AchievementData* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::AchievementData*))((::PBYTE)hIl2Cpp + JCDNNAFPNPL_KHKKHDNILKI_OFFSET))(this, a1);
		}

		::RPG::GameCore::MazePuzzleSwitchMascotRow* KIPAOIDDHGA()
		{
			return ((::RPG::GameCore::MazePuzzleSwitchMascotRow*(*)(::PVOID))((::PBYTE)hIl2Cpp + JCDNNAFPNPL_KIPAOIDDHGA_OFFSET))(this);
		}

		::RPG::GameCore::GameEntity* NKFEJMDMCGM()
		{
			return ((::RPG::GameCore::GameEntity*(*)(::PVOID))((::PBYTE)hIl2Cpp + JCDNNAFPNPL_NKFEJMDMCGM_OFFSET))(this);
		}

	};
