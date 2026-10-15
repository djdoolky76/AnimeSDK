#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/JsonConfig.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class FiveDimMiniGameCollectCoinWave; }
namespace System { class String; }

#define RPG_GAMECORE_FIVEDIMMINIGAMECOLLECTCOINWAVE_CTOR_OFFSET UNITYSDK_OFFSET(0x1D6C8190)
#define RPG_GAMECORE_FIVEDIMMINIGAMECOLLECTCOINWAVE_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1D6C7FA0)

namespace RPG::GameCore
{
	class FiveDimMiniGameCollectCoinWave : public ::RPG::GameCore::JsonConfig
	{
	public:
		::Il2CppArray<::System::UInt32>* FireCoinTemplateIndex; // 0x10
		::System::Single CoinSpeed; // 0x18
		::System::Byte _padding0[0x4];
		::System::String* WaveEvent; // 0x20
		::System::Single BeforeFireWaitTime; // 0x28
		::System::Single FinishWaitTime; // 0x2C
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_FIVEDIMMINIGAMECOLLECTCOINWAVE_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::FiveDimMiniGameCollectCoinWave* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::FiveDimMiniGameCollectCoinWave*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_FIVEDIMMINIGAMECOLLECTCOINWAVE_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

	};
}
