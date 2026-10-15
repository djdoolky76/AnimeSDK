#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class FiveDimBillboardConfigRow; }
namespace System { class String; }

#define RPG_GAMECORE_FIVEDIMBILLBOARDCONFIGROW_CTOR_OFFSET UNITYSDK_OFFSET(0x1D6B3640)
#define RPG_GAMECORE_FIVEDIMBILLBOARDCONFIGROW_FROMBINARY_OFFSET UNITYSDK_OFFSET(0x1D6B3540)

namespace RPG::GameCore
{
	class FiveDimBillboardConfigRow : public ::System::Object
	{
	public:
		::System::String* BillboardPath; // 0x10
		::System::UInt32 ID; // 0x18
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_FIVEDIMBILLBOARDCONFIGROW_CTOR_OFFSET))(this);
		}

		static ::System::Void FromBinary(::FCOEMCEDLNL* a1, ::RPG::GameCore::FiveDimBillboardConfigRow* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::FiveDimBillboardConfigRow*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_FIVEDIMBILLBOARDCONFIGROW_FROMBINARY_OFFSET))(a1, a2);
		}

	};
}
