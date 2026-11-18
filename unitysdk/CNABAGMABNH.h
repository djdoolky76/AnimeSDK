#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

#define CNABAGMABNH__CCTOR_OFFSET UNITYSDK_OFFSET(0x1A1BE0F0)

inline static constexpr unsigned int CNABAGMABNH_TypeDefinitionIndex = 86531;

class CNABAGMABNH : public ::System::Object
{
public:
	static ::Il2CppArray<::System::Int32>** StaticGet_PPENFIGKJIP()
	{
		return (::Il2CppArray<::System::Int32>**)Il2CppClass::FromTypeDefinitionIndex(CNABAGMABNH_TypeDefinitionIndex)->GetStaticField(0x3D6A0);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CNABAGMABNH__CCTOR_OFFSET))();
	}
};
