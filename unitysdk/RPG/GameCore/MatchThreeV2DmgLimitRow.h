#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class MatchThreeV2DmgLimitRow; }

#define RPG_GAMECORE_MATCHTHREEV2DMGLIMITROW_CTOR_OFFSET UNITYSDK_OFFSET(0x1D85C250)
#define RPG_GAMECORE_MATCHTHREEV2DMGLIMITROW_FROMBINARY_OFFSET UNITYSDK_OFFSET(0x1D85C0E0)

namespace RPG::GameCore
{
	class MatchThreeV2DmgLimitRow : public ::System::Object
	{
	public:
		::System::UInt32 MaxDamage; // 0x10
		::System::UInt32 Round; // 0x14
		::System::UInt32 BasicDamage; // 0x18
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_MATCHTHREEV2DMGLIMITROW_CTOR_OFFSET))(this);
		}

		static ::System::Void FromBinary(::FCOEMCEDLNL* a1, ::RPG::GameCore::MatchThreeV2DmgLimitRow* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::MatchThreeV2DmgLimitRow*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_MATCHTHREEV2DMGLIMITROW_FROMBINARY_OFFSET))(a1, a2);
		}

	};
}
