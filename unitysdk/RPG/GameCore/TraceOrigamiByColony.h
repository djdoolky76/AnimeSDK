#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/TaskConfig.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class DynamicFloat; }
namespace RPG::GameCore { class TraceOrigamiByColony; }

#define RPG_GAMECORE_TRACEORIGAMIBYCOLONY_CTOR_OFFSET UNITYSDK_OFFSET(0x1DC28850)
#define RPG_GAMECORE_TRACEORIGAMIBYCOLONY_MGMEGEDLMAK_OFFSET UNITYSDK_OFFSET(0x1DC28860)
#define RPG_GAMECORE_TRACEORIGAMIBYCOLONY_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1DC28820)

namespace RPG::GameCore
{
	class TraceOrigamiByColony : public ::RPG::GameCore::TaskConfig
	{
	public:
		::RPG::GameCore::DynamicFloat* ColonyID; // 0x18
		::System::Boolean OpenBigMap; // 0x20
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_TRACEORIGAMIBYCOLONY_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::TraceOrigamiByColony* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::TraceOrigamiByColony*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_TRACEORIGAMIBYCOLONY_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

		static ::System::Void MGMEGEDLMAK(::FCOEMCEDLNL* a1, ::RPG::GameCore::TraceOrigamiByColony* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::TraceOrigamiByColony*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_TRACEORIGAMIBYCOLONY_MGMEGEDLMAK_OFFSET))(a1, a2);
		}

	};
}
