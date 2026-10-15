#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class IdleLiveTeamSlotLevelLimitRow; }

#define RPG_GAMECORE_IDLELIVETEAMSLOTLEVELLIMITROW_CTOR_OFFSET UNITYSDK_OFFSET(0x1D780DB0)
#define RPG_GAMECORE_IDLELIVETEAMSLOTLEVELLIMITROW_FROMBINARY_OFFSET UNITYSDK_OFFSET(0x1D780C90)

namespace RPG::GameCore
{
	inline static constexpr unsigned int IdleLiveTeamSlotLevelLimitRow_TypeDefinitionIndex = 11720;

	class IdleLiveTeamSlotLevelLimitRow : public ::System::Object
	{
	public:
		::System::UInt32 LevelLimit; // 0x10
		::System::UInt32 UnlockID; // 0x14
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_IDLELIVETEAMSLOTLEVELLIMITROW_CTOR_OFFSET))(this);
		}

		static ::System::Void FromBinary(::FCOEMCEDLNL* a1, ::RPG::GameCore::IdleLiveTeamSlotLevelLimitRow* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::IdleLiveTeamSlotLevelLimitRow*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_IDLELIVETEAMSLOTLEVELLIMITROW_FROMBINARY_OFFSET))(a1, a2);
		}

	};
}
