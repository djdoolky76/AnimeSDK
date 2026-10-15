#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class ActivityFeverTimeUnderlineRow; }

#define RPG_GAMECORE_ACTIVITYFEVERTIMEUNDERLINEROW_CTOR_OFFSET UNITYSDK_OFFSET(0x1D3623E0)
#define RPG_GAMECORE_ACTIVITYFEVERTIMEUNDERLINEROW_FROMBINARY_OFFSET UNITYSDK_OFFSET(0x1D361E00)

namespace RPG::GameCore
{
	class ActivityFeverTimeUnderlineRow : public ::System::Object
	{
	public:
		::System::UInt32 AvailableBuffID; // 0x10
		::System::UInt32 ExtraEffectID; // 0x14
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ACTIVITYFEVERTIMEUNDERLINEROW_CTOR_OFFSET))(this);
		}

		static ::System::Void FromBinary(::FCOEMCEDLNL* a1, ::RPG::GameCore::ActivityFeverTimeUnderlineRow* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::ActivityFeverTimeUnderlineRow*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ACTIVITYFEVERTIMEUNDERLINEROW_FROMBINARY_OFFSET))(a1, a2);
		}

	};
}
