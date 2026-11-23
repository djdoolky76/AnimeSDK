#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/ABC/Common/Behavior/ABCMonoBehavior.h"

#define ABC_COMMON_BEHAVIOR_ABCMONOTICKBEHAVIOR_AD970635A668CF89_OFFSET UNITYSDK_OFFSET(0x1678550)
#define ABC_COMMON_BEHAVIOR_ABCMONOTICKBEHAVIOR__CTOR_OFFSET UNITYSDK_OFFSET(0x1708400)

namespace ABC::Common::Behavior
{
	inline static constexpr unsigned int ABCMonoTickBehavior_TypeDefinitionIndex = 5401;

	class ABCMonoTickBehavior : public ::ABC::Common::Behavior::ABCMonoBehavior
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ABC_COMMON_BEHAVIOR_ABCMONOTICKBEHAVIOR__CTOR_OFFSET))(this);
		}

		::System::Boolean AD970635A668CF89()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + ABC_COMMON_BEHAVIOR_ABCMONOTICKBEHAVIOR_AD970635A668CF89_OFFSET))(this);
		}
	};
}
