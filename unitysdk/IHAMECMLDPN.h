#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

#define IHAMECMLDPN__CTOR_OFFSET UNITYSDK_OFFSET(0x1F30C710)

inline static constexpr unsigned int IHAMECMLDPN_TypeDefinitionIndex = 28729;

class IHAMECMLDPN : public ::System::Object
{
public:
	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + IHAMECMLDPN__CTOR_OFFSET))(this);
	}
};
