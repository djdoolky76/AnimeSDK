#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

#define B2485BED5C0310EE_F4578A206E2C2F55_OFFSET UNITYSDK_OFFSET(0x3DE3090)

inline static constexpr unsigned int B2485BED5C0310EE_TypeDefinitionIndex = 20855;

class B2485BED5C0310EE : public ::System::Object
{
public:
	static ::System::Int32* StaticGet_BF3DA0B4FFC2B459()
	{
		return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(B2485BED5C0310EE_TypeDefinitionIndex)->GetStaticField(0x0);
	}

	static ::System::Int32 F4578A206E2C2F55()
	{
		return ((::System::Int32(*)())((::PBYTE)hIl2Cpp + B2485BED5C0310EE_F4578A206E2C2F55_OFFSET))();
	}
};
