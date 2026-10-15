#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/TaskConfig.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class MonopolyTriggerMoveToNextMap; }

#define RPG_GAMECORE_MONOPOLYTRIGGERMOVETONEXTMAP_CTOR_OFFSET UNITYSDK_OFFSET(0x1D8805C0)
#define RPG_GAMECORE_MONOPOLYTRIGGERMOVETONEXTMAP_MGMEGEDLMAK_OFFSET UNITYSDK_OFFSET(0x1D8805D0)
#define RPG_GAMECORE_MONOPOLYTRIGGERMOVETONEXTMAP_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1D880500)

namespace RPG::GameCore
{
	inline static constexpr unsigned int MonopolyTriggerMoveToNextMap_TypeDefinitionIndex = 20938;

	class MonopolyTriggerMoveToNextMap : public ::RPG::GameCore::TaskConfig
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_MONOPOLYTRIGGERMOVETONEXTMAP_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::MonopolyTriggerMoveToNextMap* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::MonopolyTriggerMoveToNextMap*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_MONOPOLYTRIGGERMOVETONEXTMAP_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

		static ::System::Void MGMEGEDLMAK(::FCOEMCEDLNL* a1, ::RPG::GameCore::MonopolyTriggerMoveToNextMap* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::MonopolyTriggerMoveToNextMap*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_MONOPOLYTRIGGERMOVETONEXTMAP_MGMEGEDLMAK_OFFSET))(a1, a2);
		}

	};
}
