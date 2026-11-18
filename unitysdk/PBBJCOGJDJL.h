#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

#define PBBJCOGJDJL__CCTOR_OFFSET UNITYSDK_OFFSET(0x16F9AF70)

inline static constexpr unsigned int PBBJCOGJDJL_TypeDefinitionIndex = 68576;

class PBBJCOGJDJL : public ::System::Object
{
public:
	static ::Il2CppArray<::System::Int32>** StaticGet_BOHIPOBPHKJ()
	{
		return (::Il2CppArray<::System::Int32>**)Il2CppClass::FromTypeDefinitionIndex(PBBJCOGJDJL_TypeDefinitionIndex)->GetStaticField(0x4DE50);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + PBBJCOGJDJL__CCTOR_OFFSET))();
	}
};
