#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/JsonConfig.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class GridFightBonfireEventPoolConfig; }

#define RPG_GAMECORE_GRIDFIGHTBONFIREEVENTPOOLCONFIG_CTOR_OFFSET UNITYSDK_OFFSET(0x1E931960)
#define RPG_GAMECORE_GRIDFIGHTBONFIREEVENTPOOLCONFIG_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1E931920)

namespace RPG::GameCore
{
	inline static constexpr unsigned int GridFightBonfireEventPoolConfig_TypeDefinitionIndex = 19781;

	class GridFightBonfireEventPoolConfig : public ::RPG::GameCore::JsonConfig
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_GRIDFIGHTBONFIREEVENTPOOLCONFIG_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::GridFightBonfireEventPoolConfig* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::GridFightBonfireEventPoolConfig*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_GRIDFIGHTBONFIREEVENTPOOLCONFIG_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

	};
}
