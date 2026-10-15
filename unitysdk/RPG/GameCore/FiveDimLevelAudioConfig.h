#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/JsonConfig.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class FiveDimLevelAudioConfig; }
namespace System { class String; }

#define RPG_GAMECORE_FIVEDIMLEVELAUDIOCONFIG_CTOR_OFFSET UNITYSDK_OFFSET(0x1D6C5EE0)
#define RPG_GAMECORE_FIVEDIMLEVELAUDIOCONFIG_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1D6C5D00)

namespace RPG::GameCore
{
	inline static constexpr unsigned int FiveDimLevelAudioConfig_TypeDefinitionIndex = 18518;

	class FiveDimLevelAudioConfig : public ::RPG::GameCore::JsonConfig
	{
	public:
		::System::String* EventOnEnter; // 0x10
		::System::String* EventOnExit; // 0x18
		::System::String* InvincibleStateGroup; // 0x20
		::System::String* InvincibleOnState; // 0x28
		::System::String* InvincibleOffState; // 0x30
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_FIVEDIMLEVELAUDIOCONFIG_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::FiveDimLevelAudioConfig* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::FiveDimLevelAudioConfig*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_FIVEDIMLEVELAUDIOCONFIG_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

	};
}
