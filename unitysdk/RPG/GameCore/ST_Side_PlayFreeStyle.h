#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/STTaskConfig.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class ST_Side_PlayFreeStyle; }
namespace System { class String; }

#define RPG_GAMECORE_ST_SIDE_PLAYFREESTYLE_CTOR_OFFSET UNITYSDK_OFFSET(0x1DA860B0)
#define RPG_GAMECORE_ST_SIDE_PLAYFREESTYLE_MGMEGEDLMAK_OFFSET UNITYSDK_OFFSET(0x1DA860E0)
#define RPG_GAMECORE_ST_SIDE_PLAYFREESTYLE_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1DA86050)

namespace RPG::GameCore
{
	inline static constexpr unsigned int ST_Side_PlayFreeStyle_TypeDefinitionIndex = 20120;

	class ST_Side_PlayFreeStyle : public ::RPG::GameCore::STTaskConfig
	{
	public:
		::System::String* StoryAvatarID; // 0x18
		::System::UInt32 StoryMotionID; // 0x20
		::System::Boolean ForceStart; // 0x24
		::System::Byte _padding0[0x3];
		::System::Single NormalizedTimeStart; // 0x28
		::System::Single NormalizedTransitionDuration; // 0x2C
		::System::String* LayerName; // 0x30
		::System::Boolean StopOnStateExit; // 0x38
		::System::Byte _padding1[0x3];
		::System::Single StopTransitionTime; // 0x3C
		::System::Boolean OverrideMotionConfig; // 0x40
		::System::Byte _padding2[0x3];
		::System::Single OverrideStartMotionSpeed; // 0x44
		::System::Single OverrideLoopMotionSpeed; // 0x48
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ST_SIDE_PLAYFREESTYLE_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::ST_Side_PlayFreeStyle* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::ST_Side_PlayFreeStyle*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ST_SIDE_PLAYFREESTYLE_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

		static ::System::Void MGMEGEDLMAK(::FCOEMCEDLNL* a1, ::RPG::GameCore::ST_Side_PlayFreeStyle* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::ST_Side_PlayFreeStyle*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ST_SIDE_PLAYFREESTYLE_MGMEGEDLMAK_OFFSET))(a1, a2);
		}

	};
}
