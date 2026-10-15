#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
namespace System { class Action; }
namespace System { class Object; }

#define MIHOYO_SDK_THREADDISPATCHER___C__DISPLAYCLASS6_0_CTOR_OFFSET UNITYSDK_OFFSET(0x1BFE2D60)
#define MIHOYO_SDK_THREADDISPATCHER___C__DISPLAYCLASS6_0__RUNASYNC_B__0_OFFSET UNITYSDK_OFFSET(0x1BFE2EF0)

namespace MiHoYo::SDK
{
	class ThreadDispatcher___c__DisplayClass6_0 : public ::System::Object
	{
	public:
		::System::Action* action; // 0x10
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_THREADDISPATCHER___C__DISPLAYCLASS6_0_CTOR_OFFSET))(this);
		}

		::System::Void _RunAsync_b__0(::System::Object* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_THREADDISPATCHER___C__DISPLAYCLASS6_0__RUNASYNC_B__0_OFFSET))(this, a1);
		}

	};
}
