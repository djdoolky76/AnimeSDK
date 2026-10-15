#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
namespace System { class WeakReference; }
namespace System::Diagnostics::Tracing { class EtwSession; }

#define SYSTEM_DIAGNOSTICS_TRACING_ETWSESSION___C__DISPLAYCLASS1_0_CTOR_OFFSET UNITYSDK_OFFSET(0x1C1DAE00)
#define SYSTEM_DIAGNOSTICS_TRACING_ETWSESSION___C__DISPLAYCLASS1_0__REMOVEETWSESSION_B__0_OFFSET UNITYSDK_OFFSET(0x1C1DAF80)

namespace System::Diagnostics::Tracing
{
	class EtwSession___c__DisplayClass1_0 : public ::System::Object
	{
	public:
		::System::Diagnostics::Tracing::EtwSession* etwSession; // 0x10
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_DIAGNOSTICS_TRACING_ETWSESSION___C__DISPLAYCLASS1_0_CTOR_OFFSET))(this);
		}

		::System::Boolean _RemoveEtwSession_b__0(::System::WeakReference* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::WeakReference*))((::PBYTE)hIl2Cpp + SYSTEM_DIAGNOSTICS_TRACING_ETWSESSION___C__DISPLAYCLASS1_0__REMOVEETWSESSION_B__0_OFFSET))(this, a1);
		}

	};
}
