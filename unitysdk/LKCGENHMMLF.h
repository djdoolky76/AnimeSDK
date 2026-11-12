#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class FEFFMCCAOCO;
namespace RPG::GameCore { class BaseLittleGameAbilityEffectConfig; }

#define LKCGENHMMLF_BPLPBPMEODA_OFFSET UNITYSDK_OFFSET(0x1D8BE4D0)

inline static constexpr unsigned int LKCGENHMMLF_TypeDefinitionIndex = 38065;

	class LKCGENHMMLF : public ::System::Object
	{
	public:
		static ::FEFFMCCAOCO* BPLPBPMEODA(::RPG::GameCore::BaseLittleGameAbilityEffectConfig* a1)
		{
			return ((::FEFFMCCAOCO*(*)(::RPG::GameCore::BaseLittleGameAbilityEffectConfig*))((::PBYTE)hIl2Cpp + LKCGENHMMLF_BPLPBPMEODA_OFFSET))(a1);
		}

	};
