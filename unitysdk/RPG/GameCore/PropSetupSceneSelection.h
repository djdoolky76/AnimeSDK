#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/TaskConfig.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class PropSetupSceneSelection; }
namespace RPG::GameCore { class TargetEvaluator; }
namespace RPG::GameCore { class TaskConfig; }

#define RPG_GAMECORE_PROPSETUPSCENESELECTION_CTOR_OFFSET UNITYSDK_OFFSET(0x1D9556A0)
#define RPG_GAMECORE_PROPSETUPSCENESELECTION_MGMEGEDLMAK_OFFSET UNITYSDK_OFFSET(0x1D9556D0)
#define RPG_GAMECORE_PROPSETUPSCENESELECTION_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1D955650)

namespace RPG::GameCore
{
	class PropSetupSceneSelection : public ::RPG::GameCore::TaskConfig
	{
	public:
		::RPG::GameCore::TargetEvaluator* TargetType; // 0x18
		::System::Boolean DisableSelect; // 0x20
		::System::Byte _padding0[0x7];
		::Il2CppArray<::RPG::GameCore::TaskConfig*>* OnSelect; // 0x28
		::Il2CppArray<::RPG::GameCore::TaskConfig*>* OnUnselect; // 0x30
		::Il2CppArray<::RPG::GameCore::TaskConfig*>* OnClick; // 0x38
		::Il2CppArray<::RPG::GameCore::TaskConfig*>* OnDisableClick; // 0x40
		::Il2CppArray<::RPG::GameCore::TaskConfig*>* OnEnterHover; // 0x48
		::Il2CppArray<::RPG::GameCore::TaskConfig*>* OnExitHover; // 0x50
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_PROPSETUPSCENESELECTION_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::PropSetupSceneSelection* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::PropSetupSceneSelection*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_PROPSETUPSCENESELECTION_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

		static ::System::Void MGMEGEDLMAK(::FCOEMCEDLNL* a1, ::RPG::GameCore::PropSetupSceneSelection* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::PropSetupSceneSelection*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_PROPSETUPSCENESELECTION_MGMEGEDLMAK_OFFSET))(a1, a2);
		}

	};
}
