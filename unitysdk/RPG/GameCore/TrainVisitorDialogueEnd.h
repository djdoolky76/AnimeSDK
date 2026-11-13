#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/TaskConfig.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class TrainVisitorDialogueEnd; }

#define RPG_GAMECORE_TRAINVISITORDIALOGUEEND_CTOR_OFFSET UNITYSDK_OFFSET(0x1E314430)
#define RPG_GAMECORE_TRAINVISITORDIALOGUEEND_MGMEGEDLMAK_OFFSET UNITYSDK_OFFSET(0x1E314440)
#define RPG_GAMECORE_TRAINVISITORDIALOGUEEND_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1E314370)

namespace RPG::GameCore
{
	inline static constexpr unsigned int TrainVisitorDialogueEnd_TypeDefinitionIndex = 21983;

	class TrainVisitorDialogueEnd : public ::RPG::GameCore::TaskConfig
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_TRAINVISITORDIALOGUEEND_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::TrainVisitorDialogueEnd* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::TrainVisitorDialogueEnd*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_TRAINVISITORDIALOGUEEND_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

		static ::System::Void MGMEGEDLMAK(::FCOEMCEDLNL* a1, ::RPG::GameCore::TrainVisitorDialogueEnd* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::TrainVisitorDialogueEnd*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_TRAINVISITORDIALOGUEEND_MGMEGEDLMAK_OFFSET))(a1, a2);
		}

	};
}
