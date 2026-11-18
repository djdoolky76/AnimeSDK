#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class PKBACGKGBBO;

#define POPCMBHIDAH_OABPFDBPAFE_MADDGFINLHA_OFFSET UNITYSDK_OFFSET(0x1DA193F0)
#define POPCMBHIDAH_OABPFDBPAFE__CTOR_OFFSET UNITYSDK_OFFSET(0x1DA193E0)

inline static constexpr unsigned int POPCMBHIDAH_OABPFDBPAFE_TypeDefinitionIndex = 93887;

class POPCMBHIDAH_OABPFDBPAFE : public ::System::Object
{
public:
	::PKBACGKGBBO* NJCFMPDBFBD; // 0x10

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + POPCMBHIDAH_OABPFDBPAFE__CTOR_OFFSET))(this);
	}

	::System::Void MADDGFINLHA(::System::Int32 MGMDLMBEDJF)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + POPCMBHIDAH_OABPFDBPAFE_MADDGFINLHA_OFFSET))(this, MGMDLMBEDJF);
	}
};
