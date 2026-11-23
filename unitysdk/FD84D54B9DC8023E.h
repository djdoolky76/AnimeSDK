#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

#define FD84D54B9DC8023E__CCTOR_OFFSET UNITYSDK_OFFSET(0x3C1B160)

inline static constexpr unsigned int FD84D54B9DC8023E_TypeDefinitionIndex = 11433;

class FD84D54B9DC8023E : public ::System::Object
{
public:
	static ::System::Object** StaticGet_B275AB32215E1484()
	{
		return (::System::Object**)Il2CppClass::FromTypeDefinitionIndex(FD84D54B9DC8023E_TypeDefinitionIndex)->GetStaticField(0x0);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + FD84D54B9DC8023E__CCTOR_OFFSET))();
	}
};
