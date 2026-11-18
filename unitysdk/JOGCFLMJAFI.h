#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

#define JOGCFLMJAFI__CCTOR_OFFSET UNITYSDK_OFFSET(0x18754420)

inline static constexpr unsigned int JOGCFLMJAFI_TypeDefinitionIndex = 87787;

class JOGCFLMJAFI : public ::System::Object
{
public:
	static ::Il2CppArray<::System::Int32>** StaticGet_MLOGNELPHMA()
	{
		return (::Il2CppArray<::System::Int32>**)Il2CppClass::FromTypeDefinitionIndex(JOGCFLMJAFI_TypeDefinitionIndex)->GetStaticField(0x41000);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + JOGCFLMJAFI__CCTOR_OFFSET))();
	}
};
