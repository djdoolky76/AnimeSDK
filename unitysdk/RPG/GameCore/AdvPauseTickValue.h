#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/TaskConfig.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class AdvPauseTickValue; }
namespace RPG::GameCore { class DynamicString; }
namespace RPG::GameCore { class TargetEvaluator; }

#define RPG_GAMECORE_ADVPAUSETICKVALUE_CTOR_OFFSET UNITYSDK_OFFSET(0x1D37CA10)
#define RPG_GAMECORE_ADVPAUSETICKVALUE_MGMEGEDLMAK_OFFSET UNITYSDK_OFFSET(0x1D37CA50)
#define RPG_GAMECORE_ADVPAUSETICKVALUE_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1D37C9B0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int AdvPauseTickValue_TypeDefinitionIndex = 21025;

	class AdvPauseTickValue : public ::RPG::GameCore::TaskConfig
	{
	public:
		::RPG::GameCore::TargetEvaluator* SourceType; // 0x18
		::RPG::GameCore::DynamicString* ConfigName; // 0x20
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ADVPAUSETICKVALUE_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::AdvPauseTickValue* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::AdvPauseTickValue*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ADVPAUSETICKVALUE_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

		static ::System::Void MGMEGEDLMAK(::FCOEMCEDLNL* a1, ::RPG::GameCore::AdvPauseTickValue* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::AdvPauseTickValue*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ADVPAUSETICKVALUE_MGMEGEDLMAK_OFFSET))(a1, a2);
		}

	};
}
