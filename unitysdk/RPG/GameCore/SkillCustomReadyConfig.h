#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/JsonConfig.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class PredicateConfig; }
namespace RPG::GameCore { class SkillCustomFormationConfig; }
namespace RPG::GameCore { class SkillCustomReadyConfig; }
namespace RPG::GameCore { class VCameraConfig; }
namespace System { class String; }

#define RPG_GAMECORE_SKILLCUSTOMREADYCONFIG_CTOR_OFFSET UNITYSDK_OFFSET(0x1DAEF100)
#define RPG_GAMECORE_SKILLCUSTOMREADYCONFIG_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1DAEEE30)

namespace RPG::GameCore
{
	inline static constexpr unsigned int SkillCustomReadyConfig_TypeDefinitionIndex = 18185;

	class SkillCustomReadyConfig : public ::RPG::GameCore::JsonConfig
	{
	public:
		::RPG::GameCore::PredicateConfig* Condition; // 0x10
		::System::Int32 AutoSelectPriority; // 0x18
		::System::Boolean OverrideCamera; // 0x1C
		::System::Byte _padding0[0x3];
		::RPG::GameCore::VCameraConfig* CameraConfig; // 0x20
		::RPG::GameCore::VCameraConfig* CameraConfigAdded; // 0x28
		::System::String* CameraConfigAddedReferenceKey; // 0x30
		::System::String* CameraConfigReferenceKey; // 0x38
		::System::String* ReadyAnimState; // 0x40
		::RPG::GameCore::SkillCustomFormationConfig* CustomFormationConfig; // 0x48
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_SKILLCUSTOMREADYCONFIG_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::SkillCustomReadyConfig* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::SkillCustomReadyConfig*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_SKILLCUSTOMREADYCONFIG_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

	};
}
