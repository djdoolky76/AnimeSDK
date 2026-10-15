#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/TaskConfig.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class LimitFrameMaxTimeStep; }

#define RPG_GAMECORE_LIMITFRAMEMAXTIMESTEP_CTOR_OFFSET UNITYSDK_OFFSET(0x1D7D1340)
#define RPG_GAMECORE_LIMITFRAMEMAXTIMESTEP_MGMEGEDLMAK_OFFSET UNITYSDK_OFFSET(0x1D7D1360)
#define RPG_GAMECORE_LIMITFRAMEMAXTIMESTEP_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1D7D1300)

namespace RPG::GameCore
{
	inline static constexpr unsigned int LimitFrameMaxTimeStep_TypeDefinitionIndex = 20887;

	class LimitFrameMaxTimeStep : public ::RPG::GameCore::TaskConfig
	{
	public:
		::System::Single MaxTimeStep; // 0x18
		::System::Int32 LimitFrames; // 0x1C
		::System::Single LimitTime; // 0x20
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_LIMITFRAMEMAXTIMESTEP_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::LimitFrameMaxTimeStep* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::LimitFrameMaxTimeStep*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_LIMITFRAMEMAXTIMESTEP_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

		static ::System::Void MGMEGEDLMAK(::FCOEMCEDLNL* a1, ::RPG::GameCore::LimitFrameMaxTimeStep* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::LimitFrameMaxTimeStep*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_LIMITFRAMEMAXTIMESTEP_MGMEGEDLMAK_OFFSET))(a1, a2);
		}

	};
}
