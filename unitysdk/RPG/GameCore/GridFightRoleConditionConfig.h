#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/JsonConfig.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class GridFightRoleConditionConfig; }

#define RPG_GAMECORE_GRIDFIGHTROLECONDITIONCONFIG_CTOR_OFFSET UNITYSDK_OFFSET(0x1D73D2C0)
#define RPG_GAMECORE_GRIDFIGHTROLECONDITIONCONFIG_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1D73D280)

namespace RPG::GameCore
{
	inline static constexpr unsigned int GridFightRoleConditionConfig_TypeDefinitionIndex = 19380;

	class GridFightRoleConditionConfig : public ::RPG::GameCore::JsonConfig
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_GRIDFIGHTROLECONDITIONCONFIG_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::GridFightRoleConditionConfig* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::GridFightRoleConditionConfig*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_GRIDFIGHTROLECONDITIONCONFIG_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

	};
}
