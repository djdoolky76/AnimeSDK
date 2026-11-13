#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class OfferingTypeConfigRow; }

#define RPG_GAMECORE_OFFERINGTYPECONFIGROW_CTOR_OFFSET UNITYSDK_OFFSET(0x1F132E60)
#define RPG_GAMECORE_OFFERINGTYPECONFIGROW_FROMBINARY_OFFSET UNITYSDK_OFFSET(0x1F132BF0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int OfferingTypeConfigRow_TypeDefinitionIndex = 14448;

	class OfferingTypeConfigRow : public ::System::Object
	{
	public:
		::System::Boolean IsAutoOffer; // 0x10
		::System::Byte _padding0[0x3];
		::System::UInt32 MaxLevel; // 0x14
		::System::UInt32 UnlockID; // 0x18
		::System::UInt32 LongTailLimit; // 0x1C
		::System::UInt32 ItemID; // 0x20
		::System::UInt32 ActivityModuleID; // 0x24
		::System::UInt32 ID; // 0x28
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_OFFERINGTYPECONFIGROW_CTOR_OFFSET))(this);
		}

		static ::System::Void FromBinary(::FCOEMCEDLNL* a1, ::RPG::GameCore::OfferingTypeConfigRow* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::OfferingTypeConfigRow*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_OFFERINGTYPECONFIGROW_FROMBINARY_OFFSET))(a1, a2);
		}

	};
}
