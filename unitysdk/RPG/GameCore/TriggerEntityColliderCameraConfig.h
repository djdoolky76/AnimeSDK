#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/TaskConfig.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class TargetEvaluator; }
namespace RPG::GameCore { class TriggerEntityColliderCameraConfig; }
namespace System { class String; }

#define RPG_GAMECORE_TRIGGERENTITYCOLLIDERCAMERACONFIG_CTOR_OFFSET UNITYSDK_OFFSET(0x1DC52360)
#define RPG_GAMECORE_TRIGGERENTITYCOLLIDERCAMERACONFIG_MGMEGEDLMAK_OFFSET UNITYSDK_OFFSET(0x1DC52370)
#define RPG_GAMECORE_TRIGGERENTITYCOLLIDERCAMERACONFIG_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1DC52330)

namespace RPG::GameCore
{
	inline static constexpr unsigned int TriggerEntityColliderCameraConfig_TypeDefinitionIndex = 23455;

	class TriggerEntityColliderCameraConfig : public ::RPG::GameCore::TaskConfig
	{
	public:
		::RPG::GameCore::TargetEvaluator* TargetType; // 0x18
		::System::String* KeyName; // 0x20
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_TRIGGERENTITYCOLLIDERCAMERACONFIG_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::TriggerEntityColliderCameraConfig* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::TriggerEntityColliderCameraConfig*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_TRIGGERENTITYCOLLIDERCAMERACONFIG_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

		static ::System::Void MGMEGEDLMAK(::FCOEMCEDLNL* a1, ::RPG::GameCore::TriggerEntityColliderCameraConfig* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::TriggerEntityColliderCameraConfig*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_TRIGGERENTITYCOLLIDERCAMERACONFIG_MGMEGEDLMAK_OFFSET))(a1, a2);
		}

	};
}
