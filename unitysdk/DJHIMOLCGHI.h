#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/FCILKBLLCFJ.h"
#include "unitysdk/RPG/GameCore/NPCBodySize.h"
namespace RPG::GameCore { class GameEntity; }
namespace RPGTools::Timeline { class CharacterStoryMoveSequenceData; }
namespace UnityEngine { class Animator; }

#define DJHIMOLCGHI_CTOR_OFFSET UNITYSDK_OFFSET(0xF2302A0)
#define DJHIMOLCGHI_KPJGDHLENIP_OFFSET UNITYSDK_OFFSET(0xF2302C0)

inline static constexpr unsigned int DJHIMOLCGHI_TypeDefinitionIndex = 53619;

	class DJHIMOLCGHI : public ::FCILKBLLCFJ
	{
	public:
		::RPG::GameCore::NPCBodySize GHCIJGJGFFL; // 0x50
		::System::Void _ctor(::RPG::GameCore::NPCBodySize a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::NPCBodySize))((::PBYTE)hIl2Cpp + DJHIMOLCGHI_CTOR_OFFSET))(this, a1);
		}

		::System::Void KPJGDHLENIP(::RPGTools::Timeline::CharacterStoryMoveSequenceData* a1, ::RPG::GameCore::GameEntity* a2, ::UnityEngine::Animator* a3)
		{
			return ((::System::Void(*)(::PVOID, ::RPGTools::Timeline::CharacterStoryMoveSequenceData*, ::RPG::GameCore::GameEntity*, ::UnityEngine::Animator*))((::PBYTE)hIl2Cpp + DJHIMOLCGHI_KPJGDHLENIP_OFFSET))(this, a1, a2, a3);
		}

	};
