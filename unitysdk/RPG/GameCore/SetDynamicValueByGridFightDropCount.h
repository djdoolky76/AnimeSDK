#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/DynamicValueContextScope.h"
#include "unitysdk/RPG/GameCore/GridFightDropCfgType.h"
#include "unitysdk/RPG/GameCore/TaskConfig.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class SetDynamicValueByGridFightDropCount; }
namespace RPG::GameCore { class TargetEvaluator; }
namespace System { class String; }

#define RPG_GAMECORE_SETDYNAMICVALUEBYGRIDFIGHTDROPCOUNT_CTOR_OFFSET UNITYSDK_OFFSET(0x1DAA4EE0)
#define RPG_GAMECORE_SETDYNAMICVALUEBYGRIDFIGHTDROPCOUNT_MGMEGEDLMAK_OFFSET UNITYSDK_OFFSET(0x1DAA4EF0)
#define RPG_GAMECORE_SETDYNAMICVALUEBYGRIDFIGHTDROPCOUNT_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1DAA4EB0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int SetDynamicValueByGridFightDropCount_TypeDefinitionIndex = 22526;

	class SetDynamicValueByGridFightDropCount : public ::RPG::GameCore::TaskConfig
	{
	public:
		::RPG::GameCore::TargetEvaluator* TargetType; // 0x18
		::System::String* DynamicKey; // 0x20
		::RPG::GameCore::DynamicValueContextScope ContextScope; // 0x28
		::RPG::GameCore::GridFightDropCfgType DropType; // 0x2C
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_SETDYNAMICVALUEBYGRIDFIGHTDROPCOUNT_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::SetDynamicValueByGridFightDropCount* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::SetDynamicValueByGridFightDropCount*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_SETDYNAMICVALUEBYGRIDFIGHTDROPCOUNT_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

		static ::System::Void MGMEGEDLMAK(::FCOEMCEDLNL* a1, ::RPG::GameCore::SetDynamicValueByGridFightDropCount* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::SetDynamicValueByGridFightDropCount*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_SETDYNAMICVALUEBYGRIDFIGHTDROPCOUNT_MGMEGEDLMAK_OFFSET))(a1, a2);
		}

	};
}
