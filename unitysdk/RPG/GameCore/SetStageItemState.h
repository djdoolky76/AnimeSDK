#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/TaskConfig.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class SetStageItemState; }
namespace RPG::GameCore { class StageItemAlias; }

#define RPG_GAMECORE_SETSTAGEITEMSTATE_CTOR_OFFSET UNITYSDK_OFFSET(0x1DAC2A80)
#define RPG_GAMECORE_SETSTAGEITEMSTATE_MGMEGEDLMAK_OFFSET UNITYSDK_OFFSET(0x1DAC2A90)
#define RPG_GAMECORE_SETSTAGEITEMSTATE_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1DAC2A50)

namespace RPG::GameCore
{
	inline static constexpr unsigned int SetStageItemState_TypeDefinitionIndex = 22252;

	class SetStageItemState : public ::RPG::GameCore::TaskConfig
	{
	public:
		::Il2CppArray<::RPG::GameCore::StageItemAlias*>* ItemList; // 0x18
		::System::Boolean EnableState; // 0x20
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_SETSTAGEITEMSTATE_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::SetStageItemState* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::SetStageItemState*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_SETSTAGEITEMSTATE_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

		static ::System::Void MGMEGEDLMAK(::FCOEMCEDLNL* a1, ::RPG::GameCore::SetStageItemState* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::SetStageItemState*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_SETSTAGEITEMSTATE_MGMEGEDLMAK_OFFSET))(a1, a2);
		}

	};
}
