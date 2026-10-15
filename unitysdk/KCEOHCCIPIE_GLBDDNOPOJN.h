#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
namespace RPG::Client { class BattleSilverWolf999CustomUIData; }
namespace RPG::GameCore { class GameEntity; }

#define KCEOHCCIPIE_GLBDDNOPOJN_CTOR_OFFSET UNITYSDK_OFFSET(0xB334480)

inline static constexpr unsigned int KCEOHCCIPIE_GLBDDNOPOJN_TypeDefinitionIndex = 71942;

	class KCEOHCCIPIE_GLBDDNOPOJN : public ::System::Object
	{
	public:
		::RPG::Client::BattleSilverWolf999CustomUIData* FJCAKOIDONG; // 0x10
		::RPG::GameCore::GameEntity* GGKGFABFGFE; // 0x18
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + KCEOHCCIPIE_GLBDDNOPOJN_CTOR_OFFSET))(this);
		}

	};
