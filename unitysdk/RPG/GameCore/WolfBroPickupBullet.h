#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/TaskConfig.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class WolfBroPickupBullet; }

#define RPG_GAMECORE_WOLFBROPICKUPBULLET_CTOR_OFFSET UNITYSDK_OFFSET(0x1DC7B1E0)
#define RPG_GAMECORE_WOLFBROPICKUPBULLET_MGMEGEDLMAK_OFFSET UNITYSDK_OFFSET(0x1DC7B1F0)
#define RPG_GAMECORE_WOLFBROPICKUPBULLET_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1DC7B120)

namespace RPG::GameCore
{
	inline static constexpr unsigned int WolfBroPickupBullet_TypeDefinitionIndex = 21589;

	class WolfBroPickupBullet : public ::RPG::GameCore::TaskConfig
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_WOLFBROPICKUPBULLET_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::WolfBroPickupBullet* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::WolfBroPickupBullet*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_WOLFBROPICKUPBULLET_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

		static ::System::Void MGMEGEDLMAK(::FCOEMCEDLNL* a1, ::RPG::GameCore::WolfBroPickupBullet* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::WolfBroPickupBullet*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_WOLFBROPICKUPBULLET_MGMEGEDLMAK_OFFSET))(a1, a2);
		}

	};
}
