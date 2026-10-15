#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/Challenge/Tierce/ChallengeTierceAttackDamageType.h"
#include "unitysdk/RPG/GameCore/AttackDamageType.h"
#include "unitysdk/System/Object.h"

#define EILFBKOMEAG_FNCNMCEOALF_1_OFFSET UNITYSDK_OFFSET(0x154CF9F0)
#define EILFBKOMEAG_FNCNMCEOALF_OFFSET UNITYSDK_OFFSET(0x154CF980)

inline static constexpr unsigned int EILFBKOMEAG_TypeDefinitionIndex = 81438;

	class EILFBKOMEAG : public ::System::Object
	{
	public:
		static ::RPG::GameCore::AttackDamageType FNCNMCEOALF(::RPG::Client::Challenge::Tierce::ChallengeTierceAttackDamageType a1)
		{
			return ((::RPG::GameCore::AttackDamageType(*)(::RPG::Client::Challenge::Tierce::ChallengeTierceAttackDamageType))((::PBYTE)hIl2Cpp + EILFBKOMEAG_FNCNMCEOALF_OFFSET))(a1);
		}

		static ::RPG::Client::Challenge::Tierce::ChallengeTierceAttackDamageType FNCNMCEOALF_1(::RPG::GameCore::AttackDamageType a1)
		{
			return ((::RPG::Client::Challenge::Tierce::ChallengeTierceAttackDamageType(*)(::RPG::GameCore::AttackDamageType))((::PBYTE)hIl2Cpp + EILFBKOMEAG_FNCNMCEOALF_1_OFFSET))(a1);
		}

	};
