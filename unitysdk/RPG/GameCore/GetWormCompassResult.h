#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/TaskConfig.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class DynamicString; }
namespace RPG::GameCore { class GetWormCompassResult; }
namespace RPG::GameCore { class TargetEvaluator; }

#define RPG_GAMECORE_GETWORMCOMPASSRESULT_CTOR_OFFSET UNITYSDK_OFFSET(0x1D71E050)
#define RPG_GAMECORE_GETWORMCOMPASSRESULT_MGMEGEDLMAK_OFFSET UNITYSDK_OFFSET(0x1D71E080)
#define RPG_GAMECORE_GETWORMCOMPASSRESULT_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1D71E000)

namespace RPG::GameCore
{
	inline static constexpr unsigned int GetWormCompassResult_TypeDefinitionIndex = 22165;

	class GetWormCompassResult : public ::RPG::GameCore::TaskConfig
	{
	public:
		::RPG::GameCore::TargetEvaluator* TargetType; // 0x18
		::RPG::GameCore::DynamicString* Result; // 0x20
		::RPG::GameCore::DynamicString* TreasureBoxName; // 0x28
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_GETWORMCOMPASSRESULT_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::GetWormCompassResult* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::GetWormCompassResult*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_GETWORMCOMPASSRESULT_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

		static ::System::Void MGMEGEDLMAK(::FCOEMCEDLNL* a1, ::RPG::GameCore::GetWormCompassResult* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::GetWormCompassResult*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_GETWORMCOMPASSRESULT_MGMEGEDLMAK_OFFSET))(a1, a2);
		}

	};
}
