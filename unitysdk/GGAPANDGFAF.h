#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

#define GGAPANDGFAF__CCTOR_OFFSET UNITYSDK_OFFSET(0x189FD130)

inline static constexpr unsigned int GGAPANDGFAF_TypeDefinitionIndex = 57081;

class GGAPANDGFAF : public ::System::Object
{
public:
	static ::Il2CppArray<::System::Int32>** StaticGet_PGLAMMKKOIM()
	{
		return (::Il2CppArray<::System::Int32>**)Il2CppClass::FromTypeDefinitionIndex(GGAPANDGFAF_TypeDefinitionIndex)->GetStaticField(0x44140);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + GGAPANDGFAF__CCTOR_OFFSET))();
	}
};
