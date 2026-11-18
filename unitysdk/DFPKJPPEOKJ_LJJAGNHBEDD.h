#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System { class Action; }

#define DFPKJPPEOKJ_LJJAGNHBEDD_BOBFJJPCIIH_OFFSET UNITYSDK_OFFSET(0x19A41190)
#define DFPKJPPEOKJ_LJJAGNHBEDD__CTOR_OFFSET UNITYSDK_OFFSET(0x19A41180)

inline static constexpr unsigned int DFPKJPPEOKJ_LJJAGNHBEDD_TypeDefinitionIndex = 76787;

class DFPKJPPEOKJ_LJJAGNHBEDD : public ::System::Object
{
public:
	::System::Action* AMHGBGMOMLL; // 0x10
	::System::Single PMGFIHJAJHL; // 0x18

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + DFPKJPPEOKJ_LJJAGNHBEDD__CTOR_OFFSET))(this);
	}

	::System::Void BOBFJJPCIIH()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + DFPKJPPEOKJ_LJJAGNHBEDD_BOBFJJPCIIH_OFFSET))(this);
	}
};
