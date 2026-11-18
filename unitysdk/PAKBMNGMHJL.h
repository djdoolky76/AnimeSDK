#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

#define PAKBMNGMHJL__CCTOR_OFFSET UNITYSDK_OFFSET(0x1AFCDC90)

inline static constexpr unsigned int PAKBMNGMHJL_TypeDefinitionIndex = 58883;

class PAKBMNGMHJL : public ::System::Object
{
public:
	static ::Il2CppArray<::System::Int32>** StaticGet_OPCEICFGJLO()
	{
		return (::Il2CppArray<::System::Int32>**)Il2CppClass::FromTypeDefinitionIndex(PAKBMNGMHJL_TypeDefinitionIndex)->GetStaticField(0x492E0);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + PAKBMNGMHJL__CCTOR_OFFSET))();
	}
};
