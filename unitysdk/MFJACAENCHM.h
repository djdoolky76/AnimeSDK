#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

#define MFJACAENCHM__CCTOR_OFFSET UNITYSDK_OFFSET(0x14D76700)

inline static constexpr unsigned int MFJACAENCHM_TypeDefinitionIndex = 42528;

class MFJACAENCHM : public ::System::Object
{
public:
	static ::Il2CppArray<::System::Int32>** StaticGet_HMPIHDCEFBB()
	{
		return (::Il2CppArray<::System::Int32>**)Il2CppClass::FromTypeDefinitionIndex(MFJACAENCHM_TypeDefinitionIndex)->GetStaticField(0x4E7D0);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + MFJACAENCHM__CCTOR_OFFSET))();
	}
};
