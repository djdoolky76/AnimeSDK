#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

#define HMHFJIHOJJA__CCTOR_OFFSET UNITYSDK_OFFSET(0x17B0FF30)

inline static constexpr unsigned int HMHFJIHOJJA_TypeDefinitionIndex = 61957;

class HMHFJIHOJJA : public ::System::Object
{
public:
	static ::Il2CppArray<::System::Int32>** StaticGet_MMELJEEOBMI()
	{
		return (::Il2CppArray<::System::Int32>**)Il2CppClass::FromTypeDefinitionIndex(HMHFJIHOJJA_TypeDefinitionIndex)->GetStaticField(0x51470);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + HMHFJIHOJJA__CCTOR_OFFSET))();
	}
};
