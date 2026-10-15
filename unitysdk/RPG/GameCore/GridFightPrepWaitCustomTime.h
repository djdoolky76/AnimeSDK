#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/GridFightPrepWaitCustomTimeType.h"
#include "unitysdk/RPG/GameCore/TaskConfig.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class GridFightPrepWaitCustomTime; }

#define RPG_GAMECORE_GRIDFIGHTPREPWAITCUSTOMTIME_CTOR_OFFSET UNITYSDK_OFFSET(0x1D73B210)
#define RPG_GAMECORE_GRIDFIGHTPREPWAITCUSTOMTIME_MGMEGEDLMAK_OFFSET UNITYSDK_OFFSET(0x1D73B220)
#define RPG_GAMECORE_GRIDFIGHTPREPWAITCUSTOMTIME_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1D73B1E0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int GridFightPrepWaitCustomTime_TypeDefinitionIndex = 19973;

	class GridFightPrepWaitCustomTime : public ::RPG::GameCore::TaskConfig
	{
	public:
		::RPG::GameCore::GridFightPrepWaitCustomTimeType CustomTimeType; // 0x18
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_GRIDFIGHTPREPWAITCUSTOMTIME_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::GridFightPrepWaitCustomTime* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::GridFightPrepWaitCustomTime*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_GRIDFIGHTPREPWAITCUSTOMTIME_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

		static ::System::Void MGMEGEDLMAK(::FCOEMCEDLNL* a1, ::RPG::GameCore::GridFightPrepWaitCustomTime* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::GridFightPrepWaitCustomTime*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_GRIDFIGHTPREPWAITCUSTOMTIME_MGMEGEDLMAK_OFFSET))(a1, a2);
		}

	};
}
