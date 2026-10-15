#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/BCAMANFJINC.h"
#include "unitysdk/RPG/Client/ChenLingBattle/Effect.h"
class HGCIPBFBNKO;
class JLIFGIMBMBD;
class JLPEICPFLMC;
namespace RPG::Client::ChenLingBattle { class ChenLingBattleGameSession; }
namespace RPG::Client::ChenLingBattle { class DynamicProgressEffect; }
namespace RPG::Client::ChenLingBattle { class EffectProgressConfig; }
namespace RPG::Client::ChenLingBattle { class Grid; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define RPG_CLIENT_CHENLINGBATTLE_DYNAMICPROGRESSEFFECT_CREATEDYNAMICPROGRESSEFFECT_OFFSET UNITYSDK_OFFSET(0xCA548D0)
#define RPG_CLIENT_CHENLINGBATTLE_DYNAMICPROGRESSEFFECT_CTOR_OFFSET UNITYSDK_OFFSET(0xCA54C80)
#define RPG_CLIENT_CHENLINGBATTLE_DYNAMICPROGRESSEFFECT_GETEFFECTPARAMS_OFFSET UNITYSDK_OFFSET(0xCA55120)
#define RPG_CLIENT_CHENLINGBATTLE_DYNAMICPROGRESSEFFECT_GETPROGRESSADD_OFFSET UNITYSDK_OFFSET(0xCA55040)
#define RPG_CLIENT_CHENLINGBATTLE_DYNAMICPROGRESSEFFECT_GETPROGRESSCONFIG_OFFSET UNITYSDK_OFFSET(0xCA54FA0)
#define RPG_CLIENT_CHENLINGBATTLE_DYNAMICPROGRESSEFFECT_GETRELATEDGRID_OFFSET UNITYSDK_OFFSET(0xCA55510)
#define RPG_CLIENT_CHENLINGBATTLE_DYNAMICPROGRESSEFFECT_GET_CURRENTPROGRESS_OFFSET UNITYSDK_OFFSET(0xCA55570)
#define RPG_CLIENT_CHENLINGBATTLE_DYNAMICPROGRESSEFFECT_GET_FINISHCNT_OFFSET UNITYSDK_OFFSET(0xCA555B0)
#define RPG_CLIENT_CHENLINGBATTLE_DYNAMICPROGRESSEFFECT_GET_LASTADDPROGRESS_OFFSET UNITYSDK_OFFSET(0xCA55650)
#define RPG_CLIENT_CHENLINGBATTLE_DYNAMICPROGRESSEFFECT_GET_PROGRESSCONFIGS_OFFSET UNITYSDK_OFFSET(0xCA55630)
#define RPG_CLIENT_CHENLINGBATTLE_DYNAMICPROGRESSEFFECT_GET_SOURCEID_OFFSET UNITYSDK_OFFSET(0xCA55610)
#define RPG_CLIENT_CHENLINGBATTLE_DYNAMICPROGRESSEFFECT_GET_SOURCETYPE_OFFSET UNITYSDK_OFFSET(0xCA555F0)
#define RPG_CLIENT_CHENLINGBATTLE_DYNAMICPROGRESSEFFECT_GET_TARGETPROGRESS_OFFSET UNITYSDK_OFFSET(0xCA554D0)
#define RPG_CLIENT_CHENLINGBATTLE_DYNAMICPROGRESSEFFECT_SET_LASTADDPROGRESS_OFFSET UNITYSDK_OFFSET(0xCA55660)
#define RPG_CLIENT_CHENLINGBATTLE_DYNAMICPROGRESSEFFECT_SET_PROGRESSCONFIGS_OFFSET UNITYSDK_OFFSET(0xCA55640)
#define RPG_CLIENT_CHENLINGBATTLE_DYNAMICPROGRESSEFFECT_SET_SOURCEID_OFFSET UNITYSDK_OFFSET(0xCA55620)
#define RPG_CLIENT_CHENLINGBATTLE_DYNAMICPROGRESSEFFECT_SET_SOURCETYPE_OFFSET UNITYSDK_OFFSET(0xCA55600)
#define RPG_CLIENT_CHENLINGBATTLE_DYNAMICPROGRESSEFFECT_SYNC_OFFSET UNITYSDK_OFFSET(0xCA54CB0)
#define RPG_CLIENT_CHENLINGBATTLE_DYNAMICPROGRESSEFFECT_UPDATELASTADDPROGRESS_OFFSET UNITYSDK_OFFSET(0xCA54EF0)

namespace RPG::Client::ChenLingBattle
{
	class DynamicProgressEffect : public ::RPG::Client::ChenLingBattle::Effect
	{
	public:
		::RPG::Client::ChenLingBattle::ChenLingBattleGameSession* _GameSessionRef; // 0x30
		::Il2CppArray<::RPG::Client::ChenLingBattle::EffectProgressConfig*>* _ProgressConfigs_k__BackingField; // 0x38
		::System::UInt32 _FinishCnt; // 0x40
		::BCAMANFJINC _SourceType_k__BackingField; // 0x44
		::System::UInt32 _LastAddProgress_k__BackingField; // 0x48
		::System::UInt32 _CurrentProgress; // 0x4C
		::System::UInt32 _TargetProgress; // 0x50
		::System::UInt32 _SourceID_k__BackingField; // 0x54
		::System::Void _ctor(::System::UInt32 a1, ::System::UInt64 a2, ::JLPEICPFLMC* a3)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32, ::System::UInt64, ::JLPEICPFLMC*))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHENLINGBATTLE_DYNAMICPROGRESSEFFECT_CTOR_OFFSET))(this, a1, a2, a3);
		}

		static ::RPG::Client::ChenLingBattle::DynamicProgressEffect* CreateDynamicProgressEffect(::HGCIPBFBNKO* a1, ::RPG::Client::ChenLingBattle::ChenLingBattleGameSession* a2)
		{
			return ((::RPG::Client::ChenLingBattle::DynamicProgressEffect*(*)(::HGCIPBFBNKO*, ::RPG::Client::ChenLingBattle::ChenLingBattleGameSession*))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHENLINGBATTLE_DYNAMICPROGRESSEFFECT_CREATEDYNAMICPROGRESSEFFECT_OFFSET))(a1, a2);
		}

		::System::Void Sync(::HGCIPBFBNKO* a1, ::JLPEICPFLMC* a2)
		{
			return ((::System::Void(*)(::PVOID, ::HGCIPBFBNKO*, ::JLPEICPFLMC*))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHENLINGBATTLE_DYNAMICPROGRESSEFFECT_SYNC_OFFSET))(this, a1, a2);
		}

		::System::Void UpdateLastAddProgress(::JLIFGIMBMBD* a1)
		{
			return ((::System::Void(*)(::PVOID, ::JLIFGIMBMBD*))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHENLINGBATTLE_DYNAMICPROGRESSEFFECT_UPDATELASTADDPROGRESS_OFFSET))(this, a1);
		}

		::RPG::Client::ChenLingBattle::EffectProgressConfig* GetProgressConfig(::System::UInt32 a1)
		{
			return ((::RPG::Client::ChenLingBattle::EffectProgressConfig*(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHENLINGBATTLE_DYNAMICPROGRESSEFFECT_GETPROGRESSCONFIG_OFFSET))(this, a1);
		}

		::System::UInt32 GetProgressAdd(::System::UInt32 a1, ::System::UInt32 a2, ::System::UInt32 a3, ::System::UInt32 a4)
		{
			return ((::System::UInt32(*)(::PVOID, ::System::UInt32, ::System::UInt32, ::System::UInt32, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHENLINGBATTLE_DYNAMICPROGRESSEFFECT_GETPROGRESSADD_OFFSET))(this, a1, a2, a3, a4);
		}

		::System::Collections::Generic::List_1<::System::UInt32>* GetEffectParams()
		{
			return ((::System::Collections::Generic::List_1<::System::UInt32>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHENLINGBATTLE_DYNAMICPROGRESSEFFECT_GETEFFECTPARAMS_OFFSET))(this);
		}

		::RPG::Client::ChenLingBattle::Grid* GetRelatedGrid()
		{
			return ((::RPG::Client::ChenLingBattle::Grid*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHENLINGBATTLE_DYNAMICPROGRESSEFFECT_GETRELATEDGRID_OFFSET))(this);
		}

		::System::UInt32 get_CurrentProgress()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHENLINGBATTLE_DYNAMICPROGRESSEFFECT_GET_CURRENTPROGRESS_OFFSET))(this);
		}

		::System::UInt32 get_TargetProgress()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHENLINGBATTLE_DYNAMICPROGRESSEFFECT_GET_TARGETPROGRESS_OFFSET))(this);
		}

		::System::UInt32 get_FinishCnt()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHENLINGBATTLE_DYNAMICPROGRESSEFFECT_GET_FINISHCNT_OFFSET))(this);
		}

		::BCAMANFJINC get_SourceType()
		{
			return ((::BCAMANFJINC(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHENLINGBATTLE_DYNAMICPROGRESSEFFECT_GET_SOURCETYPE_OFFSET))(this);
		}

		::System::Void set_SourceType(::BCAMANFJINC a1)
		{
			return ((::System::Void(*)(::PVOID, ::BCAMANFJINC))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHENLINGBATTLE_DYNAMICPROGRESSEFFECT_SET_SOURCETYPE_OFFSET))(this, a1);
		}

		::System::UInt32 get_SourceID()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHENLINGBATTLE_DYNAMICPROGRESSEFFECT_GET_SOURCEID_OFFSET))(this);
		}

		::System::Void set_SourceID(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHENLINGBATTLE_DYNAMICPROGRESSEFFECT_SET_SOURCEID_OFFSET))(this, a1);
		}

		::Il2CppArray<::RPG::Client::ChenLingBattle::EffectProgressConfig*>* get_ProgressConfigs()
		{
			return ((::Il2CppArray<::RPG::Client::ChenLingBattle::EffectProgressConfig*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHENLINGBATTLE_DYNAMICPROGRESSEFFECT_GET_PROGRESSCONFIGS_OFFSET))(this);
		}

		::System::Void set_ProgressConfigs(::Il2CppArray<::RPG::Client::ChenLingBattle::EffectProgressConfig*>* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Il2CppArray<::RPG::Client::ChenLingBattle::EffectProgressConfig*>*))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHENLINGBATTLE_DYNAMICPROGRESSEFFECT_SET_PROGRESSCONFIGS_OFFSET))(this, a1);
		}

		::System::UInt32 get_LastAddProgress()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHENLINGBATTLE_DYNAMICPROGRESSEFFECT_GET_LASTADDPROGRESS_OFFSET))(this);
		}

		::System::Void set_LastAddProgress(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHENLINGBATTLE_DYNAMICPROGRESSEFFECT_SET_LASTADDPROGRESS_OFFSET))(this, a1);
		}

	};
}
