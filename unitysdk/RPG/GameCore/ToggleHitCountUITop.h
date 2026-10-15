#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/TaskConfig.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class DynamicFloat; }
namespace RPG::GameCore { class TargetEvaluator; }
namespace RPG::GameCore { class ToggleHitCountUITop; }

#define RPG_GAMECORE_TOGGLEHITCOUNTUITOP_CTOR_OFFSET UNITYSDK_OFFSET(0x1DB8BF50)
#define RPG_GAMECORE_TOGGLEHITCOUNTUITOP_MGMEGEDLMAK_OFFSET UNITYSDK_OFFSET(0x1DB8BF90)
#define RPG_GAMECORE_TOGGLEHITCOUNTUITOP_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1DB8BEF0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int ToggleHitCountUITop_TypeDefinitionIndex = 23154;

	class ToggleHitCountUITop : public ::RPG::GameCore::TaskConfig
	{
	public:
		::RPG::GameCore::TargetEvaluator* TargetType; // 0x18
		::RPG::GameCore::DynamicFloat* LeftCount; // 0x20
		::RPG::GameCore::DynamicFloat* PastCount; // 0x28
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_TOGGLEHITCOUNTUITOP_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::ToggleHitCountUITop* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::ToggleHitCountUITop*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_TOGGLEHITCOUNTUITOP_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

		static ::System::Void MGMEGEDLMAK(::FCOEMCEDLNL* a1, ::RPG::GameCore::ToggleHitCountUITop* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::ToggleHitCountUITop*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_TOGGLEHITCOUNTUITOP_MGMEGEDLMAK_OFFSET))(a1, a2);
		}

	};
}
