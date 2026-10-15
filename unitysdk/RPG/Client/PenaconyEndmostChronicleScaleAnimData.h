#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

#define RPG_CLIENT_PENACONYENDMOSTCHRONICLESCALEANIMDATA_CTOR_OFFSET UNITYSDK_OFFSET(0xDA9B340)

namespace RPG::Client
{
	class PenaconyEndmostChronicleScaleAnimData : public ::System::Object
	{
	public:
		::System::Single Time; // 0x10
		::System::Single Scale; // 0x14
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PENACONYENDMOSTCHRONICLESCALEANIMDATA_CTOR_OFFSET))(this);
		}

	};
}
