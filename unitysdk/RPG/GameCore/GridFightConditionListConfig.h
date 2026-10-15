#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/JsonConfig.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class GridFightConditionListConfig; }

#define RPG_GAMECORE_GRIDFIGHTCONDITIONLISTCONFIG_CTOR_OFFSET UNITYSDK_OFFSET(0x1D6FABA0)
#define RPG_GAMECORE_GRIDFIGHTCONDITIONLISTCONFIG_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1D6FAB60)

namespace RPG::GameCore
{
	inline static constexpr unsigned int GridFightConditionListConfig_TypeDefinitionIndex = 17611;

	class GridFightConditionListConfig : public ::RPG::GameCore::JsonConfig
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_GRIDFIGHTCONDITIONLISTCONFIG_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::GridFightConditionListConfig* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::GridFightConditionListConfig*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_GRIDFIGHTCONDITIONLISTCONFIG_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

	};
}
