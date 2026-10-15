#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/FJPMJPEKLJL.h"
#include "unitysdk/RPG/GameCore/PetMarbleLevelMode.h"
#include "unitysdk/System/Object.h"
namespace RPG::Client { class AddFriendData; }
namespace RPG::Client { class PetMarbleSealBattleStat; }
namespace RPG::Client::ActivityMarble { class MarbleMatchContext; }
namespace RPG::Client::PetMarble { class PetMarblePlayer; }
namespace RPG::Client::PetMarble::Level { class IPetMarbleLevelMode; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define RPG_CLIENT_PETMARBLEBATTLERESULT_CTOR_OFFSET UNITYSDK_OFFSET(0xDAE28E0)
#define RPG_CLIENT_PETMARBLEBATTLERESULT_GET_CURSTARCOUNT_OFFSET UNITYSDK_OFFSET(0xDAE2660)
#define RPG_CLIENT_PETMARBLEBATTLERESULT_GET_GAMEMODE_OFFSET UNITYSDK_OFFSET(0xDAE2610)
#define RPG_CLIENT_PETMARBLEBATTLERESULT_GET_MATCHCONTEXT_OFFSET UNITYSDK_OFFSET(0xDAE2570)
#define RPG_CLIENT_PETMARBLEBATTLERESULT_GET_MAXSTARCOUNT_OFFSET UNITYSDK_OFFSET(0xDAE2880)
#define RPG_CLIENT_PETMARBLEBATTLERESULT_GET__LEVELMODEDATA_OFFSET UNITYSDK_OFFSET(0xDAE26E0)

namespace RPG::Client
{
	inline static constexpr unsigned int PetMarbleBattleResult_TypeDefinitionIndex = 65818;

	class PetMarbleBattleResult : public ::System::Object
	{
	public:
		::RPG::Client::PetMarble::PetMarblePlayer* SelfPlayer; // 0x10
		::System::Collections::Generic::List_1<::RPG::Client::PetMarbleSealBattleStat*>* SealStats; // 0x18
		::RPG::Client::PetMarble::PetMarblePlayer* CoopPlayer; // 0x20
		::RPG::Client::AddFriendData* AddFriendData; // 0x28
		::RPG::GameCore::PetMarbleLevelMode LevelMode; // 0x30
		::System::Boolean IsWin; // 0x34
		::System::Byte _padding0[0x3];
		::System::UInt32 LastStarCount; // 0x38
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PETMARBLEBATTLERESULT_CTOR_OFFSET))(this);
		}

		::RPG::Client::ActivityMarble::MarbleMatchContext* get_MatchContext()
		{
			return ((::RPG::Client::ActivityMarble::MarbleMatchContext*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PETMARBLEBATTLERESULT_GET_MATCHCONTEXT_OFFSET))(this);
		}

		::FJPMJPEKLJL get_GameMode()
		{
			return ((::FJPMJPEKLJL(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PETMARBLEBATTLERESULT_GET_GAMEMODE_OFFSET))(this);
		}

		::System::UInt32 get_CurStarCount()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PETMARBLEBATTLERESULT_GET_CURSTARCOUNT_OFFSET))(this);
		}

		::System::UInt32 get_MaxStarCount()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PETMARBLEBATTLERESULT_GET_MAXSTARCOUNT_OFFSET))(this);
		}

		::RPG::Client::PetMarble::Level::IPetMarbleLevelMode* get__LevelModeData()
		{
			return ((::RPG::Client::PetMarble::Level::IPetMarbleLevelMode*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PETMARBLEBATTLERESULT_GET__LEVELMODEDATA_OFFSET))(this);
		}

	};
}
