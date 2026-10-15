#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/JsonConfig.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class AvatarPathChangeToTargetConfig; }
namespace System { class String; }

#define RPG_GAMECORE_AVATARPATHCHANGETOTARGETCONFIG_CTOR_OFFSET UNITYSDK_OFFSET(0x1D3EB420)
#define RPG_GAMECORE_AVATARPATHCHANGETOTARGETCONFIG_FROMBINARY_OFFSET UNITYSDK_OFFSET(0x1D3EB220)

namespace RPG::GameCore
{
	inline static constexpr unsigned int AvatarPathChangeToTargetConfig_TypeDefinitionIndex = 24405;

	class AvatarPathChangeToTargetConfig : public ::RPG::GameCore::JsonConfig
	{
	public:
		::System::UInt32 TargetAvatarID; // 0x10
		::System::UInt32 TargetFromMotionID; // 0x14
		::System::UInt32 CurrentToMotionID; // 0x18
		::System::Byte _padding0[0x4];
		::System::String* ChangeEffectPath; // 0x20
		::System::Single SwitchModelTime; // 0x28
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_AVATARPATHCHANGETOTARGETCONFIG_CTOR_OFFSET))(this);
		}

		static ::System::Void FromBinary(::FCOEMCEDLNL* a1, ::RPG::GameCore::AvatarPathChangeToTargetConfig* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::AvatarPathChangeToTargetConfig*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_AVATARPATHCHANGETOTARGETCONFIG_FROMBINARY_OFFSET))(a1, a2);
		}

	};
}
