#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/JsonConfig.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class AddByMaxStanceConfig; }
namespace RPG::GameCore { class DynamicFloat; }

#define RPG_GAMECORE_ADDBYMAXSTANCECONFIG_CTOR_OFFSET UNITYSDK_OFFSET(0x1D358490)
#define RPG_GAMECORE_ADDBYMAXSTANCECONFIG_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1D358080)

namespace RPG::GameCore
{
	inline static constexpr unsigned int AddByMaxStanceConfig_TypeDefinitionIndex = 18183;

	class AddByMaxStanceConfig : public ::RPG::GameCore::JsonConfig
	{
	public:
		::RPG::GameCore::DynamicFloat* AddedRatio; // 0x10
		::RPG::GameCore::DynamicFloat* AddedValue; // 0x18
		::RPG::GameCore::DynamicFloat* MaxStance; // 0x20
		::RPG::GameCore::DynamicFloat* MinStance; // 0x28
		::System::Boolean IsForceMatchWeakness; // 0x30
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ADDBYMAXSTANCECONFIG_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::AddByMaxStanceConfig* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::AddByMaxStanceConfig*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ADDBYMAXSTANCECONFIG_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

	};
}
