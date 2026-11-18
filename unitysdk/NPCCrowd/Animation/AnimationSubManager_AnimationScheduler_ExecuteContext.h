#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/ReadOnlySpan_1_F48FB86071006F3E.h"
#include "unitysdk/System/Span_1_9011FAD97750D224.h"
#include "unitysdk/System/ValueType.h"
#include "unitysdk/Unity/Jobs/JobHandle.h"

namespace NPCCrowd::Animation { class AnimationSubManager; }
namespace System { class Object; }

namespace NPCCrowd::Animation
{
	inline static constexpr unsigned int AnimationSubManager_AnimationScheduler_ExecuteContext_TypeDefinitionIndex = 81192;

	struct alignas(8) AnimationSubManager_AnimationScheduler_ExecuteContext
	{
		::NPCCrowd::Animation::AnimationSubManager* Owner; // 0x10
		::System::Span_1_9011FAD97750D224<::Unity::Jobs::JobHandle> JobHandles; // 0x18
		::System::Byte _padding0[0x10];
		::System::ReadOnlySpan_1_F48FB86071006F3E<::System::Object*> Processors; // 0x30
	};
}
