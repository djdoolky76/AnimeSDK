#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/TaskConfig.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class TriggerWavePerformStartString; }

#define RPG_GAMECORE_TRIGGERWAVEPERFORMSTARTSTRING_CTOR_OFFSET UNITYSDK_OFFSET(0x1EE733D0)
#define RPG_GAMECORE_TRIGGERWAVEPERFORMSTARTSTRING_MGMEGEDLMAK_OFFSET UNITYSDK_OFFSET(0x1EE733E0)
#define RPG_GAMECORE_TRIGGERWAVEPERFORMSTARTSTRING_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1EE73310)

namespace RPG::GameCore
{
	inline static constexpr unsigned int TriggerWavePerformStartString_TypeDefinitionIndex = 23847;

	class TriggerWavePerformStartString : public ::RPG::GameCore::TaskConfig
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_TRIGGERWAVEPERFORMSTARTSTRING_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::TriggerWavePerformStartString* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::TriggerWavePerformStartString*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_TRIGGERWAVEPERFORMSTARTSTRING_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

		static ::System::Void MGMEGEDLMAK(::FCOEMCEDLNL* a1, ::RPG::GameCore::TriggerWavePerformStartString* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::TriggerWavePerformStartString*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_TRIGGERWAVEPERFORMSTARTSTRING_MGMEGEDLMAK_OFFSET))(a1, a2);
		}

	};
}
