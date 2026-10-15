#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
namespace RPG::Client::LittleGame::FiveDim::MiniGameNotify { class ScoreUpdate; }

#define RPG_CLIENT_LITTLEGAME_FIVEDIM_MINIGAMENOTIFY_SCOREUPDATE_CCTOR_OFFSET UNITYSDK_OFFSET(0xD44D5B0)
#define RPG_CLIENT_LITTLEGAME_FIVEDIM_MINIGAMENOTIFY_SCOREUPDATE_CTOR_OFFSET UNITYSDK_OFFSET(0xD44D5A0)

namespace RPG::Client::LittleGame::FiveDim::MiniGameNotify
{
	inline static constexpr unsigned int ScoreUpdate_TypeDefinitionIndex = 77244;

	class ScoreUpdate : public ::System::Object
	{
	public:
		::System::Int32 CoinScore; // 0x10
		::System::Single ScoreMultiplier; // 0x14
		static ::RPG::Client::LittleGame::FiveDim::MiniGameNotify::ScoreUpdate** StaticGet_Zero()
		{
			return (::RPG::Client::LittleGame::FiveDim::MiniGameNotify::ScoreUpdate**)UnitySDK::FromName("RPG.Client.LittleGame.FiveDim.MiniGameNotify", "ScoreUpdate")->GetStaticField(0xF9D0);
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_LITTLEGAME_FIVEDIM_MINIGAMENOTIFY_SCOREUPDATE_CTOR_OFFSET))(this);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + RPG_CLIENT_LITTLEGAME_FIVEDIM_MINIGAMENOTIFY_SCOREUPDATE_CCTOR_OFFSET))();
		}

	};
}
