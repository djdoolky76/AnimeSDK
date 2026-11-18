#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System { class Action; }

#define AODCNDCIDKF_HKJHBGLDELF_FLHICLOMOFA_OFFSET UNITYSDK_OFFSET(0x142317A0)
#define AODCNDCIDKF_HKJHBGLDELF__CTOR_OFFSET UNITYSDK_OFFSET(0x14231790)

inline static constexpr unsigned int AODCNDCIDKF_HKJHBGLDELF_TypeDefinitionIndex = 79591;

class AODCNDCIDKF_HKJHBGLDELF : public ::System::Object
{
public:
	::System::Action* PFNNGIKBBJL; // 0x10

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + AODCNDCIDKF_HKJHBGLDELF__CTOR_OFFSET))(this);
	}

	::System::Void FLHICLOMOFA()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + AODCNDCIDKF_HKJHBGLDELF_FLHICLOMOFA_OFFSET))(this);
	}
};
