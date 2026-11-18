#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

#define JGAMFLFICLC__CCTOR_OFFSET UNITYSDK_OFFSET(0x19458A80)

inline static constexpr unsigned int JGAMFLFICLC_TypeDefinitionIndex = 43900;

class JGAMFLFICLC : public ::System::Object
{
public:
	static ::Il2CppArray<::System::Int32>** StaticGet_GDFJDDFEAIM()
	{
		return (::Il2CppArray<::System::Int32>**)Il2CppClass::FromTypeDefinitionIndex(JGAMFLFICLC_TypeDefinitionIndex)->GetStaticField(0x38040);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + JGAMFLFICLC__CCTOR_OFFSET))();
	}
};
