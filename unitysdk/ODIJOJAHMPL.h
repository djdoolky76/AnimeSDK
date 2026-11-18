#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

#define ODIJOJAHMPL__CCTOR_OFFSET UNITYSDK_OFFSET(0x1005E7A0)

inline static constexpr unsigned int ODIJOJAHMPL_TypeDefinitionIndex = 39760;

class ODIJOJAHMPL : public ::System::Object
{
public:
	static ::Il2CppArray<::System::Int32>** StaticGet_ABBCEHJICOP()
	{
		return (::Il2CppArray<::System::Int32>**)Il2CppClass::FromTypeDefinitionIndex(ODIJOJAHMPL_TypeDefinitionIndex)->GetStaticField(0x3CD20);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + ODIJOJAHMPL__CCTOR_OFFSET))();
	}
};
