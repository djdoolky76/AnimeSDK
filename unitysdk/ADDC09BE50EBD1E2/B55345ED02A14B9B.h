#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System { class String; }

#define ADDC09BE50EBD1E2_B55345ED02A14B9B_EXCEPTION_OFFSET UNITYSDK_OFFSET(0x4180110)
#define ADDC09BE50EBD1E2_B55345ED02A14B9B_F7D56DF0499DA330_OFFSET UNITYSDK_OFFSET(0x41800C0)
#define ADDC09BE50EBD1E2_B55345ED02A14B9B__CTOR_OFFSET UNITYSDK_OFFSET(0x1666CA0)

namespace ADDC09BE50EBD1E2
{
	inline static constexpr unsigned int B55345ED02A14B9B_TypeDefinitionIndex = 17779;

	class B55345ED02A14B9B : public ::System::Object
	{
	public:
		static ::System::Void Exception(::System::String* B29880F033C1F232)
		{
			return ((::System::Void(*)(::System::String*))((::PBYTE)hIl2Cpp + ADDC09BE50EBD1E2_B55345ED02A14B9B_EXCEPTION_OFFSET))(B29880F033C1F232);
		}

		static ::System::Void F7D56DF0499DA330(::System::String* B29880F033C1F232)
		{
			return ((::System::Void(*)(::System::String*))((::PBYTE)hIl2Cpp + ADDC09BE50EBD1E2_B55345ED02A14B9B_F7D56DF0499DA330_OFFSET))(B29880F033C1F232);
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ADDC09BE50EBD1E2_B55345ED02A14B9B__CTOR_OFFSET))(this);
		}
	};
}
