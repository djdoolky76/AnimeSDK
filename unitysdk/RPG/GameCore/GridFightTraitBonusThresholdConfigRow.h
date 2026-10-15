#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class GridFightTraitBonusThresholdConfigRow; }
namespace System { class String; }

#define RPG_GAMECORE_GRIDFIGHTTRAITBONUSTHRESHOLDCONFIGROW_CTOR_OFFSET UNITYSDK_OFFSET(0x1D7470D0)
#define RPG_GAMECORE_GRIDFIGHTTRAITBONUSTHRESHOLDCONFIGROW_FROMBINARY_OFFSET UNITYSDK_OFFSET(0x1D746F60)

namespace RPG::GameCore
{
	class GridFightTraitBonusThresholdConfigRow : public ::System::Object
	{
	public:
		::System::String* IconPath; // 0x10
		::System::UInt32 ID; // 0x18
		::System::UInt32 Level; // 0x1C
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_GRIDFIGHTTRAITBONUSTHRESHOLDCONFIGROW_CTOR_OFFSET))(this);
		}

		static ::System::Void FromBinary(::FCOEMCEDLNL* a1, ::RPG::GameCore::GridFightTraitBonusThresholdConfigRow* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::GridFightTraitBonusThresholdConfigRow*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_GRIDFIGHTTRAITBONUSTHRESHOLDCONFIGROW_FROMBINARY_OFFSET))(a1, a2);
		}

	};
}
