#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

#define IPHGOFGDGNL__CCTOR_OFFSET UNITYSDK_OFFSET(0x14A3DE30)

inline static constexpr unsigned int IPHGOFGDGNL_TypeDefinitionIndex = 68734;

class IPHGOFGDGNL : public ::System::Object
{
public:
	static ::Il2CppArray<::System::Int32>** StaticGet_KGPHGEBHALG()
	{
		return (::Il2CppArray<::System::Int32>**)Il2CppClass::FromTypeDefinitionIndex(IPHGOFGDGNL_TypeDefinitionIndex)->GetStaticField(0x50910);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + IPHGOFGDGNL__CCTOR_OFFSET))();
	}
};
