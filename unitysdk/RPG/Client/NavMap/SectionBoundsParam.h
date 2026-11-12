#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

#define RPG_CLIENT_NAVMAP_SECTIONBOUNDSPARAM_CTOR_OFFSET UNITYSDK_OFFSET(0xE402C70)

namespace RPG::Client::NavMap
{
	inline static constexpr unsigned int SectionBoundsParam_TypeDefinitionIndex = 76679;

	class SectionBoundsParam : public ::System::Object
	{
	public:
		::System::Single MinX; // 0x10
		::System::Single MaxY; // 0x14
		::System::Single MinY; // 0x18
		::System::Single MaxX; // 0x1C
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_NAVMAP_SECTIONBOUNDSPARAM_CTOR_OFFSET))(this);
		}

	};
}
