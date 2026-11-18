#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

#define IPAICLKMMFA__CCTOR_OFFSET UNITYSDK_OFFSET(0x142022C0)

inline static constexpr unsigned int IPAICLKMMFA_TypeDefinitionIndex = 87182;

class IPAICLKMMFA : public ::System::Object
{
public:
	static ::Il2CppArray<::System::Int32>** StaticGet_PEIPMNPGCGE()
	{
		return (::Il2CppArray<::System::Int32>**)Il2CppClass::FromTypeDefinitionIndex(IPAICLKMMFA_TypeDefinitionIndex)->GetStaticField(0x49E90);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + IPAICLKMMFA__CCTOR_OFFSET))();
	}
};
