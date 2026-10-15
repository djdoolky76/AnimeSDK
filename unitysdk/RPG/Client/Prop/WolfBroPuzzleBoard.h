#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/Prop/PuzzleBoardBase.h"
#include "unitysdk/RPG/Client/Prop/WolfBroPuzzleBoard_CustomGameData.h"
#include "unitysdk/RPG/Client/Prop/WolfBroPuzzleBoard_EPuzzlePhase.h"
#include "unitysdk/System/Nullable_1.h"
#include "unitysdk/UnityEngine/Vector2.h"
#include "unitysdk/IMJAFIDKDKK.h"
#include "unitysdk/System/ValueTuple_2.h"
#include "unitysdk/UnityEngine/Quaternion.h"
#include "unitysdk/UnityEngine/Vector3.h"
#include "unitysdk/UnityEngine/Vector3Int.h"
class EKFMIDBJDIA;
class GGHOBPBFFOB;
class KDMEFGANLKI;
class NPEHFAHLDNM;
namespace RPG::Client { class RspHandler; }
namespace RPG::Client { class RuntimeGroupManager; }
namespace RPG::Client::Prop { class WolfBroPuzzleBoard; }
namespace RPG::GameCore { class GameEntity; }
namespace RPG::GameCore { class PropComponent; }
namespace RPG::GameCore { class PropInitPuzzle; }
namespace RPG::GameCore { class TaskContext; }
namespace System { class Object; }
namespace System { class String; }
namespace System { template <typename T> class Action_1; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T> class List_1; }
namespace UnityEngine { class Transform; }

