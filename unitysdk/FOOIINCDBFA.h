#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/GCNNPCDLELH.h"
#include "unitysdk/RPG/GameCore/AdvNavigationFailReason.h"
#include "unitysdk/RPG/GameCore/AdvNavigationState.h"
#include "unitysdk/RPG/GameCore/CharacterAdventureSomatoType.h"
#include "unitysdk/RPG/GameCore/CharacterMotionFlag.h"
#include "unitysdk/RPG/GameCore/ECharacterNavSteerMode.h"
#include "unitysdk/RPG/GameCore/EntityType.h"
#include "unitysdk/RPG/GameCore/GameComponentBase.h"
#include "unitysdk/RPG/GameCore/NavigationTestResult.h"
#include "unitysdk/UnityEngine/Quaternion.h"
#include "unitysdk/UnityEngine/Vector3.h"
#include "unitysdk/RPG/MVector3.h"
#include "unitysdk/System/Nullable_1.h"
#include "unitysdk/UnityEngine/AI/NavMeshHit.h"
#include "unitysdk/UnityEngine/AI/NavMeshLinkData.h"
class DGMBJNAPLOE;
class FBONABFGKEF;
class FOOIINCDBFA;
class NJFHGODIBPN;
class NLMEGJGJBNN;
class PEDAPLLONJD;
namespace RPG::GameCore { class AdventureCharacterController; }
namespace RPG::GameCore { class CharacterInputData; }
namespace RPG::GameCore { class TransformComponent; }
namespace System { class Object; }
namespace System { template <typename T> class Action_1; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T> class List_1; }
namespace UnityEngine { class AsyncOperation; }
namespace UnityEngine::AI { class NavMeshPath; }
namespace UnityEngine::AI { class NavMesh_OnNavMeshChanged; }

