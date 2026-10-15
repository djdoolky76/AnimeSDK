#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/JsonConfig.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class MiConditionEntryConfig; }

#define RPG_GAMECORE_MICONDITIONENTRYCONFIG_CTOR_OFFSET UNITYSDK_OFFSET(0x1D8519D0)
#define RPG_GAMECORE_MICONDITIONENTRYCONFIG_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1D851990)

namespace RPG::GameCore
{
	inline static constexpr unsigned int MiConditionEntryConfig_TypeDefinitionIndex = 17072;

	class MiConditionEntryConfig : public ::RPG::GameCore::JsonConfig
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_MICONDITIONENTRYCONFIG_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::MiConditionEntryConfig* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::MiConditionEntryConfig*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_MICONDITIONENTRYCONFIG_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

	};
}
