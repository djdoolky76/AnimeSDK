#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/GridFightActionConfigBase.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class GridFightActionSetBenchPosCntConfig; }

#define RPG_GAMECORE_GRIDFIGHTACTIONSETBENCHPOSCNTCONFIG_CTOR_OFFSET UNITYSDK_OFFSET(0x1D6F6F70)
#define RPG_GAMECORE_GRIDFIGHTACTIONSETBENCHPOSCNTCONFIG_MGMEGEDLMAK_OFFSET UNITYSDK_OFFSET(0x1D6F6F80)
#define RPG_GAMECORE_GRIDFIGHTACTIONSETBENCHPOSCNTCONFIG_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1D6F7380)

namespace RPG::GameCore
{
	inline static constexpr unsigned int GridFightActionSetBenchPosCntConfig_TypeDefinitionIndex = 19310;

	class GridFightActionSetBenchPosCntConfig : public ::RPG::GameCore::GridFightActionConfigBase
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_GRIDFIGHTACTIONSETBENCHPOSCNTCONFIG_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::GridFightActionSetBenchPosCntConfig* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::GridFightActionSetBenchPosCntConfig*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_GRIDFIGHTACTIONSETBENCHPOSCNTCONFIG_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

		static ::System::Void MGMEGEDLMAK(::FCOEMCEDLNL* a1, ::RPG::GameCore::GridFightActionSetBenchPosCntConfig* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::GridFightActionSetBenchPosCntConfig*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_GRIDFIGHTACTIONSETBENCHPOSCNTCONFIG_MGMEGEDLMAK_OFFSET))(a1, a2);
		}

	};
}
