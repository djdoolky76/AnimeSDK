#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

#define CAACEPAJABN__CCTOR_OFFSET UNITYSDK_OFFSET(0x18DBDCE0)

inline static constexpr unsigned int CAACEPAJABN_TypeDefinitionIndex = 91729;

class CAACEPAJABN : public ::System::Object
{
public:
	static ::Il2CppArray<::System::Int32>** StaticGet_DFALIAKOOJI()
	{
		return (::Il2CppArray<::System::Int32>**)Il2CppClass::FromTypeDefinitionIndex(CAACEPAJABN_TypeDefinitionIndex)->GetStaticField(0x4B500);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CAACEPAJABN__CCTOR_OFFSET))();
	}
};
