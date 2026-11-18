#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Exception.h"

namespace System { class String; }

#define GBFLKGNNJND__CTOR_1_OFFSET UNITYSDK_OFFSET(0x13DABEC0)
#define GBFLKGNNJND__CTOR_2_OFFSET UNITYSDK_OFFSET(0x13DABF40)
#define GBFLKGNNJND__CTOR_OFFSET UNITYSDK_OFFSET(0x13DABE40)

inline static constexpr unsigned int GBFLKGNNJND_TypeDefinitionIndex = 83214;

class GBFLKGNNJND : public ::System::Exception
{
public:
	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + GBFLKGNNJND__CTOR_OFFSET))(this);
	}

	::System::Void _ctor_1(::System::String* NAPFALLANDL)
	{
		return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + GBFLKGNNJND__CTOR_1_OFFSET))(this, NAPFALLANDL);
	}

	::System::Void _ctor_2(::System::String* NAPFALLANDL, ::System::Exception* BDLKAKKCAII)
	{
		return ((::System::Void(*)(::PVOID, ::System::String*, ::System::Exception*))((::PBYTE)hIl2Cpp + GBFLKGNNJND__CTOR_2_OFFSET))(this, NAPFALLANDL, BDLKAKKCAII);
	}
};
