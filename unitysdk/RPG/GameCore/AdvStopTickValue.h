#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/TaskConfig.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class AdvStopTickValue; }
namespace RPG::GameCore { class DynamicString; }
namespace RPG::GameCore { class TargetEvaluator; }

#define RPG_GAMECORE_ADVSTOPTICKVALUE_CTOR_OFFSET UNITYSDK_OFFSET(0x1D3B3280)
#define RPG_GAMECORE_ADVSTOPTICKVALUE_MGMEGEDLMAK_OFFSET UNITYSDK_OFFSET(0x1D3B32C0)
#define RPG_GAMECORE_ADVSTOPTICKVALUE_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1D3B3220)

namespace RPG::GameCore
{
	inline static constexpr unsigned int AdvStopTickValue_TypeDefinitionIndex = 21027;

	class AdvStopTickValue : public ::RPG::GameCore::TaskConfig
	{
	public:
		::RPG::GameCore::TargetEvaluator* SourceType; // 0x18
		::RPG::GameCore::DynamicString* ConfigName; // 0x20
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ADVSTOPTICKVALUE_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::AdvStopTickValue* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::AdvStopTickValue*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ADVSTOPTICKVALUE_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

		static ::System::Void MGMEGEDLMAK(::FCOEMCEDLNL* a1, ::RPG::GameCore::AdvStopTickValue* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::AdvStopTickValue*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ADVSTOPTICKVALUE_MGMEGEDLMAK_OFFSET))(a1, a2);
		}

	};
}
