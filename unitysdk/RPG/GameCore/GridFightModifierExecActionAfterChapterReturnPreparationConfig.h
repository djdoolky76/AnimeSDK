#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/GridFightModifierConfigBase.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class GridFightModifierExecActionAfterChapterReturnPreparationConfig; }

#define RPG_GAMECORE_GRIDFIGHTMODIFIEREXECACTIONAFTERCHAPTERRETURNPREPARATIONCONFIG_CTOR_OFFSET UNITYSDK_OFFSET(0x1D706380)
#define RPG_GAMECORE_GRIDFIGHTMODIFIEREXECACTIONAFTERCHAPTERRETURNPREPARATIONCONFIG_MGMEGEDLMAK_OFFSET UNITYSDK_OFFSET(0x1D706390)
#define RPG_GAMECORE_GRIDFIGHTMODIFIEREXECACTIONAFTERCHAPTERRETURNPREPARATIONCONFIG_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1D706340)

namespace RPG::GameCore
{
	inline static constexpr unsigned int GridFightModifierExecActionAfterChapterReturnPreparationConfig_TypeDefinitionIndex = 19346;

	class GridFightModifierExecActionAfterChapterReturnPreparationConfig : public ::RPG::GameCore::GridFightModifierConfigBase
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_GRIDFIGHTMODIFIEREXECACTIONAFTERCHAPTERRETURNPREPARATIONCONFIG_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::GridFightModifierExecActionAfterChapterReturnPreparationConfig* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::GridFightModifierExecActionAfterChapterReturnPreparationConfig*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_GRIDFIGHTMODIFIEREXECACTIONAFTERCHAPTERRETURNPREPARATIONCONFIG_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

		static ::System::Void MGMEGEDLMAK(::FCOEMCEDLNL* a1, ::RPG::GameCore::GridFightModifierExecActionAfterChapterReturnPreparationConfig* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::GridFightModifierExecActionAfterChapterReturnPreparationConfig*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_GRIDFIGHTMODIFIEREXECACTIONAFTERCHAPTERRETURNPREPARATIONCONFIG_MGMEGEDLMAK_OFFSET))(a1, a2);
		}

	};
}
