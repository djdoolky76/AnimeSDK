#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class IIIDOKNGBNL;
namespace RPG::GameCore { class TurnBasedModifierInstance; }

#define PHCKAIOBECD_MHKLAHPGHAE_OFFSET UNITYSDK_OFFSET(0xC231B60)

inline static constexpr unsigned int PHCKAIOBECD_TypeDefinitionIndex = 54440;

	class PHCKAIOBECD : public ::System::Object
	{
	public:
		static ::IIIDOKNGBNL* MHKLAHPGHAE(::RPG::GameCore::TurnBasedModifierInstance* a1)
		{
			return ((::IIIDOKNGBNL*(*)(::RPG::GameCore::TurnBasedModifierInstance*))((::PBYTE)hIl2Cpp + PHCKAIOBECD_MHKLAHPGHAE_OFFSET))(a1);
		}

	};
