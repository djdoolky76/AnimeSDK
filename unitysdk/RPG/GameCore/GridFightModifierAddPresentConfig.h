#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/GridFightModifierConfigBase.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class GridFightModifierAddPresentConfig; }

#define RPG_GAMECORE_GRIDFIGHTMODIFIERADDPRESENTCONFIG_CTOR_OFFSET UNITYSDK_OFFSET(0x2060B620)
#define RPG_GAMECORE_GRIDFIGHTMODIFIERADDPRESENTCONFIG_MGMEGEDLMAK_OFFSET UNITYSDK_OFFSET(0x2060B630)
#define RPG_GAMECORE_GRIDFIGHTMODIFIERADDPRESENTCONFIG_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x2060B5E0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int GridFightModifierAddPresentConfig_TypeDefinitionIndex = 19715;

	class GridFightModifierAddPresentConfig : public ::RPG::GameCore::GridFightModifierConfigBase
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_GRIDFIGHTMODIFIERADDPRESENTCONFIG_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::GridFightModifierAddPresentConfig* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::GridFightModifierAddPresentConfig*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_GRIDFIGHTMODIFIERADDPRESENTCONFIG_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

		static ::System::Void MGMEGEDLMAK(::FCOEMCEDLNL* a1, ::RPG::GameCore::GridFightModifierAddPresentConfig* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::GridFightModifierAddPresentConfig*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_GRIDFIGHTMODIFIERADDPRESENTCONFIG_MGMEGEDLMAK_OFFSET))(a1, a2);
		}

	};
}
