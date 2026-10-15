#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class ClockParkAttribute; }

#define RPG_GAMECORE_CLOCKPARKATTRIBUTE_CTOR_OFFSET UNITYSDK_OFFSET(0x1D5B8F60)
#define RPG_GAMECORE_CLOCKPARKATTRIBUTE_FROMBINARY_OFFSET UNITYSDK_OFFSET(0x1D5B8DF0)

namespace RPG::GameCore
{
	class ClockParkAttribute : public ::System::Object
	{
	public:
		::System::UInt32 AttributeA; // 0x10
		::System::UInt32 AttributeB; // 0x14
		::System::UInt32 AttributeC; // 0x18
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_CLOCKPARKATTRIBUTE_CTOR_OFFSET))(this);
		}

		static ::System::Void FromBinary(::FCOEMCEDLNL* a1, ::RPG::GameCore::ClockParkAttribute* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::ClockParkAttribute*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_CLOCKPARKATTRIBUTE_FROMBINARY_OFFSET))(a1, a2);
		}

	};
}
