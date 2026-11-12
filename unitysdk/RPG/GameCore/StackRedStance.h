#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/TaskConfig.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class DynamicFloat; }
namespace RPG::GameCore { class StackRedStance; }

#define RPG_GAMECORE_STACKREDSTANCE_CTOR_OFFSET UNITYSDK_OFFSET(0x1ED155E0)
#define RPG_GAMECORE_STACKREDSTANCE_MGMEGEDLMAK_OFFSET UNITYSDK_OFFSET(0x1ED15640)
#define RPG_GAMECORE_STACKREDSTANCE_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1ED15560)

namespace RPG::GameCore
{
	inline static constexpr unsigned int StackRedStance_TypeDefinitionIndex = 23054;

	class StackRedStance : public ::RPG::GameCore::TaskConfig
	{
	public:
		::RPG::GameCore::DynamicFloat* RedStanceRatio; // 0x18
		::RPG::GameCore::DynamicFloat* RedStanceValue; // 0x20
		::RPG::GameCore::DynamicFloat* StanceCount; // 0x28
		::RPG::GameCore::DynamicFloat* BreakAddRedStanceRatio; // 0x30
		::RPG::GameCore::DynamicFloat* RedStanceRatioMax; // 0x38
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_STACKREDSTANCE_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::StackRedStance* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::StackRedStance*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_STACKREDSTANCE_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

		static ::System::Void MGMEGEDLMAK(::FCOEMCEDLNL* a1, ::RPG::GameCore::StackRedStance* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::StackRedStance*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_STACKREDSTANCE_MGMEGEDLMAK_OFFSET))(a1, a2);
		}

	};
}
