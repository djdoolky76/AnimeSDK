#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/TaskConfig.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class AdvFloatValueTickType; }
namespace RPG::GameCore { class AdvStartTickFloatValue; }
namespace RPG::GameCore { class DynamicString; }

#define RPG_GAMECORE_ADVSTARTTICKFLOATVALUE_CTOR_OFFSET UNITYSDK_OFFSET(0x1D3B30D0)
#define RPG_GAMECORE_ADVSTARTTICKFLOATVALUE_MGMEGEDLMAK_OFFSET UNITYSDK_OFFSET(0x1D3B30E0)
#define RPG_GAMECORE_ADVSTARTTICKFLOATVALUE_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1D3B30A0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int AdvStartTickFloatValue_TypeDefinitionIndex = 21024;

	class AdvStartTickFloatValue : public ::RPG::GameCore::TaskConfig
	{
	public:
		::RPG::GameCore::DynamicString* ConfigName; // 0x18
		::RPG::GameCore::AdvFloatValueTickType* TickType; // 0x20
		::RPG::GameCore::DynamicString* TargetDynamicValue; // 0x28
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ADVSTARTTICKFLOATVALUE_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::AdvStartTickFloatValue* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::AdvStartTickFloatValue*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ADVSTARTTICKFLOATVALUE_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

		static ::System::Void MGMEGEDLMAK(::FCOEMCEDLNL* a1, ::RPG::GameCore::AdvStartTickFloatValue* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::AdvStartTickFloatValue*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ADVSTARTTICKFLOATVALUE_MGMEGEDLMAK_OFFSET))(a1, a2);
		}

	};
}
