#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/TaskConfig.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class DynamicFloat; }
namespace RPG::GameCore { class InfiniteWaveAddCurWaveMaxCount; }

#define RPG_GAMECORE_INFINITEWAVEADDCURWAVEMAXCOUNT_CTOR_OFFSET UNITYSDK_OFFSET(0x1D786A70)
#define RPG_GAMECORE_INFINITEWAVEADDCURWAVEMAXCOUNT_MGMEGEDLMAK_OFFSET UNITYSDK_OFFSET(0x1D786A80)
#define RPG_GAMECORE_INFINITEWAVEADDCURWAVEMAXCOUNT_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1D786A40)

namespace RPG::GameCore
{
	class InfiniteWaveAddCurWaveMaxCount : public ::RPG::GameCore::TaskConfig
	{
	public:
		::RPG::GameCore::DynamicFloat* AddDelta; // 0x18
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_INFINITEWAVEADDCURWAVEMAXCOUNT_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::InfiniteWaveAddCurWaveMaxCount* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::InfiniteWaveAddCurWaveMaxCount*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_INFINITEWAVEADDCURWAVEMAXCOUNT_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

		static ::System::Void MGMEGEDLMAK(::FCOEMCEDLNL* a1, ::RPG::GameCore::InfiniteWaveAddCurWaveMaxCount* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::InfiniteWaveAddCurWaveMaxCount*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_INFINITEWAVEADDCURWAVEMAXCOUNT_MGMEGEDLMAK_OFFSET))(a1, a2);
		}

	};
}
