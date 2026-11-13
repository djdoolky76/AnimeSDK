#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/JsonConfig.h"
#include "unitysdk/RPG/GameCore/LittleGameSandboxStreamingAnchorMode.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class LittleGameSandboxStreamingConfig; }
namespace System { class String; }

#define RPG_GAMECORE_LITTLEGAMESANDBOXSTREAMINGCONFIG_CTOR_OFFSET UNITYSDK_OFFSET(0x1F2689B0)
#define RPG_GAMECORE_LITTLEGAMESANDBOXSTREAMINGCONFIG_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1F268770)

namespace RPG::GameCore
{
	inline static constexpr unsigned int LittleGameSandboxStreamingConfig_TypeDefinitionIndex = 19099;

	class LittleGameSandboxStreamingConfig : public ::RPG::GameCore::JsonConfig
	{
	public:
		::System::Boolean WaitForStreaming; // 0x10
		::System::Boolean LockMainStreamingSource; // 0x11
		::System::Byte _padding0[0x2];
		::RPG::GameCore::LittleGameSandboxStreamingAnchorMode AnchorMode; // 0x14
		::System::String* AnchorName; // 0x18
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_LITTLEGAMESANDBOXSTREAMINGCONFIG_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::LittleGameSandboxStreamingConfig* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::LittleGameSandboxStreamingConfig*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_LITTLEGAMESANDBOXSTREAMINGCONFIG_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

	};
}