#define RPG_CLIENT_PROP_WOLFBROPUZZLEBOARD_ACTIVATEBULLET_OFFSET UNITYSDK_OFFSET(0xDDCEF20)
#define RPG_CLIENT_PROP_WOLFBROPUZZLEBOARD_ADGBEMLLEHM_OFFSET UNITYSDK_OFFSET(0xDDD0990)
#define RPG_CLIENT_PROP_WOLFBROPUZZLEBOARD_AEKFHEEEBCE_OFFSET UNITYSDK_OFFSET(0xDDD0BE0)
#define RPG_CLIENT_PROP_WOLFBROPUZZLEBOARD_AEKHJBDHIME_OFFSET UNITYSDK_OFFSET(0xDDD4CE0)
#define RPG_CLIENT_PROP_WOLFBROPUZZLEBOARD_ANMDHLLKPIJ_OFFSET UNITYSDK_OFFSET(0xDDD5080)
#define RPG_CLIENT_PROP_WOLFBROPUZZLEBOARD_ARCHIVE_OFFSET UNITYSDK_OFFSET(0xDDD0930)
#define RPG_CLIENT_PROP_WOLFBROPUZZLEBOARD_BDDJJNEJNHE_OFFSET UNITYSDK_OFFSET(0xDDD4DF0)
#define RPG_CLIENT_PROP_WOLFBROPUZZLEBOARD_BDEOOPNJFKO_OFFSET UNITYSDK_OFFSET(0xDDD3590)
#define RPG_CLIENT_PROP_WOLFBROPUZZLEBOARD_BJALMGMLAJG_OFFSET UNITYSDK_OFFSET(0xDDD2F60)
#define RPG_CLIENT_PROP_WOLFBROPUZZLEBOARD_BKJMLMPNGCD_OFFSET UNITYSDK_OFFSET(0xDDD4430)
#define RPG_CLIENT_PROP_WOLFBROPUZZLEBOARD_BOOMPROPHITTARGETS_OFFSET UNITYSDK_OFFSET(0xDDCF890)
#define RPG_CLIENT_PROP_WOLFBROPUZZLEBOARD_CCCOMDGNGAF_OFFSET UNITYSDK_OFFSET(0xDDD5490)
#define RPG_CLIENT_PROP_WOLFBROPUZZLEBOARD_CCTOR_OFFSET UNITYSDK_OFFSET(0xDDD6EF0)
#define RPG_CLIENT_PROP_WOLFBROPUZZLEBOARD_CKFBAHLJLFJ_OFFSET UNITYSDK_OFFSET(0xDDCF480)
#define RPG_CLIENT_PROP_WOLFBROPUZZLEBOARD_CTOR_OFFSET UNITYSDK_OFFSET(0xDDD6BE0)
#define RPG_CLIENT_PROP_WOLFBROPUZZLEBOARD_DEOJAHAFAFO_OFFSET UNITYSDK_OFFSET(0xDDD5210)
#define RPG_CLIENT_PROP_WOLFBROPUZZLEBOARD_DFNNMDFILBL_OFFSET UNITYSDK_OFFSET(0xDDCE960)
#define RPG_CLIENT_PROP_WOLFBROPUZZLEBOARD_DISPOSE_OFFSET UNITYSDK_OFFSET(0xDDCFAF0)
#define RPG_CLIENT_PROP_WOLFBROPUZZLEBOARD_DLFDHOJLEBG_OFFSET UNITYSDK_OFFSET(0xDDCE610)
#define RPG_CLIENT_PROP_WOLFBROPUZZLEBOARD_DMPCKKMJDON_OFFSET UNITYSDK_OFFSET(0xDDCF620)
#define RPG_CLIENT_PROP_WOLFBROPUZZLEBOARD_EFADEEGDNML_OFFSET UNITYSDK_OFFSET(0xDDD20E0)
#define RPG_CLIENT_PROP_WOLFBROPUZZLEBOARD_EKDAMKJCEHC_OFFSET UNITYSDK_OFFSET(0xDDD0110)
#define RPG_CLIENT_PROP_WOLFBROPUZZLEBOARD_ENABLETELEPORTTIMING_OFFSET UNITYSDK_OFFSET(0xDDD17C0)
#define RPG_CLIENT_PROP_WOLFBROPUZZLEBOARD_FHLPBMAKCPF_OFFSET UNITYSDK_OFFSET(0xDDCE890)
#define RPG_CLIENT_PROP_WOLFBROPUZZLEBOARD_FHMIOJOACFK_OFFSET UNITYSDK_OFFSET(0xDDD2010)
#define RPG_CLIENT_PROP_WOLFBROPUZZLEBOARD_GCJBMGDPDFG_OFFSET UNITYSDK_OFFSET(0xDDD4860)
#define RPG_CLIENT_PROP_WOLFBROPUZZLEBOARD_GET_CACHEDCAMERAAXIS_OFFSET UNITYSDK_OFFSET(0xDDD5320)
#define RPG_CLIENT_PROP_WOLFBROPUZZLEBOARD_GET_INSTANCE_OFFSET UNITYSDK_OFFSET(0xDDD6B20)
#define RPG_CLIENT_PROP_WOLFBROPUZZLEBOARD_GET_ISBULLETACTIVATED_OFFSET UNITYSDK_OFFSET(0xDDD52D0)
#define RPG_CLIENT_PROP_WOLFBROPUZZLEBOARD_GET_ISLOCK_OFFSET UNITYSDK_OFFSET(0xDDD52B0)
#define RPG_CLIENT_PROP_WOLFBROPUZZLEBOARD_GET_ISMINISTATE_OFFSET UNITYSDK_OFFSET(0xDDD52C0)
#define RPG_CLIENT_PROP_WOLFBROPUZZLEBOARD_GHEKCHFPAKF_OFFSET UNITYSDK_OFFSET(0xDDD4160)
#define RPG_CLIENT_PROP_WOLFBROPUZZLEBOARD_GMOFPOBIKOL_OFFSET UNITYSDK_OFFSET(0xDDD2EF0)
#define RPG_CLIENT_PROP_WOLFBROPUZZLEBOARD_HDOEGHDKHMB_OFFSET UNITYSDK_OFFSET(0xDDD4670)
#define RPG_CLIENT_PROP_WOLFBROPUZZLEBOARD_HITTARGETS_OFFSET UNITYSDK_OFFSET(0xDDCF580)
#define RPG_CLIENT_PROP_WOLFBROPUZZLEBOARD_HLLHPBPFHLF_OFFSET UNITYSDK_OFFSET(0xDDD3450)
#define RPG_CLIENT_PROP_WOLFBROPUZZLEBOARD_HMKEDFHKAPL_OFFSET UNITYSDK_OFFSET(0xDDD15C0)
#define RPG_CLIENT_PROP_WOLFBROPUZZLEBOARD_HMNCMPEHHIJ_OFFSET UNITYSDK_OFFSET(0xDDD1980)
#define RPG_CLIENT_PROP_WOLFBROPUZZLEBOARD_IBEHBHGBNON_OFFSET UNITYSDK_OFFSET(0xDDCF910)
#define RPG_CLIENT_PROP_WOLFBROPUZZLEBOARD_ICOMCOGMCFO_OFFSET UNITYSDK_OFFSET(0xDDCEF80)
#define RPG_CLIENT_PROP_WOLFBROPUZZLEBOARD_IHMEPLNFKLH_OFFSET UNITYSDK_OFFSET(0xDDD3AC0)
#define RPG_CLIENT_PROP_WOLFBROPUZZLEBOARD_INITPUZZLE_OFFSET UNITYSDK_OFFSET(0xDDCDE90)
#define RPG_CLIENT_PROP_WOLFBROPUZZLEBOARD_INNPAGLCDMK_OFFSET UNITYSDK_OFFSET(0xDDD0370)
#define RPG_CLIENT_PROP_WOLFBROPUZZLEBOARD_INTERRUPTEDPLAYERPROJECTILES_OFFSET UNITYSDK_OFFSET(0xDDD1670)
#define RPG_CLIENT_PROP_WOLFBROPUZZLEBOARD_IPJBFLBEIKM_OFFSET UNITYSDK_OFFSET(0xDDCF0A0)
#define RPG_CLIENT_PROP_WOLFBROPUZZLEBOARD_ISPUZZLEFINISH_OFFSET UNITYSDK_OFFSET(0xDDD0030)
#define RPG_CLIENT_PROP_WOLFBROPUZZLEBOARD_JBBMHOFGHGA_OFFSET UNITYSDK_OFFSET(0xDDD3670)
#define RPG_CLIENT_PROP_WOLFBROPUZZLEBOARD_JMAJKNPDBFN_OFFSET UNITYSDK_OFFSET(0xDDD1D60)
#define RPG_CLIENT_PROP_WOLFBROPUZZLEBOARD_KAMMLGNFIGG_OFFSET UNITYSDK_OFFSET(0xDDD35E0)
#define RPG_CLIENT_PROP_WOLFBROPUZZLEBOARD_KBLFGEIGGIE_OFFSET UNITYSDK_OFFSET(0xDDCFEF0)
#define RPG_CLIENT_PROP_WOLFBROPUZZLEBOARD_LFDOAINCNPB_OFFSET UNITYSDK_OFFSET(0xDDD2650)
#define RPG_CLIENT_PROP_WOLFBROPUZZLEBOARD_LHBODJNPDDG_1_OFFSET UNITYSDK_OFFSET(0xDDD0220)
#define RPG_CLIENT_PROP_WOLFBROPUZZLEBOARD_LHBODJNPDDG_OFFSET UNITYSDK_OFFSET(0xDDD27D0)
#define RPG_CLIENT_PROP_WOLFBROPUZZLEBOARD_LJCEENLJBPE_OFFSET UNITYSDK_OFFSET(0xDDCEA10)
#define RPG_CLIENT_PROP_WOLFBROPUZZLEBOARD_LLGHONLKMKB_OFFSET UNITYSDK_OFFSET(0xDDD3790)
#define RPG_CLIENT_PROP_WOLFBROPUZZLEBOARD_LLLGHCAKGHK_OFFSET UNITYSDK_OFFSET(0xDDCEC10)
#define RPG_CLIENT_PROP_WOLFBROPUZZLEBOARD_LMKLCFIOIBN_OFFSET UNITYSDK_OFFSET(0xDDD25A0)
#define RPG_CLIENT_PROP_WOLFBROPUZZLEBOARD_LNNBEEEMAID_OFFSET UNITYSDK_OFFSET(0xDDD6830)
#define RPG_CLIENT_PROP_WOLFBROPUZZLEBOARD_MIKANICKFAP_OFFSET UNITYSDK_OFFSET(0xDDD4950)
#define RPG_CLIENT_PROP_WOLFBROPUZZLEBOARD_MKMLNGILBLP_OFFSET UNITYSDK_OFFSET(0xDDD2D70)
#define RPG_CLIENT_PROP_WOLFBROPUZZLEBOARD_NDEBEEKKOGB_OFFSET UNITYSDK_OFFSET(0xDDCFEA0)
#define RPG_CLIENT_PROP_WOLFBROPUZZLEBOARD_NLPCOGPEGFM_OFFSET UNITYSDK_OFFSET(0xDDD5340)
#define RPG_CLIENT_PROP_WOLFBROPUZZLEBOARD_OJFHNICJIKJ_OFFSET UNITYSDK_OFFSET(0xDDD47C0)
#define RPG_CLIENT_PROP_WOLFBROPUZZLEBOARD_PBKGCAJEOLO_OFFSET UNITYSDK_OFFSET(0xDDD22C0)
#define RPG_CLIENT_PROP_WOLFBROPUZZLEBOARD_PICKUPBULLET_OFFSET UNITYSDK_OFFSET(0xDDCF200)
#define RPG_CLIENT_PROP_WOLFBROPUZZLEBOARD_REPORTMONSTERALERT_OFFSET UNITYSDK_OFFSET(0xDDD4E80)
#define RPG_CLIENT_PROP_WOLFBROPUZZLEBOARD_REPORTMONSTERCHASE_OFFSET UNITYSDK_OFFSET(0xDDD4AE0)
#define RPG_CLIENT_PROP_WOLFBROPUZZLEBOARD_REPORTPUSHHIDE_OFFSET UNITYSDK_OFFSET(0xDDD6390)
#define RPG_CLIENT_PROP_WOLFBROPUZZLEBOARD_REPORTPUSHHIT_OFFSET UNITYSDK_OFFSET(0xDDD6200)
#define RPG_CLIENT_PROP_WOLFBROPUZZLEBOARD_REPORTPUSHLOOK_OFFSET UNITYSDK_OFFSET(0xDDD6070)
#define RPG_CLIENT_PROP_WOLFBROPUZZLEBOARD_REPORTPUSHPROPHIT_OFFSET UNITYSDK_OFFSET(0xDDD2130)
#define RPG_CLIENT_PROP_WOLFBROPUZZLEBOARD_REPORTPUSHPROP_OFFSET UNITYSDK_OFFSET(0xDDD5DF0)
#define RPG_CLIENT_PROP_WOLFBROPUZZLEBOARD_REPORTPUSHTV_OFFSET UNITYSDK_OFFSET(0xDDD6520)
#define RPG_CLIENT_PROP_WOLFBROPUZZLEBOARD_RESETACHIEVEMENTCHASE_OFFSET UNITYSDK_OFFSET(0xDDD1560)
#define RPG_CLIENT_PROP_WOLFBROPUZZLEBOARD_RESETPUZZLE_OFFSET UNITYSDK_OFFSET(0xDDCEC90)
#define RPG_CLIENT_PROP_WOLFBROPUZZLEBOARD_RESTOREARCHIVE_OFFSET UNITYSDK_OFFSET(0xDDD0B30)
#define RPG_CLIENT_PROP_WOLFBROPUZZLEBOARD_SET_CACHEDCAMERAAXIS_OFFSET UNITYSDK_OFFSET(0xDDD5330)
#define RPG_CLIENT_PROP_WOLFBROPUZZLEBOARD_SET_INSTANCE_OFFSET UNITYSDK_OFFSET(0xDDD6B80)
#define RPG_CLIENT_PROP_WOLFBROPUZZLEBOARD_SHUTDOWNPUZZLE_OFFSET UNITYSDK_OFFSET(0xDDCEDA0)
#define RPG_CLIENT_PROP_WOLFBROPUZZLEBOARD_STARTPUZZLE_OFFSET UNITYSDK_OFFSET(0xDDCE2F0)
#define RPG_CLIENT_PROP_WOLFBROPUZZLEBOARD_TICKPUZZLE_OFFSET UNITYSDK_OFFSET(0xDDD0080)
#define RPG_CLIENT_PROP_WOLFBROPUZZLEBOARD_UNWAITRESTOREARCHIVE_OFFSET UNITYSDK_OFFSET(0xDDD08D0)
#define RPG_CLIENT_PROP_WOLFBROPUZZLEBOARD_UNWAITSTARTUP_OFFSET UNITYSDK_OFFSET(0xDDD07E0)
#define RPG_CLIENT_PROP_WOLFBROPUZZLEBOARD_USEBULLET_OFFSET UNITYSDK_OFFSET(0xDDCF040)
#define RPG_CLIENT_PROP_WOLFBROPUZZLEBOARD_WAITRESTOREARCHIVE_OFFSET UNITYSDK_OFFSET(0xDDD0840)
#define RPG_CLIENT_PROP_WOLFBROPUZZLEBOARD_WAITSTARTUP_OFFSET UNITYSDK_OFFSET(0xDDD06F0)

