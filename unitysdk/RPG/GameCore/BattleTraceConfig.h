#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/JsonConfig.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class BattleTraceConfig; }
namespace System { class String; }

#define RPG_GAMECORE_BATTLETRACECONFIG_CTOR_OFFSET UNITYSDK_OFFSET(0x1D46A1A0)
#define RPG_GAMECORE_BATTLETRACECONFIG_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1D46A040)

namespace RPG::GameCore
{
	inline static constexpr unsigned int BattleTraceConfig_TypeDefinitionIndex = 18148;

	class BattleTraceConfig : public ::RPG::GameCore::JsonConfig
	{
	public:
		::Il2CppArray<::System::String*>* DelayPreShowModifierBlackList; // 0x10
		::Il2CppArray<::System::String*>* DelayPreShowAbilityBlackList; // 0x18
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BATTLETRACECONFIG_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::BattleTraceConfig* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::BattleTraceConfig*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BATTLETRACECONFIG_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

	};
}
