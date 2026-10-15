#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/GridFightConditionConfigBase.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class GridFightCondIsTalentEnabledConfig; }

#define RPG_GAMECORE_GRIDFIGHTCONDISTALENTENABLEDCONFIG_CTOR_OFFSET UNITYSDK_OFFSET(0x1D728180)
#define RPG_GAMECORE_GRIDFIGHTCONDISTALENTENABLEDCONFIG_MGMEGEDLMAK_OFFSET UNITYSDK_OFFSET(0x1D728190)
#define RPG_GAMECORE_GRIDFIGHTCONDISTALENTENABLEDCONFIG_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1D728140)

namespace RPG::GameCore
{
	inline static constexpr unsigned int GridFightCondIsTalentEnabledConfig_TypeDefinitionIndex = 19337;

	class GridFightCondIsTalentEnabledConfig : public ::RPG::GameCore::GridFightConditionConfigBase
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_GRIDFIGHTCONDISTALENTENABLEDCONFIG_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::GridFightCondIsTalentEnabledConfig* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::GridFightCondIsTalentEnabledConfig*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_GRIDFIGHTCONDISTALENTENABLEDCONFIG_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

		static ::System::Void MGMEGEDLMAK(::FCOEMCEDLNL* a1, ::RPG::GameCore::GridFightCondIsTalentEnabledConfig* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::GridFightCondIsTalentEnabledConfig*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_GRIDFIGHTCONDISTALENTENABLEDCONFIG_MGMEGEDLMAK_OFFSET))(a1, a2);
		}

	};
}
