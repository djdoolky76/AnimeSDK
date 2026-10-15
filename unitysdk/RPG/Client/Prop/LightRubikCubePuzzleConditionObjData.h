#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

#define RPG_CLIENT_PROP_LIGHTRUBIKCUBEPUZZLECONDITIONOBJDATA_CTOR_OFFSET UNITYSDK_OFFSET(0xDD22DD0)

namespace RPG::Client::Prop
{
	class LightRubikCubePuzzleConditionObjData : public ::System::Object
	{
	public:
		::System::Int32 Color; // 0x10
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_LIGHTRUBIKCUBEPUZZLECONDITIONOBJDATA_CTOR_OFFSET))(this);
		}

	};
}
