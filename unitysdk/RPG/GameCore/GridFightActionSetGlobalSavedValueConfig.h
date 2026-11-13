#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/GridFightActionConfigBase.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class GridFightActionSetGlobalSavedValueConfig; }

#define RPG_GAMECORE_GRIDFIGHTACTIONSETGLOBALSAVEDVALUECONFIG_CTOR_OFFSET UNITYSDK_OFFSET(0x205F9F40)
#define RPG_GAMECORE_GRIDFIGHTACTIONSETGLOBALSAVEDVALUECONFIG_MGMEGEDLMAK_OFFSET UNITYSDK_OFFSET(0x205F9F50)
#define RPG_GAMECORE_GRIDFIGHTACTIONSETGLOBALSAVEDVALUECONFIG_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x205F9F00)

namespace RPG::GameCore
{
	inline static constexpr unsigned int GridFightActionSetGlobalSavedValueConfig_TypeDefinitionIndex = 19511;

	class GridFightActionSetGlobalSavedValueConfig : public ::RPG::GameCore::GridFightActionConfigBase
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_GRIDFIGHTACTIONSETGLOBALSAVEDVALUECONFIG_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::GridFightActionSetGlobalSavedValueConfig* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::GridFightActionSetGlobalSavedValueConfig*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_GRIDFIGHTACTIONSETGLOBALSAVEDVALUECONFIG_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

		static ::System::Void MGMEGEDLMAK(::FCOEMCEDLNL* a1, ::RPG::GameCore::GridFightActionSetGlobalSavedValueConfig* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::GridFightActionSetGlobalSavedValueConfig*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_GRIDFIGHTACTIONSETGLOBALSAVEDVALUECONFIG_MGMEGEDLMAK_OFFSET))(a1, a2);
		}

	};
}
