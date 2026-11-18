#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

#define ACONEEGJEMK__CCTOR_OFFSET UNITYSDK_OFFSET(0x1433DBE0)

inline static constexpr unsigned int ACONEEGJEMK_TypeDefinitionIndex = 87116;

class ACONEEGJEMK : public ::System::Object
{
public:
	static ::Il2CppArray<::System::Int32>** StaticGet_BMKPHLFECJK()
	{
		return (::Il2CppArray<::System::Int32>**)Il2CppClass::FromTypeDefinitionIndex(ACONEEGJEMK_TypeDefinitionIndex)->GetStaticField(0x3D2E0);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + ACONEEGJEMK__CCTOR_OFFSET))();
	}
};
