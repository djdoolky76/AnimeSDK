#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/Multithread/SchedulerType.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/Jobs/TransformAccessArray.h"
class KOCDPFMMHIN;

namespace RPG::Client::Multithread
{
	inline static constexpr unsigned int JobParallelForTransformThreadTask_1_TypeDefinitionIndex = 43834;

	template <typename T>
	class JobParallelForTransformThreadTask_1 : public ::System::Object
	{
	public:
		::KOCDPFMMHIN* _OwnerNode_k__BackingField; // 0x0
		::System::Boolean _LockScene; // 0x0
		::System::Boolean _RunInMainThread; // 0x0
		::System::Boolean _Enable; // 0x0
		::UnityEngine::Jobs::TransformAccessArray _TransformArray; // 0x0
		T _data; // 0x0
		::RPG::Client::Multithread::SchedulerType _SchedulerType; // 0x0
		::System::Boolean _ForceFlush; // 0x0
	};
}
