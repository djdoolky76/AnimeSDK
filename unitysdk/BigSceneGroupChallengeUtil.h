#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/IMFBAIGBFOK.h"

namespace System { class String; }
namespace System { template <typename T> class Action_1; }

#define BIGSCENEGROUPCHALLENGEUTIL_CHECKCURRENTTEAMAVATARISINAREA_OFFSET UNITYSDK_OFFSET(0x1858FD70)
#define BIGSCENEGROUPCHALLENGEUTIL_CHECKTELEPROTANDREGISTERDYNAMICGROUP_OFFSET UNITYSDK_OFFSET(0x1858FFE0)
#define BIGSCENEGROUPCHALLENGEUTIL_OPENMONSTERCARDPOPUIBYGROUPCHALLENGE_OFFSET UNITYSDK_OFFSET(0x18590150)
#define BIGSCENEGROUPCHALLENGEUTIL_REGISTERDYNAMICGROUPCHALLENGE_OFFSET UNITYSDK_OFFSET(0x1858FC10)
#define BIGSCENEGROUPCHALLENGEUTIL_SETSTARTGROUPCHALLENGE_OFFSET UNITYSDK_OFFSET(0x1858F9B0)
#define BIGSCENEGROUPCHALLENGEUTIL__CTOR_OFFSET UNITYSDK_OFFSET(0x185903F0)

inline static constexpr unsigned int BigSceneGroupChallengeUtil_TypeDefinitionIndex = 91848;

class BigSceneGroupChallengeUtil : public ::System::Object
{
public:
	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BIGSCENEGROUPCHALLENGEUTIL__CTOR_OFFSET))(this);
	}

	static ::System::Void SetStartGroupChallenge(::System::UInt32 groupID, ::System::UInt32 challengeID, ::System::Action_1<::System::Boolean>* ret, ::System::Boolean isDynamic)
	{
		return ((::System::Void(*)(::System::UInt32, ::System::UInt32, ::System::Action_1<::System::Boolean>*, ::System::Boolean))((::PBYTE)hIl2Cpp + BIGSCENEGROUPCHALLENGEUTIL_SETSTARTGROUPCHALLENGE_OFFSET))(groupID, challengeID, ret, isDynamic);
	}

	static ::System::Void RegisterDynamicGroupChallenge(::IMFBAIGBFOK levelInfo, ::System::Action_1<::System::Boolean>* ret, ::System::Boolean isDynamic, ::System::Boolean forceResetTeamData)
	{
		return ((::System::Void(*)(::IMFBAIGBFOK, ::System::Action_1<::System::Boolean>*, ::System::Boolean, ::System::Boolean))((::PBYTE)hIl2Cpp + BIGSCENEGROUPCHALLENGEUTIL_REGISTERDYNAMICGROUPCHALLENGE_OFFSET))(levelInfo, ret, isDynamic, forceResetTeamData);
	}

	static ::System::Boolean CheckCurrentTeamAvatarIsInArea(::System::String* areaID)
	{
		return ((::System::Boolean(*)(::System::String*))((::PBYTE)hIl2Cpp + BIGSCENEGROUPCHALLENGEUTIL_CHECKCURRENTTEAMAVATARISINAREA_OFFSET))(areaID);
	}

	static ::System::Void CheckTeleprotAndRegisterDynamicGroup(::IMFBAIGBFOK levelInfo, ::System::Action_1<::System::Boolean>* ret)
	{
		return ((::System::Void(*)(::IMFBAIGBFOK, ::System::Action_1<::System::Boolean>*))((::PBYTE)hIl2Cpp + BIGSCENEGROUPCHALLENGEUTIL_CHECKTELEPROTANDREGISTERDYNAMICGROUP_OFFSET))(levelInfo, ret);
	}

	static ::System::Void OpenMonsterCardPopUIByGroupChallenge(::System::Int32 groupID)
	{
		return ((::System::Void(*)(::System::Int32))((::PBYTE)hIl2Cpp + BIGSCENEGROUPCHALLENGEUTIL_OPENMONSTERCARDPOPUIBYGROUPCHALLENGE_OFFSET))(groupID);
	}
};
