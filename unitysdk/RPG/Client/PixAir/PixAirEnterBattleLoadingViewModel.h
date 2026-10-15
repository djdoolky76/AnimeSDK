#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Sofa/BaseViewModel.h"
class AKBKLEFNIOG;
class HGIPADIDNFL;
class HGJKHDLOGEP;
class LCMFAFCLDOA;
namespace RPG::Client { class PlayerData; }
namespace RPG::Client::PixAir { class PixAirEnterBattleLoadingViewModel; }
namespace System { class String; }

#define RPG_CLIENT_PIXAIR_PIXAIRENTERBATTLELOADINGVIEWMODEL_CREATE_OFFSET UNITYSDK_OFFSET(0xDB2E030)
#define RPG_CLIENT_PIXAIR_PIXAIRENTERBATTLELOADINGVIEWMODEL_CTOR_OFFSET UNITYSDK_OFFSET(0xDB2E0F0)
#define RPG_CLIENT_PIXAIR_PIXAIRENTERBATTLELOADINGVIEWMODEL_GET_AREAID_OFFSET UNITYSDK_OFFSET(0xDB2E420)
#define RPG_CLIENT_PIXAIR_PIXAIRENTERBATTLELOADINGVIEWMODEL_GET_ENEMYHEADICONPATH_OFFSET UNITYSDK_OFFSET(0xDB2E270)
#define RPG_CLIENT_PIXAIR_PIXAIRENTERBATTLELOADINGVIEWMODEL_GET_ENEMYNAME_OFFSET UNITYSDK_OFFSET(0xDB2E190)
#define RPG_CLIENT_PIXAIR_PIXAIRENTERBATTLELOADINGVIEWMODEL_GET_ENEMYTALKCONTENT_OFFSET UNITYSDK_OFFSET(0xDB2E390)
#define RPG_CLIENT_PIXAIR_PIXAIRENTERBATTLELOADINGVIEWMODEL_GET_PLAYERNAME_OFFSET UNITYSDK_OFFSET(0xDB2E120)
#define RPG_CLIENT_PIXAIR_PIXAIRENTERBATTLELOADINGVIEWMODEL_GET_PLAYERTALKCONTENT_OFFSET UNITYSDK_OFFSET(0xDB2E300)
#define RPG_CLIENT_PIXAIR_PIXAIRENTERBATTLELOADINGVIEWMODEL_GET__ENEMYROUNDINFODATA_OFFSET UNITYSDK_OFFSET(0xDB2E220)

namespace RPG::Client::PixAir
{
	inline static constexpr unsigned int PixAirEnterBattleLoadingViewModel_TypeDefinitionIndex = 79260;

	class PixAirEnterBattleLoadingViewModel : public ::Sofa::BaseViewModel
	{
	public:
		::RPG::Client::PlayerData* _PlayerInfoData; // 0x20
		::LCMFAFCLDOA* _BattleService; // 0x28
		::HGIPADIDNFL* _GameBattleRoundInfo; // 0x30
		::HGJKHDLOGEP* _GameStageInfo; // 0x38
		::System::String* PlayerIconPath; // 0x40
		::System::Boolean IsWaitEnterBattle; // 0x48
		::System::Byte _padding0[0x3];
		::System::Single MinWaitTime; // 0x4C
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PIXAIR_PIXAIRENTERBATTLELOADINGVIEWMODEL_CTOR_OFFSET))(this);
		}

		static ::RPG::Client::PixAir::PixAirEnterBattleLoadingViewModel* Create(::RPG::Client::PlayerData* a1, ::HGIPADIDNFL* a2, ::HGJKHDLOGEP* a3)
		{
			return ((::RPG::Client::PixAir::PixAirEnterBattleLoadingViewModel*(*)(::RPG::Client::PlayerData*, ::HGIPADIDNFL*, ::HGJKHDLOGEP*))((::PBYTE)hIl2Cpp + RPG_CLIENT_PIXAIR_PIXAIRENTERBATTLELOADINGVIEWMODEL_CREATE_OFFSET))(a1, a2, a3);
		}

		::System::String* get_PlayerName()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PIXAIR_PIXAIRENTERBATTLELOADINGVIEWMODEL_GET_PLAYERNAME_OFFSET))(this);
		}

		::System::String* get_EnemyName()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PIXAIR_PIXAIRENTERBATTLELOADINGVIEWMODEL_GET_ENEMYNAME_OFFSET))(this);
		}

		::System::String* get_EnemyHeadIconPath()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PIXAIR_PIXAIRENTERBATTLELOADINGVIEWMODEL_GET_ENEMYHEADICONPATH_OFFSET))(this);
		}

		::System::String* get_PlayerTalkContent()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PIXAIR_PIXAIRENTERBATTLELOADINGVIEWMODEL_GET_PLAYERTALKCONTENT_OFFSET))(this);
		}

		::System::String* get_EnemyTalkContent()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PIXAIR_PIXAIRENTERBATTLELOADINGVIEWMODEL_GET_ENEMYTALKCONTENT_OFFSET))(this);
		}

		::System::UInt32 get_AreaID()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PIXAIR_PIXAIRENTERBATTLELOADINGVIEWMODEL_GET_AREAID_OFFSET))(this);
		}

		::AKBKLEFNIOG* get__EnemyRoundInfoData()
		{
			return ((::AKBKLEFNIOG*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PIXAIR_PIXAIRENTERBATTLELOADINGVIEWMODEL_GET__ENEMYROUNDINFODATA_OFFSET))(this);
		}

	};
}
