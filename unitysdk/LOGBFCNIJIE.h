#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/PPLAOIGCPBH.h"

namespace System { class String; }

#define LOGBFCNIJIE__CTOR_OFFSET UNITYSDK_OFFSET(0x11F28500)

inline static constexpr unsigned int LOGBFCNIJIE_TypeDefinitionIndex = 65811;

class LOGBFCNIJIE : public ::PPLAOIGCPBH
{
public:
	::System::String* HIEDLDBGDGP; // 0x28
	::System::String* CCPPIEGPMKB; // 0x30
	::System::String* LCKCLJHKLND; // 0x38

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + LOGBFCNIJIE__CTOR_OFFSET))(this);
	}
};
