#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/GridFightModifierConfigBase.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class GridFightModifierMortenaxBladeConfig; }

#define RPG_GAMECORE_GRIDFIGHTMODIFIERMORTENAXBLADECONFIG_CTOR_OFFSET UNITYSDK_OFFSET(0x1E942A80)
#define RPG_GAMECORE_GRIDFIGHTMODIFIERMORTENAXBLADECONFIG_MGMEGEDLMAK_OFFSET UNITYSDK_OFFSET(0x1E942A90)
#define RPG_GAMECORE_GRIDFIGHTMODIFIERMORTENAXBLADECONFIG_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1E942A40)

namespace RPG::GameCore
{
	inline static constexpr unsigned int GridFightModifierMortenaxBladeConfig_TypeDefinitionIndex = 19734;

	class GridFightModifierMortenaxBladeConfig : public ::RPG::GameCore::GridFightModifierConfigBase
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_GRIDFIGHTMODIFIERMORTENAXBLADECONFIG_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::GridFightModifierMortenaxBladeConfig* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::GridFightModifierMortenaxBladeConfig*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_GRIDFIGHTMODIFIERMORTENAXBLADECONFIG_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

		static ::System::Void MGMEGEDLMAK(::FCOEMCEDLNL* a1, ::RPG::GameCore::GridFightModifierMortenaxBladeConfig* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::GridFightModifierMortenaxBladeConfig*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_GRIDFIGHTMODIFIERMORTENAXBLADECONFIG_MGMEGEDLMAK_OFFSET))(a1, a2);
		}

	};
}
