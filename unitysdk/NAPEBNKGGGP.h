#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/TextID.h"
#include "unitysdk/RPG/GameCore/FixPoint.h"
#include "unitysdk/RPG/GameCore/StageInvasionMonsterUIStyle.h"
namespace RPG::GameCore { class GameEntity; }

inline static constexpr unsigned int NAPEBNKGGGP_TypeDefinitionIndex = 56311;

	struct alignas(8) NAPEBNKGGGP
	{
		::RPG::GameCore::GameEntity* BBMMBAKDJBC; // 0x10
		::Il2CppArray<::RPG::GameCore::FixPoint>* PBLPLDJKPEI; // 0x18
		::RPG::GameCore::StageInvasionMonsterUIStyle PPDLJLBALGE; // 0x20
		::System::Byte _padding0[0x4];
		::RPG::Client::TextID DDPBJAPNLAL; // 0x28
		::RPG::Client::TextID GGOKKGGEJAH; // 0x38
	};
