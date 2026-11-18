#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/IMFBAIGBFOK.h"
#include "unitysdk/System/Object.h"

class OAEFGCLEHHO;
namespace System { template <typename T> class Action_1; }

#define BIGSCENEGROUPCHALLENGEUTIL___C__DISPLAYCLASS1_0__CTOR_OFFSET UNITYSDK_OFFSET(0x1458E8D0)
#define BIGSCENEGROUPCHALLENGEUTIL___C__DISPLAYCLASS1_0__REGISTERDYNAMICGROUPCHALLENGE_B__0_OFFSET UNITYSDK_OFFSET(0x1458E8E0)
#define BIGSCENEGROUPCHALLENGEUTIL___C__DISPLAYCLASS1_0__REGISTERDYNAMICGROUPCHALLENGE_B__2_OFFSET UNITYSDK_OFFSET(0x1458EAD0)
#define BIGSCENEGROUPCHALLENGEUTIL___C__DISPLAYCLASS1_0__REGISTERDYNAMICGROUPCHALLENGE_G__REGISTERGROUP_1_OFFSET UNITYSDK_OFFSET(0x1458E8F0)

inline static constexpr unsigned int BigSceneGroupChallengeUtil___c__DisplayClass1_0_TypeDefinitionIndex = 91849;

class BigSceneGroupChallengeUtil___c__DisplayClass1_0 : public ::System::Object
{
public:
	::IMFBAIGBFOK levelInfo; // 0x10
	::System::Action_1<::System::Boolean>* ret; // 0x38
	::System::Boolean isDynamic; // 0x40

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BIGSCENEGROUPCHALLENGEUTIL___C__DISPLAYCLASS1_0__CTOR_OFFSET))(this);
	}

	::System::Void _RegisterDynamicGroupChallenge_b__0()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BIGSCENEGROUPCHALLENGEUTIL___C__DISPLAYCLASS1_0__REGISTERDYNAMICGROUPCHALLENGE_B__0_OFFSET))(this);
	}

	::System::Void _RegisterDynamicGroupChallenge_g__registerGroup_1()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BIGSCENEGROUPCHALLENGEUTIL___C__DISPLAYCLASS1_0__REGISTERDYNAMICGROUPCHALLENGE_G__REGISTERGROUP_1_OFFSET))(this);
	}

	::System::Void _RegisterDynamicGroupChallenge_b__2(::OAEFGCLEHHO* _)
	{
		return ((::System::Void(*)(::PVOID, ::OAEFGCLEHHO*))((::PBYTE)hIl2Cpp + BIGSCENEGROUPCHALLENGEUTIL___C__DISPLAYCLASS1_0__REGISTERDYNAMICGROUPCHALLENGE_B__2_OFFSET))(this, _);
	}
};
