#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

#define OOFPBNJKIDC__CCTOR_OFFSET UNITYSDK_OFFSET(0xFD979C0)

inline static constexpr unsigned int OOFPBNJKIDC_TypeDefinitionIndex = 43970;

class OOFPBNJKIDC : public ::System::Object
{
public:
	static ::Il2CppArray<::System::Int32>** StaticGet_KLGHLHEGOHG()
	{
		return (::Il2CppArray<::System::Int32>**)Il2CppClass::FromTypeDefinitionIndex(OOFPBNJKIDC_TypeDefinitionIndex)->GetStaticField(0x36150);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + OOFPBNJKIDC__CCTOR_OFFSET))();
	}
};
