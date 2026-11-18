#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

#define AELKJBKDGCI__CCTOR_OFFSET UNITYSDK_OFFSET(0x12CE4A30)

inline static constexpr unsigned int AELKJBKDGCI_TypeDefinitionIndex = 50262;

class AELKJBKDGCI : public ::System::Object
{
public:
	static ::Il2CppArray<::System::Int32>** StaticGet_IPIICEJONKH()
	{
		return (::Il2CppArray<::System::Int32>**)Il2CppClass::FromTypeDefinitionIndex(AELKJBKDGCI_TypeDefinitionIndex)->GetStaticField(0x45BF0);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + AELKJBKDGCI__CCTOR_OFFSET))();
	}
};
