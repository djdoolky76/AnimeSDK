#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/JsonConfig.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class PhotoGraphControlConfig; }
namespace RPG::GameCore { class PhotoGraphFindNpcConfig; }
namespace RPG::GameCore { class PhotoGraphHideEntityConfig; }
namespace RPG::GameCore { class PhotoGraphModeExtraConfigSetting; }
namespace RPG::GameCore { class PhotoGraphSetUniqueNameConfig; }
namespace RPG::GameCore { class SimpleFreeStyleConfig; }
namespace RPG::GameCore { class TargetEvaluator; }

#define RPG_GAMECORE_PHOTOGRAPHMODEEXTRACONFIGSETTING_CTOR_OFFSET UNITYSDK_OFFSET(0x1D911A10)
#define RPG_GAMECORE_PHOTOGRAPHMODEEXTRACONFIGSETTING_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1D9116C0)

namespace RPG::GameCore
{
	class PhotoGraphModeExtraConfigSetting : public ::RPG::GameCore::JsonConfig
	{
	public:
		::RPG::GameCore::PhotoGraphFindNpcConfig* ShowNpc; // 0x10
		::RPG::GameCore::PhotoGraphSetUniqueNameConfig* SetEntityUniqueName; // 0x18
		::RPG::GameCore::PhotoGraphHideEntityConfig* HideEntityConfig; // 0x20
		::Il2CppArray<::RPG::GameCore::SimpleFreeStyleConfig*>* FreeStyleConfig; // 0x28
		::RPG::GameCore::TargetEvaluator* LookAtCameraTarget; // 0x30
		::RPG::GameCore::PhotoGraphControlConfig* PlayerControlSetting; // 0x38
		::System::Boolean ShowBubbleTalk; // 0x40
		::System::Byte _padding0[0x3];
		::System::Single AutoExitPreviewDialogTime; // 0x44
		::System::Boolean EnableShotNoneTarget; // 0x48
		::System::Boolean ShotHidePostProcessEffect; // 0x49
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_PHOTOGRAPHMODEEXTRACONFIGSETTING_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::PhotoGraphModeExtraConfigSetting* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::PhotoGraphModeExtraConfigSetting*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_PHOTOGRAPHMODEEXTRACONFIGSETTING_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

	};
}
