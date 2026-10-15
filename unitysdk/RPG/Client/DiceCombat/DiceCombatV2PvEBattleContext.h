#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/DiceCombat/DiceCombatV2BattleContext.h"
class AFAAPIGOAEN;
class CJCHKDLALDN;
class FENBIHEDDPB;
class JJEILFJMLON;
namespace RPG::Client { class BaseGameFlow; }
namespace RPG::Client::DiceCombat { class DiceCombatV2PvEBattleContext; }
namespace RPG::Client::DiceCombat { class DiceCombatV2PvEStage; }
namespace RPG::Client::DiceCombat { class IDiceCombatAvatarInfo; }
namespace RPG::Client::Promises { class IPromise; }

#define RPG_CLIENT_DICECOMBAT_DICECOMBATV2PVEBATTLECONTEXT_CREATE_OFFSET UNITYSDK_OFFSET(0xCC9F8B0)
#define RPG_CLIENT_DICECOMBAT_DICECOMBATV2PVEBATTLECONTEXT_CTOR_OFFSET UNITYSDK_OFFSET(0xCC9F9C0)
#define RPG_CLIENT_DICECOMBAT_DICECOMBATV2PVEBATTLECONTEXT_ENTERBATTLE_OFFSET UNITYSDK_OFFSET(0xCC9FA60)
#define RPG_CLIENT_DICECOMBAT_DICECOMBATV2PVEBATTLECONTEXT_EXITBATTLE_OFFSET UNITYSDK_OFFSET(0xCC9FDE0)
#define RPG_CLIENT_DICECOMBAT_DICECOMBATV2PVEBATTLECONTEXT__GENERATEBATTLEINITPARAMS_OFFSET UNITYSDK_OFFSET(0xCC9FCB0)
#define RPG_CLIENT_DICECOMBAT_DICECOMBATV2PVEBATTLECONTEXT__GENERATEPLAYER_OFFSET UNITYSDK_OFFSET(0xCCA07F0)
#define RPG_CLIENT_DICECOMBAT_DICECOMBATV2PVEBATTLECONTEXT__GENERATESTARTINFO_OFFSET UNITYSDK_OFFSET(0xCCA0730)
#define RPG_CLIENT_DICECOMBAT_DICECOMBATV2PVEBATTLECONTEXT__GENERATETEAMMATE_OFFSET UNITYSDK_OFFSET(0xCCA0DC0)
#define RPG_CLIENT_DICECOMBAT_DICECOMBATV2PVEBATTLECONTEXT__ONFINISHPVEBATTLE_OFFSET UNITYSDK_OFFSET(0xCC9FE70)
#define RPG_CLIENT_DICECOMBAT_DICECOMBATV2PVEBATTLECONTEXT__SHOULDDISABLETACTICSSYSTEM_OFFSET UNITYSDK_OFFSET(0xCCA1080)

namespace RPG::Client::DiceCombat
{
	inline static constexpr unsigned int DiceCombatV2PvEBattleContext_TypeDefinitionIndex = 76168;

