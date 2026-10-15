#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/Prop/PuzzleBoardBase.h"
#include "unitysdk/RPG/GameCore/AttackDamageType.h"
class EKFMIDBJDIA;
class ENLNFBCDEIO;
namespace RPG::Client { class RuntimeGroupManager; }
namespace RPG::GameCore { class GameEntity; }
namespace RPG::GameCore { class PropComponent; }
namespace RPG::GameCore { class PropInitPuzzle; }
namespace RPG::GameCore { class RuntimeGroupInfo; }
namespace RPG::GameCore { class TaskContext; }
namespace System { class Object; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define RPG_CLIENT_PROP_PILLARPUZZLE_PILLARPUZZLEBOARD_ALKAODBBJBO_OFFSET UNITYSDK_OFFSET(0xDD65470)
#define RPG_CLIENT_PROP_PILLARPUZZLE_PILLARPUZZLEBOARD_BHOKACFMMLD_OFFSET UNITYSDK_OFFSET(0xDD68E90)
#define RPG_CLIENT_PROP_PILLARPUZZLE_PILLARPUZZLEBOARD_BKIJEPBFFEJ_OFFSET UNITYSDK_OFFSET(0xDD666A0)
#define RPG_CLIENT_PROP_PILLARPUZZLE_PILLARPUZZLEBOARD_CCTOR_OFFSET UNITYSDK_OFFSET(0xDD690B0)
#define RPG_CLIENT_PROP_PILLARPUZZLE_PILLARPUZZLEBOARD_CHECKPUZZLEFINISH_OFFSET UNITYSDK_OFFSET(0xDD68970)
#define RPG_CLIENT_PROP_PILLARPUZZLE_PILLARPUZZLEBOARD_CJELDNHONPG_OFFSET UNITYSDK_OFFSET(0xDD64C70)
#define RPG_CLIENT_PROP_PILLARPUZZLE_PILLARPUZZLEBOARD_CJJHILDLMCH_OFFSET UNITYSDK_OFFSET(0xDD67350)
#define RPG_CLIENT_PROP_PILLARPUZZLE_PILLARPUZZLEBOARD_CTOR_OFFSET UNITYSDK_OFFSET(0xDD68F60)
#define RPG_CLIENT_PROP_PILLARPUZZLE_PILLARPUZZLEBOARD_DBOILIPBOLG_OFFSET UNITYSDK_OFFSET(0xDD67B30)
#define RPG_CLIENT_PROP_PILLARPUZZLE_PILLARPUZZLEBOARD_DISAPPEAR_OFFSET UNITYSDK_OFFSET(0xDD68AA0)
#define RPG_CLIENT_PROP_PILLARPUZZLE_PILLARPUZZLEBOARD_DISPOSE_OFFSET UNITYSDK_OFFSET(0xDD67260)
#define RPG_CLIENT_PROP_PILLARPUZZLE_PILLARPUZZLEBOARD_DOKKPNFMAHF_OFFSET UNITYSDK_OFFSET(0xDD68550)
#define RPG_CLIENT_PROP_PILLARPUZZLE_PILLARPUZZLEBOARD_EJOJLJDLKGG_OFFSET UNITYSDK_OFFSET(0xDD66390)
#define RPG_CLIENT_PROP_PILLARPUZZLE_PILLARPUZZLEBOARD_GDDBENOMDIJ_OFFSET UNITYSDK_OFFSET(0xDD65C50)
#define RPG_CLIENT_PROP_PILLARPUZZLE_PILLARPUZZLEBOARD_GLEEHMGBFNN_OFFSET UNITYSDK_OFFSET(0xDD66970)
#define RPG_CLIENT_PROP_PILLARPUZZLE_PILLARPUZZLEBOARD_HDPDLDFPDAC_OFFSET UNITYSDK_OFFSET(0xDD65900)
#define RPG_CLIENT_PROP_PILLARPUZZLE_PILLARPUZZLEBOARD_HEFMHAIIEOD_OFFSET UNITYSDK_OFFSET(0xDD656E0)
#define RPG_CLIENT_PROP_PILLARPUZZLE_PILLARPUZZLEBOARD_INITPILLARPROPS_OFFSET UNITYSDK_OFFSET(0xDD65F40)
#define RPG_CLIENT_PROP_PILLARPUZZLE_PILLARPUZZLEBOARD_INITPUZZLE_OFFSET UNITYSDK_OFFSET(0xDD648C0)
#define RPG_CLIENT_PROP_PILLARPUZZLE_PILLARPUZZLEBOARD_ISPUZZLEFINISH_OFFSET UNITYSDK_OFFSET(0xDD68820)
#define RPG_CLIENT_PROP_PILLARPUZZLE_PILLARPUZZLEBOARD_KFIJONJAMJM_OFFSET UNITYSDK_OFFSET(0xDD68CE0)
#define RPG_CLIENT_PROP_PILLARPUZZLE_PILLARPUZZLEBOARD_KNACEGNPDCP_OFFSET UNITYSDK_OFFSET(0xDD675E0)
#define RPG_CLIENT_PROP_PILLARPUZZLE_PILLARPUZZLEBOARD_LAGBFNMGIII_OFFSET UNITYSDK_OFFSET(0xDD66C50)
#define RPG_CLIENT_PROP_PILLARPUZZLE_PILLARPUZZLEBOARD_MJCLAPOEEPB_OFFSET UNITYSDK_OFFSET(0xDD68E10)
#define RPG_CLIENT_PROP_PILLARPUZZLE_PILLARPUZZLEBOARD_NGJOABDMOOP_OFFSET UNITYSDK_OFFSET(0xDD678E0)
#define RPG_CLIENT_PROP_PILLARPUZZLE_PILLARPUZZLEBOARD_ONBEFORESWITCHMAP_OFFSET UNITYSDK_OFFSET(0xDD672C0)
#define RPG_CLIENT_PROP_PILLARPUZZLE_PILLARPUZZLEBOARD_ONPUZZLEFINISH_OFFSET UNITYSDK_OFFSET(0xDD68740)
#define RPG_CLIENT_PROP_PILLARPUZZLE_PILLARPUZZLEBOARD_RECOVERFROMPUZZLESTATE_OFFSET UNITYSDK_OFFSET(0xDD65280)

namespace RPG::Client::Prop::PillarPuzzle
{
	inline static constexpr unsigned int PillarPuzzleBoard_TypeDefinitionIndex = 78965;

