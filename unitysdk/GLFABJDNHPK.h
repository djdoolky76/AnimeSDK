#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

#define GLFABJDNHPK__CCTOR_OFFSET UNITYSDK_OFFSET(0x14CFA190)

inline static constexpr unsigned int GLFABJDNHPK_TypeDefinitionIndex = 72352;

class GLFABJDNHPK : public ::System::Object
{
public:
	static ::Il2CppArray<::System::Int32>** StaticGet_CIBFDMMIBJL()
	{
		return (::Il2CppArray<::System::Int32>**)Il2CppClass::FromTypeDefinitionIndex(GLFABJDNHPK_TypeDefinitionIndex)->GetStaticField(0x49C60);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + GLFABJDNHPK__CCTOR_OFFSET))();
	}
};
