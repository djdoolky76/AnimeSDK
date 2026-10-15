#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/JsonConfig.h"
#include "unitysdk/RPG/GameCore/SubMissionState.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class LittleGameSubMissionCondition; }

#define RPG_GAMECORE_LITTLEGAMESUBMISSIONCONDITION_CTOR_OFFSET UNITYSDK_OFFSET(0x1D7E6EC0)
#define RPG_GAMECORE_LITTLEGAMESUBMISSIONCONDITION_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1D7E6D80)

namespace RPG::GameCore
{
	inline static constexpr unsigned int LittleGameSubMissionCondition_TypeDefinitionIndex = 18866;

	class LittleGameSubMissionCondition : public ::RPG::GameCore::JsonConfig
	{
	public:
		::System::UInt32 SubMissionID; // 0x10
		::RPG::GameCore::SubMissionState SubMissionState; // 0x14
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_LITTLEGAMESUBMISSIONCONDITION_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::LittleGameSubMissionCondition* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::LittleGameSubMissionCondition*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_LITTLEGAMESUBMISSIONCONDITION_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

	};
}
