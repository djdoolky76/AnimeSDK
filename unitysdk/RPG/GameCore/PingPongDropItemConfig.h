#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/JsonConfig.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class PingPongDropItemConfig; }
namespace RPG::GameCore { class PingPongDropItemInfo; }

#define RPG_GAMECORE_PINGPONGDROPITEMCONFIG_CTOR_OFFSET UNITYSDK_OFFSET(0x1D9154E0)
#define RPG_GAMECORE_PINGPONGDROPITEMCONFIG_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1D915330)

namespace RPG::GameCore
{
	class PingPongDropItemConfig : public ::RPG::GameCore::JsonConfig
	{
	public:
		::System::Single FallSpeed; // 0x10
		::System::Byte _padding0[0x4];
		::Il2CppArray<::System::Int32>* NoDropWeightByBreakUnitNum; // 0x18
		::Il2CppArray<::RPG::GameCore::PingPongDropItemInfo*>* DropItemList; // 0x20
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_PINGPONGDROPITEMCONFIG_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::PingPongDropItemConfig* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::PingPongDropItemConfig*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_PINGPONGDROPITEMCONFIG_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

	};
}
