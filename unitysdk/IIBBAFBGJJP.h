#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/System/ValueTuple.h"
namespace System { class Nullable; }

#define IIBBAFBGJJP_CTOR_OFFSET UNITYSDK_OFFSET(0x1CB76C80)

	class IIBBAFBGJJP : public ::System::Object
	{
	public:
		::System::Nullable* GLIIBKFEMFE; // 0x10
		::System::Byte _padding0[0x4];
		::System::Nullable* FDHPGMENKCD; // 0x1C
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + IIBBAFBGJJP_CTOR_OFFSET))(this);
		}

	};
