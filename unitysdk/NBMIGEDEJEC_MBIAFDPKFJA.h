#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

#define NBMIGEDEJEC_MBIAFDPKFJA_BGCONJHPCDH_OFFSET UNITYSDK_OFFSET(0x12C52D20)
#define NBMIGEDEJEC_MBIAFDPKFJA__CTOR_OFFSET UNITYSDK_OFFSET(0x12C52D10)

inline static constexpr unsigned int NBMIGEDEJEC_MBIAFDPKFJA_TypeDefinitionIndex = 69869;

class NBMIGEDEJEC_MBIAFDPKFJA : public ::System::Object
{
public:
	::System::Int32 LABJKINHNMH; // 0x10

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NBMIGEDEJEC_MBIAFDPKFJA__CTOR_OFFSET))(this);
	}

	::System::Boolean BGCONJHPCDH()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + NBMIGEDEJEC_MBIAFDPKFJA_BGCONJHPCDH_OFFSET))(this);
	}
};
