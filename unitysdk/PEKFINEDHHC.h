#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System { class String; }

#define PEKFINEDHHC__CTOR_OFFSET UNITYSDK_OFFSET(0x178C1160)

inline static constexpr unsigned int PEKFINEDHHC_TypeDefinitionIndex = 91469;

class PEKFINEDHHC : public ::System::Object
{
public:
	::System::String* JGJHNGLGFPM; // 0x10
	::System::String* OCADMPMDFFF; // 0x18
	::System::UInt32 MLIGANAEDBC; // 0x20

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + PEKFINEDHHC__CTOR_OFFSET))(this);
	}
};
