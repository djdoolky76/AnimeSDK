#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/ValueType.h"

#define ABC_CORE_CHESSSEED_GENERATE_OFFSET UNITYSDK_OFFSET(0x2366D00)
#define ABC_CORE_CHESSSEED_ISVALID_OFFSET UNITYSDK_OFFSET(0x2366DB0)

namespace ABC::Core
{
	inline static constexpr unsigned int ChessSeed_TypeDefinitionIndex = 3364;

	struct alignas(4) ChessSeed
	{
		::System::UInt32 Seed1; // 0x10
		::System::UInt32 Seed2; // 0x14
		::System::UInt32 Seed3; // 0x18
		::System::UInt32 Seed4; // 0x1C

		/*
		static ::ABC::Core::ChessSeed Generate(::System::UInt32 B8644464F1086551, ::System::UInt32 B07B620ADDD2FFAC, ::System::UInt32 B1B6082F35873EA6, ::System::UInt32 ED09066BF7289841)
		{
			return ((::ABC::Core::ChessSeed(*)(::System::UInt32, ::System::UInt32, ::System::UInt32, ::System::UInt32))((::PBYTE)hIl2Cpp + ABC_CORE_CHESSSEED_GENERATE_OFFSET))(B8644464F1086551, B07B620ADDD2FFAC, B1B6082F35873EA6, ED09066BF7289841);
		}
		*/

		::System::Boolean IsValid()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + ABC_CORE_CHESSSEED_ISVALID_OFFSET))(this);
		}
	};
}
