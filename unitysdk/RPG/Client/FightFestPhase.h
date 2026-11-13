#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/FightFestPhaseType.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/RPG/Client/TextID.h"
namespace RPG::Client { class FightFestScorePhaseExtraData; }
namespace RPG::GameCore { class FightFestPhaseRow; }
namespace System { class String; }

#define RPG_CLIENT_FIGHTFESTPHASE_CTOR_OFFSET UNITYSDK_OFFSET(0x1B2FF200)
#define RPG_CLIENT_FIGHTFESTPHASE_GET_BOARDTEXTUREPATH_OFFSET UNITYSDK_OFFSET(0x1B308710)
#define RPG_CLIENT_FIGHTFESTPHASE_GET_BOARDTITLE_OFFSET UNITYSDK_OFFSET(0x1B3084D0)
#define RPG_CLIENT_FIGHTFESTPHASE_GET_ICONPATH1_OFFSET UNITYSDK_OFFSET(0x1B308620)
#define RPG_CLIENT_FIGHTFESTPHASE_GET_ICONPATH2_OFFSET UNITYSDK_OFFSET(0x1B3086C0)
#define RPG_CLIENT_FIGHTFESTPHASE_GET_ID_OFFSET UNITYSDK_OFFSET(0x1B2FF7D0)
#define RPG_CLIENT_FIGHTFESTPHASE_GET_ISPHASEUNLOCK_OFFSET UNITYSDK_OFFSET(0x1B301040)
#define RPG_CLIENT_FIGHTFESTPHASE_GET_LUKAANIMTRIGGER_OFFSET UNITYSDK_OFFSET(0x1B308760)
#define RPG_CLIENT_FIGHTFESTPHASE_GET_MINIICONPATH1_OFFSET UNITYSDK_OFFSET(0x1B308670)
#define RPG_CLIENT_FIGHTFESTPHASE_GET_PHASETITLE_OFFSET UNITYSDK_OFFSET(0x1B308540)
#define RPG_CLIENT_FIGHTFESTPHASE_GET_PHASETUTORIALPARAMS_OFFSET UNITYSDK_OFFSET(0x1B2FF610)
#define RPG_CLIENT_FIGHTFESTPHASE_GET_PHASETYPE_OFFSET UNITYSDK_OFFSET(0x1B300A20)
#define RPG_CLIENT_FIGHTFESTPHASE_GET_QUALIFYTIP_OFFSET UNITYSDK_OFFSET(0x1B3082A0)
#define RPG_CLIENT_FIGHTFESTPHASE_GET_REWARDID_OFFSET UNITYSDK_OFFSET(0x1B307E40)
#define RPG_CLIENT_FIGHTFESTPHASE_GET_SORTWEIGHT_OFFSET UNITYSDK_OFFSET(0x1B3070A0)
#define RPG_CLIENT_FIGHTFESTPHASE_GET_TARGETAVATARICON_OFFSET UNITYSDK_OFFSET(0x1B307F00)
#define RPG_CLIENT_FIGHTFESTPHASE_GET_TARGETAVATARMINIICON_OFFSET UNITYSDK_OFFSET(0x1B308020)
#define RPG_CLIENT_FIGHTFESTPHASE_GET_TARGETAVATARNAME_OFFSET UNITYSDK_OFFSET(0x1B308140)
#define RPG_CLIENT_FIGHTFESTPHASE_GET_TARGETSCORE_OFFSET UNITYSDK_OFFSET(0x1B307D80)
#define RPG_CLIENT_FIGHTFESTPHASE_GET_TARGETTIPS_OFFSET UNITYSDK_OFFSET(0x1B3085B0)
#define RPG_CLIENT_FIGHTFESTPHASE_GET_UNLOCKSUBMISSIONID_OFFSET UNITYSDK_OFFSET(0x1B2FF400)

namespace RPG::Client
{
	inline static constexpr unsigned int FightFestPhase_TypeDefinitionIndex = 65624;

