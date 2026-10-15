#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/TaskConfig.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class LoopWaitServerEraFlipperRegionChange; }

#define RPG_GAMECORE_LOOPWAITSERVERERAFLIPPERREGIONCHANGE_CTOR_OFFSET UNITYSDK_OFFSET(0x1D7F6A30)
#define RPG_GAMECORE_LOOPWAITSERVERERAFLIPPERREGIONCHANGE_MGMEGEDLMAK_OFFSET UNITYSDK_OFFSET(0x1D7F6A40)
#define RPG_GAMECORE_LOOPWAITSERVERERAFLIPPERREGIONCHANGE_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1D7F69F0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int LoopWaitServerEraFlipperRegionChange_TypeDefinitionIndex = 22347;

	class LoopWaitServerEraFlipperRegionChange : public ::RPG::GameCore::TaskConfig
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_LOOPWAITSERVERERAFLIPPERREGIONCHANGE_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::LoopWaitServerEraFlipperRegionChange* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::LoopWaitServerEraFlipperRegionChange*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_LOOPWAITSERVERERAFLIPPERREGIONCHANGE_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

		static ::System::Void MGMEGEDLMAK(::FCOEMCEDLNL* a1, ::RPG::GameCore::LoopWaitServerEraFlipperRegionChange* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::LoopWaitServerEraFlipperRegionChange*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_LOOPWAITSERVERERAFLIPPERREGIONCHANGE_MGMEGEDLMAK_OFFSET))(a1, a2);
		}

	};
}
