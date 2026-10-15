#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/TextID.h"
#include "unitysdk/RPG/GameCore/SkillTargetCandidateState.h"
namespace RPG::GameCore { class GameEntity; }
namespace System { class String; }

inline static constexpr unsigned int FOPPJDFMDGH_TypeDefinitionIndex = 57690;

	struct alignas(8) FOPPJDFMDGH
	{
		::RPG::GameCore::GameEntity* ECCMPMOGIGN; // 0x10
		::RPG::GameCore::SkillTargetCandidateState MEPFOEEGBEA; // 0x18
		::System::Byte _padding0[0x4];
		::RPG::Client::TextID LHALPAOODDJ; // 0x20
		::System::String* HLNDDMBAKKN; // 0x30
	};
