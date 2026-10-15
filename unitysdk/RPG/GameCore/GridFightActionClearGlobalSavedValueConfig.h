#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/GridFightActionConfigBase.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class GridFightActionClearGlobalSavedValueConfig; }

#define RPG_GAMECORE_GRIDFIGHTACTIONCLEARGLOBALSAVEDVALUECONFIG_CTOR_OFFSET UNITYSDK_OFFSET(0x1D7242C0)
#define RPG_GAMECORE_GRIDFIGHTACTIONCLEARGLOBALSAVEDVALUECONFIG_MGMEGEDLMAK_OFFSET UNITYSDK_OFFSET(0x1D7242D0)
#define RPG_GAMECORE_GRIDFIGHTACTIONCLEARGLOBALSAVEDVALUECONFIG_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1D724280)

namespace RPG::GameCore
{
	inline static constexpr unsigned int GridFightActionClearGlobalSavedValueConfig_TypeDefinitionIndex = 19320;

	class GridFightActionClearGlobalSavedValueConfig : public ::RPG::GameCore::GridFightActionConfigBase
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_GRIDFIGHTACTIONCLEARGLOBALSAVEDVALUECONFIG_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::GridFightActionClearGlobalSavedValueConfig* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::GridFightActionClearGlobalSavedValueConfig*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_GRIDFIGHTACTIONCLEARGLOBALSAVEDVALUECONFIG_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

		static ::System::Void MGMEGEDLMAK(::FCOEMCEDLNL* a1, ::RPG::GameCore::GridFightActionClearGlobalSavedValueConfig* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::GridFightActionClearGlobalSavedValueConfig*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_GRIDFIGHTACTIONCLEARGLOBALSAVEDVALUECONFIG_MGMEGEDLMAK_OFFSET))(a1, a2);
		}

	};
}
