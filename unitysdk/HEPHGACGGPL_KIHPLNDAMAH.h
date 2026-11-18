#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class JIFHNNGLAEB;

#define HEPHGACGGPL_KIHPLNDAMAH_JCJJBMAGAOP_OFFSET UNITYSDK_OFFSET(0x1BAD8630)
#define HEPHGACGGPL_KIHPLNDAMAH__CTOR_OFFSET UNITYSDK_OFFSET(0x1BAD8620)

inline static constexpr unsigned int HEPHGACGGPL_KIHPLNDAMAH_TypeDefinitionIndex = 13367;

class HEPHGACGGPL_KIHPLNDAMAH : public ::System::Object
{
public:
	::System::Int32 AOCOIDIMLIH; // 0x10

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + HEPHGACGGPL_KIHPLNDAMAH__CTOR_OFFSET))(this);
	}

	::System::Boolean JCJJBMAGAOP(::JIFHNNGLAEB* HAAEBCOBKFF)
	{
		return ((::System::Boolean(*)(::PVOID, ::JIFHNNGLAEB*))((::PBYTE)hIl2Cpp + HEPHGACGGPL_KIHPLNDAMAH_JCJJBMAGAOP_OFFSET))(this, HAAEBCOBKFF);
	}
};
