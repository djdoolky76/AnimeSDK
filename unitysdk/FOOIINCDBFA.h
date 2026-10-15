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
namespace System { class Action; }
namespace System { class Nullable; }
namespace System { class Object; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T> class List_1; }
namespace UnityEngine { class AsyncOperation; }
namespace UnityEngine::AI { class NavMeshPath; }
namespace UnityEngine::AI { class NavMesh_OnNavMeshChanged; }

#define FOOIINCDBFA_ACFPBEJFBII_OFFSET UNITYSDK_OFFSET(0x159045D0)
#define FOOIINCDBFA_ACOKAOMOHFL_OFFSET UNITYSDK_OFFSET(0x159048E0)
#define FOOIINCDBFA_AEIEPGMLOJI_OFFSET UNITYSDK_OFFSET(0x159029D0)
#define FOOIINCDBFA_AFLEJEPHNKO_OFFSET UNITYSDK_OFFSET(0x159056F0)
#define FOOIINCDBFA_AGEGDDMKLPM_OFFSET UNITYSDK_OFFSET(0x15905290)
#define FOOIINCDBFA_AJCOILBJNHP_OFFSET UNITYSDK_OFFSET(0x159080D0)
#define FOOIINCDBFA_APFHEIFCAFI_OFFSET UNITYSDK_OFFSET(0x15908290)
#define FOOIINCDBFA_BEMMGPNCDAC_OFFSET UNITYSDK_OFFSET(0x15906410)
#define FOOIINCDBFA_BFGLJJKAGPN_OFFSET UNITYSDK_OFFSET(0x15900FE0)
#define FOOIINCDBFA_BIFCGJJGEDB_OFFSET UNITYSDK_OFFSET(0x15901A90)
#define FOOIINCDBFA_BJLJAHMLKIO_OFFSET UNITYSDK_OFFSET(0x15901430)
#define FOOIINCDBFA_BLAFKLCNPOM_OFFSET UNITYSDK_OFFSET(0x15904930)
#define FOOIINCDBFA_CALCKBALJMB_OFFSET UNITYSDK_OFFSET(0x15902260)
#define FOOIINCDBFA_CAPAIHJNMLA_OFFSET UNITYSDK_OFFSET(0x15901080)
#define FOOIINCDBFA_CBDIHGOLHHG_OFFSET UNITYSDK_OFFSET(0x15907C60)
#define FOOIINCDBFA_CCTOR_OFFSET UNITYSDK_OFFSET(0x15908D60)
#define FOOIINCDBFA_CEEMNCMFPDF_OFFSET UNITYSDK_OFFSET(0x159025B0)
#define FOOIINCDBFA_CTOR_OFFSET UNITYSDK_OFFSET(0x159003A0)
#define FOOIINCDBFA_DBKFGPFNNOM_OFFSET UNITYSDK_OFFSET(0x15904820)
#define FOOIINCDBFA_DDNPFHOOGFI_OFFSET UNITYSDK_OFFSET(0x159087B0)
#define FOOIINCDBFA_DICFDLILBCG_OFFSET UNITYSDK_OFFSET(0x15901DC0)
#define FOOIINCDBFA_DISPOSE_OFFSET UNITYSDK_OFFSET(0x15900BC0)
#define FOOIINCDBFA_EAOLHMHEECD_OFFSET UNITYSDK_OFFSET(0x15902690)
#define FOOIINCDBFA_EBFNNKFKPNE_OFFSET UNITYSDK_OFFSET(0x15904880)
#define FOOIINCDBFA_EBHNMOADBGO_OFFSET UNITYSDK_OFFSET(0x15906A60)
#define FOOIINCDBFA_EEMIHKLOEHJ_OFFSET UNITYSDK_OFFSET(0x159049D0)
#define FOOIINCDBFA_EEOEPBFLKMB_OFFSET UNITYSDK_OFFSET(0x15906D70)
#define FOOIINCDBFA_EGPAJNPAIOF_OFFSET UNITYSDK_OFFSET(0x159039E0)
#define FOOIINCDBFA_ELJJLHPHFJH_OFFSET UNITYSDK_OFFSET(0x15904D80)
#define FOOIINCDBFA_ELNNHGPEEON_OFFSET UNITYSDK_OFFSET(0x15905570)
#define FOOIINCDBFA_EMBFILCNBJC_OFFSET UNITYSDK_OFFSET(0x15906CA0)
#define FOOIINCDBFA_EPJGILHCKNK_OFFSET UNITYSDK_OFFSET(0x15905600)
#define FOOIINCDBFA_FICBCODPHPC_OFFSET UNITYSDK_OFFSET(0x159037D0)
#define FOOIINCDBFA_FIHJKAEKOBG_OFFSET UNITYSDK_OFFSET(0x15905AC0)
#define FOOIINCDBFA_FNKHHCMNBGC_OFFSET UNITYSDK_OFFSET(0x15904AD0)
#define FOOIINCDBFA_FOFCBBGFHFB_OFFSET UNITYSDK_OFFSET(0x15905690)
#define FOOIINCDBFA_FPPCGLIKGIK_OFFSET UNITYSDK_OFFSET(0x15903C50)
#define FOOIINCDBFA_GFDJGDBLLFK_OFFSET UNITYSDK_OFFSET(0x15903E80)
#define FOOIINCDBFA_GFIOBEHBCHP_OFFSET UNITYSDK_OFFSET(0x15903180)
#define FOOIINCDBFA_GOEKNCONAFG_OFFSET UNITYSDK_OFFSET(0x15907450)
#define FOOIINCDBFA_HAOBCCBLFNI_OFFSET UNITYSDK_OFFSET(0x15901480)
#define FOOIINCDBFA_HDKIOJPIGEF_OFFSET UNITYSDK_OFFSET(0x15906E20)
#define FOOIINCDBFA_HLKLCJMENEO_OFFSET UNITYSDK_OFFSET(0x15901D30)
#define FOOIINCDBFA_HMDOIHNKCPM_OFFSET UNITYSDK_OFFSET(0x15903920)
#define FOOIINCDBFA_HNLFFKJDAFI_OFFSET UNITYSDK_OFFSET(0x15902A50)
#define FOOIINCDBFA_IHBLODBIKNA_OFFSET UNITYSDK_OFFSET(0x15902F60)
#define FOOIINCDBFA_IMOIECOGHHO_1_OFFSET UNITYSDK_OFFSET(0x15906580)
#define FOOIINCDBFA_IMOIECOGHHO_OFFSET UNITYSDK_OFFSET(0x15906500)
#define FOOIINCDBFA_INJIHPAAMHC_OFFSET UNITYSDK_OFFSET(0x15908AE0)
#define FOOIINCDBFA_IODGMOOPOPJ_OFFSET UNITYSDK_OFFSET(0x15901A40)
#define FOOIINCDBFA_JCBOPDOAOPJ_OFFSET UNITYSDK_OFFSET(0x15904570)
#define FOOIINCDBFA_JFJMCCNDFKP_OFFSET UNITYSDK_OFFSET(0x15908B40)
#define FOOIINCDBFA_JLDFGMFONPA_OFFSET UNITYSDK_OFFSET(0x15900F70)
#define FOOIINCDBFA_JNGOPLPJMNK_OFFSET UNITYSDK_OFFSET(0x15904A20)
#define FOOIINCDBFA_JNJEJKGFBAP_OFFSET UNITYSDK_OFFSET(0x15907F10)
#define FOOIINCDBFA_JNLDDFBLBJP_OFFSET UNITYSDK_OFFSET(0x15900170)
#define FOOIINCDBFA_KBFDFJKFMJL_OFFSET UNITYSDK_OFFSET(0x15908600)
#define FOOIINCDBFA_KDNGMOPMKCF_OFFSET UNITYSDK_OFFSET(0x15900630)
#define FOOIINCDBFA_KGLEODDHHMM_OFFSET UNITYSDK_OFFSET(0x15908B50)
#define FOOIINCDBFA_KHNPMIOGCIL_OFFSET UNITYSDK_OFFSET(0x15900B50)
#define FOOIINCDBFA_KKGMFKDKDKO_OFFSET UNITYSDK_OFFSET(0x15901380)
#define FOOIINCDBFA_KKIDEHPBIAM_OFFSET UNITYSDK_OFFSET(0x15905520)
#define FOOIINCDBFA_KNLGHPPCOHA_OFFSET UNITYSDK_OFFSET(0x15904980)
#define FOOIINCDBFA_LATEUPDATE_OFFSET UNITYSDK_OFFSET(0x15900F10)
#define FOOIINCDBFA_LDJBJIIINAF_1_OFFSET UNITYSDK_OFFSET(0x15905DD0)
#define FOOIINCDBFA_LDJBJIIINAF_2_OFFSET UNITYSDK_OFFSET(0x15905F40)
#define FOOIINCDBFA_LDJBJIIINAF_3_OFFSET UNITYSDK_OFFSET(0x159060D0)
#define FOOIINCDBFA_LDJBJIIINAF_4_OFFSET UNITYSDK_OFFSET(0x15906260)
#define FOOIINCDBFA_LDJBJIIINAF_OFFSET UNITYSDK_OFFSET(0x15905C90)
#define FOOIINCDBFA_LFPGABPIDFI_OFFSET UNITYSDK_OFFSET(0x15908140)
#define FOOIINCDBFA_LMCEDCHJKFF_OFFSET UNITYSDK_OFFSET(0x15900900)
#define FOOIINCDBFA_LOAKMGMKODB_OFFSET UNITYSDK_OFFSET(0x15903AA0)
#define FOOIINCDBFA_LOCDIJEMENI_OFFSET UNITYSDK_OFFSET(0x15905450)
#define FOOIINCDBFA_MAIKHENILFF_OFFSET UNITYSDK_OFFSET(0x15905830)
#define FOOIINCDBFA_MAINHMKKGJH_OFFSET UNITYSDK_OFFSET(0x15906AC0)
#define FOOIINCDBFA_MFPOIPGDLKP_OFFSET UNITYSDK_OFFSET(0x15907CF0)
#define FOOIINCDBFA_MHCGPOJENFA_OFFSET UNITYSDK_OFFSET(0x159033E0)
#define FOOIINCDBFA_MNJLINGMGJC_OFFSET UNITYSDK_OFFSET(0x15900EC0)
#define FOOIINCDBFA_MOCPCLHLAHK_OFFSET UNITYSDK_OFFSET(0x15903FA0)
#define FOOIINCDBFA_MOLCBHFBPPE_OFFSET UNITYSDK_OFFSET(0x15907B90)
#define FOOIINCDBFA_NEBLKJICNEJ_OFFSET UNITYSDK_OFFSET(0x15902ED0)
#define FOOIINCDBFA_NHOKFGJPOJF_OFFSET UNITYSDK_OFFSET(0x15907110)
#define FOOIINCDBFA_OAFIECOMILP_OFFSET UNITYSDK_OFFSET(0x159023E0)
#define FOOIINCDBFA_ODPIDILBBAG_OFFSET UNITYSDK_OFFSET(0x158E16A0)
#define FOOIINCDBFA_ONMODELARTLOADED_OFFSET UNITYSDK_OFFSET(0x15900A70)
#define FOOIINCDBFA_ONMODELARTUNLOADED_OFFSET UNITYSDK_OFFSET(0x15900AC0)
#define FOOIINCDBFA_ONMODELROOTLOADED_OFFSET UNITYSDK_OFFSET(0x159009F0)
#define FOOIINCDBFA_ONMODELROOTUNLOADED_OFFSET UNITYSDK_OFFSET(0x15900A30)
#define FOOIINCDBFA_OOKDABLIIBB_OFFSET UNITYSDK_OFFSET(0x15908B30)
#define FOOIINCDBFA_OONNCFNIGKE_OFFSET UNITYSDK_OFFSET(0x15908910)
#define FOOIINCDBFA_PEOIJOPMKDN_OFFSET UNITYSDK_OFFSET(0x15907910)
#define FOOIINCDBFA_PHDJOPANEKC_OFFSET UNITYSDK_OFFSET(0x15906790)
#define FOOIINCDBFA_PHOHIMEGBJP_OFFSET UNITYSDK_OFFSET(0x15903EF0)
#define FOOIINCDBFA_PNDMPGAAJCP_OFFSET UNITYSDK_OFFSET(0x15902900)
#define FOOIINCDBFA_POJLLDIPGPA_OFFSET UNITYSDK_OFFSET(0x15902D30)
#define FOOIINCDBFA_TICK_OFFSET UNITYSDK_OFFSET(0x15903080)

	class FOOIINCDBFA : public ::RPG::GameCore::GameComponentBase
	{
	public:
		::NLMEGJGJBNN* FBCJIDGPCIL; // 0x18
		::UnityEngine::AI::NavMesh_OnNavMeshChanged* KGJKGLMOANO; // 0x20
		::RPG::GameCore::TransformComponent* LMCMCFHLJEJ; // 0x28
		::System::Action* JBJPANPDJMF; // 0x30
		::System::Collections::Generic::Dictionary_2<::UnityEngine::AsyncOperation*, ::UnityEngine::AI::NavMeshPath*>* FBNNEBOGJPO; // 0x38
		::NJFHGODIBPN* HNHCPOJKNCC; // 0x40
		::UnityEngine::AsyncOperation* FFKAGEFOIIP; // 0x48
		::FBONABFGKEF* PPANINAEOFD; // 0x50
		::PEDAPLLONJD* BFGMODICHLM; // 0x58
		::System::Collections::Generic::List_1<::UnityEngine::Vector3>* IPJLCGNLILH; // 0x60
		::NLMEGJGJBNN* OFNGHACAOAD; // 0x68
		::DGMBJNAPLOE* OHBPFHNHEBB; // 0x70
		::RPG::GameCore::AdventureCharacterController* CPIIOIPAAKK; // 0x78
		::System::Int32 EOHMFNMADEJ; // 0x80
		::UnityEngine::Quaternion GFCOBGIDJKI; // 0x84
		::System::Single FMKEEOMABEM; // 0x94
		::System::Single ECEHEPMBAMA; // 0x98
		::System::Single JLBJLGNBANG; // 0x9C
		::System::Single DFPEINKOAHA; // 0xA0
		::System::Single AAADIJCNIIP; // 0xA4
		::System::Boolean NFJJMHEGHGO; // 0xA8
		::System::Boolean PHKBEKACIJN; // 0xA9
		::System::Boolean KKGBJILEFGH; // 0xAA
		::System::Boolean PHHDBCGAOBO; // 0xAB
		::UnityEngine::Vector3 GNHNBBJNNNN; // 0xAC
		::RPG::GameCore::ECharacterNavSteerMode CCNJHMNCEMG; // 0xB8
		::UnityEngine::Vector3 EJLANOFJIHB; // 0xBC
		::GCNNPCDLELH PHKFGKFFKGJ; // 0xC8
		::System::Boolean MPBNCDPBPOF; // 0xDC
		::System::Boolean MBPJDDKBDLP; // 0xDD
		::System::Boolean NKCJFCIMKGF; // 0xDE
		::System::Boolean MOLBEAACNKF; // 0xDF
		::RPG::GameCore::AdvNavigationState FPIHDGPCHPK; // 0xE0
		::System::Int32 CJJBNKNPKCN; // 0xE4
		::UnityEngine::Vector3 AJHKAJHLJGA; // 0xE8
		::RPG::GameCore::CharacterMotionFlag ODBOHHKMIDP; // 0xF4
		::RPG::GameCore::CharacterMotionFlag HIHLFJHKMIK; // 0xF8
		static ::System::Collections::Generic::List_1<::FOOIINCDBFA*>** StaticGet_HGJOJMFDHEF()
		{
			return (::System::Collections::Generic::List_1<::FOOIINCDBFA*>**)UnitySDK::FromName("", "FOOIINCDBFA")->GetStaticField(0x4C8D0);
		}

		static ::System::Int32* StaticGet_FJLJNDHGFCD()
		{
			return (::System::Int32*)UnitySDK::FromName("", "FOOIINCDBFA")->GetStaticField(0x11A30);
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

		::System::Boolean IMOIECOGHHO_1(::UnityEngine::Vector3 a1, ::UnityEngine::Vector3 a2, ::System::Nullable* a3)
		{
			return ((::System::Boolean(*)(::PVOID, ::UnityEngine::Vector3, ::UnityEngine::Vector3, ::System::Nullable*))((::PBYTE)hIl2Cpp + FOOIINCDBFA_IMOIECOGHHO_1_OFFSET))(this, a1, a2, a3);
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
