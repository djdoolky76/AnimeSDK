#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/Unity/Profiling/ProfilerMarker.h"
namespace Entitas { class ISystem; }
namespace Entitas { class ITearDownSystem; }

#define EKBFOILFKMC_CTOR_OFFSET UNITYSDK_OFFSET(0x154FC140)
#define EKBFOILFKMC_TEARDOWN_OFFSET UNITYSDK_OFFSET(0x154FC230)

	class EKBFOILFKMC : public ::System::Object
	{
	public:
		::Entitas::ITearDownSystem* KCOCCOGPBJB; // 0x10
		::Unity::Profiling::ProfilerMarker FKLNJLGDONA; // 0x18
		::System::Void _ctor(::Entitas::ISystem* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Entitas::ISystem*))((::PBYTE)hIl2Cpp + EKBFOILFKMC_CTOR_OFFSET))(this, a1);
		}

		::System::Void TearDown()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + EKBFOILFKMC_TEARDOWN_OFFSET))(this);
		}

	};
