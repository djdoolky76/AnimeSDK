#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

#define RPG_CLIENT_GRASSSETTINGS_CTOR_OFFSET UNITYSDK_OFFSET(0xD0C7FB0)

namespace RPG::Client
{
	inline static constexpr unsigned int GrassSettings_TypeDefinitionIndex = 67937;

	class GrassSettings : public ::System::Object
	{
	public:
		::System::Boolean EnableGrass; // 0x10
		::System::Byte _padding0[0x3];
		::System::Single OverallDensityFactor; // 0x14
		::System::Boolean EnableGrassDensityReduce; // 0x18
		::System::Byte _padding1[0x3];
		::System::Single GrassMaxDistance; // 0x1C
		::System::Single GrassConstantDensityRangeFactor; // 0x20
		::System::Single GrassDensityReduceFactor; // 0x24
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRASSSETTINGS_CTOR_OFFSET))(this);
		}

	};
}
