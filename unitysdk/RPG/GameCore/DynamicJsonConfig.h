#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/JsonConfig.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class DynamicJsonConfig; }

#define RPG_GAMECORE_DYNAMICJSONCONFIG_CTOR_OFFSET UNITYSDK_OFFSET(0x1D628D00)
#define RPG_GAMECORE_DYNAMICJSONCONFIG_MGMEGEDLMAK_OFFSET UNITYSDK_OFFSET(0x1D628D10)
#define RPG_GAMECORE_DYNAMICJSONCONFIG_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1D628AC0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int DynamicJsonConfig_TypeDefinitionIndex = 16482;

	class DynamicJsonConfig : public ::RPG::GameCore::JsonConfig
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_DYNAMICJSONCONFIG_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::DynamicJsonConfig* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::DynamicJsonConfig*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_DYNAMICJSONCONFIG_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

		static ::System::Void MGMEGEDLMAK(::FCOEMCEDLNL* a1, ::RPG::GameCore::DynamicJsonConfig* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::DynamicJsonConfig*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_DYNAMICJSONCONFIG_MGMEGEDLMAK_OFFSET))(a1, a2);
		}

	};
}
