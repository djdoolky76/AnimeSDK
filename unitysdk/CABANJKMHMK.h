#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

#define CABANJKMHMK__CCTOR_OFFSET UNITYSDK_OFFSET(0x11527140)

inline static constexpr unsigned int CABANJKMHMK_TypeDefinitionIndex = 55218;

class CABANJKMHMK : public ::System::Object
{
public:
	static ::Il2CppArray<::System::Int32>** StaticGet_GDJPDFLNGGI()
	{
		return (::Il2CppArray<::System::Int32>**)Il2CppClass::FromTypeDefinitionIndex(CABANJKMHMK_TypeDefinitionIndex)->GetStaticField(0x42EE0);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CABANJKMHMK__CCTOR_OFFSET))();
	}
};
