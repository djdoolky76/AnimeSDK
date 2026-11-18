#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

#define NILLGCCKKBC__CCTOR_OFFSET UNITYSDK_OFFSET(0x105BBE40)

inline static constexpr unsigned int NILLGCCKKBC_TypeDefinitionIndex = 68691;

class NILLGCCKKBC : public ::System::Object
{
public:
	static ::Il2CppArray<::System::Int32>** StaticGet_OAMPNPPPEHA()
	{
		return (::Il2CppArray<::System::Int32>**)Il2CppClass::FromTypeDefinitionIndex(NILLGCCKKBC_TypeDefinitionIndex)->GetStaticField(0x4AF70);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + NILLGCCKKBC__CCTOR_OFFSET))();
	}
};
