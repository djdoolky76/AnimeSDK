#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/TaskConfig.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class DynamicFloat; }
namespace RPG::GameCore { class InfiniteWaveSkipTo; }

#define RPG_GAMECORE_INFINITEWAVESKIPTO_CTOR_OFFSET UNITYSDK_OFFSET(0x1D759720)
#define RPG_GAMECORE_INFINITEWAVESKIPTO_MGMEGEDLMAK_OFFSET UNITYSDK_OFFSET(0x1D759730)
#define RPG_GAMECORE_INFINITEWAVESKIPTO_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1D7596E0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int InfiniteWaveSkipTo_TypeDefinitionIndex = 23698;

	class InfiniteWaveSkipTo : public ::RPG::GameCore::TaskConfig
	{
	public:
		::RPG::GameCore::DynamicFloat* WaveIndex; // 0x18
		::System::Boolean MuteCurrentWave; // 0x20
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_INFINITEWAVESKIPTO_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::InfiniteWaveSkipTo* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::InfiniteWaveSkipTo*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_INFINITEWAVESKIPTO_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

		static ::System::Void MGMEGEDLMAK(::FCOEMCEDLNL* a1, ::RPG::GameCore::InfiniteWaveSkipTo* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::InfiniteWaveSkipTo*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_INFINITEWAVESKIPTO_MGMEGEDLMAK_OFFSET))(a1, a2);
		}

	};
}
