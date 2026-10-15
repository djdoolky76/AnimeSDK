#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/JsonConfig.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class TrackNpcPerceiveValueConfig; }

#define RPG_GAMECORE_TRACKNPCPERCEIVEVALUECONFIG_CTOR_OFFSET UNITYSDK_OFFSET(0x1DC2A240)
#define RPG_GAMECORE_TRACKNPCPERCEIVEVALUECONFIG_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1DC2A040)

namespace RPG::GameCore
{
	inline static constexpr unsigned int TrackNpcPerceiveValueConfig_TypeDefinitionIndex = 22177;

	class TrackNpcPerceiveValueConfig : public ::RPG::GameCore::JsonConfig
	{
	public:
		::System::Single CrouchDelta; // 0x10
		::System::Single StandDelta; // 0x14
		::System::Single WalkDelta; // 0x18
		::System::Single RunDelta; // 0x1C
		::System::Single FastRunDelta; // 0x20
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_TRACKNPCPERCEIVEVALUECONFIG_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::TrackNpcPerceiveValueConfig* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::TrackNpcPerceiveValueConfig*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_TRACKNPCPERCEIVEVALUECONFIG_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

	};
}
