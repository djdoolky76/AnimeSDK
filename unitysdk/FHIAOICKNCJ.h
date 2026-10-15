#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
namespace RPG::GameCore { class AIMonsterIDSelector; }

#define FHIAOICKNCJ_APJCEBADLND_OFFSET UNITYSDK_OFFSET(0x157747D0)

inline static constexpr unsigned int FHIAOICKNCJ_TypeDefinitionIndex = 54342;

	class FHIAOICKNCJ : public ::System::Object
	{
	public:
		static ::System::Boolean APJCEBADLND(::RPG::GameCore::AIMonsterIDSelector* a1, ::System::UInt32 a2)
		{
			return ((::System::Boolean(*)(::RPG::GameCore::AIMonsterIDSelector*, ::System::UInt32))((::PBYTE)hIl2Cpp + FHIAOICKNCJ_APJCEBADLND_OFFSET))(a1, a2);
		}

	};
