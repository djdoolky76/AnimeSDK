#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/JsonConfig.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class DynamicFloat; }
namespace RPG::GameCore { class DynamicString; }
namespace RPG::GameCore { class SmellPropConfig; }

#define RPG_GAMECORE_SMELLPROPCONFIG_CTOR_OFFSET UNITYSDK_OFFSET(0x1DAF10B0)
#define RPG_GAMECORE_SMELLPROPCONFIG_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1DAF0F00)

namespace RPG::GameCore
{
	inline static constexpr unsigned int SmellPropConfig_TypeDefinitionIndex = 20512;

	class SmellPropConfig : public ::RPG::GameCore::JsonConfig
	{
	public:
		::RPG::GameCore::DynamicFloat* GroupID; // 0x10
		::RPG::GameCore::DynamicFloat* GroupPropID; // 0x18
		::RPG::GameCore::DynamicString* PropKey; // 0x20
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_SMELLPROPCONFIG_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::SmellPropConfig* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::SmellPropConfig*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_SMELLPROPCONFIG_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

	};
}
