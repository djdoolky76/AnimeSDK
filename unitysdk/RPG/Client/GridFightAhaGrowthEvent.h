#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

#define RPG_CLIENT_GRIDFIGHTAHAGROWTHEVENT_CTOR_OFFSET UNITYSDK_OFFSET(0x1C71F530)

namespace RPG::Client
{
	inline static constexpr unsigned int GridFightAhaGrowthEvent_TypeDefinitionIndex = 66778;

	class GridFightAhaGrowthEvent : public ::System::Object
	{
	public:
		::System::UInt32 NewGrowthLevel; // 0x10
		::System::UInt32 UID; // 0x14
		::System::Boolean IsRarityUp; // 0x18
		::System::Byte _padding0[0x3];
		::System::UInt32 PreviousGrowthLevel; // 0x1C
		::System::UInt32 PosIndex; // 0x20
		::System::Int32 BuyIndex; // 0x24
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTAHAGROWTHEVENT_CTOR_OFFSET))(this);
		}

	};
}
