#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/SystemException.h"
#include "unitysdk/B6564CAC678AC465.h"

class E519989062D53DE5;

#define SYSTEM_THREADING_THREADABORTEXCEPTION__CTOR_1_OFFSET UNITYSDK_OFFSET(0x3B5EFC0)
#define SYSTEM_THREADING_THREADABORTEXCEPTION__CTOR_OFFSET UNITYSDK_OFFSET(0x3B5EF20)

namespace System::Threading
{
	inline static constexpr unsigned int ThreadAbortException_TypeDefinitionIndex = 10269;

	class ThreadAbortException : public ::System::SystemException
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_THREADING_THREADABORTEXCEPTION__CTOR_OFFSET))(this);
		}

		::System::Void _ctor_1(::E519989062D53DE5* B29880F033C1F232, ::B6564CAC678AC465 E6CE7391633EEC68)
		{
			return ((::System::Void(*)(::PVOID, ::E519989062D53DE5*, ::B6564CAC678AC465))((::PBYTE)hIl2Cpp + SYSTEM_THREADING_THREADABORTEXCEPTION__CTOR_1_OFFSET))(this, B29880F033C1F232, E6CE7391633EEC68);
		}
	};
}
