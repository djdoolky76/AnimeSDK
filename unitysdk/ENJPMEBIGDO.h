#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System { class String; }

#define ENJPMEBIGDO_DPIHOJBBGLA_OFFSET UNITYSDK_OFFSET(0x1E740EF0)
#define ENJPMEBIGDO_TOSTRING_OFFSET UNITYSDK_OFFSET(0x1E740E00)
#define ENJPMEBIGDO__CTOR_OFFSET UNITYSDK_OFFSET(0x1E740EE0)

inline static constexpr unsigned int ENJPMEBIGDO_TypeDefinitionIndex = 94584;

class ENJPMEBIGDO : public ::System::Object
{
public:
	::System::Int32 IEPBPNLNBMA; // 0x10
	::System::Int32 EOMONIABGLD; // 0x14

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ENJPMEBIGDO__CTOR_OFFSET))(this);
	}

	::System::String* ToString()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + ENJPMEBIGDO_TOSTRING_OFFSET))(this);
	}

	::System::String* DPIHOJBBGLA()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + ENJPMEBIGDO_DPIHOJBBGLA_OFFSET))(this);
	}
};
