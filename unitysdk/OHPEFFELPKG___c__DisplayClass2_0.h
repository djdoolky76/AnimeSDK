#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class NBIBOKEFKIH;

#define OHPEFFELPKG___C__DISPLAYCLASS2_0_CTOR_OFFSET UNITYSDK_OFFSET(0x1C965DC0)
#define OHPEFFELPKG___C__DISPLAYCLASS2_0__UNREGISTERSKILLOWNER_B__0_OFFSET UNITYSDK_OFFSET(0x1C9667B0)

inline static constexpr unsigned int OHPEFFELPKG___c__DisplayClass2_0_TypeDefinitionIndex = 43092;

	class OHPEFFELPKG___c__DisplayClass2_0 : public ::System::Object
	{
	public:
		::NBIBOKEFKIH* skillOwner; // 0x10
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + OHPEFFELPKG___C__DISPLAYCLASS2_0_CTOR_OFFSET))(this);
		}

		::System::Boolean _UnregisterSkillOwner_b__0(::NBIBOKEFKIH* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::NBIBOKEFKIH*))((::PBYTE)hIl2Cpp + OHPEFFELPKG___C__DISPLAYCLASS2_0__UNREGISTERSKILLOWNER_B__0_OFFSET))(this, a1);
		}

	};
