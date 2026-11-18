#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class BCPLJJIAKMO;
class FAAMLCKCIEM;

#define IANGOGBBEIL_MNHAOMAHAPE_NODFIIFNHML_OFFSET UNITYSDK_OFFSET(0x15E9A460)
#define IANGOGBBEIL_MNHAOMAHAPE__CTOR_OFFSET UNITYSDK_OFFSET(0x15E9A450)

inline static constexpr unsigned int IANGOGBBEIL_MNHAOMAHAPE_TypeDefinitionIndex = 57491;

class IANGOGBBEIL_MNHAOMAHAPE : public ::System::Object
{
public:
	::FAAMLCKCIEM* HELCPNABEAN; // 0x10

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + IANGOGBBEIL_MNHAOMAHAPE__CTOR_OFFSET))(this);
	}

	::System::Boolean NODFIIFNHML(::BCPLJJIAKMO* HAAEBCOBKFF)
	{
		return ((::System::Boolean(*)(::PVOID, ::BCPLJJIAKMO*))((::PBYTE)hIl2Cpp + IANGOGBBEIL_MNHAOMAHAPE_NODFIIFNHML_OFFSET))(this, HAAEBCOBKFF);
	}
};
