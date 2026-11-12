#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/GridFightActionConfigBase.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class GridFightActionAddRoleConfig; }

#define RPG_GAMECORE_GRIDFIGHTACTIONADDROLECONFIG_CTOR_OFFSET UNITYSDK_OFFSET(0x1E92DDD0)
#define RPG_GAMECORE_GRIDFIGHTACTIONADDROLECONFIG_MGMEGEDLMAK_OFFSET UNITYSDK_OFFSET(0x1E92DDE0)
#define RPG_GAMECORE_GRIDFIGHTACTIONADDROLECONFIG_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1E92DD90)

namespace RPG::GameCore
{
	inline static constexpr unsigned int GridFightActionAddRoleConfig_TypeDefinitionIndex = 19517;

	class GridFightActionAddRoleConfig : public ::RPG::GameCore::GridFightActionConfigBase
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_GRIDFIGHTACTIONADDROLECONFIG_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::GridFightActionAddRoleConfig* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::GridFightActionAddRoleConfig*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_GRIDFIGHTACTIONADDROLECONFIG_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

		static ::System::Void MGMEGEDLMAK(::FCOEMCEDLNL* a1, ::RPG::GameCore::GridFightActionAddRoleConfig* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::GridFightActionAddRoleConfig*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_GRIDFIGHTACTIONADDROLECONFIG_MGMEGEDLMAK_OFFSET))(a1, a2);
		}

	};
}
