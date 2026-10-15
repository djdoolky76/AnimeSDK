#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/SOTaskConfig.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class SO_PlayFreeStyle; }
namespace System { class String; }

#define RPG_GAMECORE_SO_PLAYFREESTYLE_CTOR_OFFSET UNITYSDK_OFFSET(0x1DA701F0)
#define RPG_GAMECORE_SO_PLAYFREESTYLE_MGMEGEDLMAK_OFFSET UNITYSDK_OFFSET(0x1DA70200)
#define RPG_GAMECORE_SO_PLAYFREESTYLE_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1DA70D30)

namespace RPG::GameCore
{
	inline static constexpr unsigned int SO_PlayFreeStyle_TypeDefinitionIndex = 20060;

	class SO_PlayFreeStyle : public ::RPG::GameCore::SOTaskConfig
	{
	public:
		::System::String* StoryAvatarID; // 0x18
		::System::UInt32 StoryMotionID; // 0x20
		::System::Boolean ForceStart; // 0x24
		::System::Byte _padding0[0x3];
		::System::Single NormalizedTimeWait; // 0x28
		::System::Single NormalizedTimeStart; // 0x2C
		::System::Single NormalizedTransitionDuration; // 0x30
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_SO_PLAYFREESTYLE_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::SO_PlayFreeStyle* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::SO_PlayFreeStyle*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_SO_PLAYFREESTYLE_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

		static ::System::Void MGMEGEDLMAK(::FCOEMCEDLNL* a1, ::RPG::GameCore::SO_PlayFreeStyle* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::SO_PlayFreeStyle*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_SO_PLAYFREESTYLE_MGMEGEDLMAK_OFFSET))(a1, a2);
		}

	};
}
