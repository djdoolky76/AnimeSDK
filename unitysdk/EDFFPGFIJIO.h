#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

#define EDFFPGFIJIO__CCTOR_OFFSET UNITYSDK_OFFSET(0x16132590)

inline static constexpr unsigned int EDFFPGFIJIO_TypeDefinitionIndex = 44389;

class EDFFPGFIJIO : public ::System::Object
{
public:
	static ::Il2CppArray<::System::Int32>** StaticGet_NKMCNJDMKCB()
	{
		return (::Il2CppArray<::System::Int32>**)Il2CppClass::FromTypeDefinitionIndex(EDFFPGFIJIO_TypeDefinitionIndex)->GetStaticField(0x49A10);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + EDFFPGFIJIO__CCTOR_OFFSET))();
	}
};
