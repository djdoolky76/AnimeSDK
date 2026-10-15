#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class WheelSelectConfigRow; }

#define RPG_GAMECORE_WHEELSELECTCONFIGROW_CTOR_OFFSET UNITYSDK_OFFSET(0x1DC79A80)
#define RPG_GAMECORE_WHEELSELECTCONFIGROW_FROMBINARY_OFFSET UNITYSDK_OFFSET(0x1DC79410)

namespace RPG::GameCore
{
	inline static constexpr unsigned int WheelSelectConfigRow_TypeDefinitionIndex = 13321;

	class WheelSelectConfigRow : public ::System::Object
	{
	public:
		::System::UInt32 Order; // 0x10
		::System::UInt32 FunctionHudID; // 0x14
		::System::UInt32 FourSlotOrder; // 0x18
		::System::UInt32 IndexID; // 0x1C
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_WHEELSELECTCONFIGROW_CTOR_OFFSET))(this);
		}

		static ::System::Void FromBinary(::FCOEMCEDLNL* a1, ::RPG::GameCore::WheelSelectConfigRow* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::WheelSelectConfigRow*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_WHEELSELECTCONFIGROW_FROMBINARY_OFFSET))(a1, a2);
		}

	};
}
