#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System { class String; }

#define AEBNPGJCBEP__CTOR_OFFSET UNITYSDK_OFFSET(0x16FD7FF0)

inline static constexpr unsigned int AEBNPGJCBEP_TypeDefinitionIndex = 61625;

class AEBNPGJCBEP : public ::System::Object
{
public:
	::System::String* ILBBAFJPNHD; // 0x10

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + AEBNPGJCBEP__CTOR_OFFSET))(this);
	}
};
