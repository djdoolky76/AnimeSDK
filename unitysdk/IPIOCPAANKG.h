#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

#define IPIOCPAANKG__CCTOR_OFFSET UNITYSDK_OFFSET(0x160C4610)

inline static constexpr unsigned int IPIOCPAANKG_TypeDefinitionIndex = 61527;

class IPIOCPAANKG : public ::System::Object
{
public:
	static ::Il2CppArray<::System::Int32>** StaticGet_BGFBANNGADD()
	{
		return (::Il2CppArray<::System::Int32>**)Il2CppClass::FromTypeDefinitionIndex(IPIOCPAANKG_TypeDefinitionIndex)->GetStaticField(0x4E5C0);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + IPIOCPAANKG__CCTOR_OFFSET))();
	}
};
