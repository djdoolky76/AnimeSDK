#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class FDBFKHEPBON;
class OAEFGCLEHHO;
namespace System { template <typename T> class Action_1; }

#define BIGSCENEGROUPCHALLENGEUTIL___C__DISPLAYCLASS0_0__CTOR_OFFSET UNITYSDK_OFFSET(0x14771B10)
#define BIGSCENEGROUPCHALLENGEUTIL___C__DISPLAYCLASS0_0__SETSTARTGROUPCHALLENGE_B__0_OFFSET UNITYSDK_OFFSET(0x14771B20)
#define BIGSCENEGROUPCHALLENGEUTIL___C__DISPLAYCLASS0_0__SETSTARTGROUPCHALLENGE_B__3_OFFSET UNITYSDK_OFFSET(0x14771C90)
#define BIGSCENEGROUPCHALLENGEUTIL___C__DISPLAYCLASS0_0__SETSTARTGROUPCHALLENGE_G__SENDSTART_2_OFFSET UNITYSDK_OFFSET(0x14771B30)

inline static constexpr unsigned int BigSceneGroupChallengeUtil___c__DisplayClass0_0_TypeDefinitionIndex = 91851;

class BigSceneGroupChallengeUtil___c__DisplayClass0_0 : public ::System::Object
{
public:
	::System::Action_1<::System::Boolean>* ret; // 0x10
	::System::UInt32 groupID; // 0x18
	::System::UInt32 challengeID; // 0x1C

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BIGSCENEGROUPCHALLENGEUTIL___C__DISPLAYCLASS0_0__CTOR_OFFSET))(this);
	}

	::System::Void _SetStartGroupChallenge_b__0(::OAEFGCLEHHO* _)
	{
		return ((::System::Void(*)(::PVOID, ::OAEFGCLEHHO*))((::PBYTE)hIl2Cpp + BIGSCENEGROUPCHALLENGEUTIL___C__DISPLAYCLASS0_0__SETSTARTGROUPCHALLENGE_B__0_OFFSET))(this, _);
	}

	::System::Void _SetStartGroupChallenge_g__sendStart_2()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BIGSCENEGROUPCHALLENGEUTIL___C__DISPLAYCLASS0_0__SETSTARTGROUPCHALLENGE_G__SENDSTART_2_OFFSET))(this);
	}

	::System::Void _SetStartGroupChallenge_b__3(::System::Boolean isSuccess, ::FDBFKHEPBON* rsp)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean, ::FDBFKHEPBON*))((::PBYTE)hIl2Cpp + BIGSCENEGROUPCHALLENGEUTIL___C__DISPLAYCLASS0_0__SETSTARTGROUPCHALLENGE_B__3_OFFSET))(this, isSuccess, rsp);
	}
};
