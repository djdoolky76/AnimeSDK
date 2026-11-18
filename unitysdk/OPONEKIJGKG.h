#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

#define OPONEKIJGKG__CCTOR_OFFSET UNITYSDK_OFFSET(0x178A9C80)

inline static constexpr unsigned int OPONEKIJGKG_TypeDefinitionIndex = 39627;

class OPONEKIJGKG : public ::System::Object
{
public:
	static ::Il2CppArray<::System::Int32>** StaticGet_AHMFKFALJHA()
	{
		return (::Il2CppArray<::System::Int32>**)Il2CppClass::FromTypeDefinitionIndex(OPONEKIJGKG_TypeDefinitionIndex)->GetStaticField(0x47870);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + OPONEKIJGKG__CCTOR_OFFSET))();
	}
};
