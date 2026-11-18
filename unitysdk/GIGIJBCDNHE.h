#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

#define GIGIJBCDNHE__CCTOR_OFFSET UNITYSDK_OFFSET(0x116FA150)

inline static constexpr unsigned int GIGIJBCDNHE_TypeDefinitionIndex = 49806;

class GIGIJBCDNHE : public ::System::Object
{
public:
	static ::Il2CppArray<::System::Int32>** StaticGet_BOMBLNIFIPC()
	{
		return (::Il2CppArray<::System::Int32>**)Il2CppClass::FromTypeDefinitionIndex(GIGIJBCDNHE_TypeDefinitionIndex)->GetStaticField(0x39D00);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + GIGIJBCDNHE__CCTOR_OFFSET))();
	}
};
