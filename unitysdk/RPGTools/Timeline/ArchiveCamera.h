#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPGTools/Timeline/ArchiveAsset.h"

#define RPGTOOLS_TIMELINE_ARCHIVECAMERA_CTOR_OFFSET UNITYSDK_OFFSET(0xF38A970)

namespace RPGTools::Timeline
{
	inline static constexpr unsigned int ArchiveCamera_TypeDefinitionIndex = 49543;

	class ArchiveCamera : public ::RPGTools::Timeline::ArchiveAsset
	{
	public:
		// static const ::System::String* UniqueName; // 0x0
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPGTOOLS_TIMELINE_ARCHIVECAMERA_CTOR_OFFSET))(this);
		}

	};
}
