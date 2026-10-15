#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/DynamicValueContextScope.h"
#include "unitysdk/RPG/GameCore/FixPoint.h"
#include "unitysdk/RPG/GameCore/TaskConfig.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class GetGapSecondsForSyncWithBgm; }
namespace System { class String; }

#define RPG_GAMECORE_GETGAPSECONDSFORSYNCWITHBGM_CTOR_OFFSET UNITYSDK_OFFSET(0x1D71DB40)
#define RPG_GAMECORE_GETGAPSECONDSFORSYNCWITHBGM_MGMEGEDLMAK_OFFSET UNITYSDK_OFFSET(0x1D71DB50)
#define RPG_GAMECORE_GETGAPSECONDSFORSYNCWITHBGM_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1D71DB10)

namespace RPG::GameCore
{
	inline static constexpr unsigned int GetGapSecondsForSyncWithBgm_TypeDefinitionIndex = 22834;

	class GetGapSecondsForSyncWithBgm : public ::RPG::GameCore::TaskConfig
	{
	public:
		::RPG::GameCore::FixPoint SecondsPerBeat; // 0x18
		::RPG::GameCore::FixPoint MaxGapTime; // 0x20
		::RPG::GameCore::FixPoint TimeToSyncBeat; // 0x28
		::RPG::GameCore::DynamicValueContextScope DVContextScope; // 0x30
		::System::Byte _padding0[0x4];
		::System::String* StateDelayDynamicKey; // 0x38
		::System::String* GapTimeDynamicKey; // 0x40
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_GETGAPSECONDSFORSYNCWITHBGM_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::GetGapSecondsForSyncWithBgm* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::GetGapSecondsForSyncWithBgm*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_GETGAPSECONDSFORSYNCWITHBGM_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

		static ::System::Void MGMEGEDLMAK(::FCOEMCEDLNL* a1, ::RPG::GameCore::GetGapSecondsForSyncWithBgm* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::GetGapSecondsForSyncWithBgm*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_GETGAPSECONDSFORSYNCWITHBGM_MGMEGEDLMAK_OFFSET))(a1, a2);
		}

	};
}
