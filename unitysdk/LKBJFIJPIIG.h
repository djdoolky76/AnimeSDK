#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/FCILKBLLCFJ.h"
#include "unitysdk/RPG/GameCore/BodySize.h"
namespace RPG::GameCore { class GameEntity; }
namespace RPGTools::Timeline { class CharacterStoryMoveSequenceData; }
namespace UnityEngine { class Animator; }

#define LKBJFIJPIIG_CTOR_OFFSET UNITYSDK_OFFSET(0xB721DB0)
#define LKBJFIJPIIG_KPJGDHLENIP_OFFSET UNITYSDK_OFFSET(0xB721DD0)

inline static constexpr unsigned int LKBJFIJPIIG_TypeDefinitionIndex = 53618;

	class LKBJFIJPIIG : public ::FCILKBLLCFJ
	{
	public:
		::RPG::GameCore::BodySize GHCIJGJGFFL; // 0x50
		::System::Void _ctor(::RPG::GameCore::BodySize a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::BodySize))((::PBYTE)hIl2Cpp + LKBJFIJPIIG_CTOR_OFFSET))(this, a1);
		}

		::System::Void KPJGDHLENIP(::RPGTools::Timeline::CharacterStoryMoveSequenceData* a1, ::RPG::GameCore::GameEntity* a2, ::UnityEngine::Animator* a3)
		{
			return ((::System::Void(*)(::PVOID, ::RPGTools::Timeline::CharacterStoryMoveSequenceData*, ::RPG::GameCore::GameEntity*, ::UnityEngine::Animator*))((::PBYTE)hIl2Cpp + LKBJFIJPIIG_KPJGDHLENIP_OFFSET))(this, a1, a2, a3);
		}

	};