	class PillarPuzzleBoard : public ::RPG::Client::Prop::PuzzleBoardBase
	{
	public:
		::System::Collections::Generic::Dictionary_2<::System::UInt32, ::RPG::GameCore::PropComponent*>* AllPillars; // 0x48
		::System::Collections::Generic::Dictionary_2<::System::UInt32, ::RPG::GameCore::PropComponent*>* PidToPillar; // 0x50
		::System::UInt32 PillarsGroupID; // 0x58
		::System::Byte _padding0[0x4];
		::System::String* PillarsGroupID_DS; // 0x60
		::System::Collections::Generic::List_1<::System::UInt32>* PillarsIDList; // 0x68
		::RPG::Client::RuntimeGroupManager* KDCJFIMPKLP; // 0x70
		static ::System::String** StaticGet_EDBHFLBEFNC()
		{
			return (::System::String**)UnitySDK::FromName("RPG.Client.Prop.PillarPuzzle", "PillarPuzzleBoard")->GetStaticField(0x5AFE0);
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_PILLARPUZZLE_PILLARPUZZLEBOARD_CTOR_OFFSET))(this);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_PILLARPUZZLE_PILLARPUZZLEBOARD_CCTOR_OFFSET))();
		}

		::System::Void InitPuzzle(::RPG::GameCore::GameEntity* a1, ::RPG::GameCore::TaskContext* a2, ::RPG::GameCore::PropInitPuzzle* a3)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::GameEntity*, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::PropInitPuzzle*))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_PILLARPUZZLE_PILLARPUZZLEBOARD_INITPUZZLE_OFFSET))(this, a1, a2, a3);
		}

		::System::Void RecoverFromPuzzleState(::ENLNFBCDEIO* a1)
		{
			return ((::System::Void(*)(::PVOID, ::ENLNFBCDEIO*))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_PILLARPUZZLE_PILLARPUZZLEBOARD_RECOVERFROMPUZZLESTATE_OFFSET))(this, a1);
		}

		::System::Boolean ALKAODBBJBO(::RPG::GameCore::RuntimeGroupInfo* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::RPG::GameCore::RuntimeGroupInfo*))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_PILLARPUZZLE_PILLARPUZZLEBOARD_ALKAODBBJBO_OFFSET))(this, a1);
		}

		::System::Boolean HEFMHAIIEOD(::RPG::GameCore::RuntimeGroupInfo* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::RPG::GameCore::RuntimeGroupInfo*))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_PILLARPUZZLE_PILLARPUZZLEBOARD_HEFMHAIIEOD_OFFSET))(this, a1);
		}

		::System::Boolean HDPDLDFPDAC(::RPG::GameCore::RuntimeGroupInfo* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::RPG::GameCore::RuntimeGroupInfo*))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_PILLARPUZZLE_PILLARPUZZLEBOARD_HDPDLDFPDAC_OFFSET))(this, a1);
		}

		::System::Boolean GDDBENOMDIJ(::RPG::GameCore::RuntimeGroupInfo* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::RPG::GameCore::RuntimeGroupInfo*))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_PILLARPUZZLE_PILLARPUZZLEBOARD_GDDBENOMDIJ_OFFSET))(this, a1);
		}

		::System::Boolean InitPillarProps()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_PILLARPUZZLE_PILLARPUZZLEBOARD_INITPILLARPROPS_OFFSET))(this);
		}

		::System::Void EJOJLJDLKGG()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_PILLARPUZZLE_PILLARPUZZLEBOARD_EJOJLJDLKGG_OFFSET))(this);
		}

		::System::Void BKIJEPBFFEJ()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_PILLARPUZZLE_PILLARPUZZLEBOARD_BKIJEPBFFEJ_OFFSET))(this);
		}

		::System::Void GLEEHMGBFNN()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_PILLARPUZZLE_PILLARPUZZLEBOARD_GLEEHMGBFNN_OFFSET))(this);
		}

		::System::Void CJELDNHONPG()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_PILLARPUZZLE_PILLARPUZZLEBOARD_CJELDNHONPG_OFFSET))(this);
		}

		::System::Void LAGBFNMGIII()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_PILLARPUZZLE_PILLARPUZZLEBOARD_LAGBFNMGIII_OFFSET))(this);
		}

		::System::Void Dispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_PILLARPUZZLE_PILLARPUZZLEBOARD_DISPOSE_OFFSET))(this);
		}

		::System::Void OnBeforeSwitchMap(::System::Object* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_PILLARPUZZLE_PILLARPUZZLEBOARD_ONBEFORESWITCHMAP_OFFSET))(this, a1);
		}

		::System::Void KNACEGNPDCP(::EKFMIDBJDIA* a1)
		{
			return ((::System::Void(*)(::PVOID, ::EKFMIDBJDIA*))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_PILLARPUZZLE_PILLARPUZZLEBOARD_KNACEGNPDCP_OFFSET))(this, a1);
		}

		::System::Void DOKKPNFMAHF(::EKFMIDBJDIA* a1)
		{
			return ((::System::Void(*)(::PVOID, ::EKFMIDBJDIA*))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_PILLARPUZZLE_PILLARPUZZLEBOARD_DOKKPNFMAHF_OFFSET))(this, a1);
		}

		::System::Void OnPuzzleFinish()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_PILLARPUZZLE_PILLARPUZZLEBOARD_ONPUZZLEFINISH_OFFSET))(this);
		}

		::System::Boolean IsPuzzleFinish()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_PILLARPUZZLE_PILLARPUZZLEBOARD_ISPUZZLEFINISH_OFFSET))(this);
		}

		::System::Void CheckPuzzleFinish()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_PILLARPUZZLE_PILLARPUZZLEBOARD_CHECKPUZZLEFINISH_OFFSET))(this);
		}

		::System::Void Disappear()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_PILLARPUZZLE_PILLARPUZZLEBOARD_DISAPPEAR_OFFSET))(this);
		}

		::System::Void KFIJONJAMJM()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_PILLARPUZZLE_PILLARPUZZLEBOARD_KFIJONJAMJM_OFFSET))(this);
		}

		::System::UInt32 MJCLAPOEEPB()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_PILLARPUZZLE_PILLARPUZZLEBOARD_MJCLAPOEEPB_OFFSET))(this);
		}

		::System::Void NGJOABDMOOP()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_PILLARPUZZLE_PILLARPUZZLEBOARD_NGJOABDMOOP_OFFSET))(this);
		}

		::System::Void DBOILIPBOLG(::System::UInt32 a1, ::System::Boolean a2, ::RPG::GameCore::AttackDamageType a3)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32, ::System::Boolean, ::RPG::GameCore::AttackDamageType))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_PILLARPUZZLE_PILLARPUZZLEBOARD_DBOILIPBOLG_OFFSET))(this, a1, a2, a3);
		}

		::System::Void CJJHILDLMCH(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_PILLARPUZZLE_PILLARPUZZLEBOARD_CJJHILDLMCH_OFFSET))(this, a1);
		}

		::System::Void BHOKACFMMLD(::System::Object* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_PILLARPUZZLE_PILLARPUZZLEBOARD_BHOKACFMMLD_OFFSET))(this, a1);
		}

	};
}
