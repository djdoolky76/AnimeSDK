#pragma once
#include "unitysdk/unitysdk.h"
namespace System { class String; }

namespace RPG::Client
{
	struct alignas(8) ActivityBenefitLuckyKoiInfo
	{
		::System::String* UidStr; // 0x10
		::System::String* NameStr; // 0x18
		::System::UInt32 HeadIcon; // 0x20
	};
}
