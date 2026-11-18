#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/GBFLKGNNJND.h"

namespace System { class Exception; }
namespace System { class String; }

#define IDNDIECEBAC__CTOR_1_OFFSET UNITYSDK_OFFSET(0x12EA4E80)
#define IDNDIECEBAC__CTOR_2_OFFSET UNITYSDK_OFFSET(0x12EA4F00)
#define IDNDIECEBAC__CTOR_OFFSET UNITYSDK_OFFSET(0x12EA4E00)

inline static constexpr unsigned int IDNDIECEBAC_TypeDefinitionIndex = 78516;

class IDNDIECEBAC : public ::GBFLKGNNJND
{
public:
	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + IDNDIECEBAC__CTOR_OFFSET))(this);
	}

	::System::Void _ctor_1(::System::String* NAPFALLANDL)
	{
		return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + IDNDIECEBAC__CTOR_1_OFFSET))(this, NAPFALLANDL);
	}

	::System::Void _ctor_2(::System::String* NAPFALLANDL, ::System::Exception* BDLKAKKCAII)
	{
		return ((::System::Void(*)(::PVOID, ::System::String*, ::System::Exception*))((::PBYTE)hIl2Cpp + IDNDIECEBAC__CTOR_2_OFFSET))(this, NAPFALLANDL, BDLKAKKCAII);
	}
};
