#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/GridFightActionConfigBase.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class GridFightActionAddGlobalSavedValueConfig; }

#define RPG_GAMECORE_GRIDFIGHTACTIONADDGLOBALSAVEDVALUECONFIG_CTOR_OFFSET UNITYSDK_OFFSET(0x1D724090)
#define RPG_GAMECORE_GRIDFIGHTACTIONADDGLOBALSAVEDVALUECONFIG_MGMEGEDLMAK_OFFSET UNITYSDK_OFFSET(0x1D7240A0)
#define RPG_GAMECORE_GRIDFIGHTACTIONADDGLOBALSAVEDVALUECONFIG_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1D724050)

namespace RPG::GameCore
{
	inline static constexpr unsigned int GridFightActionAddGlobalSavedValueConfig_TypeDefinitionIndex = 19318;

	class GridFightActionAddGlobalSavedValueConfig : public ::RPG::GameCore::GridFightActionConfigBase
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_GRIDFIGHTACTIONADDGLOBALSAVEDVALUECONFIG_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::GridFightActionAddGlobalSavedValueConfig* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::GridFightActionAddGlobalSavedValueConfig*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_GRIDFIGHTACTIONADDGLOBALSAVEDVALUECONFIG_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

		static ::System::Void MGMEGEDLMAK(::FCOEMCEDLNL* a1, ::RPG::GameCore::GridFightActionAddGlobalSavedValueConfig* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::GridFightActionAddGlobalSavedValueConfig*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_GRIDFIGHTACTIONADDGLOBALSAVEDVALUECONFIG_MGMEGEDLMAK_OFFSET))(a1, a2);
		}

	};
}
