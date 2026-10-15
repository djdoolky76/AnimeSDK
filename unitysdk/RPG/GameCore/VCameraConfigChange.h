#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/TaskConfig.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class JsonEnum; }
namespace RPG::GameCore { class TargetEvaluator; }
namespace RPG::GameCore { class VCameraConfig; }
namespace RPG::GameCore { class VCameraConfigChange; }
namespace System { class String; }

#define RPG_GAMECORE_VCAMERACONFIGCHANGE_CTOR_OFFSET UNITYSDK_OFFSET(0x1DC7DF50)
#define RPG_GAMECORE_VCAMERACONFIGCHANGE_MGMEGEDLMAK_OFFSET UNITYSDK_OFFSET(0x1DC7DF60)
#define RPG_GAMECORE_VCAMERACONFIGCHANGE_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1DC7DE00)

namespace RPG::GameCore
{
	class VCameraConfigChange : public ::RPG::GameCore::TaskConfig
	{
	public:
		::System::Boolean WaitCloseupShotFinish; // 0x18
		::System::Byte _padding0[0x7];
		::System::String* CharacterCameraConfigName; // 0x20
		::RPG::GameCore::TargetEvaluator* CharacterCameraTargetType; // 0x28
		::RPG::GameCore::VCameraConfig* CameraConfig; // 0x30
		::System::String* CameraConfigReferenceKey; // 0x38
		::RPG::GameCore::JsonEnum* Tag; // 0x40
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_VCAMERACONFIGCHANGE_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::VCameraConfigChange* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::VCameraConfigChange*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_VCAMERACONFIGCHANGE_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

		static ::System::Void MGMEGEDLMAK(::FCOEMCEDLNL* a1, ::RPG::GameCore::VCameraConfigChange* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::VCameraConfigChange*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_VCAMERACONFIGCHANGE_MGMEGEDLMAK_OFFSET))(a1, a2);
		}

	};
}
