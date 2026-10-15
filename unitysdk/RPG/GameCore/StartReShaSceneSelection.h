#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/TaskConfig.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class DynamicString; }
namespace RPG::GameCore { class StartReShaSceneSelection; }
namespace RPG::GameCore { class TaskConfig; }

#define RPG_GAMECORE_STARTRESHASCENESELECTION_CTOR_OFFSET UNITYSDK_OFFSET(0x1DB1DF80)
#define RPG_GAMECORE_STARTRESHASCENESELECTION_MGMEGEDLMAK_OFFSET UNITYSDK_OFFSET(0x1DB1DF90)
#define RPG_GAMECORE_STARTRESHASCENESELECTION_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1DB1DF50)

namespace RPG::GameCore
{
	class StartReShaSceneSelection : public ::RPG::GameCore::TaskConfig
	{
	public:
		::RPG::GameCore::DynamicString* CameraAnchor; // 0x18
		::Il2CppArray<::RPG::GameCore::TaskConfig*>* OnConfirm; // 0x20
		::Il2CppArray<::RPG::GameCore::TaskConfig*>* OnReturn; // 0x28
		::RPG::GameCore::DynamicString* PlanetDisplayID; // 0x30
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_STARTRESHASCENESELECTION_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::StartReShaSceneSelection* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::StartReShaSceneSelection*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_STARTRESHASCENESELECTION_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

		static ::System::Void MGMEGEDLMAK(::FCOEMCEDLNL* a1, ::RPG::GameCore::StartReShaSceneSelection* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::StartReShaSceneSelection*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_STARTRESHASCENESELECTION_MGMEGEDLMAK_OFFSET))(a1, a2);
		}

	};
}
