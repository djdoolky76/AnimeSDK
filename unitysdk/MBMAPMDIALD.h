#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

#define MBMAPMDIALD__CCTOR_OFFSET UNITYSDK_OFFSET(0x16C72550)

inline static constexpr unsigned int MBMAPMDIALD_TypeDefinitionIndex = 86636;

class MBMAPMDIALD : public ::System::Object
{
public:
	static ::Il2CppArray<::System::Int32>** StaticGet_GPOILOAMHKJ()
	{
		return (::Il2CppArray<::System::Int32>**)Il2CppClass::FromTypeDefinitionIndex(MBMAPMDIALD_TypeDefinitionIndex)->GetStaticField(0x3BC30);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + MBMAPMDIALD__CCTOR_OFFSET))();
	}
};
