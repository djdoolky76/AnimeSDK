#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System { class Type; }

#define HLNIOIAECEN__CCTOR_OFFSET UNITYSDK_OFFSET(0x19E2FA20)

inline static constexpr unsigned int HLNIOIAECEN_TypeDefinitionIndex = 84739;

class HLNIOIAECEN : public ::System::Object
{
public:
	static ::Il2CppArray<::System::Type*>** StaticGet_CBDBLKMJIOG()
	{
		return (::Il2CppArray<::System::Type*>**)Il2CppClass::FromTypeDefinitionIndex(HLNIOIAECEN_TypeDefinitionIndex)->GetStaticField(0x4BAF0);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + HLNIOIAECEN__CCTOR_OFFSET))();
	}
};
