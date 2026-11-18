#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/NPCCrowd/Animation/CrowdUnitTestBase.h"
#include "unitysdk/System/ValueTuple_3.h"

namespace System { class String; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define NPCCROWD_ANIMATION_CROWDBENCHMARKTEST_GETCROWDNPCTESTCASES_OFFSET UNITYSDK_OFFSET(0xE0CED00)
#define NPCCROWD_ANIMATION_CROWDBENCHMARKTEST_GET_UNITTESTCASENAME_OFFSET UNITYSDK_OFFSET(0xE0CECC0)
#define NPCCROWD_ANIMATION_CROWDBENCHMARKTEST__CTOR_OFFSET UNITYSDK_OFFSET(0xE0CF3B0)
#define NPCCROWD_ANIMATION_CROWDBENCHMARKTEST__GETCROWDNPCTESTCASES_B__8_0_OFFSET UNITYSDK_OFFSET(0xE0CF540)
#define NPCCROWD_ANIMATION_CROWDBENCHMARKTEST___BASE_GETCROWDNPCTESTCASES_OFFSET UNITYSDK_OFFSET(0xE0CF630)

namespace NPCCrowd::Animation
{
	inline static constexpr unsigned int CrowdBenchmarkTest_TypeDefinitionIndex = 57515;

	class CrowdBenchmarkTest : public ::NPCCrowd::Animation::CrowdUnitTestBase
	{
	public:
		::System::Int32 spawnCount; // 0x10
		::System::Boolean bEnableTagIdWhiteList; // 0x14
		::System::Byte _padding0[0x3];
		::System::Collections::Generic::List_1<::System::UInt32>* spawnNPCTagIds; // 0x18
		::System::Boolean bEnablePrefabIdWhiteList; // 0x20
		::System::Byte _padding1[0x7];
		::System::Collections::Generic::List_1<::System::Int32>* npcPrefabIds; // 0x28
		::System::Boolean bEnableUniquePrefabId; // 0x30

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NPCCROWD_ANIMATION_CROWDBENCHMARKTEST__CTOR_OFFSET))(this);
		}

		::System::String* get_UnitTestCaseName()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + NPCCROWD_ANIMATION_CROWDBENCHMARKTEST_GET_UNITTESTCASENAME_OFFSET))(this);
		}

		::System::Collections::Generic::List_1<::System::ValueTuple_3<::System::UInt32, ::System::Int32, ::System::Int32>>* GetCrowdNpcTestCases()
		{
			return ((::System::Collections::Generic::List_1<::System::ValueTuple_3<::System::UInt32, ::System::Int32, ::System::Int32>>*(*)(::PVOID))((::PBYTE)hIl2Cpp + NPCCROWD_ANIMATION_CROWDBENCHMARKTEST_GETCROWDNPCTESTCASES_OFFSET))(this);
		}

		::System::Boolean _GetCrowdNpcTestCases_b__8_0(::System::UInt32 n)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + NPCCROWD_ANIMATION_CROWDBENCHMARKTEST__GETCROWDNPCTESTCASES_B__8_0_OFFSET))(this, n);
		}

		::System::Collections::Generic::List_1<::System::ValueTuple_3<::System::UInt32, ::System::Int32, ::System::Int32>>* __base_GetCrowdNpcTestCases()
		{
			return ((::System::Collections::Generic::List_1<::System::ValueTuple_3<::System::UInt32, ::System::Int32, ::System::Int32>>*(*)(::PVOID))((::PBYTE)hIl2Cpp + NPCCROWD_ANIMATION_CROWDBENCHMARKTEST___BASE_GETCROWDNPCTESTCASES_OFFSET))(this);
		}
	};
}
