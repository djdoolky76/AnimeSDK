#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/JsonConfig.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class ElfWaveConfig; }
namespace System { class String; }

#define RPG_GAMECORE_ELFWAVECONFIG_CTOR_OFFSET UNITYSDK_OFFSET(0x1D639E20)
#define RPG_GAMECORE_ELFWAVECONFIG_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1D639C10)

namespace RPG::GameCore
{
	class ElfWaveConfig : public ::RPG::GameCore::JsonConfig
	{
	public:
		::System::Single Duration; // 0x10
		::System::Single MultipleRatio; // 0x14
		::System::Single AddRatio; // 0x18
		::System::Single NextWaveGapDuration; // 0x1C
		::System::String* NextWaveTip; // 0x20
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ELFWAVECONFIG_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::ElfWaveConfig* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::ElfWaveConfig*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ELFWAVECONFIG_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

	};
}
