#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
namespace RPG::GameCore { class GameEntity; }

#define BOJOAPFAGPI_MEGNJCHOGEE_OFFSET UNITYSDK_OFFSET(0xC192C70)

inline static constexpr unsigned int BOJOAPFAGPI_TypeDefinitionIndex = 57564;

	class BOJOAPFAGPI : public ::System::Object
	{
	public:
		static ::System::Void MEGNJCHOGEE(::RPG::GameCore::GameEntity* a1, ::RPG::GameCore::GameEntity* a2)
		{
			return ((::System::Void(*)(::RPG::GameCore::GameEntity*, ::RPG::GameCore::GameEntity*))((::PBYTE)hIl2Cpp + BOJOAPFAGPI_MEGNJCHOGEE_OFFSET))(a1, a2);
		}

	};
