#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/NPCCrowd/Avatar/FNPCCrowdAvatarDitherDecisionFragment.h"
#include "unitysdk/NPCCrowd/Avatar/FNPCCrowdAvatarDitherInputFragment.h"
#include "unitysdk/System/ValueType.h"
#include "unitysdk/Unity/Collections/NativeArray_1.h"

namespace System { class Object; }

#define NPCCROWD_AVATAR_NPCCROWDAVATARDITHERDECISIONJOB_EXECUTE_OFFSET UNITYSDK_OFFSET(0x635830)

namespace NPCCrowd::Avatar
{
	inline static constexpr unsigned int NPCCrowdAvatarDitherDecisionJob_TypeDefinitionIndex = 59044;

	struct alignas(8) NPCCrowdAvatarDitherDecisionJob
	{
		::Unity::Collections::NativeArray_1<::NPCCrowd::Avatar::FNPCCrowdAvatarDitherInputFragment> InputFragments; // 0x10
		::System::Byte _padding0[0x8];
		::Unity::Collections::NativeArray_1<::NPCCrowd::Avatar::FNPCCrowdAvatarDitherDecisionFragment> DecisionFragments; // 0x20
		::System::Byte _padding1[0x8];
		::System::Object* Commands; // 0x30

		::System::Void Execute(::System::Int32 index)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + NPCCROWD_AVATAR_NPCCROWDAVATARDITHERDECISIONJOB_EXECUTE_OFFSET))(this, index);
		}
	};
}
