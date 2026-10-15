#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/TaskConfig.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class TargetEvaluator; }
namespace RPG::GameCore { class UnloadLittleGameArea; }

#define RPG_GAMECORE_UNLOADLITTLEGAMEAREA_CTOR_OFFSET UNITYSDK_OFFSET(0x1DC78100)
#define RPG_GAMECORE_UNLOADLITTLEGAMEAREA_MGMEGEDLMAK_OFFSET UNITYSDK_OFFSET(0x1DC78130)
#define RPG_GAMECORE_UNLOADLITTLEGAMEAREA_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1DC780B0)

namespace RPG::GameCore
{
	class UnloadLittleGameArea : public ::RPG::GameCore::TaskConfig
	{
	public:
		::RPG::GameCore::TargetEvaluator* TargetType; // 0x18
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_UNLOADLITTLEGAMEAREA_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::UnloadLittleGameArea* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::UnloadLittleGameArea*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_UNLOADLITTLEGAMEAREA_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

		static ::System::Void MGMEGEDLMAK(::FCOEMCEDLNL* a1, ::RPG::GameCore::UnloadLittleGameArea* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::UnloadLittleGameArea*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_UNLOADLITTLEGAMEAREA_MGMEGEDLMAK_OFFSET))(a1, a2);
		}

	};
}
