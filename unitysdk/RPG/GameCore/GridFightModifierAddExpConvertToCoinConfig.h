#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/GridFightModifierConfigBase.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class GridFightModifierAddExpConvertToCoinConfig; }

#define RPG_GAMECORE_GRIDFIGHTMODIFIERADDEXPCONVERTTOCOINCONFIG_CTOR_OFFSET UNITYSDK_OFFSET(0x1D732B50)
#define RPG_GAMECORE_GRIDFIGHTMODIFIERADDEXPCONVERTTOCOINCONFIG_MGMEGEDLMAK_OFFSET UNITYSDK_OFFSET(0x1D732B60)
#define RPG_GAMECORE_GRIDFIGHTMODIFIERADDEXPCONVERTTOCOINCONFIG_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1D732B10)

namespace RPG::GameCore
{
	inline static constexpr unsigned int GridFightModifierAddExpConvertToCoinConfig_TypeDefinitionIndex = 19481;

	class GridFightModifierAddExpConvertToCoinConfig : public ::RPG::GameCore::GridFightModifierConfigBase
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_GRIDFIGHTMODIFIERADDEXPCONVERTTOCOINCONFIG_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::GridFightModifierAddExpConvertToCoinConfig* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::GridFightModifierAddExpConvertToCoinConfig*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_GRIDFIGHTMODIFIERADDEXPCONVERTTOCOINCONFIG_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

		static ::System::Void MGMEGEDLMAK(::FCOEMCEDLNL* a1, ::RPG::GameCore::GridFightModifierAddExpConvertToCoinConfig* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::GridFightModifierAddExpConvertToCoinConfig*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_GRIDFIGHTMODIFIERADDEXPCONVERTTOCOINCONFIG_MGMEGEDLMAK_OFFSET))(a1, a2);
		}

	};
}
