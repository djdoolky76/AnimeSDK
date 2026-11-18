#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class CALIGLPABNP;
class OJGOIAPCKBN;

#define NPCCROWD_ANIMATION_CROWDUNITTESTBASE___C__DISPLAYCLASS5_1__CTOR_OFFSET UNITYSDK_OFFSET(0xE11C6E0)
#define NPCCROWD_ANIMATION_CROWDUNITTESTBASE___C__DISPLAYCLASS5_1__INIT_B__1_OFFSET UNITYSDK_OFFSET(0xE11C6F0)

namespace NPCCrowd::Animation
{
	inline static constexpr unsigned int CrowdUnitTestBase___c__DisplayClass5_1_TypeDefinitionIndex = 68528;

	template <typename T>
	class CrowdUnitTestBase___c__DisplayClass5_1 : public ::System::Object
	{
	public:
		::OJGOIAPCKBN* p; // 0x10

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NPCCROWD_ANIMATION_CROWDUNITTESTBASE___C__DISPLAYCLASS5_1__CTOR_OFFSET))(this);
		}

		::System::Boolean _Init_b__1(::CALIGLPABNP* m)
		{
			return ((::System::Boolean(*)(::PVOID, ::CALIGLPABNP*))((::PBYTE)hIl2Cpp + NPCCROWD_ANIMATION_CROWDUNITTESTBASE___C__DISPLAYCLASS5_1__INIT_B__1_OFFSET))(this, m);
		}
	};
}
