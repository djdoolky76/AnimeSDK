#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Attribute.h"

namespace System { class String; }

#define ODADJNGLJMI__CTOR_OFFSET UNITYSDK_OFFSET(0xF176270)

inline static constexpr unsigned int ODADJNGLJMI_TypeDefinitionIndex = 67832;

class ODADJNGLJMI : public ::System::Attribute
{
public:
	::System::String* PIOGANIKOGJ; // 0x10

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ODADJNGLJMI__CTOR_OFFSET))(this);
	}
};
