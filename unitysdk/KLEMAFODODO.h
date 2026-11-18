#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

#define KLEMAFODODO__CCTOR_OFFSET UNITYSDK_OFFSET(0x18636310)

inline static constexpr unsigned int KLEMAFODODO_TypeDefinitionIndex = 49335;

class KLEMAFODODO : public ::System::Object
{
public:
	static ::Il2CppArray<::System::Int32>** StaticGet_FGFENDKLKDI()
	{
		return (::Il2CppArray<::System::Int32>**)Il2CppClass::FromTypeDefinitionIndex(KLEMAFODODO_TypeDefinitionIndex)->GetStaticField(0x51FE0);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + KLEMAFODODO__CCTOR_OFFSET))();
	}
};
