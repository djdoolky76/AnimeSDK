#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/System/Guid.h"
namespace System::Collections::Generic { class KeyValuePair; }

#define SYSTEM_DIAGNOSTICS_TRACING_ACTIVITYFILTER___C__DISPLAYCLASS13_0_CTOR_OFFSET UNITYSDK_OFFSET(0x1C1D5FB0)
#define SYSTEM_DIAGNOSTICS_TRACING_ACTIVITYFILTER___C__DISPLAYCLASS13_0__TRIMACTIVEACTIVITYSTORE_B__0_OFFSET UNITYSDK_OFFSET(0x1C1D6110)

namespace System::Diagnostics::Tracing
{
	class ActivityFilter___c__DisplayClass13_0 : public ::System::Object
	{
	public:
		::System::Int32 tickNow; // 0x10
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_DIAGNOSTICS_TRACING_ACTIVITYFILTER___C__DISPLAYCLASS13_0_CTOR_OFFSET))(this);
		}

		::System::Int32 _TrimActiveActivityStore_b__0(::System::Collections::Generic::KeyValuePair* a1, ::System::Collections::Generic::KeyValuePair* a2)
		{
			return ((::System::Int32(*)(::PVOID, ::System::Collections::Generic::KeyValuePair*, ::System::Collections::Generic::KeyValuePair*))((::PBYTE)hIl2Cpp + SYSTEM_DIAGNOSTICS_TRACING_ACTIVITYFILTER___C__DISPLAYCLASS13_0__TRIMACTIVEACTIVITYSTORE_B__0_OFFSET))(this, a1, a2);
		}

	};
}
