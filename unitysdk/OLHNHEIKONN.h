#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

#define OLHNHEIKONN__CCTOR_OFFSET UNITYSDK_OFFSET(0x15FEB820)

inline static constexpr unsigned int OLHNHEIKONN_TypeDefinitionIndex = 50459;

class OLHNHEIKONN : public ::System::Object
{
public:
	static ::Il2CppArray<::System::Int32>** StaticGet_HOPNCNPEJCO()
	{
		return (::Il2CppArray<::System::Int32>**)Il2CppClass::FromTypeDefinitionIndex(OLHNHEIKONN_TypeDefinitionIndex)->GetStaticField(0x4EF80);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + OLHNHEIKONN__CCTOR_OFFSET))();
	}
};