#define FOOIINCDBFA_ACFPBEJFBII_OFFSET UNITYSDK_OFFSET(0x168334B0)
#define FOOIINCDBFA_ACOKAOMOHFL_OFFSET UNITYSDK_OFFSET(0x168337C0)
#define FOOIINCDBFA_AEIEPGMLOJI_OFFSET UNITYSDK_OFFSET(0x168318B0)
#define FOOIINCDBFA_AFLEJEPHNKO_OFFSET UNITYSDK_OFFSET(0x168345E0)
#define FOOIINCDBFA_AGEGDDMKLPM_OFFSET UNITYSDK_OFFSET(0x16834170)
#define FOOIINCDBFA_AJCOILBJNHP_OFFSET UNITYSDK_OFFSET(0x16836FD0)
#define FOOIINCDBFA_APFHEIFCAFI_OFFSET UNITYSDK_OFFSET(0x168371B0)
#define FOOIINCDBFA_BEMMGPNCDAC_OFFSET UNITYSDK_OFFSET(0x16835300)
#define FOOIINCDBFA_BFGLJJKAGPN_OFFSET UNITYSDK_OFFSET(0x1682FD70)
#define FOOIINCDBFA_BIFCGJJGEDB_OFFSET UNITYSDK_OFFSET(0x16830970)
#define FOOIINCDBFA_BJLJAHMLKIO_OFFSET UNITYSDK_OFFSET(0x16830310)
#define FOOIINCDBFA_BLAFKLCNPOM_OFFSET UNITYSDK_OFFSET(0x16833810)
#define FOOIINCDBFA_CALCKBALJMB_OFFSET UNITYSDK_OFFSET(0x16831140)
#define FOOIINCDBFA_CAPAIHJNMLA_OFFSET UNITYSDK_OFFSET(0x1682FDF0)
#define FOOIINCDBFA_CBDIHGOLHHG_OFFSET UNITYSDK_OFFSET(0x16836B60)
#define FOOIINCDBFA_CCTOR_OFFSET UNITYSDK_OFFSET(0x16837C90)
#define FOOIINCDBFA_CEEMNCMFPDF_OFFSET UNITYSDK_OFFSET(0x16831490)
#define FOOIINCDBFA_CTOR_OFFSET UNITYSDK_OFFSET(0x1682F120)
#define FOOIINCDBFA_DBKFGPFNNOM_OFFSET UNITYSDK_OFFSET(0x16833700)
#define FOOIINCDBFA_DDNPFHOOGFI_OFFSET UNITYSDK_OFFSET(0x168376E0)
#define FOOIINCDBFA_DICFDLILBCG_OFFSET UNITYSDK_OFFSET(0x16830CA0)
#define FOOIINCDBFA_DISPOSE_OFFSET UNITYSDK_OFFSET(0x1682F940)
#define FOOIINCDBFA_EAOLHMHEECD_OFFSET UNITYSDK_OFFSET(0x16831570)
#define FOOIINCDBFA_EBFNNKFKPNE_OFFSET UNITYSDK_OFFSET(0x16833760)
#define FOOIINCDBFA_EBHNMOADBGO_OFFSET UNITYSDK_OFFSET(0x16835950)
#define FOOIINCDBFA_EEMIHKLOEHJ_OFFSET UNITYSDK_OFFSET(0x168338B0)
#define FOOIINCDBFA_EEOEPBFLKMB_OFFSET UNITYSDK_OFFSET(0x16835C60)
#define FOOIINCDBFA_EGPAJNPAIOF_OFFSET UNITYSDK_OFFSET(0x168328C0)
#define FOOIINCDBFA_ELJJLHPHFJH_OFFSET UNITYSDK_OFFSET(0x16833C60)
#define FOOIINCDBFA_ELNNHGPEEON_OFFSET UNITYSDK_OFFSET(0x16834460)
#define FOOIINCDBFA_EMBFILCNBJC_OFFSET UNITYSDK_OFFSET(0x16835B90)
#define FOOIINCDBFA_EPJGILHCKNK_OFFSET UNITYSDK_OFFSET(0x168344F0)
#define FOOIINCDBFA_FICBCODPHPC_OFFSET UNITYSDK_OFFSET(0x168326B0)
#define FOOIINCDBFA_FIHJKAEKOBG_OFFSET UNITYSDK_OFFSET(0x168349B0)
#define FOOIINCDBFA_FNKHHCMNBGC_OFFSET UNITYSDK_OFFSET(0x168339B0)
#define FOOIINCDBFA_FOFCBBGFHFB_OFFSET UNITYSDK_OFFSET(0x16834580)
#define FOOIINCDBFA_FPPCGLIKGIK_OFFSET UNITYSDK_OFFSET(0x16832B30)
#define FOOIINCDBFA_GFDJGDBLLFK_OFFSET UNITYSDK_OFFSET(0x16832D60)
#define FOOIINCDBFA_GFIOBEHBCHP_OFFSET UNITYSDK_OFFSET(0x16832060)
#define FOOIINCDBFA_GOEKNCONAFG_OFFSET UNITYSDK_OFFSET(0x16836350)
#define FOOIINCDBFA_HAOBCCBLFNI_OFFSET UNITYSDK_OFFSET(0x16830360)
#define FOOIINCDBFA_HDKIOJPIGEF_OFFSET UNITYSDK_OFFSET(0x16835D20)
#define FOOIINCDBFA_HLKLCJMENEO_OFFSET UNITYSDK_OFFSET(0x16830C10)
#define FOOIINCDBFA_HMDOIHNKCPM_OFFSET UNITYSDK_OFFSET(0x16832800)
#define FOOIINCDBFA_HNLFFKJDAFI_OFFSET UNITYSDK_OFFSET(0x16831930)
#define FOOIINCDBFA_IHBLODBIKNA_OFFSET UNITYSDK_OFFSET(0x16831E40)
#define FOOIINCDBFA_IMOIECOGHHO_1_OFFSET UNITYSDK_OFFSET(0x16835470)
#define FOOIINCDBFA_IMOIECOGHHO_OFFSET UNITYSDK_OFFSET(0x168353F0)
#define FOOIINCDBFA_INJIHPAAMHC_OFFSET UNITYSDK_OFFSET(0x16837A10)
#define FOOIINCDBFA_IODGMOOPOPJ_OFFSET UNITYSDK_OFFSET(0x16830920)
#define FOOIINCDBFA_JCBOPDOAOPJ_OFFSET UNITYSDK_OFFSET(0x16833450)
#define FOOIINCDBFA_JFJMCCNDFKP_OFFSET UNITYSDK_OFFSET(0x16837A70)
#define FOOIINCDBFA_JLDFGMFONPA_OFFSET UNITYSDK_OFFSET(0x1682FD00)
#define FOOIINCDBFA_JNGOPLPJMNK_OFFSET UNITYSDK_OFFSET(0x16833900)
#define FOOIINCDBFA_JNJEJKGFBAP_OFFSET UNITYSDK_OFFSET(0x16836E10)
#define FOOIINCDBFA_JNLDDFBLBJP_OFFSET UNITYSDK_OFFSET(0x1682EF10)
#define FOOIINCDBFA_KBFDFJKFMJL_OFFSET UNITYSDK_OFFSET(0x16837530)
#define FOOIINCDBFA_KDNGMOPMKCF_OFFSET UNITYSDK_OFFSET(0x1682F3B0)
#define FOOIINCDBFA_KGLEODDHHMM_OFFSET UNITYSDK_OFFSET(0x16837A80)
#define FOOIINCDBFA_KHNPMIOGCIL_OFFSET UNITYSDK_OFFSET(0x1682F8D0)
#define FOOIINCDBFA_KKGMFKDKDKO_OFFSET UNITYSDK_OFFSET(0x16830260)
#define FOOIINCDBFA_KKIDEHPBIAM_OFFSET UNITYSDK_OFFSET(0x16834410)
#define FOOIINCDBFA_KNLGHPPCOHA_OFFSET UNITYSDK_OFFSET(0x16833860)
#define FOOIINCDBFA_LATEUPDATE_OFFSET UNITYSDK_OFFSET(0x1682FCA0)
#define FOOIINCDBFA_LDJBJIIINAF_1_OFFSET UNITYSDK_OFFSET(0x16834CC0)
#define FOOIINCDBFA_LDJBJIIINAF_2_OFFSET UNITYSDK_OFFSET(0x16834E30)
#define FOOIINCDBFA_LDJBJIIINAF_3_OFFSET UNITYSDK_OFFSET(0x16834FC0)
#define FOOIINCDBFA_LDJBJIIINAF_4_OFFSET UNITYSDK_OFFSET(0x16835150)
#define FOOIINCDBFA_LDJBJIIINAF_OFFSET UNITYSDK_OFFSET(0x16834B80)
#define FOOIINCDBFA_LFPGABPIDFI_OFFSET UNITYSDK_OFFSET(0x16837050)
#define FOOIINCDBFA_LMCEDCHJKFF_OFFSET UNITYSDK_OFFSET(0x1682F680)
#define FOOIINCDBFA_LOAKMGMKODB_OFFSET UNITYSDK_OFFSET(0x16832980)
#define FOOIINCDBFA_LOCDIJEMENI_OFFSET UNITYSDK_OFFSET(0x16834340)
#define FOOIINCDBFA_MAIKHENILFF_OFFSET UNITYSDK_OFFSET(0x16834720)
#define FOOIINCDBFA_MAINHMKKGJH_OFFSET UNITYSDK_OFFSET(0x168359B0)
#define FOOIINCDBFA_MFPOIPGDLKP_OFFSET UNITYSDK_OFFSET(0x16836BF0)
#define FOOIINCDBFA_MHCGPOJENFA_OFFSET UNITYSDK_OFFSET(0x168322C0)
#define FOOIINCDBFA_MNJLINGMGJC_OFFSET UNITYSDK_OFFSET(0x1682FC50)
#define FOOIINCDBFA_MOCPCLHLAHK_OFFSET UNITYSDK_OFFSET(0x16832E80)
#define FOOIINCDBFA_MOLCBHFBPPE_OFFSET UNITYSDK_OFFSET(0x16836A90)
#define FOOIINCDBFA_NEBLKJICNEJ_OFFSET UNITYSDK_OFFSET(0x16831DB0)
#define FOOIINCDBFA_NHOKFGJPOJF_OFFSET UNITYSDK_OFFSET(0x16836010)
#define FOOIINCDBFA_OAFIECOMILP_OFFSET UNITYSDK_OFFSET(0x168312C0)
#define FOOIINCDBFA_ODPIDILBBAG_OFFSET UNITYSDK_OFFSET(0x1680FEF0)
#define FOOIINCDBFA_ONMODELARTLOADED_OFFSET UNITYSDK_OFFSET(0x1682F7F0)
#define FOOIINCDBFA_ONMODELARTUNLOADED_OFFSET UNITYSDK_OFFSET(0x1682F840)
#define FOOIINCDBFA_ONMODELROOTLOADED_OFFSET UNITYSDK_OFFSET(0x1682F770)
#define FOOIINCDBFA_ONMODELROOTUNLOADED_OFFSET UNITYSDK_OFFSET(0x1682F7B0)
#define FOOIINCDBFA_OOKDABLIIBB_OFFSET UNITYSDK_OFFSET(0x16837A60)
#define FOOIINCDBFA_OONNCFNIGKE_OFFSET UNITYSDK_OFFSET(0x16837840)
#define FOOIINCDBFA_PEOIJOPMKDN_OFFSET UNITYSDK_OFFSET(0x16836810)
#define FOOIINCDBFA_PHDJOPANEKC_OFFSET UNITYSDK_OFFSET(0x16835680)
#define FOOIINCDBFA_PHOHIMEGBJP_OFFSET UNITYSDK_OFFSET(0x16832DD0)
#define FOOIINCDBFA_PNDMPGAAJCP_OFFSET UNITYSDK_OFFSET(0x168317E0)
#define FOOIINCDBFA_POJLLDIPGPA_OFFSET UNITYSDK_OFFSET(0x16831C10)
#define FOOIINCDBFA_TICK_OFFSET UNITYSDK_OFFSET(0x16831F60)

