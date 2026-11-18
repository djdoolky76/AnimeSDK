#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/Unity/Jobs/JobHandle.h"

namespace NPCCrowd { class NPCCrowdNativeDataManager; }

#define NPCCROWD_ANIMATION_NPCCROWDNATIVETIMELINEPROCESSOR_EXECUTE_OFFSET UNITYSDK_OFFSET(0x10039E20)
#define NPCCROWD_ANIMATION_NPCCROWDNATIVETIMELINEPROCESSOR_PREPARE_OFFSET UNITYSDK_OFFSET(0x10039C70)
#define NPCCROWD_ANIMATION_NPCCROWDNATIVETIMELINEPROCESSOR__CTOR_OFFSET UNITYSDK_OFFSET(0x1003A000)

namespace NPCCrowd::Animation
{
	inline static constexpr unsigned int NPCCrowdNativeTimelineProcessor_TypeDefinitionIndex = 78251;

	class NPCCrowdNativeTimelineProcessor : public ::System::Object
	{
	public:
		::System::Boolean _previousNativeTimelineActive; // 0x10

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NPCCROWD_ANIMATION_NPCCROWDNATIVETIMELINEPROCESSOR__CTOR_OFFSET))(this);
		}

		::System::Boolean Prepare(::NPCCrowd::NPCCrowdNativeDataManager* manager, ::System::Single deltaTime)
		{
			return ((::System::Boolean(*)(::PVOID, ::NPCCrowd::NPCCrowdNativeDataManager*, ::System::Single))((::PBYTE)hIl2Cpp + NPCCROWD_ANIMATION_NPCCROWDNATIVETIMELINEPROCESSOR_PREPARE_OFFSET))(this, manager, deltaTime);
		}

		::Unity::Jobs::JobHandle Execute(::NPCCrowd::NPCCrowdNativeDataManager* manager, ::System::Single deltaTime, ::Unity::Jobs::JobHandle dependsOn)
		{
			return ((::Unity::Jobs::JobHandle(*)(::PVOID, ::NPCCrowd::NPCCrowdNativeDataManager*, ::System::Single, ::Unity::Jobs::JobHandle))((::PBYTE)hIl2Cpp + NPCCROWD_ANIMATION_NPCCROWDNATIVETIMELINEPROCESSOR_EXECUTE_OFFSET))(this, manager, deltaTime, dependsOn);
		}
	};
}
