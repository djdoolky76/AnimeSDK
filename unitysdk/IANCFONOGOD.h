#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

#define IANCFONOGOD__CCTOR_OFFSET UNITYSDK_OFFSET(0x16F55E00)

inline static constexpr unsigned int IANCFONOGOD_TypeDefinitionIndex = 57557;

class IANCFONOGOD : public ::System::Object
{
public:
	static ::Il2CppArray<::System::Int32>** StaticGet_NKBLPFEOIPM()
	{
		return (::Il2CppArray<::System::Int32>**)Il2CppClass::FromTypeDefinitionIndex(IANCFONOGOD_TypeDefinitionIndex)->GetStaticField(0x3DFD0);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + IANCFONOGOD__CCTOR_OFFSET))();
	}
};
