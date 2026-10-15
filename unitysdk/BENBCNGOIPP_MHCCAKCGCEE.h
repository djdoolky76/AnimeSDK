#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/FixVec2.h"
#include "unitysdk/System/Object.h"
namespace RPG::GameCore { class GameEntity; }

#define BENBCNGOIPP_MHCCAKCGCEE_CTOR_OFFSET UNITYSDK_OFFSET(0xB159280)

inline static constexpr unsigned int BENBCNGOIPP_MHCCAKCGCEE_TypeDefinitionIndex = 54303;

	class BENBCNGOIPP_MHCCAKCGCEE : public ::System::Object
	{
	public:
		::RPG::GameCore::GameEntity* BMGCODOIPNJ; // 0x10
		::RPG::GameCore::FixVec2 PECPBEOHOJC; // 0x18
		::System::Void _ctor(::RPG::GameCore::FixVec2 a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::FixVec2))((::PBYTE)hIl2Cpp + BENBCNGOIPP_MHCCAKCGCEE_CTOR_OFFSET))(this, a1);
		}

	};
