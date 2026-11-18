#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

#define BJGCJGPACNN__CCTOR_OFFSET UNITYSDK_OFFSET(0x128AC0F0)

inline static constexpr unsigned int BJGCJGPACNN_TypeDefinitionIndex = 52329;

class BJGCJGPACNN : public ::System::Object
{
public:
	static ::Il2CppArray<::System::Int32>** StaticGet_FJDFDLKKDJF()
	{
		return (::Il2CppArray<::System::Int32>**)Il2CppClass::FromTypeDefinitionIndex(BJGCJGPACNN_TypeDefinitionIndex)->GetStaticField(0x3D4D0);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + BJGCJGPACNN__CCTOR_OFFSET))();
	}
};
