#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/JsonConfig.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class ElfWaveConfig; }
namespace RPG::GameCore { class ElfWaveCustomerConfig; }

#define RPG_GAMECORE_ELFWAVECUSTOMERCONFIG_CTOR_OFFSET UNITYSDK_OFFSET(0x1D639E30)
#define RPG_GAMECORE_ELFWAVECUSTOMERCONFIG_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1D637F50)

namespace RPG::GameCore
{
	class ElfWaveCustomerConfig : public ::RPG::GameCore::JsonConfig
	{
	public:
		::System::Single PrepareTime; // 0x10
		::System::Single WaveGapDuration; // 0x14
		::System::Single NormalGapDuration; // 0x18
		::System::Single ConnectGapDuration; // 0x1C
		::Il2CppArray<::RPG::GameCore::ElfWaveConfig*>* Waves; // 0x20
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ELFWAVECUSTOMERCONFIG_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::ElfWaveCustomerConfig* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::ElfWaveCustomerConfig*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ELFWAVECUSTOMERCONFIG_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

	};
}