namespace RPG::Client::Prop
{
	inline static constexpr unsigned int WolfBroPuzzleBoard_TypeDefinitionIndex = 78688;

	class WolfBroPuzzleBoard : public ::RPG::Client::Prop::PuzzleBoardBase
	{
	public:
		::System::UInt32 id; // 0x48
		::System::Boolean showBulletButton; // 0x4C
		::System::Byte _padding0[0x3];
		::UnityEngine::Transform* initAnchor; // 0x50
		::UnityEngine::Vector2 _CachedCameraAxis_k__BackingField; // 0x58
		::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>* AJPPCABJDMD; // 0x60
		::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>* JAHHHEHJLGC; // 0x68
		::RPG::Client::RuntimeGroupManager* KDCJFIMPKLP; // 0x70
		::RPG::GameCore::PropComponent* NKILIBDMOMC; // 0x78
		::System::UInt32 PEEFHNHDBMF; // 0x80
		::System::UInt32 JGGDKOCIEGH; // 0x84
		::System::Boolean POBCBCKMGCE; // 0x88
		::System::Boolean GKJKFADHAGM; // 0x89
		::System::Byte _padding1[0x2];
		::RPG::Client::Prop::WolfBroPuzzleBoard_EPuzzlePhase NOHNKAIALPJ; // 0x8C
		::System::Collections::Generic::Dictionary_2<::System::UInt16, ::RPG::Client::RspHandler*>* BHMJDCJLEEP; // 0x90
		::System::Collections::Generic::List_1<::System::Object*>* MEKCJPHMIKB; // 0x98
		::System::Boolean OEJKNLKJCHP; // 0xA0
		::System::Byte _padding2[0x7];
		::RPG::Client::Prop::WolfBroPuzzleBoard_CustomGameData HKGHAFLDHBL; // 0xA8
		::System::Nullable_1<::System::Object*> FKOFABHIJKJ; // 0xC0
		::System::Byte _padding3[0x10];
		::System::Nullable_1<::System::Object*> BCIAFBDEBCC; // 0xD8
		::System::Byte _padding4[0x10];
		::System::Boolean EFOPAHGMFOG; // 0xF0
		::System::Byte _padding5[0x7];
		::System::Collections::Generic::List_1<::System::UInt32>* FADGIIMPMFB; // 0xF8
		::System::Single EMBMJFAIFEM; // 0x100
		static ::System::String** StaticGet_DOBADCFCODL()
		{
			return (::System::String**)UnitySDK::FromName("RPG.Client.Prop", "WolfBroPuzzleBoard")->GetStaticField(0xF390);
		}

