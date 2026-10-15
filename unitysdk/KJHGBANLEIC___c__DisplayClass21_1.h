#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
namespace System { class Object; }
namespace System { class String; }

#define KJHGBANLEIC___C__DISPLAYCLASS21_1_CTOR_OFFSET UNITYSDK_OFFSET(0xB44F8B0)
#define KJHGBANLEIC___C__DISPLAYCLASS21_1___DOACTION_B__0_OFFSET UNITYSDK_OFFSET(0xB4560A0)
#define KJHGBANLEIC___C__DISPLAYCLASS21_1___DOACTION_B__1_OFFSET UNITYSDK_OFFSET(0xB456190)

	template <typename T>
	class KJHGBANLEIC___c__DisplayClass21_1 : public ::System::Object
	{
	public:
		::System::Object* CS___8__locals1; // 0x10
		::System::Int32 iRetry; // 0x18
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + KJHGBANLEIC___C__DISPLAYCLASS21_1_CTOR_OFFSET))(this);
		}

		::System::String* __DoAction_b__0()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + KJHGBANLEIC___C__DISPLAYCLASS21_1___DOACTION_B__0_OFFSET))(this);
		}

		::System::String* __DoAction_b__1()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + KJHGBANLEIC___C__DISPLAYCLASS21_1___DOACTION_B__1_OFFSET))(this);
		}

	};
