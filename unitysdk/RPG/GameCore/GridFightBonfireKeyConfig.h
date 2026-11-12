#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/JsonConfig.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class GridFightBonfireKeyConfig; }

#define RPG_GAMECORE_GRIDFIGHTBONFIREKEYCONFIG_CTOR_OFFSET UNITYSDK_OFFSET(0x1E931E10)
#define RPG_GAMECORE_GRIDFIGHTBONFIREKEYCONFIG_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1E931DD0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int GridFightBonfireKeyConfig_TypeDefinitionIndex = 19780;

	class GridFightBonfireKeyConfig : public ::RPG::GameCore::JsonConfig
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_GRIDFIGHTBONFIREKEYCONFIG_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::GridFightBonfireKeyConfig* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::GridFightBonfireKeyConfig*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_GRIDFIGHTBONFIREKEYCONFIG_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

	};
}
