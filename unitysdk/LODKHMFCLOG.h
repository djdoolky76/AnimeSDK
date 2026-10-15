#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/ELookAtTargetSource.h"
#include "unitysdk/UnityEngine/Vector3.h"
namespace RPG::GameCore { class GameEntity; }
namespace System { class String; }

#define LODKHMFCLOG_CTOR_OFFSET UNITYSDK_OFFSET(0x1B470)

inline static constexpr unsigned int LODKHMFCLOG_TypeDefinitionIndex = 57305;

	struct alignas(8) LODKHMFCLOG
	{
		::RPG::GameCore::GameEntity* BBMMBAKDJBC; // 0x10
		::UnityEngine::Vector3 PGJJCGGBCKK; // 0x18
		::RPG::GameCore::ELookAtTargetSource PAECPMJCOGB; // 0x24
		::System::String* IJJJEKGCLBD; // 0x28
		::System::Void _ctor(::RPG::GameCore::GameEntity* a1, ::UnityEngine::Vector3 a2, ::RPG::GameCore::ELookAtTargetSource a3, ::System::String* a4)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::GameEntity*, ::UnityEngine::Vector3, ::RPG::GameCore::ELookAtTargetSource, ::System::String*))((::PBYTE)hIl2Cpp + LODKHMFCLOG_CTOR_OFFSET))(this, a1, a2, a3, a4);
		}

	};
