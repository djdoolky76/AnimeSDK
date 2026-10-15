#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class OverrideFloorConfigRow; }
namespace System { class String; }

#define RPG_GAMECORE_OVERRIDEFLOORCONFIGROW_CTOR_OFFSET UNITYSDK_OFFSET(0x1D8B9EA0)
#define RPG_GAMECORE_OVERRIDEFLOORCONFIGROW_FROMBINARY_OFFSET UNITYSDK_OFFSET(0x1D8B9CB0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int OverrideFloorConfigRow_TypeDefinitionIndex = 13095;

	class OverrideFloorConfigRow : public ::System::Object
	{
	public:
		::System::String* EnableCondition; // 0x10
		::System::UInt32 DimensionID; // 0x18
		::System::UInt32 ContentID; // 0x1C
		::System::Boolean IsHideInNavMapSubTab; // 0x20
		::System::Byte _padding0[0x3];
		::System::UInt32 FloorID; // 0x24
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_OVERRIDEFLOORCONFIGROW_CTOR_OFFSET))(this);
		}

		static ::System::Void FromBinary(::FCOEMCEDLNL* a1, ::RPG::GameCore::OverrideFloorConfigRow* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::OverrideFloorConfigRow*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_OVERRIDEFLOORCONFIGROW_FROMBINARY_OFFSET))(a1, a2);
		}

	};
}
