#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/LittleGame/ChenLing/ChenLingBulletTrajectoryType.h"
#include "unitysdk/RPG/Client/LittleGame/ChenLing/ChenLingCameraType.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/RPG/MVector3.h"
#include "unitysdk/UnityEngine/Quaternion.h"
#include "unitysdk/UnityEngine/Vector3.h"
class ALMFLCJCHKP;
class DKEFAMNAFAK;
class LMFOOOLDECA;
class OMNJCDDMLHI;
class PNFAENKDBIJ;
namespace RPG::Client { class ChenLingBattleSnapshot; }
namespace RPG::Client { class ChenLingBattleTeamSnapshot; }
namespace RPG::Client { class ChenLingTableBattleScene; }
namespace RPG::Client { class MonoEffect; }
namespace RPG::Client::LittleGame::ChenLing { class ChenLingCameraTargetSmoother; }
namespace RPG::Client::LittleGame::ChenLing { class ChenLingSoldierView; }
namespace RPG::GameCore { class ChenLingBattleEffectTier; }
namespace RPG::GameCore { class ChenLingBattleGameConfig; }
namespace RPG::GameCore { class GameEntity; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T> class List_1; }
namespace UnityEngine { class GameObject; }
namespace UnityEngine { class Transform; }

#define ICNAPAAPBCI_AAILGHCALBD_OFFSET UNITYSDK_OFFSET(0x15E55270)
#define ICNAPAAPBCI_ADPMJGGAFDK_OFFSET UNITYSDK_OFFSET(0x15E54F10)
#define ICNAPAAPBCI_BBOBMNEFFID_OFFSET UNITYSDK_OFFSET(0x15E57860)
#define ICNAPAAPBCI_BCOIPFFCIGA_OFFSET UNITYSDK_OFFSET(0x15E53E50)
#define ICNAPAAPBCI_BHDLLCPALNM_OFFSET UNITYSDK_OFFSET(0x15E58880)
#define ICNAPAAPBCI_BJOMNHFILDE_OFFSET UNITYSDK_OFFSET(0x15E574E0)
#define ICNAPAAPBCI_CFGOIGELNBN_OFFSET UNITYSDK_OFFSET(0x15E55C90)
#define ICNAPAAPBCI_CHLIAHLBJDD_OFFSET UNITYSDK_OFFSET(0x15E56620)
#define ICNAPAAPBCI_CTOR_OFFSET UNITYSDK_OFFSET(0x15E53A00)
#define ICNAPAAPBCI_DFHKKAKGLPJ_OFFSET UNITYSDK_OFFSET(0x15E55470)
#define ICNAPAAPBCI_DLBMFMCDHLG_OFFSET UNITYSDK_OFFSET(0x15E54960)
#define ICNAPAAPBCI_EEAKGJKJDML_OFFSET UNITYSDK_OFFSET(0x15E5B600)
#define ICNAPAAPBCI_EGOOALHNAEB_OFFSET UNITYSDK_OFFSET(0x15E55500)
#define ICNAPAAPBCI_EHJJAGPOBOI_OFFSET UNITYSDK_OFFSET(0x15E55B50)
#define ICNAPAAPBCI_EJMPEMNLDAA_OFFSET UNITYSDK_OFFSET(0x15E54820)
#define ICNAPAAPBCI_ELKEMOLKJLF_OFFSET UNITYSDK_OFFSET(0x15E5B290)
#define ICNAPAAPBCI_FIDCAGMOEPP_OFFSET UNITYSDK_OFFSET(0x15E5B6C0)
#define ICNAPAAPBCI_FLJKDAHNOPD_OFFSET UNITYSDK_OFFSET(0x15E551F0)
#define ICNAPAAPBCI_FOLKEOFICHK_OFFSET UNITYSDK_OFFSET(0x15E58990)
#define ICNAPAAPBCI_FPPPOHAGAON_OFFSET UNITYSDK_OFFSET(0x15E547A0)
#define ICNAPAAPBCI_GDKAHKEKNJO_OFFSET UNITYSDK_OFFSET(0x15E56B10)
#define ICNAPAAPBCI_GJNHAKFCCAH_OFFSET UNITYSDK_OFFSET(0x15E58B60)
#define ICNAPAAPBCI_HBGKJDPACMC_OFFSET UNITYSDK_OFFSET(0x15E5B340)
#define ICNAPAAPBCI_HMFGDIDMMNP_OFFSET UNITYSDK_OFFSET(0x15E55D70)
#define ICNAPAAPBCI_HODPCKAAGGN_OFFSET UNITYSDK_OFFSET(0x15E57380)
#define ICNAPAAPBCI_ICACPOGINHK_OFFSET UNITYSDK_OFFSET(0x15E57AF0)
#define ICNAPAAPBCI_IDINIKEOKMO_OFFSET UNITYSDK_OFFSET(0x15E54A90)
#define ICNAPAAPBCI_IDJAGNLJBLJ_OFFSET UNITYSDK_OFFSET(0x15E59CE0)
#define ICNAPAAPBCI_IIPELDMAEDB_OFFSET UNITYSDK_OFFSET(0x15E53A60)
#define ICNAPAAPBCI_IKDMHOONCBP_OFFSET UNITYSDK_OFFSET(0x15E58FD0)
#define ICNAPAAPBCI_ILEDCCMLBIJ_OFFSET UNITYSDK_OFFSET(0x15E55710)
#define ICNAPAAPBCI_KAAKBNFOLIM_OFFSET UNITYSDK_OFFSET(0x15E59900)
#define ICNAPAAPBCI_KBNMBHECBOJ_OFFSET UNITYSDK_OFFSET(0x15E58250)
#define ICNAPAAPBCI_KFCHCGEHAMP_OFFSET UNITYSDK_OFFSET(0x15E54E10)
#define ICNAPAAPBCI_KHNFGFLHHJL_OFFSET UNITYSDK_OFFSET(0x15E57EA0)
#define ICNAPAAPBCI_KJMPLOJEMOP_OFFSET UNITYSDK_OFFSET(0x15E544A0)
#define ICNAPAAPBCI_LBIKICKEGMG_OFFSET UNITYSDK_OFFSET(0x15E594E0)
#define ICNAPAAPBCI_LKNJALPCNDO_OFFSET UNITYSDK_OFFSET(0x15E58AB0)
#define ICNAPAAPBCI_LPDLDOFNDMO_OFFSET UNITYSDK_OFFSET(0x15E5A0E0)
#define ICNAPAAPBCI_MELHIAFPIJF_OFFSET UNITYSDK_OFFSET(0x15E56690)
#define ICNAPAAPBCI_MFMPGLLHNDG_OFFSET UNITYSDK_OFFSET(0x15E55050)
#define ICNAPAAPBCI_MHCEAJGMHAL_OFFSET UNITYSDK_OFFSET(0x15E56D70)
#define ICNAPAAPBCI_MNHOCNCGOLJ_OFFSET UNITYSDK_OFFSET(0x15E56FB0)
#define ICNAPAAPBCI_MPCFOHGPBDB_OFFSET UNITYSDK_OFFSET(0x15E58680)
#define ICNAPAAPBCI_NGMKEPLPANK_OFFSET UNITYSDK_OFFSET(0x15E55310)
#define ICNAPAAPBCI_NJPPEEKINLI_OFFSET UNITYSDK_OFFSET(0x15E57160)
#define ICNAPAAPBCI_NNNCBIGOPJG_OFFSET UNITYSDK_OFFSET(0x15E57050)
#define ICNAPAAPBCI_OJIKJJMEPBA_OFFSET UNITYSDK_OFFSET(0x15E55FD0)
#define ICNAPAAPBCI_PDKPNPEKGBH_OFFSET UNITYSDK_OFFSET(0x15E5AF20)
#define ICNAPAAPBCI_PJAAPPBDAAG_OFFSET UNITYSDK_OFFSET(0x15E548C0)
#define ICNAPAAPBCI_PNENIIMNDOA_OFFSET UNITYSDK_OFFSET(0x15E56200)

	class ICNAPAAPBCI : public ::System::Object
	{
	public:
		::RPG::GameCore::GameEntity* ICHEDAEHEBG; // 0x10
		::RPG::Client::ChenLingTableBattleScene* IELGKICMLCJ; // 0x18
		::RPG::GameCore::ChenLingBattleGameConfig* LNJOKGMKCCH; // 0x20
		::RPG::Client::LittleGame::ChenLing::ChenLingCameraTargetSmoother* KMJFOMKIJDP; // 0x28
		::OMNJCDDMLHI* FKINCGODJEP; // 0x30
		::Il2CppArray<::RPG::GameCore::ChenLingBattleEffectTier*>* OOKGFGILLKN; // 0x38
		::LMFOOOLDECA* ADJNOFMEIKM; // 0x40
		::System::UInt32 DOBKKDIECDO; // 0x48
		::System::UInt32 OHIDKMKBIGJ; // 0x4C
		::System::Void _ctor(::OMNJCDDMLHI* a1, ::LMFOOOLDECA* a2, ::RPG::Client::ChenLingTableBattleScene* a3)
		{
			return ((::System::Void(*)(::PVOID, ::OMNJCDDMLHI*, ::LMFOOOLDECA*, ::RPG::Client::ChenLingTableBattleScene*))((::PBYTE)hIl2Cpp + ICNAPAAPBCI_CTOR_OFFSET))(this, a1, a2, a3);
		}

		::System::Collections::Generic::List_1<::ALMFLCJCHKP*>* IIPELDMAEDB(::DKEFAMNAFAK* a1, ::RPG::Client::ChenLingBattleTeamSnapshot* a2, ::System::Int32 a3)
		{
			return ((::System::Collections::Generic::List_1<::ALMFLCJCHKP*>*(*)(::PVOID, ::DKEFAMNAFAK*, ::RPG::Client::ChenLingBattleTeamSnapshot*, ::System::Int32))((::PBYTE)hIl2Cpp + ICNAPAAPBCI_IIPELDMAEDB_OFFSET))(this, a1, a2, a3);
		}

		::ALMFLCJCHKP* BCOIPFFCIGA(::DKEFAMNAFAK* a1, ::PNFAENKDBIJ* a2, ::RPG::Client::ChenLingBattleTeamSnapshot* a3, ::System::Int32 a4, ::System::Int32 a5, ::System::Int32 a6)
		{
			return ((::ALMFLCJCHKP*(*)(::PVOID, ::DKEFAMNAFAK*, ::PNFAENKDBIJ*, ::RPG::Client::ChenLingBattleTeamSnapshot*, ::System::Int32, ::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + ICNAPAAPBCI_BCOIPFFCIGA_OFFSET))(this, a1, a2, a3, a4, a5, a6);
		}

		::UnityEngine::GameObject* KJMPLOJEMOP(::ALMFLCJCHKP* a1, ::System::String* a2, ::System::String* a3)
		{
			return ((::UnityEngine::GameObject*(*)(::PVOID, ::ALMFLCJCHKP*, ::System::String*, ::System::String*))((::PBYTE)hIl2Cpp + ICNAPAAPBCI_KJMPLOJEMOP_OFFSET))(this, a1, a2, a3);
		}

		::System::Void MELHIAFPIJF(::UnityEngine::GameObject* a1, ::System::Int32 a2)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::GameObject*, ::System::Int32))((::PBYTE)hIl2Cpp + ICNAPAAPBCI_MELHIAFPIJF_OFFSET))(this, a1, a2);
		}

		::System::Void DLBMFMCDHLG(::RPG::Client::ChenLingTableBattleScene* a1, ::PNFAENKDBIJ* a2, ::ALMFLCJCHKP* a3)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::ChenLingTableBattleScene*, ::PNFAENKDBIJ*, ::ALMFLCJCHKP*))((::PBYTE)hIl2Cpp + ICNAPAAPBCI_DLBMFMCDHLG_OFFSET))(this, a1, a2, a3);
		}

		::System::Void IDINIKEOKMO(::RPG::Client::ChenLingTableBattleScene* a1, ::PNFAENKDBIJ* a2, ::ALMFLCJCHKP* a3, ::UnityEngine::GameObject* a4, ::System::Int32 a5, ::System::Int32 a6, ::System::Int32 a7)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::ChenLingTableBattleScene*, ::PNFAENKDBIJ*, ::ALMFLCJCHKP*, ::UnityEngine::GameObject*, ::System::Int32, ::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + ICNAPAAPBCI_IDINIKEOKMO_OFFSET))(this, a1, a2, a3, a4, a5, a6, a7);
		}

		::System::Void KFCHCGEHAMP(::RPG::Client::ChenLingTableBattleScene* a1, ::ALMFLCJCHKP* a2, ::System::Int32 a3, ::System::Int32 a4, ::System::Int32 a5)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::ChenLingTableBattleScene*, ::ALMFLCJCHKP*, ::System::Int32, ::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + ICNAPAAPBCI_KFCHCGEHAMP_OFFSET))(this, a1, a2, a3, a4, a5);
		}

		::System::Void FPPPOHAGAON(::ALMFLCJCHKP* a1, ::System::String* a2, ::System::String* a3)
		{
			return ((::System::Void(*)(::PVOID, ::ALMFLCJCHKP*, ::System::String*, ::System::String*))((::PBYTE)hIl2Cpp + ICNAPAAPBCI_FPPPOHAGAON_OFFSET))(this, a1, a2, a3);
		}

		::System::Void EJMPEMNLDAA(::DKEFAMNAFAK* a1, ::PNFAENKDBIJ* a2, ::ALMFLCJCHKP* a3)
		{
			return ((::System::Void(*)(::PVOID, ::DKEFAMNAFAK*, ::PNFAENKDBIJ*, ::ALMFLCJCHKP*))((::PBYTE)hIl2Cpp + ICNAPAAPBCI_EJMPEMNLDAA_OFFSET))(this, a1, a2, a3);
		}

		::System::Void PJAAPPBDAAG(::DKEFAMNAFAK* a1, ::ALMFLCJCHKP* a2, ::System::Int32 a3, ::System::Int32 a4)
		{
			return ((::System::Void(*)(::PVOID, ::DKEFAMNAFAK*, ::ALMFLCJCHKP*, ::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + ICNAPAAPBCI_PJAAPPBDAAG_OFFSET))(this, a1, a2, a3, a4);
		}

		::System::Void MFMPGLLHNDG(::PNFAENKDBIJ* a1, ::ALMFLCJCHKP* a2)
		{
			return ((::System::Void(*)(::PVOID, ::PNFAENKDBIJ*, ::ALMFLCJCHKP*))((::PBYTE)hIl2Cpp + ICNAPAAPBCI_MFMPGLLHNDG_OFFSET))(this, a1, a2);
		}

		::System::Void FLJKDAHNOPD(::PNFAENKDBIJ* a1, ::ALMFLCJCHKP* a2)
		{
			return ((::System::Void(*)(::PVOID, ::PNFAENKDBIJ*, ::ALMFLCJCHKP*))((::PBYTE)hIl2Cpp + ICNAPAAPBCI_FLJKDAHNOPD_OFFSET))(this, a1, a2);
		}

		::System::Void AAILGHCALBD(::ALMFLCJCHKP* a1)
		{
			return ((::System::Void(*)(::PVOID, ::ALMFLCJCHKP*))((::PBYTE)hIl2Cpp + ICNAPAAPBCI_AAILGHCALBD_OFFSET))(this, a1);
		}

		::System::Void NGMKEPLPANK(::ALMFLCJCHKP* a1, ::OMNJCDDMLHI* a2)
		{
			return ((::System::Void(*)(::PVOID, ::ALMFLCJCHKP*, ::OMNJCDDMLHI*))((::PBYTE)hIl2Cpp + ICNAPAAPBCI_NGMKEPLPANK_OFFSET))(this, a1, a2);
		}

		::System::Void DFHKKAKGLPJ(::RPG::Client::ChenLingBattleTeamSnapshot* a1, ::ALMFLCJCHKP* a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::ChenLingBattleTeamSnapshot*, ::ALMFLCJCHKP*))((::PBYTE)hIl2Cpp + ICNAPAAPBCI_DFHKKAKGLPJ_OFFSET))(this, a1, a2);
		}

		::System::Void EGOOALHNAEB(::ALMFLCJCHKP* a1)
		{
			return ((::System::Void(*)(::PVOID, ::ALMFLCJCHKP*))((::PBYTE)hIl2Cpp + ICNAPAAPBCI_EGOOALHNAEB_OFFSET))(this, a1);
		}

		::System::Void ILEDCCMLBIJ(::DKEFAMNAFAK* a1, ::ALMFLCJCHKP* a2)
		{
			return ((::System::Void(*)(::PVOID, ::DKEFAMNAFAK*, ::ALMFLCJCHKP*))((::PBYTE)hIl2Cpp + ICNAPAAPBCI_ILEDCCMLBIJ_OFFSET))(this, a1, a2);
		}

		::System::Void ADPMJGGAFDK(::PNFAENKDBIJ* a1, ::ALMFLCJCHKP* a2)
		{
			return ((::System::Void(*)(::PVOID, ::PNFAENKDBIJ*, ::ALMFLCJCHKP*))((::PBYTE)hIl2Cpp + ICNAPAAPBCI_ADPMJGGAFDK_OFFSET))(this, a1, a2);
		}

		::System::Void EHJJAGPOBOI(::ALMFLCJCHKP* a1)
		{
			return ((::System::Void(*)(::PVOID, ::ALMFLCJCHKP*))((::PBYTE)hIl2Cpp + ICNAPAAPBCI_EHJJAGPOBOI_OFFSET))(this, a1);
		}

		::System::Void CFGOIGELNBN(::ALMFLCJCHKP* a1)
		{
			return ((::System::Void(*)(::PVOID, ::ALMFLCJCHKP*))((::PBYTE)hIl2Cpp + ICNAPAAPBCI_CFGOIGELNBN_OFFSET))(this, a1);
		}

		::System::Void MHCEAJGMHAL(::ALMFLCJCHKP* a1, ::ALMFLCJCHKP* a2)
		{
			return ((::System::Void(*)(::PVOID, ::ALMFLCJCHKP*, ::ALMFLCJCHKP*))((::PBYTE)hIl2Cpp + ICNAPAAPBCI_MHCEAJGMHAL_OFFSET))(this, a1, a2);
		}

		::System::Void HMFGDIDMMNP(::ALMFLCJCHKP* a1, ::System::Collections::Generic::Dictionary_2<::System::UInt32, ::System::UInt32>* a2)
		{
			return ((::System::Void(*)(::PVOID, ::ALMFLCJCHKP*, ::System::Collections::Generic::Dictionary_2<::System::UInt32, ::System::UInt32>*))((::PBYTE)hIl2Cpp + ICNAPAAPBCI_HMFGDIDMMNP_OFFSET))(this, a1, a2);
		}

		::System::Void OJIKJJMEPBA(::UnityEngine::Vector3 a1, ::ALMFLCJCHKP* a2)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Vector3, ::ALMFLCJCHKP*))((::PBYTE)hIl2Cpp + ICNAPAAPBCI_OJIKJJMEPBA_OFFSET))(this, a1, a2);
		}

		::System::Void PNENIIMNDOA(::ALMFLCJCHKP* a1)
		{
			return ((::System::Void(*)(::PVOID, ::ALMFLCJCHKP*))((::PBYTE)hIl2Cpp + ICNAPAAPBCI_PNENIIMNDOA_OFFSET))(this, a1);
		}

		::System::Void CHLIAHLBJDD(::RPG::Client::LittleGame::ChenLing::ChenLingSoldierView* a1, ::System::UInt32 a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::LittleGame::ChenLing::ChenLingSoldierView*, ::System::UInt32))((::PBYTE)hIl2Cpp + ICNAPAAPBCI_CHLIAHLBJDD_OFFSET))(this, a1, a2);
		}

		::System::Void MNHOCNCGOLJ()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ICNAPAAPBCI_MNHOCNCGOLJ_OFFSET))(this);
		}

		::System::Void NNNCBIGOPJG()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ICNAPAAPBCI_NNNCBIGOPJG_OFFSET))(this);
		}

		::System::Void NJPPEEKINLI()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ICNAPAAPBCI_NJPPEEKINLI_OFFSET))(this);
		}

		::ALMFLCJCHKP* HODPCKAAGGN(::ALMFLCJCHKP* a1, ::ALMFLCJCHKP* a2, ::RPG::Client::LittleGame::ChenLing::ChenLingBulletTrajectoryType a3, ::Il2CppArray<::RPG::GameCore::ChenLingBattleEffectTier*>* a4, ::System::Single a5, ::System::String* a6)
		{
			return ((::ALMFLCJCHKP*(*)(::PVOID, ::ALMFLCJCHKP*, ::ALMFLCJCHKP*, ::RPG::Client::LittleGame::ChenLing::ChenLingBulletTrajectoryType, ::Il2CppArray<::RPG::GameCore::ChenLingBattleEffectTier*>*, ::System::Single, ::System::String*))((::PBYTE)hIl2Cpp + ICNAPAAPBCI_HODPCKAAGGN_OFFSET))(this, a1, a2, a3, a4, a5, a6);
		}

		::ALMFLCJCHKP* BJOMNHFILDE(::ALMFLCJCHKP* a1, ::ALMFLCJCHKP* a2, ::Il2CppArray<::RPG::GameCore::ChenLingBattleEffectTier*>* a3, ::System::Single a4, ::System::String* a5)
		{
			return ((::ALMFLCJCHKP*(*)(::PVOID, ::ALMFLCJCHKP*, ::ALMFLCJCHKP*, ::Il2CppArray<::RPG::GameCore::ChenLingBattleEffectTier*>*, ::System::Single, ::System::String*))((::PBYTE)hIl2Cpp + ICNAPAAPBCI_BJOMNHFILDE_OFFSET))(this, a1, a2, a3, a4, a5);
		}

		::ALMFLCJCHKP* BBOBMNEFFID(::ALMFLCJCHKP* a1, ::ALMFLCJCHKP* a2, ::Il2CppArray<::RPG::GameCore::ChenLingBattleEffectTier*>* a3, ::System::Single a4, ::System::String* a5)
		{
			return ((::ALMFLCJCHKP*(*)(::PVOID, ::ALMFLCJCHKP*, ::ALMFLCJCHKP*, ::Il2CppArray<::RPG::GameCore::ChenLingBattleEffectTier*>*, ::System::Single, ::System::String*))((::PBYTE)hIl2Cpp + ICNAPAAPBCI_BBOBMNEFFID_OFFSET))(this, a1, a2, a3, a4, a5);
		}

		::ALMFLCJCHKP* ICACPOGINHK(::ALMFLCJCHKP* a1, ::ALMFLCJCHKP* a2, ::Il2CppArray<::RPG::GameCore::ChenLingBattleEffectTier*>* a3, ::System::Single a4, ::System::String* a5)
		{
			return ((::ALMFLCJCHKP*(*)(::PVOID, ::ALMFLCJCHKP*, ::ALMFLCJCHKP*, ::Il2CppArray<::RPG::GameCore::ChenLingBattleEffectTier*>*, ::System::Single, ::System::String*))((::PBYTE)hIl2Cpp + ICNAPAAPBCI_ICACPOGINHK_OFFSET))(this, a1, a2, a3, a4, a5);
		}

		::ALMFLCJCHKP* KHNFGFLHHJL(::ALMFLCJCHKP* a1, ::ALMFLCJCHKP* a2, ::Il2CppArray<::RPG::GameCore::ChenLingBattleEffectTier*>* a3, ::System::Single a4, ::System::String* a5)
		{
			return ((::ALMFLCJCHKP*(*)(::PVOID, ::ALMFLCJCHKP*, ::ALMFLCJCHKP*, ::Il2CppArray<::RPG::GameCore::ChenLingBattleEffectTier*>*, ::System::Single, ::System::String*))((::PBYTE)hIl2Cpp + ICNAPAAPBCI_KHNFGFLHHJL_OFFSET))(this, a1, a2, a3, a4, a5);
		}

		::System::Boolean BHDLLCPALNM(::ALMFLCJCHKP* a1, ::ALMFLCJCHKP* a2)
		{
			return ((::System::Boolean(*)(::PVOID, ::ALMFLCJCHKP*, ::ALMFLCJCHKP*))((::PBYTE)hIl2Cpp + ICNAPAAPBCI_BHDLLCPALNM_OFFSET))(this, a1, a2);
		}

		::System::Boolean FOLKEOFICHK(::ALMFLCJCHKP* a1, ::ALMFLCJCHKP* a2)
		{
			return ((::System::Boolean(*)(::PVOID, ::ALMFLCJCHKP*, ::ALMFLCJCHKP*))((::PBYTE)hIl2Cpp + ICNAPAAPBCI_FOLKEOFICHK_OFFSET))(this, a1, a2);
		}

		::ALMFLCJCHKP* KBNMBHECBOJ(::RPG::Client::LittleGame::ChenLing::ChenLingBulletTrajectoryType a1, ::ALMFLCJCHKP* a2, ::ALMFLCJCHKP* a3, ::System::Single a4, ::System::Single a5)
		{
			return ((::ALMFLCJCHKP*(*)(::PVOID, ::RPG::Client::LittleGame::ChenLing::ChenLingBulletTrajectoryType, ::ALMFLCJCHKP*, ::ALMFLCJCHKP*, ::System::Single, ::System::Single))((::PBYTE)hIl2Cpp + ICNAPAAPBCI_KBNMBHECBOJ_OFFSET))(this, a1, a2, a3, a4, a5);
		}

		::System::Void MPCFOHGPBDB(::ALMFLCJCHKP* a1, ::ALMFLCJCHKP* a2, ::System::String* a3, ::Il2CppArray<::RPG::GameCore::ChenLingBattleEffectTier*>* a4, ::UnityEngine::Vector3 a5, ::UnityEngine::Quaternion a6, ::System::Boolean a7)
		{
			return ((::System::Void(*)(::PVOID, ::ALMFLCJCHKP*, ::ALMFLCJCHKP*, ::System::String*, ::Il2CppArray<::RPG::GameCore::ChenLingBattleEffectTier*>*, ::UnityEngine::Vector3, ::UnityEngine::Quaternion, ::System::Boolean))((::PBYTE)hIl2Cpp + ICNAPAAPBCI_MPCFOHGPBDB_OFFSET))(this, a1, a2, a3, a4, a5, a6, a7);
		}

		::Il2CppArray<::RPG::GameCore::ChenLingBattleEffectTier*>* LKNJALPCNDO(::RPG::GameCore::ChenLingBattleEffectTier* a1)
		{
			return ((::Il2CppArray<::RPG::GameCore::ChenLingBattleEffectTier*>*(*)(::PVOID, ::RPG::GameCore::ChenLingBattleEffectTier*))((::PBYTE)hIl2Cpp + ICNAPAAPBCI_LKNJALPCNDO_OFFSET))(this, a1);
		}

		::ALMFLCJCHKP* GJNHAKFCCAH(::ALMFLCJCHKP* a1, ::System::Boolean a2, ::System::Single a3, ::System::Single a4, ::System::Single a5, ::System::Single a6)
		{
			return ((::ALMFLCJCHKP*(*)(::PVOID, ::ALMFLCJCHKP*, ::System::Boolean, ::System::Single, ::System::Single, ::System::Single, ::System::Single))((::PBYTE)hIl2Cpp + ICNAPAAPBCI_GJNHAKFCCAH_OFFSET))(this, a1, a2, a3, a4, a5, a6);
		}

		::ALMFLCJCHKP* IKDMHOONCBP(::ALMFLCJCHKP* a1, ::ALMFLCJCHKP* a2, ::System::Boolean a3, ::Il2CppArray<::RPG::GameCore::ChenLingBattleEffectTier*>* a4, ::System::String* a5, ::System::Single a6, ::System::Single a7, ::System::Single a8, ::System::Single a9, ::System::Single a10)
		{
			return ((::ALMFLCJCHKP*(*)(::PVOID, ::ALMFLCJCHKP*, ::ALMFLCJCHKP*, ::System::Boolean, ::Il2CppArray<::RPG::GameCore::ChenLingBattleEffectTier*>*, ::System::String*, ::System::Single, ::System::Single, ::System::Single, ::System::Single, ::System::Single))((::PBYTE)hIl2Cpp + ICNAPAAPBCI_IKDMHOONCBP_OFFSET))(this, a1, a2, a3, a4, a5, a6, a7, a8, a9, a10);
		}

		::ALMFLCJCHKP* LBIKICKEGMG(::ALMFLCJCHKP* a1, ::ALMFLCJCHKP* a2, ::System::String* a3, ::System::String* a4, ::System::String* a5, ::System::Single a6, ::System::Single a7)
		{
			return ((::ALMFLCJCHKP*(*)(::PVOID, ::ALMFLCJCHKP*, ::ALMFLCJCHKP*, ::System::String*, ::System::String*, ::System::String*, ::System::Single, ::System::Single))((::PBYTE)hIl2Cpp + ICNAPAAPBCI_LBIKICKEGMG_OFFSET))(this, a1, a2, a3, a4, a5, a6, a7);
		}

		::RPG::Client::MonoEffect* KAAKBNFOLIM(::ALMFLCJCHKP* a1, ::System::String* a2, ::System::String* a3, ::UnityEngine::Vector3 a4, ::UnityEngine::Vector3 a5, ::UnityEngine::Quaternion a6)
		{
			return ((::RPG::Client::MonoEffect*(*)(::PVOID, ::ALMFLCJCHKP*, ::System::String*, ::System::String*, ::UnityEngine::Vector3, ::UnityEngine::Vector3, ::UnityEngine::Quaternion))((::PBYTE)hIl2Cpp + ICNAPAAPBCI_KAAKBNFOLIM_OFFSET))(this, a1, a2, a3, a4, a5, a6);
		}

		::ALMFLCJCHKP* IDJAGNLJBLJ(::ALMFLCJCHKP* a1, ::ALMFLCJCHKP* a2, ::System::String* a3, ::System::String* a4, ::System::String* a5, ::System::Single a6, ::System::Single a7, ::RPG::MVector3 a8)
		{
			return ((::ALMFLCJCHKP*(*)(::PVOID, ::ALMFLCJCHKP*, ::ALMFLCJCHKP*, ::System::String*, ::System::String*, ::System::String*, ::System::Single, ::System::Single, ::RPG::MVector3))((::PBYTE)hIl2Cpp + ICNAPAAPBCI_IDJAGNLJBLJ_OFFSET))(this, a1, a2, a3, a4, a5, a6, a7, a8);
		}

		::System::Void LPDLDOFNDMO(::RPG::Client::ChenLingBattleSnapshot* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::ChenLingBattleSnapshot*))((::PBYTE)hIl2Cpp + ICNAPAAPBCI_LPDLDOFNDMO_OFFSET))(this, a1);
		}

		::System::Void GDKAHKEKNJO(::ALMFLCJCHKP* a1)
		{
			return ((::System::Void(*)(::PVOID, ::ALMFLCJCHKP*))((::PBYTE)hIl2Cpp + ICNAPAAPBCI_GDKAHKEKNJO_OFFSET))(this, a1);
		}

		::System::Void PDKPNPEKGBH()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ICNAPAAPBCI_PDKPNPEKGBH_OFFSET))(this);
		}

		::System::Void ELKEMOLKJLF(::UnityEngine::Transform* a1)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Transform*))((::PBYTE)hIl2Cpp + ICNAPAAPBCI_ELKEMOLKJLF_OFFSET))(this, a1);
		}

		::System::Void HBGKJDPACMC(::UnityEngine::Transform* a1, ::System::String* a2, ::RPG::Client::LittleGame::ChenLing::ChenLingCameraType a3)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Transform*, ::System::String*, ::RPG::Client::LittleGame::ChenLing::ChenLingCameraType))((::PBYTE)hIl2Cpp + ICNAPAAPBCI_HBGKJDPACMC_OFFSET))(this, a1, a2, a3);
		}

		::System::Void FIDCAGMOEPP(::UnityEngine::Transform* a1)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Transform*))((::PBYTE)hIl2Cpp + ICNAPAAPBCI_FIDCAGMOEPP_OFFSET))(this, a1);
		}

		::System::Void EEAKGJKJDML(::UnityEngine::Transform* a1, ::System::String* a2, ::RPG::Client::LittleGame::ChenLing::ChenLingCameraType a3)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Transform*, ::System::String*, ::RPG::Client::LittleGame::ChenLing::ChenLingCameraType))((::PBYTE)hIl2Cpp + ICNAPAAPBCI_EEAKGJKJDML_OFFSET))(this, a1, a2, a3);
		}

	};
