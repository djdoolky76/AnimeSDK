#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

#define PCDACEAJFEK__CCTOR_OFFSET UNITYSDK_OFFSET(0xFDA15E0)

inline static constexpr unsigned int PCDACEAJFEK_TypeDefinitionIndex = 58047;

class PCDACEAJFEK : public ::System::Object
{
public:
	static ::Il2CppArray<::System::Int32>** StaticGet_KIMAOKENDFJ()
	{
		return (::Il2CppArray<::System::Int32>**)Il2CppClass::FromTypeDefinitionIndex(PCDACEAJFEK_TypeDefinitionIndex)->GetStaticField(0x361A0);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + PCDACEAJFEK__CCTOR_OFFSET))();
	}
};
