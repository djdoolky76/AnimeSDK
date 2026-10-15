#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/FiveDimEvilSmileState.h"
#include "unitysdk/RPG/GameCore/JsonConfig.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class FiveDimEvilSmileStateConfig; }
namespace RPG::GameCore { class FiveDimEvilSmileStateEventConfig; }
namespace RPG::GameCore { class FloatCurve; }

#define RPG_GAMECORE_FIVEDIMEVILSMILESTATECONFIG_CTOR_OFFSET UNITYSDK_OFFSET(0x1D6BD540)
#define RPG_GAMECORE_FIVEDIMEVILSMILESTATECONFIG_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1D6BD380)

namespace RPG::GameCore
{
	inline static constexpr unsigned int FiveDimEvilSmileStateConfig_TypeDefinitionIndex = 16700;

	class FiveDimEvilSmileStateConfig : public ::RPG::GameCore::JsonConfig
	{
	public:
		::RPG::GameCore::FiveDimEvilSmileState StateType; // 0x10
		::System::Single StateTime; // 0x14
		::RPG::GameCore::FloatCurve* AttackCurve; // 0x18
		::Il2CppArray<::RPG::GameCore::FiveDimEvilSmileStateEventConfig*>* StateEventList; // 0x20
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_FIVEDIMEVILSMILESTATECONFIG_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::FiveDimEvilSmileStateConfig* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::FiveDimEvilSmileStateConfig*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_FIVEDIMEVILSMILESTATECONFIG_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

	};
}
