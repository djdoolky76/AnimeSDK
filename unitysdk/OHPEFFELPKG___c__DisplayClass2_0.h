#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class NBIBOKEFKIH;

#define OHPEFFELPKG___C__DISPLAYCLASS2_0_CTOR_OFFSET UNITYSDK_OFFSET(0x1C994080)
#define OHPEFFELPKG___C__DISPLAYCLASS2_0__UNREGISTERSKILLOWNER_B__0_OFFSET UNITYSDK_OFFSET(0x1C994A80)

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