		static ::System::String** StaticGet_AFGHHGCPEDB()
		{
			return (::System::String**)UnitySDK::FromName("RPG.Client.Prop", "WolfBroPuzzleBoard")->GetStaticField(0xF398);
		}

		static ::System::String** StaticGet_GEIACHKCJLF()
		{
			return (::System::String**)UnitySDK::FromName("RPG.Client.Prop", "WolfBroPuzzleBoard")->GetStaticField(0xF3A0);
		}

		static ::RPG::Client::Prop::WolfBroPuzzleBoard** StaticGet__Instance_k__BackingField()
		{
			return (::RPG::Client::Prop::WolfBroPuzzleBoard**)UnitySDK::FromName("RPG.Client.Prop", "WolfBroPuzzleBoard")->GetStaticField(0xF3A8);
		}

		static ::System::String** StaticGet_PMOIIPLCIKG()
		{
			return (::System::String**)UnitySDK::FromName("RPG.Client.Prop", "WolfBroPuzzleBoard")->GetStaticField(0xF3B0);
		}

		static ::System::String** StaticGet_BFPPABCIJGF()
		{
			return (::System::String**)UnitySDK::FromName("RPG.Client.Prop", "WolfBroPuzzleBoard")->GetStaticField(0xF3B8);
		}

