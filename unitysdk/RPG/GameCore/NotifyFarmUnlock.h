#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/TaskConfig.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class NotifyFarmUnlock; }

#define RPG_GAMECORE_NOTIFYFARMUNLOCK_CTOR_OFFSET UNITYSDK_OFFSET(0x1D8DAA20)
#define RPG_GAMECORE_NOTIFYFARMUNLOCK_MGMEGEDLMAK_OFFSET UNITYSDK_OFFSET(0x1D8DAA30)
#define RPG_GAMECORE_NOTIFYFARMUNLOCK_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1D8DA960)

namespace RPG::GameCore
{
	inline static constexpr unsigned int NotifyFarmUnlock_TypeDefinitionIndex = 21958;

	class NotifyFarmUnlock : public ::RPG::GameCore::TaskConfig
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_NOTIFYFARMUNLOCK_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::NotifyFarmUnlock* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::NotifyFarmUnlock*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_NOTIFYFARMUNLOCK_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

		static ::System::Void MGMEGEDLMAK(::FCOEMCEDLNL* a1, ::RPG::GameCore::NotifyFarmUnlock* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::NotifyFarmUnlock*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_NOTIFYFARMUNLOCK_MGMEGEDLMAK_OFFSET))(a1, a2);
		}

	};
}
