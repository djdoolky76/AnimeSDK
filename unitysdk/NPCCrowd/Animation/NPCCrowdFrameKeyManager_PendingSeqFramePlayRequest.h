#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/NPCCrowd/Animation/NPCCrowdFrameKeyManager_SeqFrameRuntimeKey.h"
#include "unitysdk/System/Object.h"

namespace System { class String; }

#define NPCCROWD_ANIMATION_NPCCROWDFRAMEKEYMANAGER_PENDINGSEQFRAMEPLAYREQUEST__CTOR_OFFSET UNITYSDK_OFFSET(0x10039730)

namespace NPCCrowd::Animation
{
	inline static constexpr unsigned int NPCCrowdFrameKeyManager_PendingSeqFramePlayRequest_TypeDefinitionIndex = 91487;

	class NPCCrowdFrameKeyManager_PendingSeqFramePlayRequest : public ::System::Object
	{
	public:
		::System::String* textureSheetKey; // 0x10
		::System::Single playbackSpeed; // 0x18
		::NPCCrowd::Animation::NPCCrowdFrameKeyManager_SeqFrameRuntimeKey runtimeKey; // 0x1C
		::System::Boolean loop; // 0x28
		::System::Boolean trackRuntimeState; // 0x29
		::System::Byte _padding0[0x2];
		::System::Int32 activeLayer; // 0x2C
		::System::Single playStartTime; // 0x30

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NPCCROWD_ANIMATION_NPCCROWDFRAMEKEYMANAGER_PENDINGSEQFRAMEPLAYREQUEST__CTOR_OFFSET))(this);
		}
	};
}
