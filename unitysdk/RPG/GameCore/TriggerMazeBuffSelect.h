#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/TaskConfig.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class MazeBuff; }
namespace RPG::GameCore { class TriggerMazeBuffSelect; }
namespace System { class String; }

#define RPG_GAMECORE_TRIGGERMAZEBUFFSELECT_CTOR_OFFSET UNITYSDK_OFFSET(0x1DC273A0)
#define RPG_GAMECORE_TRIGGERMAZEBUFFSELECT_MGMEGEDLMAK_OFFSET UNITYSDK_OFFSET(0x1DC273B0)
#define RPG_GAMECORE_TRIGGERMAZEBUFFSELECT_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1DC27370)

namespace RPG::GameCore
{
	inline static constexpr unsigned int TriggerMazeBuffSelect_TypeDefinitionIndex = 20418;

	class TriggerMazeBuffSelect : public ::RPG::GameCore::TaskConfig
	{
	public:
		::Il2CppArray<::RPG::GameCore::MazeBuff*>* BuffList; // 0x18
		::Il2CppArray<::System::String*>* CustomStringList; // 0x20
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_TRIGGERMAZEBUFFSELECT_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::TriggerMazeBuffSelect* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::TriggerMazeBuffSelect*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_TRIGGERMAZEBUFFSELECT_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

		static ::System::Void MGMEGEDLMAK(::FCOEMCEDLNL* a1, ::RPG::GameCore::TriggerMazeBuffSelect* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::TriggerMazeBuffSelect*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_TRIGGERMAZEBUFFSELECT_MGMEGEDLMAK_OFFSET))(a1, a2);
		}

	};
}
