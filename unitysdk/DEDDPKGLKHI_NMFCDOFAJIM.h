#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System { class String; }

#define DEDDPKGLKHI_NMFCDOFAJIM__CTOR_OFFSET UNITYSDK_OFFSET(0x19A3A5B0)

inline static constexpr unsigned int DEDDPKGLKHI_NMFCDOFAJIM_TypeDefinitionIndex = 78349;

class DEDDPKGLKHI_NMFCDOFAJIM : public ::System::Object
{
public:
	::System::String* MABNGHPEDAP; // 0x10

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + DEDDPKGLKHI_NMFCDOFAJIM__CTOR_OFFSET))(this);
	}
};
