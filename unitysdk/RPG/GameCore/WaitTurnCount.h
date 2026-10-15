#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/TaskConfig.h"
#include "unitysdk/RPG/GameCore/TurnCountCalcMethod.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class DynamicFloat; }
namespace RPG::GameCore { class TaskConfig; }
namespace RPG::GameCore { class WaitTurnCount; }

#define RPG_GAMECORE_WAITTURNCOUNT_CTOR_OFFSET UNITYSDK_OFFSET(0x1DC765F0)
#define RPG_GAMECORE_WAITTURNCOUNT_MGMEGEDLMAK_OFFSET UNITYSDK_OFFSET(0x1DC76650)
#define RPG_GAMECORE_WAITTURNCOUNT_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1DC76570)

namespace RPG::GameCore
{
	inline static constexpr unsigned int WaitTurnCount_TypeDefinitionIndex = 23412;

	class WaitTurnCount : public ::RPG::GameCore::TaskConfig
	{
	public:
		::RPG::GameCore::TurnCountCalcMethod CalcMethod; // 0x18
		::System::Byte _padding0[0x4];
		::RPG::GameCore::DynamicFloat* Count; // 0x20
		::Il2CppArray<::RPG::GameCore::TaskConfig*>* TaskList; // 0x28
		::System::Boolean IsPersistenceTasksForClient; // 0x30
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_WAITTURNCOUNT_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::WaitTurnCount* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::WaitTurnCount*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_WAITTURNCOUNT_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

		static ::System::Void MGMEGEDLMAK(::FCOEMCEDLNL* a1, ::RPG::GameCore::WaitTurnCount* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::WaitTurnCount*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_WAITTURNCOUNT_MGMEGEDLMAK_OFFSET))(a1, a2);
		}

	};
}
