#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

#define FFGENGKJIKM__CCTOR_OFFSET UNITYSDK_OFFSET(0x16183E30)

inline static constexpr unsigned int FFGENGKJIKM_TypeDefinitionIndex = 64356;

class FFGENGKJIKM : public ::System::Object
{
public:
	static ::Il2CppArray<::System::Int32>** StaticGet_INMNKPAHKDJ()
	{
		return (::Il2CppArray<::System::Int32>**)Il2CppClass::FromTypeDefinitionIndex(FFGENGKJIKM_TypeDefinitionIndex)->GetStaticField(0x49B10);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + FFGENGKJIKM__CCTOR_OFFSET))();
	}
};
