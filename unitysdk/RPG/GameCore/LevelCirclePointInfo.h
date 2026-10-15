#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/LevelBaseCurvePointInfo.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class LevelCirclePointInfo; }

#define RPG_GAMECORE_LEVELCIRCLEPOINTINFO_CTOR_OFFSET UNITYSDK_OFFSET(0x1D7A66A0)
#define RPG_GAMECORE_LEVELCIRCLEPOINTINFO_FROMBINARYIMPL_OFFSET UNITYSDK_OFFSET(0x1D7A66B0)
#define RPG_GAMECORE_LEVELCIRCLEPOINTINFO_FROMBINARY_OFFSET UNITYSDK_OFFSET(0x1D7A74C0)

namespace RPG::GameCore
{
	class LevelCirclePointInfo : public ::RPG::GameCore::LevelBaseCurvePointInfo
	{
	public:
		::System::Single Angle; // 0x18
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_LEVELCIRCLEPOINTINFO_CTOR_OFFSET))(this);
		}

		static ::System::Void FromBinary(::FCOEMCEDLNL* a1, ::RPG::GameCore::LevelCirclePointInfo* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::LevelCirclePointInfo*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_LEVELCIRCLEPOINTINFO_FROMBINARY_OFFSET))(a1, a2);
		}

		static ::System::Void FromBinaryImpl(::FCOEMCEDLNL* a1, ::RPG::GameCore::LevelCirclePointInfo* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::LevelCirclePointInfo*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_LEVELCIRCLEPOINTINFO_FROMBINARYIMPL_OFFSET))(a1, a2);
		}

	};
}
