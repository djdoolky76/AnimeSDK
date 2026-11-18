#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

#define DMFKNAGALMN__CCTOR_OFFSET UNITYSDK_OFFSET(0x7FC6DD0)

inline static constexpr unsigned int DMFKNAGALMN_TypeDefinitionIndex = 70383;

class DMFKNAGALMN : public ::System::Object
{
public:
	static ::Il2CppArray<::System::Int32>** StaticGet_ADMDLJNAKDD()
	{
		return (::Il2CppArray<::System::Int32>**)Il2CppClass::FromTypeDefinitionIndex(DMFKNAGALMN_TypeDefinitionIndex)->GetStaticField(0x51320);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + DMFKNAGALMN__CCTOR_OFFSET))();
	}
};
