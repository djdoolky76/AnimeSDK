#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/JsonConfig.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class GridFightModifierListConfig; }

#define RPG_GAMECORE_GRIDFIGHTMODIFIERLISTCONFIG_CTOR_OFFSET UNITYSDK_OFFSET(0x1D734D10)
#define RPG_GAMECORE_GRIDFIGHTMODIFIERLISTCONFIG_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1D734CD0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int GridFightModifierListConfig_TypeDefinitionIndex = 17612;

	class GridFightModifierListConfig : public ::RPG::GameCore::JsonConfig
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_GRIDFIGHTMODIFIERLISTCONFIG_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::GridFightModifierListConfig* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::GridFightModifierListConfig*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_GRIDFIGHTMODIFIERLISTCONFIG_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

	};
}
