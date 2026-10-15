#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/JsonConfig.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class FiveDimAudioConfig; }
namespace RPG::GameCore { class FiveDimEmotionConfig; }
namespace RPG::GameCore { class FiveDimRTPCConfig; }
namespace System { class String; }

#define RPG_GAMECORE_FIVEDIMAUDIOCONFIG_CTOR_OFFSET UNITYSDK_OFFSET(0x1D681DF0)
#define RPG_GAMECORE_FIVEDIMAUDIOCONFIG_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1D681980)

namespace RPG::GameCore
{
	inline static constexpr unsigned int FiveDimAudioConfig_TypeDefinitionIndex = 16712;

	class FiveDimAudioConfig : public ::RPG::GameCore::JsonConfig
	{
	public:
		::System::String* GameStateGroup; // 0x10
		::System::String* InGameState; // 0x18
		::System::String* OutGameState; // 0x20
		::System::String* EventOnEnter; // 0x28
		::System::String* EventOnExit; // 0x30
		::System::String* EventOnReborn; // 0x38
		::System::String* EventOnMusicFallFaceDirectionChange; // 0x40
		::System::Single ListenerMaxDistance; // 0x48
		::System::Byte _padding0[0x4];
		::Il2CppArray<::RPG::GameCore::FiveDimRTPCConfig*>* RTPCConfigs; // 0x50
		::Il2CppArray<::RPG::GameCore::FiveDimEmotionConfig*>* ChenLingEmotionConfigs; // 0x58
		::System::String* WaterReflection_WaterInEvent; // 0x60
		::System::String* WaterReflection_WaterOutEvent; // 0x68
		::System::String* EnterGravityFieldRingEvent; // 0x70
		::System::String* ExitGravityFieldRingEvent; // 0x78
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_FIVEDIMAUDIOCONFIG_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::FiveDimAudioConfig* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::FiveDimAudioConfig*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_FIVEDIMAUDIOCONFIG_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

	};
}
