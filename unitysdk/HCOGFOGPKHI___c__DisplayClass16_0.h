#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class DFGLKHAAGJB;

#define HCOGFOGPKHI___C__DISPLAYCLASS16_0_CTOR_OFFSET UNITYSDK_OFFSET(0x15C2E940)
#define HCOGFOGPKHI___C__DISPLAYCLASS16_0__UPDATESPECIFICPLAYERSKILLINFO_B__0_OFFSET UNITYSDK_OFFSET(0x15C2EF10)
#define HCOGFOGPKHI___C__DISPLAYCLASS16_0__UPDATESPECIFICPLAYERSKILLINFO_B__1_OFFSET UNITYSDK_OFFSET(0x15C2EF40)

	class HCOGFOGPKHI___c__DisplayClass16_0 : public ::System::Object
	{
	public:
		::System::UInt32 skillID; // 0x10
		::System::UInt32 level; // 0x14
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + HCOGFOGPKHI___C__DISPLAYCLASS16_0_CTOR_OFFSET))(this);
		}

		::System::Boolean _UpdateSpecificPlayerSkillInfo_b__0(::DFGLKHAAGJB* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::DFGLKHAAGJB*))((::PBYTE)hIl2Cpp + HCOGFOGPKHI___C__DISPLAYCLASS16_0__UPDATESPECIFICPLAYERSKILLINFO_B__0_OFFSET))(this, a1);
		}

		::System::Boolean _UpdateSpecificPlayerSkillInfo_b__1(::DFGLKHAAGJB* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::DFGLKHAAGJB*))((::PBYTE)hIl2Cpp + HCOGFOGPKHI___C__DISPLAYCLASS16_0__UPDATESPECIFICPLAYERSKILLINFO_B__1_OFFSET))(this, a1);
		}

	};
