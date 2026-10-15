#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/CakeRaceAbilityName.h"
#include "unitysdk/System/Object.h"
class KIGLHBEPNOG;

#define DBBPHCIBIBI___C__DISPLAYCLASS5_0_CTOR_OFFSET UNITYSDK_OFFSET(0x1C5AABB0)
#define DBBPHCIBIBI___C__DISPLAYCLASS5_0__GETCAKERACECORECYCLEABILITY_B__0_OFFSET UNITYSDK_OFFSET(0x1C5AD4D0)

inline static constexpr unsigned int DBBPHCIBIBI___c__DisplayClass5_0_TypeDefinitionIndex = 37286;

	class DBBPHCIBIBI___c__DisplayClass5_0 : public ::System::Object
	{
	public:
		::RPG::GameCore::CakeRaceAbilityName abilityType; // 0x10
		::System::Int32 entityRuntimeID; // 0x14
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + DBBPHCIBIBI___C__DISPLAYCLASS5_0_CTOR_OFFSET))(this);
		}

		::System::Boolean _GetCakeRaceCoreCycleAbility_b__0(::KIGLHBEPNOG* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::KIGLHBEPNOG*))((::PBYTE)hIl2Cpp + DBBPHCIBIBI___C__DISPLAYCLASS5_0__GETCAKERACECORECYCLEABILITY_B__0_OFFSET))(this, a1);
		}

	};
