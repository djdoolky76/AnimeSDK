#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/TaskConfig.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class AdvRecoverTickValue; }
namespace RPG::GameCore { class DynamicString; }
namespace RPG::GameCore { class TargetEvaluator; }

#define RPG_GAMECORE_ADVRECOVERTICKVALUE_CTOR_OFFSET UNITYSDK_OFFSET(0x1D3AC1D0)
#define RPG_GAMECORE_ADVRECOVERTICKVALUE_MGMEGEDLMAK_OFFSET UNITYSDK_OFFSET(0x1D3AC210)
#define RPG_GAMECORE_ADVRECOVERTICKVALUE_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1D3AC170)

namespace RPG::GameCore
{
	inline static constexpr unsigned int AdvRecoverTickValue_TypeDefinitionIndex = 21026;

	class AdvRecoverTickValue : public ::RPG::GameCore::TaskConfig
	{
	public:
		::RPG::GameCore::TargetEvaluator* SourceType; // 0x18
		::RPG::GameCore::DynamicString* ConfigName; // 0x20
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ADVRECOVERTICKVALUE_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::AdvRecoverTickValue* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::AdvRecoverTickValue*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ADVRECOVERTICKVALUE_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

		static ::System::Void MGMEGEDLMAK(::FCOEMCEDLNL* a1, ::RPG::GameCore::AdvRecoverTickValue* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::AdvRecoverTickValue*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ADVRECOVERTICKVALUE_MGMEGEDLMAK_OFFSET))(a1, a2);
		}

	};
}
