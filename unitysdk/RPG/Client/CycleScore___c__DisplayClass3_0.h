#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
namespace RPG::GameCore { class CycleScoreRewardRow; }

#define RPG_CLIENT_CYCLESCORE___C__DISPLAYCLASS3_0_CTOR_OFFSET UNITYSDK_OFFSET(0xD5587F0)
#define RPG_CLIENT_CYCLESCORE___C__DISPLAYCLASS3_0__GETREWARDIDBYRANK_B__0_OFFSET UNITYSDK_OFFSET(0xD559650)

namespace RPG::Client
{
	inline static constexpr unsigned int CycleScore___c__DisplayClass3_0_TypeDefinitionIndex = 64986;

	class CycleScore___c__DisplayClass3_0 : public ::System::Object
	{
	public:
		::System::UInt32 scoreRank; // 0x10
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CYCLESCORE___C__DISPLAYCLASS3_0_CTOR_OFFSET))(this);
		}

		::System::Boolean _GetRewardIDByRank_b__0(::RPG::GameCore::CycleScoreRewardRow* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::RPG::GameCore::CycleScoreRewardRow*))((::PBYTE)hIl2Cpp + RPG_CLIENT_CYCLESCORE___C__DISPLAYCLASS3_0__GETREWARDIDBYRANK_B__0_OFFSET))(this, a1);
		}

	};
}
