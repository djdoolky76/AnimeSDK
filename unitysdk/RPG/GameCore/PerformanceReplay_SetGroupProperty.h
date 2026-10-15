#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/TaskConfig.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class DynamicString; }
namespace RPG::GameCore { class PerformanceReplay_SetGroupProperty; }

#define RPG_GAMECORE_PERFORMANCEREPLAY_SETGROUPPROPERTY_CTOR_OFFSET UNITYSDK_OFFSET(0x1D8D4B80)
#define RPG_GAMECORE_PERFORMANCEREPLAY_SETGROUPPROPERTY_MGMEGEDLMAK_OFFSET UNITYSDK_OFFSET(0x1D8D4B90)
#define RPG_GAMECORE_PERFORMANCEREPLAY_SETGROUPPROPERTY_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1D8D4B50)

namespace RPG::GameCore
{
	inline static constexpr unsigned int PerformanceReplay_SetGroupProperty_TypeDefinitionIndex = 21850;

	class PerformanceReplay_SetGroupProperty : public ::RPG::GameCore::TaskConfig
	{
	public:
		::System::UInt32 GroupID; // 0x18
		::System::Byte _padding0[0x4];
		::RPG::GameCore::DynamicString* DynamicName; // 0x20
		::System::Int16 Value; // 0x28
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_PERFORMANCEREPLAY_SETGROUPPROPERTY_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::PerformanceReplay_SetGroupProperty* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::PerformanceReplay_SetGroupProperty*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_PERFORMANCEREPLAY_SETGROUPPROPERTY_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

		static ::System::Void MGMEGEDLMAK(::FCOEMCEDLNL* a1, ::RPG::GameCore::PerformanceReplay_SetGroupProperty* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::PerformanceReplay_SetGroupProperty*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_PERFORMANCEREPLAY_SETGROUPPROPERTY_MGMEGEDLMAK_OFFSET))(a1, a2);
		}

	};
}
