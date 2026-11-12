#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/JsonConfig.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class DepartedConfig; }

#define RPG_GAMECORE_DEPARTEDCONFIG_CTOR_OFFSET UNITYSDK_OFFSET(0x1E80D3F0)
#define RPG_GAMECORE_DEPARTEDCONFIG_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1E80D290)

namespace RPG::GameCore
{
	inline static constexpr unsigned int DepartedConfig_TypeDefinitionIndex = 24058;

	class DepartedConfig : public ::RPG::GameCore::JsonConfig
	{
	public:
		::System::Boolean HideEntity; // 0x10
		::System::Boolean MuteEntityAction; // 0x11
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_DEPARTEDCONFIG_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::DepartedConfig* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::DepartedConfig*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_DEPARTEDCONFIG_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

	};
}
