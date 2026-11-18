#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/NPCCrowd/Animation/CrowdUnitTestBase.h"
#include "unitysdk/System/ValueTuple_3.h"

namespace System { class String; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define NPCCROWD_ANIMATION_CROWDACCESSORYUNITTEST_GETCROWDNPCTESTCASES_OFFSET UNITYSDK_OFFSET(0x105F3E90)
#define NPCCROWD_ANIMATION_CROWDACCESSORYUNITTEST_GET_UNITTESTCASENAME_OFFSET UNITYSDK_OFFSET(0x105F3E50)
#define NPCCROWD_ANIMATION_CROWDACCESSORYUNITTEST__CTOR_OFFSET UNITYSDK_OFFSET(0x105F40C0)
#define NPCCROWD_ANIMATION_CROWDACCESSORYUNITTEST___BASE_GETCROWDNPCTESTCASES_OFFSET UNITYSDK_OFFSET(0x105F4120)

namespace NPCCrowd::Animation
{
	inline static constexpr unsigned int CrowdAccessoryUnitTest_TypeDefinitionIndex = 71685;

	class CrowdAccessoryUnitTest : public ::NPCCrowd::Animation::CrowdUnitTestBase
	{
	public:
		::System::String* accessoryItemName; // 0x10
		::System::Int32 prefabId; // 0x18

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NPCCROWD_ANIMATION_CROWDACCESSORYUNITTEST__CTOR_OFFSET))(this);
		}

		::System::String* get_UnitTestCaseName()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + NPCCROWD_ANIMATION_CROWDACCESSORYUNITTEST_GET_UNITTESTCASENAME_OFFSET))(this);
		}

		::System::Collections::Generic::List_1<::System::ValueTuple_3<::System::UInt32, ::System::Int32, ::System::Int32>>* GetCrowdNpcTestCases()
		{
			return ((::System::Collections::Generic::List_1<::System::ValueTuple_3<::System::UInt32, ::System::Int32, ::System::Int32>>*(*)(::PVOID))((::PBYTE)hIl2Cpp + NPCCROWD_ANIMATION_CROWDACCESSORYUNITTEST_GETCROWDNPCTESTCASES_OFFSET))(this);
		}

		::System::Collections::Generic::List_1<::System::ValueTuple_3<::System::UInt32, ::System::Int32, ::System::Int32>>* __base_GetCrowdNpcTestCases()
		{
			return ((::System::Collections::Generic::List_1<::System::ValueTuple_3<::System::UInt32, ::System::Int32, ::System::Int32>>*(*)(::PVOID))((::PBYTE)hIl2Cpp + NPCCROWD_ANIMATION_CROWDACCESSORYUNITTEST___BASE_GETCROWDNPCTESTCASES_OFFSET))(this);
		}
	};
}
