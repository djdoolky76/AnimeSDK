#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/ENPCAvatarGender.h"
#include "unitysdk/ENPCAvatarSize.h"
#include "unitysdk/NPCCrowd/Animation/CrowdUnitTestBase.h"
#include "unitysdk/System/ValueTuple_3.h"

namespace System { class String; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define NPCCROWD_ANIMATION_CROWDANIMATIONUNITTEST_GETCROWDNPCTESTCASES_OFFSET UNITYSDK_OFFSET(0xFD2BC80)
#define NPCCROWD_ANIMATION_CROWDANIMATIONUNITTEST_GETGENDERSIZEANIMATIONS_OFFSET UNITYSDK_OFFSET(0xFD2B7B0)
#define NPCCROWD_ANIMATION_CROWDANIMATIONUNITTEST_GET_UNITTESTCASENAME_OFFSET UNITYSDK_OFFSET(0xFD2B770)
#define NPCCROWD_ANIMATION_CROWDANIMATIONUNITTEST__CTOR_OFFSET UNITYSDK_OFFSET(0xFD2BE40)
#define NPCCROWD_ANIMATION_CROWDANIMATIONUNITTEST___BASE_GETCROWDNPCTESTCASES_OFFSET UNITYSDK_OFFSET(0xFD2BEC0)

namespace NPCCrowd::Animation
{
	inline static constexpr unsigned int CrowdAnimationUnitTest_TypeDefinitionIndex = 65650;

	class CrowdAnimationUnitTest : public ::NPCCrowd::Animation::CrowdUnitTestBase
	{
	public:
		::ENPCAvatarGender gender; // 0x10
		::ENPCAvatarSize size; // 0x14
		::System::Int32 prefabId; // 0x18
		::System::Boolean enableWhiteList; // 0x1C
		::System::Byte _padding0[0x3];
		::System::Collections::Generic::List_1<::System::Int32>* randomAnimationIds; // 0x20

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NPCCROWD_ANIMATION_CROWDANIMATIONUNITTEST__CTOR_OFFSET))(this);
		}

		::System::String* get_UnitTestCaseName()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + NPCCROWD_ANIMATION_CROWDANIMATIONUNITTEST_GET_UNITTESTCASENAME_OFFSET))(this);
		}

		::System::Collections::Generic::List_1<::System::Int32>* GetGenderSizeAnimations()
		{
			return ((::System::Collections::Generic::List_1<::System::Int32>*(*)(::PVOID))((::PBYTE)hIl2Cpp + NPCCROWD_ANIMATION_CROWDANIMATIONUNITTEST_GETGENDERSIZEANIMATIONS_OFFSET))(this);
		}

		::System::Collections::Generic::List_1<::System::ValueTuple_3<::System::UInt32, ::System::Int32, ::System::Int32>>* GetCrowdNpcTestCases()
		{
			return ((::System::Collections::Generic::List_1<::System::ValueTuple_3<::System::UInt32, ::System::Int32, ::System::Int32>>*(*)(::PVOID))((::PBYTE)hIl2Cpp + NPCCROWD_ANIMATION_CROWDANIMATIONUNITTEST_GETCROWDNPCTESTCASES_OFFSET))(this);
		}

		::System::Collections::Generic::List_1<::System::ValueTuple_3<::System::UInt32, ::System::Int32, ::System::Int32>>* __base_GetCrowdNpcTestCases()
		{
			return ((::System::Collections::Generic::List_1<::System::ValueTuple_3<::System::UInt32, ::System::Int32, ::System::Int32>>*(*)(::PVOID))((::PBYTE)hIl2Cpp + NPCCROWD_ANIMATION_CROWDANIMATIONUNITTEST___BASE_GETCROWDNPCTESTCASES_OFFSET))(this);
		}
	};
}
