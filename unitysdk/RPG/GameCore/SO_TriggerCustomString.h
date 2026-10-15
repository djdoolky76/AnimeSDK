#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/SOTaskConfig.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class DynamicString; }
namespace RPG::GameCore { class SO_TriggerCustomString; }

#define RPG_GAMECORE_SO_TRIGGERCUSTOMSTRING_CTOR_OFFSET UNITYSDK_OFFSET(0x1DA70870)
#define RPG_GAMECORE_SO_TRIGGERCUSTOMSTRING_MGMEGEDLMAK_OFFSET UNITYSDK_OFFSET(0x1DA70880)
#define RPG_GAMECORE_SO_TRIGGERCUSTOMSTRING_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1DA70E00)

namespace RPG::GameCore
{
	inline static constexpr unsigned int SO_TriggerCustomString_TypeDefinitionIndex = 20062;

	class SO_TriggerCustomString : public ::RPG::GameCore::SOTaskConfig
	{
	public:
		::RPG::GameCore::DynamicString* CustomString; // 0x18
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_SO_TRIGGERCUSTOMSTRING_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::SO_TriggerCustomString* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::SO_TriggerCustomString*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_SO_TRIGGERCUSTOMSTRING_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

		static ::System::Void MGMEGEDLMAK(::FCOEMCEDLNL* a1, ::RPG::GameCore::SO_TriggerCustomString* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::SO_TriggerCustomString*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_SO_TRIGGERCUSTOMSTRING_MGMEGEDLMAK_OFFSET))(a1, a2);
		}

	};
}
