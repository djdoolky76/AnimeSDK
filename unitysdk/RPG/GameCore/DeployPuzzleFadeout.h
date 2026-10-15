#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/TaskConfig.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class DeployPuzzleFadeout; }
namespace RPG::GameCore { class TargetEvaluator; }
namespace System { class String; }

#define RPG_GAMECORE_DEPLOYPUZZLEFADEOUT_CTOR_OFFSET UNITYSDK_OFFSET(0x1D5FBFA0)
#define RPG_GAMECORE_DEPLOYPUZZLEFADEOUT_MGMEGEDLMAK_OFFSET UNITYSDK_OFFSET(0x1D5FBFE0)
#define RPG_GAMECORE_DEPLOYPUZZLEFADEOUT_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1D5FBF40)

namespace RPG::GameCore
{
	class DeployPuzzleFadeout : public ::RPG::GameCore::TaskConfig
	{
	public:
		::RPG::GameCore::TargetEvaluator* TargetType; // 0x18
		::System::Single LineFadeoutDuration; // 0x20
		::System::Byte _padding0[0x4];
		::System::String* StoneFadeoutTrigger; // 0x28
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_DEPLOYPUZZLEFADEOUT_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::DeployPuzzleFadeout* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::DeployPuzzleFadeout*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_DEPLOYPUZZLEFADEOUT_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

		static ::System::Void MGMEGEDLMAK(::FCOEMCEDLNL* a1, ::RPG::GameCore::DeployPuzzleFadeout* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::DeployPuzzleFadeout*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_DEPLOYPUZZLEFADEOUT_MGMEGEDLMAK_OFFSET))(a1, a2);
		}

	};
}
