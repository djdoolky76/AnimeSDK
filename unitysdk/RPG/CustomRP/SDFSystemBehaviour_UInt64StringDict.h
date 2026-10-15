#pragma once
#include "unitysdk/unitysdk.h"

#define RPG_CUSTOMRP_SDFSYSTEMBEHAVIOUR_UINT64STRINGDICT_CTOR_OFFSET UNITYSDK_OFFSET(0xE494D10)

namespace RPG::CustomRP
{
	class SDFSystemBehaviour_UInt64StringDict
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CUSTOMRP_SDFSYSTEMBEHAVIOUR_UINT64STRINGDICT_CTOR_OFFSET))(this);
		}

	};
}
