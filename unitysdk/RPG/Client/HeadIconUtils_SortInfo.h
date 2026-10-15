#pragma once
#include "unitysdk/unitysdk.h"

#define RPG_CLIENT_HEADICONUTILS_SORTINFO_CTOR_OFFSET UNITYSDK_OFFSET(0xE9C20)

namespace RPG::Client
{
	struct alignas(4) HeadIconUtils_SortInfo
	{
		::System::Boolean IsNew; // 0x10
		::System::Byte _padding0[0x3];
		::System::UInt32 SortType; // 0x14
		::System::Void _ctor(::System::Boolean a1, ::System::UInt32 a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_HEADICONUTILS_SORTINFO_CTOR_OFFSET))(this, a1, a2);
		}

	};
}
