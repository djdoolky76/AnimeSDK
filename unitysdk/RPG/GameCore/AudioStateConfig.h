#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/JsonConfig.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class AudioStateConfig; }
namespace System { class String; }

#define RPG_GAMECORE_AUDIOSTATECONFIG_CTOR_OFFSET UNITYSDK_OFFSET(0x1D4096F0)
#define RPG_GAMECORE_AUDIOSTATECONFIG_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1D408BF0)

namespace RPG::GameCore
{
	class AudioStateConfig : public ::RPG::GameCore::JsonConfig
	{
	public:
		::System::String* GroupName; // 0x10
		::System::String* StateName; // 0x18
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_AUDIOSTATECONFIG_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::AudioStateConfig* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::AudioStateConfig*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_AUDIOSTATECONFIG_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

	};
}
