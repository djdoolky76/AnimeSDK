#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/JsonConfig.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class AudioRTPCConfig; }
namespace System { class String; }

#define RPG_GAMECORE_AUDIORTPCCONFIG_CTOR_OFFSET UNITYSDK_OFFSET(0x1D409120)
#define RPG_GAMECORE_AUDIORTPCCONFIG_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1D408FF0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int AudioRTPCConfig_TypeDefinitionIndex = 16385;

	class AudioRTPCConfig : public ::RPG::GameCore::JsonConfig
	{
	public:
		::System::String* RTPCName; // 0x10
		::System::Single RTPCValue; // 0x18
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_AUDIORTPCCONFIG_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::AudioRTPCConfig* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::AudioRTPCConfig*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_AUDIORTPCCONFIG_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

	};
}
