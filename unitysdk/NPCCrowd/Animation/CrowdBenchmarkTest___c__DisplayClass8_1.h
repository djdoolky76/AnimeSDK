#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System::Collections::Generic { template <typename T> class HashSet_1; }

#define NPCCROWD_ANIMATION_CROWDBENCHMARKTEST___C__DISPLAYCLASS8_1__CTOR_OFFSET UNITYSDK_OFFSET(0xE11C5F0)
#define NPCCROWD_ANIMATION_CROWDBENCHMARKTEST___C__DISPLAYCLASS8_1__GETCROWDNPCTESTCASES_B__2_OFFSET UNITYSDK_OFFSET(0xE11C600)

namespace NPCCrowd::Animation
{
	inline static constexpr unsigned int CrowdBenchmarkTest___c__DisplayClass8_1_TypeDefinitionIndex = 57516;

	template <typename T>
	class CrowdBenchmarkTest___c__DisplayClass8_1 : public ::System::Object
	{
	public:
		::System::Collections::Generic::HashSet_1<::System::Int32>* usedPrefabIds; // 0x10

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NPCCROWD_ANIMATION_CROWDBENCHMARKTEST___C__DISPLAYCLASS8_1__CTOR_OFFSET))(this);
		}

		::System::Boolean _GetCrowdNpcTestCases_b__2(::System::UInt32 n)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + NPCCROWD_ANIMATION_CROWDBENCHMARKTEST___C__DISPLAYCLASS8_1__GETCROWDNPCTESTCASES_B__2_OFFSET))(this, n);
		}
	};
}
