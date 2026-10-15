#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/JsonConfig.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class GridFightRoleConfig; }

#define RPG_GAMECORE_GRIDFIGHTROLECONFIG_CTOR_OFFSET UNITYSDK_OFFSET(0x1D73D3F0)
#define RPG_GAMECORE_GRIDFIGHTROLECONFIG_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1D73D2D0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int GridFightRoleConfig_TypeDefinitionIndex = 10552;

	class GridFightRoleConfig : public ::RPG::GameCore::JsonConfig
	{
	public:
		::System::UInt32 RoleId; // 0x10
		::System::UInt32 Star; // 0x14
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_GRIDFIGHTROLECONFIG_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::GridFightRoleConfig* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::GridFightRoleConfig*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_GRIDFIGHTROLECONFIG_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

	};
}
