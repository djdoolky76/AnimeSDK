#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class KFGGFDDILAG;
class OJGOIAPCKBN;

#define NPCCROWD_ANIMATION_CROWDUNITTESTBASE___C__DISPLAYCLASS5_0__CTOR_OFFSET UNITYSDK_OFFSET(0xEE9CDF0)
#define NPCCROWD_ANIMATION_CROWDUNITTESTBASE___C__DISPLAYCLASS5_0__INIT_B__0_OFFSET UNITYSDK_OFFSET(0xEE9CE00)

namespace NPCCrowd::Animation
{
	inline static constexpr unsigned int CrowdUnitTestBase___c__DisplayClass5_0_TypeDefinitionIndex = 68527;

	class CrowdUnitTestBase___c__DisplayClass5_0 : public ::System::Object
	{
	public:
		::KFGGFDDILAG* t; // 0x10

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NPCCROWD_ANIMATION_CROWDUNITTESTBASE___C__DISPLAYCLASS5_0__CTOR_OFFSET))(this);
		}

		::System::Boolean _Init_b__0(::OJGOIAPCKBN* e)
		{
			return ((::System::Boolean(*)(::PVOID, ::OJGOIAPCKBN*))((::PBYTE)hIl2Cpp + NPCCROWD_ANIMATION_CROWDUNITTESTBASE___C__DISPLAYCLASS5_0__INIT_B__0_OFFSET))(this, e);
		}
	};
}
