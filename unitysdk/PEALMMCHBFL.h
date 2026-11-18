#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

#define PEALMMCHBFL__CCTOR_OFFSET UNITYSDK_OFFSET(0x1AFD7300)

inline static constexpr unsigned int PEALMMCHBFL_TypeDefinitionIndex = 89182;

class PEALMMCHBFL : public ::System::Object
{
public:
	static ::Il2CppArray<::System::Int32>** StaticGet_MNJMOEHANIC()
	{
		return (::Il2CppArray<::System::Int32>**)Il2CppClass::FromTypeDefinitionIndex(PEALMMCHBFL_TypeDefinitionIndex)->GetStaticField(0x49330);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + PEALMMCHBFL__CCTOR_OFFSET))();
	}
};
