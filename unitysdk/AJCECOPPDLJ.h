#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/AbilityProperty.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/RPG/GameCore/FixPoint.h"
namespace RPG::GameCore { class AIPropertySelector; }
namespace RPG::GameCore { class GameEntity; }
namespace RPG::GameCore { class TurnBasedAbilityComponent; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define AJCECOPPDLJ_AJEIDJMGHFO_OFFSET UNITYSDK_OFFSET(0x12CB12E0)
#define AJCECOPPDLJ_BGBFGOLKMCF_OFFSET UNITYSDK_OFFSET(0x12CB14F0)

	class AJCECOPPDLJ : public ::System::Object
	{
	public:
		static ::RPG::GameCore::FixPoint AJEIDJMGHFO(::RPG::GameCore::TurnBasedAbilityComponent* a1, ::RPG::GameCore::AbilityProperty a2, ::System::Boolean a3)
		{
			return ((::RPG::GameCore::FixPoint(*)(::RPG::GameCore::TurnBasedAbilityComponent*, ::RPG::GameCore::AbilityProperty, ::System::Boolean))((::PBYTE)hIl2Cpp + AJCECOPPDLJ_AJEIDJMGHFO_OFFSET))(a1, a2, a3);
		}

		static ::System::Collections::Generic::List_1<::RPG::GameCore::GameEntity*>* BGBFGOLKMCF(::RPG::GameCore::AIPropertySelector* a1, ::System::Collections::Generic::List_1<::RPG::GameCore::GameEntity*>* a2)
		{
			return ((::System::Collections::Generic::List_1<::RPG::GameCore::GameEntity*>*(*)(::RPG::GameCore::AIPropertySelector*, ::System::Collections::Generic::List_1<::RPG::GameCore::GameEntity*>*))((::PBYTE)hIl2Cpp + AJCECOPPDLJ_BGBFGOLKMCF_OFFSET))(a1, a2);
		}

	};
