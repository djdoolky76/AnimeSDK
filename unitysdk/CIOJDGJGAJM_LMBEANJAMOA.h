#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System { class Action; }

#define CIOJDGJGAJM_LMBEANJAMOA_HPGKDNJOHMF_OFFSET UNITYSDK_OFFSET(0x145CA540)
#define CIOJDGJGAJM_LMBEANJAMOA__CTOR_OFFSET UNITYSDK_OFFSET(0x145CA530)

inline static constexpr unsigned int CIOJDGJGAJM_LMBEANJAMOA_TypeDefinitionIndex = 80596;

class CIOJDGJGAJM_LMBEANJAMOA : public ::System::Object
{
public:
	::System::Action* AMHGBGMOMLL; // 0x10
	::System::Action* IBNICCGMILF; // 0x18
	::System::Int32 HBINAGPODHA; // 0x20

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CIOJDGJGAJM_LMBEANJAMOA__CTOR_OFFSET))(this);
	}

	::System::Void HPGKDNJOHMF()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CIOJDGJGAJM_LMBEANJAMOA_HPGKDNJOHMF_OFFSET))(this);
	}
};
