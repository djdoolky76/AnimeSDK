#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/NHHJAONHDDG.h"
#include "unitysdk/RPG/Client/LittleGame/Match3/MatchThreeOpponentLiveState.h"
#include "unitysdk/RPG/Client/LittleGame/Match3/OpponentRole.h"
#include "unitysdk/System/Object.h"
namespace RPG::Client { class MatchThreeGameOpponent; }
namespace RPG::GameCore::Match3 { class FightConfig; }
namespace RPG::GameCore::Match3 { class Match3Config; }

#define IFALNPKFEOM_LJFFILMDLLL_OFFSET UNITYSDK_OFFSET(0x15F08640)
#define IFALNPKFEOM_OKHJCHBPDKI_OFFSET UNITYSDK_OFFSET(0x15F08700)

inline static constexpr unsigned int IFALNPKFEOM_TypeDefinitionIndex = 76561;

	class IFALNPKFEOM : public ::System::Object
	{
	public:
		static ::RPG::GameCore::Match3::FightConfig** StaticGet_CEPDAKAHPEJ()
		{
			return (::RPG::GameCore::Match3::FightConfig**)UnitySDK::FromName("", "IFALNPKFEOM")->GetStaticField(0x1D8D0);
		}

		static ::RPG::GameCore::Match3::Match3Config** StaticGet_ENNPOOOINPG()
		{
			return (::RPG::GameCore::Match3::Match3Config**)UnitySDK::FromName("", "IFALNPKFEOM")->GetStaticField(0x1D8D8);
		}

		static ::System::Boolean* StaticGet_ALJBHFLECLB()
		{
			return (::System::Boolean*)UnitySDK::FromName("", "IFALNPKFEOM")->GetStaticField(0x6BB0);
		}

		// static const ::System::String* JBGNAPEPFIC; // 0x0
		// static const ::System::String* KDDKDKKNKIK; // 0x0
		// static const ::System::String* EOGEGGOLFME; // 0x0
		// static const ::System::String* FOIICGDMFKK; // 0x0
		// static const ::System::Object BGOOADHGAKE; // 0x0
		static ::RPG::Client::LittleGame::Match3::MatchThreeOpponentLiveState LJFFILMDLLL(::NHHJAONHDDG a1)
		{
			return ((::RPG::Client::LittleGame::Match3::MatchThreeOpponentLiveState(*)(::NHHJAONHDDG))((::PBYTE)hIl2Cpp + IFALNPKFEOM_LJFFILMDLLL_OFFSET))(a1);
		}

		static ::RPG::Client::MatchThreeGameOpponent* OKHJCHBPDKI(::RPG::Client::LittleGame::Match3::OpponentRole a1)
		{
			return ((::RPG::Client::MatchThreeGameOpponent*(*)(::RPG::Client::LittleGame::Match3::OpponentRole))((::PBYTE)hIl2Cpp + IFALNPKFEOM_OKHJCHBPDKI_OFFSET))(a1);
		}

	};
