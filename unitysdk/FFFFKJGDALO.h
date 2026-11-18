#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

#define FFFFKJGDALO__CCTOR_OFFSET UNITYSDK_OFFSET(0x15E5E410)

inline static constexpr unsigned int FFFFKJGDALO_TypeDefinitionIndex = 60233;

class FFFFKJGDALO : public ::System::Object
{
public:
	static ::Il2CppArray<::System::Int32>** StaticGet_ALNADICHFMD()
	{
		return (::Il2CppArray<::System::Int32>**)Il2CppClass::FromTypeDefinitionIndex(FFFFKJGDALO_TypeDefinitionIndex)->GetStaticField(0x51E40);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + FFFFKJGDALO__CCTOR_OFFSET))();
	}
};
