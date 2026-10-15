#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/RPG/GameCore/FixPoint.h"
namespace RPG::GameCore { class AITakenDamageSelector; }
namespace RPG::GameCore { class GameEntity; }
namespace RPG::GameCore { class TaskContext; }

#define CLICAJIEGII_HEANFLCGINL_OFFSET UNITYSDK_OFFSET(0xD78BDD0)

inline static constexpr unsigned int CLICAJIEGII_TypeDefinitionIndex = 54341;

	class CLICAJIEGII : public ::System::Object
	{
	public:
		static ::RPG::GameCore::FixPoint HEANFLCGINL(::RPG::GameCore::AITakenDamageSelector* a1, ::RPG::GameCore::TaskContext* a2, ::RPG::GameCore::GameEntity* a3)
		{
			return ((::RPG::GameCore::FixPoint(*)(::RPG::GameCore::AITakenDamageSelector*, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::GameEntity*))((::PBYTE)hIl2Cpp + CLICAJIEGII_HEANFLCGINL_OFFSET))(a1, a2, a3);
		}

	};
