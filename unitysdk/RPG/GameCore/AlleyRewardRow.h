#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class AlleyRewardRow; }

#define RPG_GAMECORE_ALLEYREWARDROW_CTOR_OFFSET UNITYSDK_OFFSET(0x1D3EABF0)
#define RPG_GAMECORE_ALLEYREWARDROW_FROMBINARY_OFFSET UNITYSDK_OFFSET(0x1D3EA640)

namespace RPG::GameCore
{
	class AlleyRewardRow : public ::System::Object
	{
	public:
		::System::UInt32 RewardID; // 0x10
		::System::UInt32 Level; // 0x14
		::System::UInt32 NumTarget; // 0x18
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ALLEYREWARDROW_CTOR_OFFSET))(this);
		}

		static ::System::Void FromBinary(::FCOEMCEDLNL* a1, ::RPG::GameCore::AlleyRewardRow* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::AlleyRewardRow*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ALLEYREWARDROW_FROMBINARY_OFFSET))(a1, a2);
		}

	};
}
