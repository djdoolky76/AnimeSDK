#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
namespace System { class String; }
namespace System::Text { class StringBuilder; }

#define FKMGOCGOCPO___C__DISPLAYCLASS6_0_CTOR_OFFSET UNITYSDK_OFFSET(0x15810280)
#define FKMGOCGOCPO___C__DISPLAYCLASS6_0__BUILDANIMGROUPEVENTTASKISCLIENTONLYERRORLOG_B__0_OFFSET UNITYSDK_OFFSET(0x15810B30)

	class FKMGOCGOCPO___c__DisplayClass6_0 : public ::System::Object
	{
	public:
		::System::String* ownerName; // 0x10
		::System::Text::StringBuilder* stringBuilder; // 0x18
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FKMGOCGOCPO___C__DISPLAYCLASS6_0_CTOR_OFFSET))(this);
		}

		::System::String* _BuildAnimGroupEventTaskIsClientOnlyErrorLog_b__0(::System::String* a1)
		{
			return ((::System::String*(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + FKMGOCGOCPO___C__DISPLAYCLASS6_0__BUILDANIMGROUPEVENTTASKISCLIENTONLYERRORLOG_B__0_OFFSET))(this, a1);
		}

	};
