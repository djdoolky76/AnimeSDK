#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

#define DCKODJPGHCO__CCTOR_OFFSET UNITYSDK_OFFSET(0x1A1CFC80)

inline static constexpr unsigned int DCKODJPGHCO_TypeDefinitionIndex = 65467;

class DCKODJPGHCO : public ::System::Object
{
public:
	static ::Il2CppArray<::System::Int32>** StaticGet_MFBPOFIAPGA()
	{
		return (::Il2CppArray<::System::Int32>**)Il2CppClass::FromTypeDefinitionIndex(DCKODJPGHCO_TypeDefinitionIndex)->GetStaticField(0x3D840);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + DCKODJPGHCO__CCTOR_OFFSET))();
	}
};
