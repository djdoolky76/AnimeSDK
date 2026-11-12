#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
namespace RPG::GameCore { class GridFightScoreRewardConfigRow; }

#define RPG_CLIENT_GRIDFIGHTWEEKLYSCORE___C__DISPLAYCLASS15_0_CTOR_OFFSET UNITYSDK_OFFSET(0xDD0C6E0)
#define RPG_CLIENT_GRIDFIGHTWEEKLYSCORE___C__DISPLAYCLASS15_0__CHECKRANKREWARDCANBEDESTROY_B__0_OFFSET UNITYSDK_OFFSET(0xDD0CFB0)

namespace RPG::Client
{
	inline static constexpr unsigned int GridFightWeeklyScore___c__DisplayClass15_0_TypeDefinitionIndex = 67442;

	class GridFightWeeklyScore___c__DisplayClass15_0 : public ::System::Object
	{
	public:
		::System::UInt32 rank; // 0x10
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTWEEKLYSCORE___C__DISPLAYCLASS15_0_CTOR_OFFSET))(this);
		}

		::System::Boolean _CheckRankRewardCanBeDestroy_b__0(::RPG::GameCore::GridFightScoreRewardConfigRow* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::RPG::GameCore::GridFightScoreRewardConfigRow*))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTWEEKLYSCORE___C__DISPLAYCLASS15_0__CHECKRANKREWARDCANBEDESTROY_B__0_OFFSET))(this, a1);
		}

	};
}
