#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

#define NBNEMBDJELF__CCTOR_OFFSET UNITYSDK_OFFSET(0x120F1FD0)

inline static constexpr unsigned int NBNEMBDJELF_TypeDefinitionIndex = 72274;

class NBNEMBDJELF : public ::System::Object
{
public:
	static ::Il2CppArray<::System::Int32>** StaticGet_CMEHODDMBCA()
	{
		return (::Il2CppArray<::System::Int32>**)Il2CppClass::FromTypeDefinitionIndex(NBNEMBDJELF_TypeDefinitionIndex)->GetStaticField(0x52270);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + NBNEMBDJELF__CCTOR_OFFSET))();
	}
};
