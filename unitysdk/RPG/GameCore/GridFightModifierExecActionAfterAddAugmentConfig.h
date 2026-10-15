#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/GridFightModifierConfigBase.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class GridFightModifierExecActionAfterAddAugmentConfig; }

#define RPG_GAMECORE_GRIDFIGHTMODIFIEREXECACTIONAFTERADDAUGMENTCONFIG_CTOR_OFFSET UNITYSDK_OFFSET(0x1D733BD0)
#define RPG_GAMECORE_GRIDFIGHTMODIFIEREXECACTIONAFTERADDAUGMENTCONFIG_MGMEGEDLMAK_OFFSET UNITYSDK_OFFSET(0x1D733BE0)
#define RPG_GAMECORE_GRIDFIGHTMODIFIEREXECACTIONAFTERADDAUGMENTCONFIG_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1D733B90)

namespace RPG::GameCore
{
	inline static constexpr unsigned int GridFightModifierExecActionAfterAddAugmentConfig_TypeDefinitionIndex = 19471;

	class GridFightModifierExecActionAfterAddAugmentConfig : public ::RPG::GameCore::GridFightModifierConfigBase
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_GRIDFIGHTMODIFIEREXECACTIONAFTERADDAUGMENTCONFIG_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::GridFightModifierExecActionAfterAddAugmentConfig* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::GridFightModifierExecActionAfterAddAugmentConfig*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_GRIDFIGHTMODIFIEREXECACTIONAFTERADDAUGMENTCONFIG_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

		static ::System::Void MGMEGEDLMAK(::FCOEMCEDLNL* a1, ::RPG::GameCore::GridFightModifierExecActionAfterAddAugmentConfig* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::GridFightModifierExecActionAfterAddAugmentConfig*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_GRIDFIGHTMODIFIEREXECACTIONAFTERADDAUGMENTCONFIG_MGMEGEDLMAK_OFFSET))(a1, a2);
		}

	};
}
