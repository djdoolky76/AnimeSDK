#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/EBF79E141F36EFF4.h"

#define SYSTEM_THREADING_MANUALRESETEVENT__CTOR_OFFSET UNITYSDK_OFFSET(0x3C17630)

namespace System::Threading
{
	inline static constexpr unsigned int ManualResetEvent_TypeDefinitionIndex = 11415;

	class ManualResetEvent : public ::EBF79E141F36EFF4
	{
	public:
		::System::Void _ctor(::System::Boolean B15BDE327D1D6808)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + SYSTEM_THREADING_MANUALRESETEVENT__CTOR_OFFSET))(this, B15BDE327D1D6808);
		}
	};
}
