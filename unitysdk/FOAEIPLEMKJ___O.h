#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/Challenge/Tierce/ChallengeTierceAttackDamageType.h"
#include "unitysdk/RPG/GameCore/AttackDamageType.h"
#include "unitysdk/System/Object.h"
namespace System { template <typename T1, typename T2> class Func_2; }

	class FOAEIPLEMKJ___O : public ::System::Object
	{
	public:
		static ::System::Func_2<::RPG::GameCore::AttackDamageType, ::RPG::Client::Challenge::Tierce::ChallengeTierceAttackDamageType>** StaticGet__0___Convert()
		{
			return (::System::Func_2<::RPG::GameCore::AttackDamageType, ::RPG::Client::Challenge::Tierce::ChallengeTierceAttackDamageType>**)UnitySDK::FromName("", "<>O")->GetStaticField(0x5A8E0);
		}

	};
