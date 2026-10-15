#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

#define RPG_CLIENT_CROWDANIMATOR_CLIPDATA_BIHILLILGAF_OFFSET UNITYSDK_OFFSET(0xCBC95A0)
#define RPG_CLIENT_CROWDANIMATOR_CLIPDATA_CTOR_OFFSET UNITYSDK_OFFSET(0xCBC95F0)

namespace RPG::Client::CrowdAnimator
{
	inline static constexpr unsigned int ClipData_TypeDefinitionIndex = 73730;

	class ClipData : public ::System::Object
	{
	public:
		::System::Int32 clipIndex; // 0x10
		::System::Int32 clipStartFrame; // 0x14
		::System::Int32 clipFrameCount; // 0x18
		::System::Single length; // 0x1C
		::System::Int32 isClipLooping; // 0x20
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CROWDANIMATOR_CLIPDATA_CTOR_OFFSET))(this);
		}

		::System::Boolean BIHILLILGAF()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CROWDANIMATOR_CLIPDATA_BIHILLILGAF_OFFSET))(this);
		}

	};
}
