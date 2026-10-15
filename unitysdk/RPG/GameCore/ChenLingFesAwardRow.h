#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class ChenLingFesAwardRow; }

#define RPG_GAMECORE_CHENLINGFESAWARDROW_CTOR_OFFSET UNITYSDK_OFFSET(0x1D58D340)
#define RPG_GAMECORE_CHENLINGFESAWARDROW_FROMBINARY_OFFSET UNITYSDK_OFFSET(0x1D58D150)

namespace RPG::GameCore
{
	class ChenLingFesAwardRow : public ::System::Object
	{
	public:
		::System::UInt32 ExtendNum; // 0x10
		::System::UInt32 RerollNum; // 0x14
		::System::UInt32 ID; // 0x18
		::System::UInt32 AdjustNum; // 0x1C
		::System::UInt32 ExtraItem; // 0x20
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_CHENLINGFESAWARDROW_CTOR_OFFSET))(this);
		}

		static ::System::Void FromBinary(::FCOEMCEDLNL* a1, ::RPG::GameCore::ChenLingFesAwardRow* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::ChenLingFesAwardRow*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_CHENLINGFESAWARDROW_FROMBINARY_OFFSET))(a1, a2);
		}

	};
}
