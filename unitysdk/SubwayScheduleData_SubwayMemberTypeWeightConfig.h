#pragma once
#include "unitysdk/unitysdk.h"
namespace System { class String; }

	struct alignas(8) SubwayScheduleData_SubwayMemberTypeWeightConfig
	{
		::System::String* MemberType; // 0x10
		::System::Single Weight; // 0x18
	};