		static ::System::String** StaticGet_NJPGOEKBMGB()
		{
			return (::System::String**)UnitySDK::FromName("RPG.Client.Prop", "WolfBroPuzzleBoard")->GetStaticField(0xF3C0);
		}

		static ::System::String** StaticGet_OPOBMKOAENH()
		{
			return (::System::String**)UnitySDK::FromName("RPG.Client.Prop", "WolfBroPuzzleBoard")->GetStaticField(0xF3C8);
		}

		static ::System::UInt32* StaticGet_MBLMPINMAME()
		{
			return (::System::UInt32*)UnitySDK::FromName("RPG.Client.Prop", "WolfBroPuzzleBoard")->GetStaticField(0x31D0);
		}

		// static const ::System::Object MiniState; // 0x0
		// static const ::System::Object BulletPropID; // 0x0
		// static const ::System::Object ChaseQuestID; // 0x0
		// static const ::System::Object TeleportQuestID; // 0x0
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_WOLFBROPUZZLEBOARD_CTOR_OFFSET))(this);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_WOLFBROPUZZLEBOARD_CCTOR_OFFSET))();
		}

		::System::Void InitPuzzle(::RPG::GameCore::GameEntity* a1, ::RPG::GameCore::TaskContext* a2, ::RPG::GameCore::PropInitPuzzle* a3)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::GameEntity*, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::PropInitPuzzle*))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_WOLFBROPUZZLEBOARD_INITPUZZLE_OFFSET))(this, a1, a2, a3);
		}

		::System::Void StartPuzzle()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_WOLFBROPUZZLEBOARD_STARTPUZZLE_OFFSET))(this);
		}

		::System::Void LLLGHCAKGHK()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_WOLFBROPUZZLEBOARD_LLLGHCAKGHK_OFFSET))(this);
		}

		::System::Void ResetPuzzle()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_WOLFBROPUZZLEBOARD_RESETPUZZLE_OFFSET))(this);
		}

		::System::Void ShutdownPuzzle()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_WOLFBROPUZZLEBOARD_SHUTDOWNPUZZLE_OFFSET))(this);
		}

		::System::Void ActivateBullet(::System::UInt32 a1, ::System::UInt32 a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_WOLFBROPUZZLEBOARD_ACTIVATEBULLET_OFFSET))(this, a1, a2);
		}

		::System::Void UseBullet()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_WOLFBROPUZZLEBOARD_USEBULLET_OFFSET))(this);
		}

		::System::Void PickupBullet(::RPG::GameCore::GameEntity* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::GameEntity*))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_WOLFBROPUZZLEBOARD_PICKUPBULLET_OFFSET))(this, a1);
		}

		::System::Void HitTargets(::System::Collections::Generic::List_1<::RPG::GameCore::GameEntity*>* a1, ::RPG::GameCore::GameEntity* a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::List_1<::RPG::GameCore::GameEntity*>*, ::RPG::GameCore::GameEntity*))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_WOLFBROPUZZLEBOARD_HITTARGETS_OFFSET))(this, a1, a2);
		}

		::System::Void BoomPropHitTargets(::System::Collections::Generic::List_1<::RPG::GameCore::GameEntity*>* a1, ::System::Collections::Generic::List_1<::RPG::GameCore::GameEntity*>* a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::List_1<::RPG::GameCore::GameEntity*>*, ::System::Collections::Generic::List_1<::RPG::GameCore::GameEntity*>*))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_WOLFBROPUZZLEBOARD_BOOMPROPHITTARGETS_OFFSET))(this, a1, a2);
		}

		::System::Void Dispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_WOLFBROPUZZLEBOARD_DISPOSE_OFFSET))(this);
		}

		::System::Boolean IsPuzzleFinish()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_WOLFBROPUZZLEBOARD_ISPUZZLEFINISH_OFFSET))(this);
		}

		::System::Void TickPuzzle(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_WOLFBROPUZZLEBOARD_TICKPUZZLE_OFFSET))(this, a1);
		}

		::System::Void DLFDHOJLEBG()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_WOLFBROPUZZLEBOARD_DLFDHOJLEBG_OFFSET))(this);
		}

		::System::Void EKDAMKJCEHC(::System::Object* a1, ::System::Single a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*, ::System::Single))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_WOLFBROPUZZLEBOARD_EKDAMKJCEHC_OFFSET))(this, a1, a2);
		}

		::System::Void INNPAGLCDMK(::EKFMIDBJDIA* a1)
		{
			return ((::System::Void(*)(::PVOID, ::EKFMIDBJDIA*))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_WOLFBROPUZZLEBOARD_INNPAGLCDMK_OFFSET))(this, a1);
		}

		::System::Void WaitStartup(::System::Single a1, ::System::Action_1<::System::Boolean>* a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single, ::System::Action_1<::System::Boolean>*))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_WOLFBROPUZZLEBOARD_WAITSTARTUP_OFFSET))(this, a1, a2);
		}

		::System::Void UnWaitStartup()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_WOLFBROPUZZLEBOARD_UNWAITSTARTUP_OFFSET))(this);
		}

		::System::Void WaitRestoreArchive(::System::Single a1, ::System::Action_1<::System::Boolean>* a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single, ::System::Action_1<::System::Boolean>*))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_WOLFBROPUZZLEBOARD_WAITRESTOREARCHIVE_OFFSET))(this, a1, a2);
		}

		::System::Void UnWaitRestoreArchive()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_WOLFBROPUZZLEBOARD_UNWAITRESTOREARCHIVE_OFFSET))(this);
		}

		::System::Void Archive(::UnityEngine::Transform* a1)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Transform*))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_WOLFBROPUZZLEBOARD_ARCHIVE_OFFSET))(this, a1);
		}

		::System::Void RestoreArchive()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_WOLFBROPUZZLEBOARD_RESTOREARCHIVE_OFFSET))(this);
		}

		::System::Void ResetAchievementChase()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_WOLFBROPUZZLEBOARD_RESETACHIEVEMENTCHASE_OFFSET))(this);
		}

		::System::Void InterruptedPlayerProjectiles()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_WOLFBROPUZZLEBOARD_INTERRUPTEDPLAYERPROJECTILES_OFFSET))(this);
		}

		::System::Void EnableTeleportTiming(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_WOLFBROPUZZLEBOARD_ENABLETELEPORTTIMING_OFFSET))(this, a1);
		}

		::System::Void AEKFHEEEBCE()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_WOLFBROPUZZLEBOARD_AEKFHEEEBCE_OFFSET))(this);
		}

		::System::Void HMNCMPEHHIJ(::System::Object* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_WOLFBROPUZZLEBOARD_HMNCMPEHHIJ_OFFSET))(this, a1);
		}

		::System::Void JMAJKNPDBFN(::System::Object* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_WOLFBROPUZZLEBOARD_JMAJKNPDBFN_OFFSET))(this, a1);
		}

		::System::Void FHMIOJOACFK(::System::UInt32 a1, ::System::UInt32 a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_WOLFBROPUZZLEBOARD_FHMIOJOACFK_OFFSET))(this, a1, a2);
		}

		::System::Void FHLPBMAKCPF(::System::UInt32 a1, ::System::UInt32 a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_WOLFBROPUZZLEBOARD_FHLPBMAKCPF_OFFSET))(this, a1, a2);
		}

		::System::Void CKFBAHLJLFJ(::UnityEngine::Vector3Int a1)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Vector3Int))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_WOLFBROPUZZLEBOARD_CKFBAHLJLFJ_OFFSET))(this, a1);
		}

		::System::Void DMPCKKMJDON(::System::Collections::Generic::List_1<::RPG::GameCore::GameEntity*>* a1, ::RPG::GameCore::GameEntity* a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::List_1<::RPG::GameCore::GameEntity*>*, ::RPG::GameCore::GameEntity*))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_WOLFBROPUZZLEBOARD_DMPCKKMJDON_OFFSET))(this, a1, a2);
		}

		::System::Void IBEHBHGBNON(::System::Collections::Generic::List_1<::RPG::GameCore::GameEntity*>* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::List_1<::RPG::GameCore::GameEntity*>*))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_WOLFBROPUZZLEBOARD_IBEHBHGBNON_OFFSET))(this, a1);
		}

		::System::Void LJCEENLJBPE()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_WOLFBROPUZZLEBOARD_LJCEENLJBPE_OFFSET))(this);
		}

		::System::Void LMKLCFIOIBN()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_WOLFBROPUZZLEBOARD_LMKLCFIOIBN_OFFSET))(this);
		}

		::System::Void DFNNMDFILBL()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_WOLFBROPUZZLEBOARD_DFNNMDFILBL_OFFSET))(this);
		}

		::System::Void ADGBEMLLEHM(::UnityEngine::Transform* a1)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Transform*))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_WOLFBROPUZZLEBOARD_ADGBEMLLEHM_OFFSET))(this, a1);
		}

		::System::Void HMKEDFHKAPL()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_WOLFBROPUZZLEBOARD_HMKEDFHKAPL_OFFSET))(this);
		}

		::System::Void ICOMCOGMCFO(::System::UInt32 a1, ::System::UInt32 a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_WOLFBROPUZZLEBOARD_ICOMCOGMCFO_OFFSET))(this, a1, a2);
		}

		::System::Void KBLFGEIGGIE()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_WOLFBROPUZZLEBOARD_KBLFGEIGGIE_OFFSET))(this);
		}

		::System::Void LFDOAINCNPB(::System::UInt16 a1, ::System::Object* a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt16, ::System::Object*))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_WOLFBROPUZZLEBOARD_LFDOAINCNPB_OFFSET))(this, a1, a2);
		}

		::System::Void MKMLNGILBLP(::System::UInt16 a1, ::System::Object* a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt16, ::System::Object*))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_WOLFBROPUZZLEBOARD_MKMLNGILBLP_OFFSET))(this, a1, a2);
		}

		::System::Void GMOFPOBIKOL(::System::UInt16 a1, ::System::Object* a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt16, ::System::Object*))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_WOLFBROPUZZLEBOARD_GMOFPOBIKOL_OFFSET))(this, a1, a2);
		}

		::System::Void BJALMGMLAJG(::System::UInt16 a1, ::System::Object* a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt16, ::System::Object*))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_WOLFBROPUZZLEBOARD_BJALMGMLAJG_OFFSET))(this, a1, a2);
		}

		::System::Void BDEOOPNJFKO(::System::UInt16 a1, ::System::Object* a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt16, ::System::Object*))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_WOLFBROPUZZLEBOARD_BDEOOPNJFKO_OFFSET))(this, a1, a2);
		}

		::System::Void KAMMLGNFIGG(::System::UInt16 a1, ::System::Object* a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt16, ::System::Object*))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_WOLFBROPUZZLEBOARD_KAMMLGNFIGG_OFFSET))(this, a1, a2);
		}

		::System::Void EFADEEGDNML()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_WOLFBROPUZZLEBOARD_EFADEEGDNML_OFFSET))(this);
		}

		::System::Void NDEBEEKKOGB()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_WOLFBROPUZZLEBOARD_NDEBEEKKOGB_OFFSET))(this);
		}

		::System::Void LHBODJNPDDG(::GGHOBPBFFOB* a1)
		{
			return ((::System::Void(*)(::PVOID, ::GGHOBPBFFOB*))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_WOLFBROPUZZLEBOARD_LHBODJNPDDG_OFFSET))(this, a1);
		}

		::System::Void LHBODJNPDDG_1(::RPG::Client::Prop::WolfBroPuzzleBoard_CustomGameData a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::Prop::WolfBroPuzzleBoard_CustomGameData))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_WOLFBROPUZZLEBOARD_LHBODJNPDDG_1_OFFSET))(this, a1);
		}

		::System::Void IPJBFLBEIKM()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_WOLFBROPUZZLEBOARD_IPJBFLBEIKM_OFFSET))(this);
		}

		::System::Void IHMEPLNFKLH()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_WOLFBROPUZZLEBOARD_IHMEPLNFKLH_OFFSET))(this);
		}

		::RPG::GameCore::GameEntity* GHEKCHFPAKF(::UnityEngine::Vector3Int a1)
		{
			return ((::RPG::GameCore::GameEntity*(*)(::PVOID, ::UnityEngine::Vector3Int))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_WOLFBROPUZZLEBOARD_GHEKCHFPAKF_OFFSET))(this, a1);
		}

		::System::Void HDOEGHDKHMB(::RPG::GameCore::GameEntity* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::GameEntity*))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_WOLFBROPUZZLEBOARD_HDOEGHDKHMB_OFFSET))(this, a1);
		}

		::UnityEngine::Vector3 BKJMLMPNGCD(::UnityEngine::Vector3Int a1)
		{
			return ((::UnityEngine::Vector3(*)(::PVOID, ::UnityEngine::Vector3Int))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_WOLFBROPUZZLEBOARD_BKJMLMPNGCD_OFFSET))(this, a1);
		}

		::System::Void GCJBMGDPDFG(::System::Object* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_WOLFBROPUZZLEBOARD_GCJBMGDPDFG_OFFSET))(this, a1);
		}

		::System::Void MIKANICKFAP(::System::Object* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_WOLFBROPUZZLEBOARD_MIKANICKFAP_OFFSET))(this, a1);
		}

		::System::Void AEKHJBDHIME(::System::Object* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_WOLFBROPUZZLEBOARD_AEKHJBDHIME_OFFSET))(this, a1);
		}

		::System::Void BDDJJNEJNHE(::System::Object* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_WOLFBROPUZZLEBOARD_BDDJJNEJNHE_OFFSET))(this, a1);
		}

		::System::Void ANMDHLLKPIJ(::System::Object* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_WOLFBROPUZZLEBOARD_ANMDHLLKPIJ_OFFSET))(this, a1);
		}

		static ::NPEHFAHLDNM* PBKGCAJEOLO(::IMJAFIDKDKK a1)
		{
			return ((::NPEHFAHLDNM*(*)(::IMJAFIDKDKK))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_WOLFBROPUZZLEBOARD_PBKGCAJEOLO_OFFSET))(a1);
		}

		static ::KDMEFGANLKI* DEOJAHAFAFO(::UnityEngine::Vector3 a1)
		{
			return ((::KDMEFGANLKI*(*)(::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_WOLFBROPUZZLEBOARD_DEOJAHAFAFO_OFFSET))(a1);
		}

		static ::System::ValueTuple_2<::UnityEngine::Vector3, ::UnityEngine::Quaternion> HLLHPBPFHLF(::NPEHFAHLDNM* a1)
		{
			return ((::System::ValueTuple_2<::UnityEngine::Vector3, ::UnityEngine::Quaternion>(*)(::NPEHFAHLDNM*))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_WOLFBROPUZZLEBOARD_HLLHPBPFHLF_OFFSET))(a1);
		}

		static ::UnityEngine::Vector3 OJFHNICJIKJ(::UnityEngine::Vector3Int a1)
		{
			return ((::UnityEngine::Vector3(*)(::UnityEngine::Vector3Int))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_WOLFBROPUZZLEBOARD_OJFHNICJIKJ_OFFSET))(a1);
		}

		::System::Boolean get_IsLock()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_WOLFBROPUZZLEBOARD_GET_ISLOCK_OFFSET))(this);
		}

		::System::Void JBBMHOFGHGA(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_WOLFBROPUZZLEBOARD_JBBMHOFGHGA_OFFSET))(this, a1);
		}

		::System::Boolean get_IsMiniState()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_WOLFBROPUZZLEBOARD_GET_ISMINISTATE_OFFSET))(this);
		}

		::System::Void LLGHONLKMKB(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_WOLFBROPUZZLEBOARD_LLGHONLKMKB_OFFSET))(this, a1);
		}

		::System::Boolean get_IsBulletActivated()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_WOLFBROPUZZLEBOARD_GET_ISBULLETACTIVATED_OFFSET))(this);
		}

		::UnityEngine::Vector2 get_CachedCameraAxis()
		{
			return ((::UnityEngine::Vector2(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_WOLFBROPUZZLEBOARD_GET_CACHEDCAMERAAXIS_OFFSET))(this);
		}

		::System::Void set_CachedCameraAxis(::UnityEngine::Vector2 a1)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Vector2))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_WOLFBROPUZZLEBOARD_SET_CACHEDCAMERAAXIS_OFFSET))(this, a1);
		}

		::System::Void ReportMonsterAlert(::RPG::GameCore::GameEntity* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::GameEntity*))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_WOLFBROPUZZLEBOARD_REPORTMONSTERALERT_OFFSET))(this, a1);
		}

		::System::Void ReportMonsterChase(::RPG::GameCore::GameEntity* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::GameEntity*))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_WOLFBROPUZZLEBOARD_REPORTMONSTERCHASE_OFFSET))(this, a1);
		}

		::System::Void ReportPushProp(::RPG::GameCore::GameEntity* a1, ::RPG::GameCore::GameEntity* a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::GameEntity*, ::RPG::GameCore::GameEntity*))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_WOLFBROPUZZLEBOARD_REPORTPUSHPROP_OFFSET))(this, a1, a2);
		}

		::System::Void ReportPushLook(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_WOLFBROPUZZLEBOARD_REPORTPUSHLOOK_OFFSET))(this, a1);
		}

		::System::Void ReportPushHit(::RPG::GameCore::GameEntity* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::GameEntity*))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_WOLFBROPUZZLEBOARD_REPORTPUSHHIT_OFFSET))(this, a1);
		}

		::System::Void ReportPushHide(::RPG::GameCore::GameEntity* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::GameEntity*))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_WOLFBROPUZZLEBOARD_REPORTPUSHHIDE_OFFSET))(this, a1);
		}

		::System::Void ReportPushTV(::RPG::GameCore::GameEntity* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::GameEntity*))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_WOLFBROPUZZLEBOARD_REPORTPUSHTV_OFFSET))(this, a1);
		}

		::System::Void ReportPushPropHit(::RPG::GameCore::GameEntity* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::GameEntity*))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_WOLFBROPUZZLEBOARD_REPORTPUSHPROPHIT_OFFSET))(this, a1);
		}

		::System::Boolean NLPCOGPEGFM()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_WOLFBROPUZZLEBOARD_NLPCOGPEGFM_OFFSET))(this);
		}

		::System::String* CCCOMDGNGAF(::RPG::GameCore::GameEntity* a1)
		{
			return ((::System::String*(*)(::PVOID, ::RPG::GameCore::GameEntity*))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_WOLFBROPUZZLEBOARD_CCCOMDGNGAF_OFFSET))(this, a1);
		}

		::System::String* LNNBEEEMAID(::UnityEngine::Vector3 a1)
		{
			return ((::System::String*(*)(::PVOID, ::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_WOLFBROPUZZLEBOARD_LNNBEEEMAID_OFFSET))(this, a1);
		}

		static ::RPG::Client::Prop::WolfBroPuzzleBoard* get_Instance()
		{
			return ((::RPG::Client::Prop::WolfBroPuzzleBoard*(*)())((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_WOLFBROPUZZLEBOARD_GET_INSTANCE_OFFSET))();
		}

		static ::System::Void set_Instance(::RPG::Client::Prop::WolfBroPuzzleBoard* a1)
		{
			return ((::System::Void(*)(::RPG::Client::Prop::WolfBroPuzzleBoard*))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_WOLFBROPUZZLEBOARD_SET_INSTANCE_OFFSET))(a1);
		}

	};
}
