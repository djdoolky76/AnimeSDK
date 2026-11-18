#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System { class EventArgs; }

#define LAAKMOPFCLC_MNNADECOFHN_OFFSET UNITYSDK_OFFSET(0x17679E00)
#define LAAKMOPFCLC__CTOR_OFFSET UNITYSDK_OFFSET(0x17679DF0)

inline static constexpr unsigned int LAAKMOPFCLC_TypeDefinitionIndex = 51447;

class LAAKMOPFCLC : public ::System::Object
{
public:
	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + LAAKMOPFCLC__CTOR_OFFSET))(this);
	}

	::System::Void MNNADECOFHN(::System::EventArgs* KOIBHLHLMFC)
	{
		return ((::System::Void(*)(::PVOID, ::System::EventArgs*))((::PBYTE)hIl2Cpp + LAAKMOPFCLC_MNNADECOFHN_OFFSET))(this, KOIBHLHLMFC);
	}
};
