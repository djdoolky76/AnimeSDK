#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/FixPoint.h"
#include "unitysdk/System/Object.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class StanceLevelEffectRow; }

#define RPG_GAMECORE_STANCELEVELEFFECTROW_CTOR_OFFSET UNITYSDK_OFFSET(0x1DB1A570)
#define RPG_GAMECORE_STANCELEVELEFFECTROW_FROMBINARY_OFFSET UNITYSDK_OFFSET(0x1DB19BA0)

namespace RPG::GameCore
{
	class StanceLevelEffectRow : public ::System::Object
	{
	public:
		::System::Int32 ID; // 0x10
		::System::Int32 LevelDifference; // 0x14
		::RPG::GameCore::FixPoint StanceLevelEffect; // 0x18
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_STANCELEVELEFFECTROW_CTOR_OFFSET))(this);
		}

		static ::System::Void FromBinary(::FCOEMCEDLNL* a1, ::RPG::GameCore::StanceLevelEffectRow* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::StanceLevelEffectRow*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_STANCELEVELEFFECTROW_FROMBINARY_OFFSET))(a1, a2);
		}

	};
}
