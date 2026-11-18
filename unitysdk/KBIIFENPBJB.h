#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

#define KBIIFENPBJB__CCTOR_OFFSET UNITYSDK_OFFSET(0x12977AC0)

inline static constexpr unsigned int KBIIFENPBJB_TypeDefinitionIndex = 74333;

class KBIIFENPBJB : public ::System::Object
{
public:
	static ::Il2CppArray<::System::Int32>** StaticGet_FHCFEOCECLA()
	{
		return (::Il2CppArray<::System::Int32>**)Il2CppClass::FromTypeDefinitionIndex(KBIIFENPBJB_TypeDefinitionIndex)->GetStaticField(0x41040);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + KBIIFENPBJB__CCTOR_OFFSET))();
	}
};
