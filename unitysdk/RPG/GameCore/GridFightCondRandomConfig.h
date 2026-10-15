#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/GridFightConditionConfigBase.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class GridFightCondRandomConfig; }

#define RPG_GAMECORE_GRIDFIGHTCONDRANDOMCONFIG_CTOR_OFFSET UNITYSDK_OFFSET(0x1D6FA760)
#define RPG_GAMECORE_GRIDFIGHTCONDRANDOMCONFIG_MGMEGEDLMAK_OFFSET UNITYSDK_OFFSET(0x1D6FA770)
#define RPG_GAMECORE_GRIDFIGHTCONDRANDOMCONFIG_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1D6FA720)

namespace RPG::GameCore
{
	inline static constexpr unsigned int GridFightCondRandomConfig_TypeDefinitionIndex = 19328;

	class GridFightCondRandomConfig : public ::RPG::GameCore::GridFightConditionConfigBase
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_GRIDFIGHTCONDRANDOMCONFIG_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::GridFightCondRandomConfig* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::GridFightCondRandomConfig*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_GRIDFIGHTCONDRANDOMCONFIG_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

		static ::System::Void MGMEGEDLMAK(::FCOEMCEDLNL* a1, ::RPG::GameCore::GridFightCondRandomConfig* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::GridFightCondRandomConfig*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_GRIDFIGHTCONDRANDOMCONFIG_MGMEGEDLMAK_OFFSET))(a1, a2);
		}

	};
}
