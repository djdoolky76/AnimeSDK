#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
namespace RPG::Client { class BaseShaderPropertyTransition; }
namespace RPG::Client { class CharacterShaderPropertyTransition; }
namespace RPG::GameCore { class GameEntity; }

#define NPCEHHGJBNH_FHMDABGDGMM_OFFSET UNITYSDK_OFFSET(0xBCF2D00)
#define NPCEHHGJBNH_NMGGBILIIMP_OFFSET UNITYSDK_OFFSET(0xBCF2DB0)

inline static constexpr unsigned int NPCEHHGJBNH_TypeDefinitionIndex = 68854;

	class NPCEHHGJBNH : public ::System::Object
	{
	public:
		static ::RPG::Client::BaseShaderPropertyTransition* FHMDABGDGMM(::RPG::GameCore::GameEntity* a1)
		{
			return ((::RPG::Client::BaseShaderPropertyTransition*(*)(::RPG::GameCore::GameEntity*))((::PBYTE)hIl2Cpp + NPCEHHGJBNH_FHMDABGDGMM_OFFSET))(a1);
		}

		static ::RPG::Client::CharacterShaderPropertyTransition* NMGGBILIIMP(::RPG::GameCore::GameEntity* a1)
		{
			return ((::RPG::Client::CharacterShaderPropertyTransition*(*)(::RPG::GameCore::GameEntity*))((::PBYTE)hIl2Cpp + NPCEHHGJBNH_NMGGBILIIMP_OFFSET))(a1);
		}

	};
