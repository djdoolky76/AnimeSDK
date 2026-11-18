#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System::Collections::Generic { template <typename T> class HashSet_1; }

#define NPCCROWD_ANIMATION_CROWDBENCHMARKTEST___C__DISPLAYCLASS8_0__CTOR_OFFSET UNITYSDK_OFFSET(0xE11C5B0)
#define NPCCROWD_ANIMATION_CROWDBENCHMARKTEST___C__DISPLAYCLASS8_0__GETCROWDNPCTESTCASES_B__1_OFFSET UNITYSDK_OFFSET(0xE11C5C0)

namespace NPCCrowd::Animation
{
	inline static constexpr unsigned int CrowdBenchmarkTest___c__DisplayClass8_0_TypeDefinitionIndex = 57517;

	class CrowdBenchmarkTest___c__DisplayClass8_0 : public ::System::Object
	{
	public:
		::System::Collections::Generic::HashSet_1<::System::Int32>* spawnablePrefabIds; // 0x10

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NPCCROWD_ANIMATION_CROWDBENCHMARKTEST___C__DISPLAYCLASS8_0__CTOR_OFFSET))(this);
		}

		::System::Boolean _GetCrowdNpcTestCases_b__1(::System::Int32 n)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + NPCCROWD_ANIMATION_CROWDBENCHMARKTEST___C__DISPLAYCLASS8_0__GETCROWDNPCTESTCASES_B__1_OFFSET))(this, n);
		}
	};
}
