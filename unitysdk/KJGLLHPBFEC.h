#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

#define KJGLLHPBFEC__CCTOR_OFFSET UNITYSDK_OFFSET(0x1268AEF0)

inline static constexpr unsigned int KJGLLHPBFEC_TypeDefinitionIndex = 82553;

class KJGLLHPBFEC : public ::System::Object
{
public:
	static ::Il2CppArray<::System::Int32>** StaticGet_IBNFHEKECDK()
	{
		return (::Il2CppArray<::System::Int32>**)Il2CppClass::FromTypeDefinitionIndex(KJGLLHPBFEC_TypeDefinitionIndex)->GetStaticField(0x3B7F0);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + KJGLLHPBFEC__CCTOR_OFFSET))();
	}
};
