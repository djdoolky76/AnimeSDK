#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/JsonConfig.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class PingPongEnemyGroupEventBase; }

#define RPG_GAMECORE_PINGPONGENEMYGROUPEVENTBASE_CTOR_OFFSET UNITYSDK_OFFSET(0x1D916580)
#define RPG_GAMECORE_PINGPONGENEMYGROUPEVENTBASE_MGMEGEDLMAK_OFFSET UNITYSDK_OFFSET(0x1D916520)
#define RPG_GAMECORE_PINGPONGENEMYGROUPEVENTBASE_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1D915D80)

namespace RPG::GameCore
{
	inline static constexpr unsigned int PingPongEnemyGroupEventBase_TypeDefinitionIndex = 16996;

	class PingPongEnemyGroupEventBase : public ::RPG::GameCore::JsonConfig
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_PINGPONGENEMYGROUPEVENTBASE_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::PingPongEnemyGroupEventBase* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::PingPongEnemyGroupEventBase*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_PINGPONGENEMYGROUPEVENTBASE_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

		static ::System::Void MGMEGEDLMAK(::FCOEMCEDLNL* a1, ::RPG::GameCore::PingPongEnemyGroupEventBase* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::PingPongEnemyGroupEventBase*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_PINGPONGENEMYGROUPEVENTBASE_MGMEGEDLMAK_OFFSET))(a1, a2);
		}

	};
}
