#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

#define CKACNACMOED__CCTOR_OFFSET UNITYSDK_OFFSET(0x1455ABC0)

inline static constexpr unsigned int CKACNACMOED_TypeDefinitionIndex = 65831;

class CKACNACMOED : public ::System::Object
{
public:
	static ::Il2CppArray<::System::Int32>** StaticGet_LIIDOJHJBON()
	{
		return (::Il2CppArray<::System::Int32>**)Il2CppClass::FromTypeDefinitionIndex(CKACNACMOED_TypeDefinitionIndex)->GetStaticField(0x500C0);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CKACNACMOED__CCTOR_OFFSET))();
	}
};
