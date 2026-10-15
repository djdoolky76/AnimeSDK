#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/TaskConfig.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class CakeRaceWaitDragPropByCatRank; }

#define RPG_GAMECORE_CAKERACEWAITDRAGPROPBYCATRANK_CTOR_OFFSET UNITYSDK_OFFSET(0x1D553F60)
#define RPG_GAMECORE_CAKERACEWAITDRAGPROPBYCATRANK_MGMEGEDLMAK_OFFSET UNITYSDK_OFFSET(0x1D553F70)
#define RPG_GAMECORE_CAKERACEWAITDRAGPROPBYCATRANK_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1D553F30)

namespace RPG::GameCore
{
	class CakeRaceWaitDragPropByCatRank : public ::RPG::GameCore::TaskConfig
	{
	public:
		::System::Int32 CatRank; // 0x18
		::System::Int32 Step; // 0x1C
		::System::Single Radius; // 0x20
		::System::Int32 ItemID; // 0x24
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_CAKERACEWAITDRAGPROPBYCATRANK_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::CakeRaceWaitDragPropByCatRank* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::CakeRaceWaitDragPropByCatRank*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_CAKERACEWAITDRAGPROPBYCATRANK_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

		static ::System::Void MGMEGEDLMAK(::FCOEMCEDLNL* a1, ::RPG::GameCore::CakeRaceWaitDragPropByCatRank* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::CakeRaceWaitDragPropByCatRank*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_CAKERACEWAITDRAGPROPBYCATRANK_MGMEGEDLMAK_OFFSET))(a1, a2);
		}

	};
}
