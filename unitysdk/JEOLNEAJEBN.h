#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

#define JEOLNEAJEBN__CCTOR_OFFSET UNITYSDK_OFFSET(0x14FAB190)

inline static constexpr unsigned int JEOLNEAJEBN_TypeDefinitionIndex = 40394;

class JEOLNEAJEBN : public ::System::Object
{
public:
	static ::Il2CppArray<::System::Int32>** StaticGet_OEEAPGHHAPI()
	{
		return (::Il2CppArray<::System::Int32>**)Il2CppClass::FromTypeDefinitionIndex(JEOLNEAJEBN_TypeDefinitionIndex)->GetStaticField(0x3B580);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + JEOLNEAJEBN__CCTOR_OFFSET))();
	}
};