inline static constexpr unsigned int FOOIINCDBFA_TypeDefinitionIndex = 58350;

	class FOOIINCDBFA : public ::RPG::GameCore::GameComponentBase
	{
	public:
		::PEDAPLLONJD* BFGMODICHLM; // 0x18
		::RPG::GameCore::TransformComponent* LMCMCFHLJEJ; // 0x20
		::System::Collections::Generic::List_1<::UnityEngine::Vector3>* IPJLCGNLILH; // 0x28
		::DGMBJNAPLOE* OHBPFHNHEBB; // 0x30
		::NJFHGODIBPN* HNHCPOJKNCC; // 0x38
		::RPG::GameCore::AdventureCharacterController* CPIIOIPAAKK; // 0x40
		::FBONABFGKEF* PPANINAEOFD; // 0x48
		::NLMEGJGJBNN* OFNGHACAOAD; // 0x50
		::UnityEngine::AsyncOperation* FFKAGEFOIIP; // 0x58
		::UnityEngine::AI::NavMesh_OnNavMeshChanged* KGJKGLMOANO; // 0x60
		::NLMEGJGJBNN* FBCJIDGPCIL; // 0x68
		::System::Action_1<::UnityEngine::AsyncOperation*>* JBJPANPDJMF; // 0x70
		::System::Collections::Generic::Dictionary_2<::UnityEngine::AsyncOperation*, ::UnityEngine::AI::NavMeshPath*>* FBNNEBOGJPO; // 0x78
		::System::Single DFPEINKOAHA; // 0x80
		::System::Single ECEHEPMBAMA; // 0x84
		::System::Single AAADIJCNIIP; // 0x88
		::RPG::GameCore::AdvNavigationState FPIHDGPCHPK; // 0x8C
		::System::Single JLBJLGNBANG; // 0x90
		::System::Boolean PHHDBCGAOBO; // 0x94
		::System::Boolean PHKBEKACIJN; // 0x95
		::System::Boolean MBPJDDKBDLP; // 0x96
		::System::Boolean MOLBEAACNKF; // 0x97
		::System::Int32 EOHMFNMADEJ; // 0x98
		::RPG::GameCore::ECharacterNavSteerMode CCNJHMNCEMG; // 0x9C
		::RPG::GameCore::CharacterMotionFlag HIHLFJHKMIK; // 0xA0
		::UnityEngine::Vector3 AJHKAJHLJGA; // 0xA4
		::System::Single FMKEEOMABEM; // 0xB0
		::RPG::GameCore::CharacterMotionFlag ODBOHHKMIDP; // 0xB4
		::UnityEngine::Vector3 EJLANOFJIHB; // 0xB8
		::System::Boolean MPBNCDPBPOF; // 0xC4
		::System::Boolean NKCJFCIMKGF; // 0xC5
		::System::Boolean KKGBJILEFGH; // 0xC6
		::System::Boolean NFJJMHEGHGO; // 0xC7
		::UnityEngine::Vector3 GNHNBBJNNNN; // 0xC8
		::UnityEngine::Quaternion GFCOBGIDJKI; // 0xD4
		::System::Int32 CJJBNKNPKCN; // 0xE4
		::GCNNPCDLELH PHKFGKFFKGJ; // 0xE8
		static ::System::Collections::Generic::List_1<::FOOIINCDBFA*>** StaticGet_HGJOJMFDHEF()
		{
			return (::System::Collections::Generic::List_1<::FOOIINCDBFA*>**)UnitySDK::FromName("", "FOOIINCDBFA")->GetStaticField(0x41660);
		}

		static ::System::Int32* StaticGet_FJLJNDHGFCD()
		{
			return (::System::Int32*)UnitySDK::FromName("", "FOOIINCDBFA")->GetStaticField(0xDF30);
		}

		// static const ::System::Object MMLFINFDHPH; // 0x0
		// static const ::System::Object OIGGCKCIPJB; // 0x0
		// static const ::System::Object FIBBGJJKBIG; // 0x0
		// static const ::System::Object PIDFNFEKIOL; // 0x0
		// static const ::System::Object HICMKEJEHIN; // 0x0
		// static const ::System::Object PLBPGJCFKIM; // 0x0
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FOOIINCDBFA_CTOR_OFFSET))(this);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + FOOIINCDBFA_CCTOR_OFFSET))();
		}

		static ::System::Void JNLDDFBLBJP(::Il2CppArray<::RPG::GameCore::EntityType>* a1)
		{
			return ((::System::Void(*)(::Il2CppArray<::RPG::GameCore::EntityType>*))((::PBYTE)hIl2Cpp + FOOIINCDBFA_JNLDDFBLBJP_OFFSET))(a1);
		}

		::System::Void KDNGMOPMKCF()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FOOIINCDBFA_KDNGMOPMKCF_OFFSET))(this);
		}

		::System::Void LMCEDCHJKFF(::RPG::GameCore::TransformComponent* a1, ::RPG::GameCore::AdventureCharacterController* a2, ::NJFHGODIBPN* a3, ::FBONABFGKEF* a4)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TransformComponent*, ::RPG::GameCore::AdventureCharacterController*, ::NJFHGODIBPN*, ::FBONABFGKEF*))((::PBYTE)hIl2Cpp + FOOIINCDBFA_LMCEDCHJKFF_OFFSET))(this, a1, a2, a3, a4);
		}

		::System::Void OnModelRootLoaded()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FOOIINCDBFA_ONMODELROOTLOADED_OFFSET))(this);
		}

		::System::Void OnModelRootUnloaded()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FOOIINCDBFA_ONMODELROOTUNLOADED_OFFSET))(this);
		}

		::System::Void OnModelArtLoaded()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FOOIINCDBFA_ONMODELARTLOADED_OFFSET))(this);
		}

		::System::Void OnModelArtUnloaded()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FOOIINCDBFA_ONMODELARTUNLOADED_OFFSET))(this);
		}

		::System::Void Dispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FOOIINCDBFA_DISPOSE_OFFSET))(this);
		}

		::System::Void LateUpdate(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + FOOIINCDBFA_LATEUPDATE_OFFSET))(this, a1);
		}

		::RPG::GameCore::ECharacterNavSteerMode JLDFGMFONPA()
		{
			return ((::RPG::GameCore::ECharacterNavSteerMode(*)(::PVOID))((::PBYTE)hIl2Cpp + FOOIINCDBFA_JLDFGMFONPA_OFFSET))(this);
		}

		::System::Single BFGLJJKAGPN()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + FOOIINCDBFA_BFGLJJKAGPN_OFFSET))(this);
		}

		::System::Boolean CAPAIHJNMLA()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + FOOIINCDBFA_CAPAIHJNMLA_OFFSET))(this);
		}

		::System::Boolean KKGMFKDKDKO()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + FOOIINCDBFA_KKGMFKDKDKO_OFFSET))(this);
		}

		::System::Void BJLJAHMLKIO()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FOOIINCDBFA_BJLJAHMLKIO_OFFSET))(this);
		}

		::System::Void IODGMOOPOPJ()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FOOIINCDBFA_IODGMOOPOPJ_OFFSET))(this);
		}

		::System::Void BIFCGJJGEDB()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FOOIINCDBFA_BIFCGJJGEDB_OFFSET))(this);
		}

		::System::Boolean HLKLCJMENEO()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + FOOIINCDBFA_HLKLCJMENEO_OFFSET))(this);
		}

		::System::Void OAFIECOMILP()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FOOIINCDBFA_OAFIECOMILP_OFFSET))(this);
		}

		::System::Void DICFDLILBCG()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FOOIINCDBFA_DICFDLILBCG_OFFSET))(this);
		}

		::System::Void CALCKBALJMB()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FOOIINCDBFA_CALCKBALJMB_OFFSET))(this);
		}

		::System::Void AEIEPGMLOJI()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FOOIINCDBFA_AEIEPGMLOJI_OFFSET))(this);
		}

		::System::Void NEBLKJICNEJ()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FOOIINCDBFA_NEBLKJICNEJ_OFFSET))(this);
		}

		::System::Void PNDMPGAAJCP()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FOOIINCDBFA_PNDMPGAAJCP_OFFSET))(this);
		}

		::System::Void IHBLODBIKNA()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FOOIINCDBFA_IHBLODBIKNA_OFFSET))(this);
		}

		::System::Void POJLLDIPGPA(::UnityEngine::Vector3 a1)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + FOOIINCDBFA_POJLLDIPGPA_OFFSET))(this, a1);
		}

		::System::Void Tick(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + FOOIINCDBFA_TICK_OFFSET))(this, a1);
		}

		::System::Void HNLFFKJDAFI()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FOOIINCDBFA_HNLFFKJDAFI_OFFSET))(this);
		}

		::System::Void FICBCODPHPC(::RPG::GameCore::CharacterInputData* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::CharacterInputData*))((::PBYTE)hIl2Cpp + FOOIINCDBFA_FICBCODPHPC_OFFSET))(this, a1);
		}

		::System::Void EGPAJNPAIOF(::RPG::GameCore::CharacterInputData* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::CharacterInputData*))((::PBYTE)hIl2Cpp + FOOIINCDBFA_EGPAJNPAIOF_OFFSET))(this, a1);
		}

		::RPG::GameCore::CharacterMotionFlag EAOLHMHEECD()
		{
			return ((::RPG::GameCore::CharacterMotionFlag(*)(::PVOID))((::PBYTE)hIl2Cpp + FOOIINCDBFA_EAOLHMHEECD_OFFSET))(this);
		}

		::RPG::MVector3 LOAKMGMKODB()
		{
			return ((::RPG::MVector3(*)(::PVOID))((::PBYTE)hIl2Cpp + FOOIINCDBFA_LOAKMGMKODB_OFFSET))(this);
		}

		::RPG::MVector3 FPPCGLIKGIK()
		{
			return ((::RPG::MVector3(*)(::PVOID))((::PBYTE)hIl2Cpp + FOOIINCDBFA_FPPCGLIKGIK_OFFSET))(this);
		}

		::System::Single GFDJGDBLLFK()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + FOOIINCDBFA_GFDJGDBLLFK_OFFSET))(this);
		}

		::System::Boolean PHOHIMEGBJP()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + FOOIINCDBFA_PHOHIMEGBJP_OFFSET))(this);
		}

		::System::Boolean MOCPCLHLAHK(::RPG::GameCore::CharacterInputData* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::RPG::GameCore::CharacterInputData*))((::PBYTE)hIl2Cpp + FOOIINCDBFA_MOCPCLHLAHK_OFFSET))(this, a1);
		}

		::System::Boolean DBKFGPFNNOM(::PEDAPLLONJD* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::PEDAPLLONJD*))((::PBYTE)hIl2Cpp + FOOIINCDBFA_DBKFGPFNNOM_OFFSET))(this, a1);
		}

		::System::Void EBFNNKFKPNE(::RPG::GameCore::CharacterMotionFlag a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::CharacterMotionFlag))((::PBYTE)hIl2Cpp + FOOIINCDBFA_EBFNNKFKPNE_OFFSET))(this, a1);
		}

		::RPG::GameCore::CharacterAdventureSomatoType ACOKAOMOHFL()
		{
			return ((::RPG::GameCore::CharacterAdventureSomatoType(*)(::PVOID))((::PBYTE)hIl2Cpp + FOOIINCDBFA_ACOKAOMOHFL_OFFSET))(this);
		}

		::System::Int32 BLAFKLCNPOM()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + FOOIINCDBFA_BLAFKLCNPOM_OFFSET))(this);
		}

		::System::Single KNLGHPPCOHA()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + FOOIINCDBFA_KNLGHPPCOHA_OFFSET))(this);
		}

		::System::Single EEMIHKLOEHJ()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + FOOIINCDBFA_EEMIHKLOEHJ_OFFSET))(this);
		}

		::System::Single CEEMNCMFPDF()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + FOOIINCDBFA_CEEMNCMFPDF_OFFSET))(this);
		}

		::UnityEngine::Vector3 JNGOPLPJMNK()
		{
			return ((::UnityEngine::Vector3(*)(::PVOID))((::PBYTE)hIl2Cpp + FOOIINCDBFA_JNGOPLPJMNK_OFFSET))(this);
		}

		::System::Void FNKHHCMNBGC(::System::Int32 a1, ::System::Int32 a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + FOOIINCDBFA_FNKHHCMNBGC_OFFSET))(this, a1, a2);
		}

		::System::Void ELNNHGPEEON()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FOOIINCDBFA_ELNNHGPEEON_OFFSET))(this);
		}

		::System::Void EPJGILHCKNK()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FOOIINCDBFA_EPJGILHCKNK_OFFSET))(this);
		}

		::System::Void ODPIDILBBAG(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + FOOIINCDBFA_ODPIDILBBAG_OFFSET))(this, a1);
		}

		::System::Void FOFCBBGFHFB()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FOOIINCDBFA_FOFCBBGFHFB_OFFSET))(this);
		}

		::System::Single AFLEJEPHNKO(::UnityEngine::AI::NavMeshPath* a1)
		{
			return ((::System::Single(*)(::PVOID, ::UnityEngine::AI::NavMeshPath*))((::PBYTE)hIl2Cpp + FOOIINCDBFA_AFLEJEPHNKO_OFFSET))(this, a1);
		}

		::RPG::GameCore::NavigationTestResult MAIKHENILFF(::UnityEngine::Vector3 a1, ::UnityEngine::Vector3 a2, ::System::Boolean a3, ::System::Single a4, ::System::Single a5, ::UnityEngine::AI::NavMeshPath* a6, ::UnityEngine::AI::NavMeshHit a7)
		{
			return ((::RPG::GameCore::NavigationTestResult(*)(::PVOID, ::UnityEngine::Vector3, ::UnityEngine::Vector3, ::System::Boolean, ::System::Single, ::System::Single, ::UnityEngine::AI::NavMeshPath*, ::UnityEngine::AI::NavMeshHit))((::PBYTE)hIl2Cpp + FOOIINCDBFA_MAIKHENILFF_OFFSET))(this, a1, a2, a3, a4, a5, a6, a7);
		}

		::RPG::GameCore::NavigationTestResult FIHJKAEKOBG(::UnityEngine::AI::NavMeshPath* a1, ::System::Boolean a2, ::System::Single a3)
		{
			return ((::RPG::GameCore::NavigationTestResult(*)(::PVOID, ::UnityEngine::AI::NavMeshPath*, ::System::Boolean, ::System::Single))((::PBYTE)hIl2Cpp + FOOIINCDBFA_FIHJKAEKOBG_OFFSET))(this, a1, a2, a3);
		}

		::RPG::GameCore::NavigationTestResult LDJBJIIINAF(::UnityEngine::Vector3 a1, ::UnityEngine::Vector3 a2, ::System::Single a3)
		{
			return ((::RPG::GameCore::NavigationTestResult(*)(::PVOID, ::UnityEngine::Vector3, ::UnityEngine::Vector3, ::System::Single))((::PBYTE)hIl2Cpp + FOOIINCDBFA_LDJBJIIINAF_OFFSET))(this, a1, a2, a3);
		}

		::RPG::GameCore::NavigationTestResult LDJBJIIINAF_1(::UnityEngine::Vector3 a1, ::System::Boolean a2, ::System::Single a3, ::System::Single a4)
		{
			return ((::RPG::GameCore::NavigationTestResult(*)(::PVOID, ::UnityEngine::Vector3, ::System::Boolean, ::System::Single, ::System::Single))((::PBYTE)hIl2Cpp + FOOIINCDBFA_LDJBJIIINAF_1_OFFSET))(this, a1, a2, a3, a4);
		}

		::RPG::GameCore::NavigationTestResult LDJBJIIINAF_2(::UnityEngine::Vector3 a1, ::System::Boolean a2, ::System::Single a3, ::System::Single a4, ::UnityEngine::Vector3 a5)
		{
			return ((::RPG::GameCore::NavigationTestResult(*)(::PVOID, ::UnityEngine::Vector3, ::System::Boolean, ::System::Single, ::System::Single, ::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + FOOIINCDBFA_LDJBJIIINAF_2_OFFSET))(this, a1, a2, a3, a4, a5);
		}

		::RPG::GameCore::NavigationTestResult LDJBJIIINAF_3(::UnityEngine::Vector3 a1, ::System::Boolean a2, ::System::Single a3, ::System::Single a4, ::System::Single a5)
		{
			return ((::RPG::GameCore::NavigationTestResult(*)(::PVOID, ::UnityEngine::Vector3, ::System::Boolean, ::System::Single, ::System::Single, ::System::Single))((::PBYTE)hIl2Cpp + FOOIINCDBFA_LDJBJIIINAF_3_OFFSET))(this, a1, a2, a3, a4, a5);
		}

		::RPG::GameCore::NavigationTestResult LDJBJIIINAF_4(::UnityEngine::Vector3 a1, ::System::Boolean a2, ::System::Single a3, ::System::Single a4, ::System::Object* a5)
		{
			return ((::RPG::GameCore::NavigationTestResult(*)(::PVOID, ::UnityEngine::Vector3, ::System::Boolean, ::System::Single, ::System::Single, ::System::Object*))((::PBYTE)hIl2Cpp + FOOIINCDBFA_LDJBJIIINAF_4_OFFSET))(this, a1, a2, a3, a4, a5);
		}

		::System::Boolean BEMMGPNCDAC(::UnityEngine::Vector3 a1, ::System::Single a2, ::UnityEngine::Vector3 a3)
		{
			return ((::System::Boolean(*)(::PVOID, ::UnityEngine::Vector3, ::System::Single, ::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + FOOIINCDBFA_BEMMGPNCDAC_OFFSET))(this, a1, a2, a3);
		}

		::System::Boolean IMOIECOGHHO(::UnityEngine::Vector3 a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + FOOIINCDBFA_IMOIECOGHHO_OFFSET))(this, a1);
		}

		::System::Boolean IMOIECOGHHO_1(::UnityEngine::Vector3 a1, ::UnityEngine::Vector3 a2, ::System::Nullable_1<::System::Single> a3)
		{
			return ((::System::Boolean(*)(::PVOID, ::UnityEngine::Vector3, ::UnityEngine::Vector3, ::System::Nullable_1<::System::Single>))((::PBYTE)hIl2Cpp + FOOIINCDBFA_IMOIECOGHHO_1_OFFSET))(this, a1, a2, a3);
		}

		::System::Boolean PHDJOPANEKC(::UnityEngine::Vector3 a1, ::UnityEngine::Vector3 a2, ::UnityEngine::Vector3 a3)
		{
			return ((::System::Boolean(*)(::PVOID, ::UnityEngine::Vector3, ::UnityEngine::Vector3, ::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + FOOIINCDBFA_PHDJOPANEKC_OFFSET))(this, a1, a2, a3);
		}

		::System::Void HAOBCCBLFNI(::RPG::GameCore::AdvNavigationFailReason a1, ::System::Boolean a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::AdvNavigationFailReason, ::System::Boolean))((::PBYTE)hIl2Cpp + FOOIINCDBFA_HAOBCCBLFNI_OFFSET))(this, a1, a2);
		}

		::System::Void EMBFILCNBJC()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FOOIINCDBFA_EMBFILCNBJC_OFFSET))(this);
		}

		::System::Void EEOEPBFLKMB(::PEDAPLLONJD* a1)
		{
			return ((::System::Void(*)(::PVOID, ::PEDAPLLONJD*))((::PBYTE)hIl2Cpp + FOOIINCDBFA_EEOEPBFLKMB_OFFSET))(this, a1);
		}

		::System::Void EBHNMOADBGO()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FOOIINCDBFA_EBHNMOADBGO_OFFSET))(this);
		}

		::RPG::GameCore::NavigationTestResult AGEGDDMKLPM(::System::Boolean a1)
		{
			return ((::RPG::GameCore::NavigationTestResult(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + FOOIINCDBFA_AGEGDDMKLPM_OFFSET))(this, a1);
		}

		::System::Void HDKIOJPIGEF(::UnityEngine::AI::NavMeshPath* a1, ::System::Boolean a2)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::AI::NavMeshPath*, ::System::Boolean))((::PBYTE)hIl2Cpp + FOOIINCDBFA_HDKIOJPIGEF_OFFSET))(this, a1, a2);
		}

		::System::Void ELJJLHPHFJH(::System::Boolean a1, ::System::Boolean a2, ::System::Boolean a3)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean, ::System::Boolean, ::System::Boolean))((::PBYTE)hIl2Cpp + FOOIINCDBFA_ELJJLHPHFJH_OFFSET))(this, a1, a2, a3);
		}

		::System::Void GOEKNCONAFG()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FOOIINCDBFA_GOEKNCONAFG_OFFSET))(this);
		}

		::System::Int32 PEOIJOPMKDN(::NLMEGJGJBNN* a1, ::UnityEngine::Vector3 a2)
		{
			return ((::System::Int32(*)(::PVOID, ::NLMEGJGJBNN*, ::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + FOOIINCDBFA_PEOIJOPMKDN_OFFSET))(this, a1, a2);
		}

		::System::Boolean NHOKFGJPOJF(::UnityEngine::AI::NavMeshLinkData a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::UnityEngine::AI::NavMeshLinkData))((::PBYTE)hIl2Cpp + FOOIINCDBFA_NHOKFGJPOJF_OFFSET))(this, a1);
		}

		::System::Boolean HMDOIHNKCPM()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + FOOIINCDBFA_HMDOIHNKCPM_OFFSET))(this);
		}

		::System::Void KKIDEHPBIAM()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FOOIINCDBFA_KKIDEHPBIAM_OFFSET))(this);
		}

		::System::Void MAINHMKKGJH(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + FOOIINCDBFA_MAINHMKKGJH_OFFSET))(this, a1);
		}

		::System::Void LOCDIJEMENI(::System::Int32 a1, ::System::Boolean a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::Boolean))((::PBYTE)hIl2Cpp + FOOIINCDBFA_LOCDIJEMENI_OFFSET))(this, a1, a2);
		}

		::System::Void CBDIHGOLHHG(::RPG::GameCore::AdventureCharacterController* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::AdventureCharacterController*))((::PBYTE)hIl2Cpp + FOOIINCDBFA_CBDIHGOLHHG_OFFSET))(this, a1);
		}

		::System::Void MFPOIPGDLKP(::PEDAPLLONJD* a1)
		{
			return ((::System::Void(*)(::PVOID, ::PEDAPLLONJD*))((::PBYTE)hIl2Cpp + FOOIINCDBFA_MFPOIPGDLKP_OFFSET))(this, a1);
		}

		::System::Boolean JNJEJKGFBAP(::PEDAPLLONJD* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::PEDAPLLONJD*))((::PBYTE)hIl2Cpp + FOOIINCDBFA_JNJEJKGFBAP_OFFSET))(this, a1);
		}

		::System::Boolean AJCOILBJNHP(::PEDAPLLONJD* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::PEDAPLLONJD*))((::PBYTE)hIl2Cpp + FOOIINCDBFA_AJCOILBJNHP_OFFSET))(this, a1);
		}

		::System::Boolean LFPGABPIDFI(::PEDAPLLONJD* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::PEDAPLLONJD*))((::PBYTE)hIl2Cpp + FOOIINCDBFA_LFPGABPIDFI_OFFSET))(this, a1);
		}

		::System::Boolean KBFDFJKFMJL(::UnityEngine::Quaternion a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::UnityEngine::Quaternion))((::PBYTE)hIl2Cpp + FOOIINCDBFA_KBFDFJKFMJL_OFFSET))(this, a1);
		}

		::System::Void APFHEIFCAFI()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FOOIINCDBFA_APFHEIFCAFI_OFFSET))(this);
		}

		::System::Void DDNPFHOOGFI(::UnityEngine::AsyncOperation* a1)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::AsyncOperation*))((::PBYTE)hIl2Cpp + FOOIINCDBFA_DDNPFHOOGFI_OFFSET))(this, a1);
		}

		::System::Void OONNCFNIGKE(::UnityEngine::AI::NavMeshPath* a1)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::AI::NavMeshPath*))((::PBYTE)hIl2Cpp + FOOIINCDBFA_OONNCFNIGKE_OFFSET))(this, a1);
		}

		::System::Void MNJLINGMGJC()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FOOIINCDBFA_MNJLINGMGJC_OFFSET))(this);
		}

		::System::Boolean MOLCBHFBPPE()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + FOOIINCDBFA_MOLCBHFBPPE_OFFSET))(this);
		}

		::System::Boolean GFIOBEHBCHP(::System::Single a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + FOOIINCDBFA_GFIOBEHBCHP_OFFSET))(this, a1);
		}

		::System::Boolean MHCGPOJENFA()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + FOOIINCDBFA_MHCGPOJENFA_OFFSET))(this);
		}

		::System::Void KHNPMIOGCIL()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FOOIINCDBFA_KHNPMIOGCIL_OFFSET))(this);
		}

		::System::Int32 INJIHPAAMHC()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + FOOIINCDBFA_INJIHPAAMHC_OFFSET))(this);
		}

		::NLMEGJGJBNN* OOKDABLIIBB()
		{
			return ((::NLMEGJGJBNN*(*)(::PVOID))((::PBYTE)hIl2Cpp + FOOIINCDBFA_OOKDABLIIBB_OFFSET))(this);
		}

		::RPG::GameCore::AdvNavigationState JFJMCCNDFKP()
		{
			return ((::RPG::GameCore::AdvNavigationState(*)(::PVOID))((::PBYTE)hIl2Cpp + FOOIINCDBFA_JFJMCCNDFKP_OFFSET))(this);
		}

		::System::Boolean JCBOPDOAOPJ()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + FOOIINCDBFA_JCBOPDOAOPJ_OFFSET))(this);
		}

		::System::Single ACFPBEJFBII()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + FOOIINCDBFA_ACFPBEJFBII_OFFSET))(this);
		}

		::System::Single KGLEODDHHMM()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + FOOIINCDBFA_KGLEODDHHMM_OFFSET))(this);
		}

	};
