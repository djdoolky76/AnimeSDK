#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/TaskConfig.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class AdvDistrictEnableTrigger; }
namespace RPG::GameCore { class DynamicFloat; }

#define RPG_GAMECORE_ADVDISTRICTENABLETRIGGER_CTOR_OFFSET UNITYSDK_OFFSET(0x1D39B620)
#define RPG_GAMECORE_ADVDISTRICTENABLETRIGGER_MGMEGEDLMAK_OFFSET UNITYSDK_OFFSET(0x1D39B6D0)
#define RPG_GAMECORE_ADVDISTRICTENABLETRIGGER_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1D39B550)

namespace RPG::GameCore
{
	inline static constexpr unsigned int AdvDistrictEnableTrigger_TypeDefinitionIndex = 21195;

	class AdvDistrictEnableTrigger : public ::RPG::GameCore::TaskConfig
	{
	public:
		::RPG::GameCore::DynamicFloat* GroupID; // 0x18
		::RPG::GameCore::DynamicFloat* DistrictID; // 0x20
		::System::Boolean Enable; // 0x28
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ADVDISTRICTENABLETRIGGER_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::AdvDistrictEnableTrigger* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::AdvDistrictEnableTrigger*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ADVDISTRICTENABLETRIGGER_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

		static ::System::Void MGMEGEDLMAK(::FCOEMCEDLNL* a1, ::RPG::GameCore::AdvDistrictEnableTrigger* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::AdvDistrictEnableTrigger*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ADVDISTRICTENABLETRIGGER_MGMEGEDLMAK_OFFSET))(a1, a2);
		}

	};
}
