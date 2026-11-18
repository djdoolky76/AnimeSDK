#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

#define PNPHBAIEDEI__CCTOR_OFFSET UNITYSDK_OFFSET(0x150E22B0)

inline static constexpr unsigned int PNPHBAIEDEI_TypeDefinitionIndex = 50650;

class PNPHBAIEDEI : public ::System::Object
{
public:
	static ::Il2CppArray<::System::Int32>** StaticGet_ACEBCKHNJPL()
	{
		return (::Il2CppArray<::System::Int32>**)Il2CppClass::FromTypeDefinitionIndex(PNPHBAIEDEI_TypeDefinitionIndex)->GetStaticField(0x52450);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + PNPHBAIEDEI__CCTOR_OFFSET))();
	}
};
