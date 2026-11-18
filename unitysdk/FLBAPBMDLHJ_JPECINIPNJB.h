#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

#define FLBAPBMDLHJ_JPECINIPNJB_FENCOLLJAMO_OFFSET UNITYSDK_OFFSET(0x14ADE6C0)

inline static constexpr unsigned int FLBAPBMDLHJ_JPECINIPNJB_TypeDefinitionIndex = 53973;

class FLBAPBMDLHJ_JPECINIPNJB : public ::System::Object
{
public:
	static ::System::UInt32* StaticGet_JDMPCOIOMAM()
	{
		return (::System::UInt32*)Il2CppClass::FromTypeDefinitionIndex(FLBAPBMDLHJ_JPECINIPNJB_TypeDefinitionIndex)->GetStaticField(0x126D0);
	}

	static ::System::UInt32 FENCOLLJAMO()
	{
		return ((::System::UInt32(*)())((::PBYTE)hIl2Cpp + FLBAPBMDLHJ_JPECINIPNJB_FENCOLLJAMO_OFFSET))();
	}
};