	class DiceCombatV2PvEBattleContext : public ::RPG::Client::DiceCombat::DiceCombatV2BattleContext
	{
	public:
		::System::Void _ctor(::RPG::Client::BaseGameFlow* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::BaseGameFlow*))((::PBYTE)hIl2Cpp + RPG_CLIENT_DICECOMBAT_DICECOMBATV2PVEBATTLECONTEXT_CTOR_OFFSET))(this, a1);
		}

		static ::RPG::Client::DiceCombat::DiceCombatV2PvEBattleContext* Create(::RPG::Client::BaseGameFlow* a1)
		{
			return ((::RPG::Client::DiceCombat::DiceCombatV2PvEBattleContext*(*)(::RPG::Client::BaseGameFlow*))((::PBYTE)hIl2Cpp + RPG_CLIENT_DICECOMBAT_DICECOMBATV2PVEBATTLECONTEXT_CREATE_OFFSET))(a1);
		}

		::RPG::Client::Promises::IPromise* EnterBattle(::RPG::Client::DiceCombat::DiceCombatV2PvEStage* a1, ::RPG::Client::DiceCombat::IDiceCombatAvatarInfo* a2)
		{
			return ((::RPG::Client::Promises::IPromise*(*)(::PVOID, ::RPG::Client::DiceCombat::DiceCombatV2PvEStage*, ::RPG::Client::DiceCombat::IDiceCombatAvatarInfo*))((::PBYTE)hIl2Cpp + RPG_CLIENT_DICECOMBAT_DICECOMBATV2PVEBATTLECONTEXT_ENTERBATTLE_OFFSET))(this, a1, a2);
		}

		::System::Void ExitBattle()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_DICECOMBAT_DICECOMBATV2PVEBATTLECONTEXT_EXITBATTLE_OFFSET))(this);
		}

		::System::Void _OnFinishPvEBattle(::AFAAPIGOAEN* a1)
		{
			return ((::System::Void(*)(::PVOID, ::AFAAPIGOAEN*))((::PBYTE)hIl2Cpp + RPG_CLIENT_DICECOMBAT_DICECOMBATV2PVEBATTLECONTEXT__ONFINISHPVEBATTLE_OFFSET))(this, a1);
		}

		::FENBIHEDDPB* _GenerateBattleInitParams(::RPG::Client::DiceCombat::DiceCombatV2PvEStage* a1, ::RPG::Client::DiceCombat::IDiceCombatAvatarInfo* a2)
		{
			return ((::FENBIHEDDPB*(*)(::PVOID, ::RPG::Client::DiceCombat::DiceCombatV2PvEStage*, ::RPG::Client::DiceCombat::IDiceCombatAvatarInfo*))((::PBYTE)hIl2Cpp + RPG_CLIENT_DICECOMBAT_DICECOMBATV2PVEBATTLECONTEXT__GENERATEBATTLEINITPARAMS_OFFSET))(this, a1, a2);
		}

		::JJEILFJMLON* _GenerateStartInfo(::RPG::Client::DiceCombat::DiceCombatV2PvEStage* a1, ::RPG::Client::DiceCombat::IDiceCombatAvatarInfo* a2)
		{
			return ((::JJEILFJMLON*(*)(::PVOID, ::RPG::Client::DiceCombat::DiceCombatV2PvEStage*, ::RPG::Client::DiceCombat::IDiceCombatAvatarInfo*))((::PBYTE)hIl2Cpp + RPG_CLIENT_DICECOMBAT_DICECOMBATV2PVEBATTLECONTEXT__GENERATESTARTINFO_OFFSET))(this, a1, a2);
		}

		::System::Boolean _ShouldDisableTacticsSystem(::RPG::Client::DiceCombat::DiceCombatV2PvEStage* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::RPG::Client::DiceCombat::DiceCombatV2PvEStage*))((::PBYTE)hIl2Cpp + RPG_CLIENT_DICECOMBAT_DICECOMBATV2PVEBATTLECONTEXT__SHOULDDISABLETACTICSSYSTEM_OFFSET))(this, a1);
		}

		::CJCHKDLALDN* _GeneratePlayer(::RPG::Client::DiceCombat::IDiceCombatAvatarInfo* a1)
		{
			return ((::CJCHKDLALDN*(*)(::PVOID, ::RPG::Client::DiceCombat::IDiceCombatAvatarInfo*))((::PBYTE)hIl2Cpp + RPG_CLIENT_DICECOMBAT_DICECOMBATV2PVEBATTLECONTEXT__GENERATEPLAYER_OFFSET))(this, a1);
		}

		::CJCHKDLALDN* _GenerateTeammate(::RPG::Client::DiceCombat::DiceCombatV2PvEStage* a1)
		{
			return ((::CJCHKDLALDN*(*)(::PVOID, ::RPG::Client::DiceCombat::DiceCombatV2PvEStage*))((::PBYTE)hIl2Cpp + RPG_CLIENT_DICECOMBAT_DICECOMBATV2PVEBATTLECONTEXT__GENERATETEAMMATE_OFFSET))(this, a1);
		}

	};
}
