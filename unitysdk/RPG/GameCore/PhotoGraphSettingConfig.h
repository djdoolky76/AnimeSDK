#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/EmotionID.h"
#include "unitysdk/RPG/GameCore/JsonConfig.h"
#include "unitysdk/RPG/GameCore/PhotoGraphFuncBtnType.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class MazeDragCameraConfig; }
namespace RPG::GameCore { class PhotoGraphCommonConfig; }
namespace RPG::GameCore { class PhotoGraphFreeStyleDataConfig; }
namespace RPG::GameCore { class PhotoGraphRoamingConfig; }
namespace RPG::GameCore { class PhotoGraphSettingConfig; }
namespace RPG::GameCore { class PhotoGraphSettingDataConfig; }
namespace RPG::GameCore { class PhotoGraphStealConfig; }
namespace RPG::GameCore { class PhotoGraphWaterMarkConfig; }
namespace RPG::GameCore { class PhotographToastTemplate; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define RPG_GAMECORE_PHOTOGRAPHSETTINGCONFIG_CTOR_OFFSET UNITYSDK_OFFSET(0x1D912AF0)
#define RPG_GAMECORE_PHOTOGRAPHSETTINGCONFIG_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1D912780)

namespace RPG::GameCore
{
	class PhotoGraphSettingConfig : public ::RPG::GameCore::JsonConfig
	{
	public:
		::RPG::GameCore::PhotoGraphCommonConfig* CommonConfig; // 0x10
		::Il2CppArray<::RPG::GameCore::PhotoGraphSettingDataConfig*>* SettingDatas; // 0x18
		::Il2CppArray<::RPG::GameCore::PhotoGraphRoamingConfig*>* RoamingConfigs; // 0x20
		::RPG::GameCore::PhotoGraphWaterMarkConfig* WaterMarkConfig; // 0x28
		::RPG::GameCore::PhotoGraphFreeStyleDataConfig* DefaultFreeStyleConfig; // 0x30
		::RPG::GameCore::EmotionID DefaultEmotionConfigID; // 0x38
		::System::Byte _padding0[0x4];
		::RPG::GameCore::PhotoGraphStealConfig* StealConfig; // 0x40
		::System::Boolean DefaultFirstPerson; // 0x48
		::System::Byte _padding1[0x7];
		::System::Collections::Generic::Dictionary_2<::System::String*, ::RPG::GameCore::PhotographToastTemplate*>* PhotographToast; // 0x50
		::System::Collections::Generic::Dictionary_2<::RPG::GameCore::PhotoGraphFuncBtnType, ::RPG::GameCore::PhotographToastTemplate*>* PhotographDefaultToast; // 0x58
		::RPG::GameCore::MazeDragCameraConfig* PhotographSwipeCameraConfig; // 0x60
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_PHOTOGRAPHSETTINGCONFIG_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::PhotoGraphSettingConfig* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::PhotoGraphSettingConfig*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_PHOTOGRAPHSETTINGCONFIG_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

	};
}
