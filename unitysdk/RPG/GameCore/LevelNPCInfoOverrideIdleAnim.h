#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/JsonConfig.h"
#include "unitysdk/RPG/GameCore/LevelNPCUseAnimationType.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class LevelNPCInfoOverrideIdleAnim; }
namespace System { class String; }

#define RPG_GAMECORE_LEVELNPCINFOOVERRIDEIDLEANIM_CTOR_OFFSET UNITYSDK_OFFSET(0x1D7B7FF0)
#define RPG_GAMECORE_LEVELNPCINFOOVERRIDEIDLEANIM_FROMBINARY_OFFSET UNITYSDK_OFFSET(0x1D7B7D60)

namespace RPG::GameCore
{
	inline static constexpr unsigned int LevelNPCInfoOverrideIdleAnim_TypeDefinitionIndex = 17364;

	class LevelNPCInfoOverrideIdleAnim : public ::RPG::GameCore::JsonConfig
	{
	public:
		::RPG::GameCore::LevelNPCUseAnimationType DefaultAnimationType; // 0x10
		::System::Byte _padding0[0x4];
		::System::String* DefaultIdleStateName; // 0x18
		::System::UInt32 DefaultIdleFreeStyleMotionID; // 0x20
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_LEVELNPCINFOOVERRIDEIDLEANIM_CTOR_OFFSET))(this);
		}

		static ::System::Void FromBinary(::FCOEMCEDLNL* a1, ::RPG::GameCore::LevelNPCInfoOverrideIdleAnim* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::LevelNPCInfoOverrideIdleAnim*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_LEVELNPCINFOOVERRIDEIDLEANIM_FROMBINARY_OFFSET))(a1, a2);
		}

	};
}
