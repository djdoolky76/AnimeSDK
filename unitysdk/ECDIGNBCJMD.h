#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

#define ECDIGNBCJMD__CCTOR_OFFSET UNITYSDK_OFFSET(0x12BE2060)

inline static constexpr unsigned int ECDIGNBCJMD_TypeDefinitionIndex = 40941;

class ECDIGNBCJMD : public ::System::Object
{
public:
	static ::Il2CppArray<::System::Int32>** StaticGet_HOMOBCMMENI()
	{
		return (::Il2CppArray<::System::Int32>**)Il2CppClass::FromTypeDefinitionIndex(ECDIGNBCJMD_TypeDefinitionIndex)->GetStaticField(0x45F20);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + ECDIGNBCJMD__CCTOR_OFFSET))();
	}
};