	class FightFestPhase : public ::System::Object
	{
	public:
		::RPG::GameCore::FightFestPhaseRow* _Row; // 0x10
		::RPG::Client::FightFestScorePhaseExtraData* ScorePhaseExtraData; // 0x18
		::System::Void _ctor(::RPG::GameCore::FightFestPhaseRow* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::FightFestPhaseRow*))((::PBYTE)hIl2Cpp + RPG_CLIENT_FIGHTFESTPHASE_CTOR_OFFSET))(this, a1);
		}

		::System::UInt32 get_TargetScore()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_FIGHTFESTPHASE_GET_TARGETSCORE_OFFSET))(this);
		}

		::System::UInt32 get_RewardID()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_FIGHTFESTPHASE_GET_REWARDID_OFFSET))(this);
		}

		::System::String* get_TargetAvatarIcon()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_FIGHTFESTPHASE_GET_TARGETAVATARICON_OFFSET))(this);
		}

		::System::String* get_TargetAvatarMiniIcon()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_FIGHTFESTPHASE_GET_TARGETAVATARMINIICON_OFFSET))(this);
		}

		::RPG::Client::TextID get_TargetAvatarName()
		{
			return ((::RPG::Client::TextID(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_FIGHTFESTPHASE_GET_TARGETAVATARNAME_OFFSET))(this);
		}

		::RPG::Client::TextID get_QualifyTip()
		{
			return ((::RPG::Client::TextID(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_FIGHTFESTPHASE_GET_QUALIFYTIP_OFFSET))(this);
		}

		::System::Boolean get_IsPhaseUnlock()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_FIGHTFESTPHASE_GET_ISPHASEUNLOCK_OFFSET))(this);
		}

		::System::UInt32 get_ID()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_FIGHTFESTPHASE_GET_ID_OFFSET))(this);
		}

		::RPG::GameCore::FightFestPhaseType get_PhaseType()
		{
			return ((::RPG::GameCore::FightFestPhaseType(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_FIGHTFESTPHASE_GET_PHASETYPE_OFFSET))(this);
		}

		::System::UInt32 get_SortWeight()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_FIGHTFESTPHASE_GET_SORTWEIGHT_OFFSET))(this);
		}

		::System::UInt32 get_UnlockSubMissionID()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_FIGHTFESTPHASE_GET_UNLOCKSUBMISSIONID_OFFSET))(this);
		}

		::RPG::Client::TextID get_BoardTitle()
		{
			return ((::RPG::Client::TextID(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_FIGHTFESTPHASE_GET_BOARDTITLE_OFFSET))(this);
		}

		::RPG::Client::TextID get_PhaseTitle()
		{
			return ((::RPG::Client::TextID(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_FIGHTFESTPHASE_GET_PHASETITLE_OFFSET))(this);
		}

		::RPG::Client::TextID get_TargetTips()
		{
			return ((::RPG::Client::TextID(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_FIGHTFESTPHASE_GET_TARGETTIPS_OFFSET))(this);
		}

		::System::String* get_IconPath1()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_FIGHTFESTPHASE_GET_ICONPATH1_OFFSET))(this);
		}

		::System::String* get_MiniIconPath1()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_FIGHTFESTPHASE_GET_MINIICONPATH1_OFFSET))(this);
		}

		::System::String* get_IconPath2()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_FIGHTFESTPHASE_GET_ICONPATH2_OFFSET))(this);
		}

		::Il2CppArray<::System::UInt32>* get_PhaseTutorialParams()
		{
			return ((::Il2CppArray<::System::UInt32>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_FIGHTFESTPHASE_GET_PHASETUTORIALPARAMS_OFFSET))(this);
		}

		::System::String* get_BoardTexturePath()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_FIGHTFESTPHASE_GET_BOARDTEXTUREPATH_OFFSET))(this);
		}

		::System::String* get_LukaAnimTrigger()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_FIGHTFESTPHASE_GET_LUKAANIMTRIGGER_OFFSET))(this);
		}

	};
}
