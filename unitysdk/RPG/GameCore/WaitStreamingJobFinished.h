#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/TaskConfig.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class WaitStreamingJobFinished; }

#define RPG_GAMECORE_WAITSTREAMINGJOBFINISHED_CTOR_OFFSET UNITYSDK_OFFSET(0x1DCA2780)
#define RPG_GAMECORE_WAITSTREAMINGJOBFINISHED_MGMEGEDLMAK_OFFSET UNITYSDK_OFFSET(0x1DCA2790)
#define RPG_GAMECORE_WAITSTREAMINGJOBFINISHED_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1DCA2750)

namespace RPG::GameCore
{
	class WaitStreamingJobFinished : public ::RPG::GameCore::TaskConfig
	{
	public:
		::System::Boolean StopLoadingTick; // 0x18
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_WAITSTREAMINGJOBFINISHED_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::WaitStreamingJobFinished* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::WaitStreamingJobFinished*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_WAITSTREAMINGJOBFINISHED_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

		static ::System::Void MGMEGEDLMAK(::FCOEMCEDLNL* a1, ::RPG::GameCore::WaitStreamingJobFinished* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::WaitStreamingJobFinished*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_WAITSTREAMINGJOBFINISHED_MGMEGEDLMAK_OFFSET))(a1, a2);
		}

	};
}
