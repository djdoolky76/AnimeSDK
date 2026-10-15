#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/PenaconyEndmostChroniclePerformanceType.h"
#include "unitysdk/RPG/GameCore/TaskConfig.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class PlayPenaconyChroniclePerformance; }

#define RPG_GAMECORE_PLAYPENACONYCHRONICLEPERFORMANCE_CTOR_OFFSET UNITYSDK_OFFSET(0x1D92FC20)
#define RPG_GAMECORE_PLAYPENACONYCHRONICLEPERFORMANCE_MGMEGEDLMAK_OFFSET UNITYSDK_OFFSET(0x1D92FC30)
#define RPG_GAMECORE_PLAYPENACONYCHRONICLEPERFORMANCE_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1D92FBF0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int PlayPenaconyChroniclePerformance_TypeDefinitionIndex = 21830;

	class PlayPenaconyChroniclePerformance : public ::RPG::GameCore::TaskConfig
	{
	public:
		::RPG::GameCore::PenaconyEndmostChroniclePerformanceType PerformanceType; // 0x18
		::System::Byte _padding0[0x4];
		::Il2CppArray<::System::UInt32>* TargetIDs; // 0x20
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_PLAYPENACONYCHRONICLEPERFORMANCE_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::PlayPenaconyChroniclePerformance* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::PlayPenaconyChroniclePerformance*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_PLAYPENACONYCHRONICLEPERFORMANCE_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

		static ::System::Void MGMEGEDLMAK(::FCOEMCEDLNL* a1, ::RPG::GameCore::PlayPenaconyChroniclePerformance* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::PlayPenaconyChroniclePerformance*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_PLAYPENACONYCHRONICLEPERFORMANCE_MGMEGEDLMAK_OFFSET))(a1, a2);
		}

	};
}
