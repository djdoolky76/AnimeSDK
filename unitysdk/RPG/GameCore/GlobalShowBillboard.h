#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/TaskConfig.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class GlobalShowBillboard; }

#define RPG_GAMECORE_GLOBALSHOWBILLBOARD_CTOR_OFFSET UNITYSDK_OFFSET(0x1D71FAC0)
#define RPG_GAMECORE_GLOBALSHOWBILLBOARD_MGMEGEDLMAK_OFFSET UNITYSDK_OFFSET(0x1D71FAD0)
#define RPG_GAMECORE_GLOBALSHOWBILLBOARD_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1D71FA90)

namespace RPG::GameCore
{
	class GlobalShowBillboard : public ::RPG::GameCore::TaskConfig
	{
	public:
		::System::Boolean IsShow; // 0x18
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_GLOBALSHOWBILLBOARD_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::GlobalShowBillboard* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::GlobalShowBillboard*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_GLOBALSHOWBILLBOARD_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

		static ::System::Void MGMEGEDLMAK(::FCOEMCEDLNL* a1, ::RPG::GameCore::GlobalShowBillboard* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::GlobalShowBillboard*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_GLOBALSHOWBILLBOARD_MGMEGEDLMAK_OFFSET))(a1, a2);
		}

	};
}
