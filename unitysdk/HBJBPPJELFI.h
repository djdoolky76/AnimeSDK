#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

#define HBJBPPJELFI__CCTOR_OFFSET UNITYSDK_OFFSET(0x19DEDC70)

inline static constexpr unsigned int HBJBPPJELFI_TypeDefinitionIndex = 82509;

class HBJBPPJELFI : public ::System::Object
{
public:
	static ::Il2CppArray<::System::Int32>** StaticGet_MKOEPMPEMBF()
	{
		return (::Il2CppArray<::System::Int32>**)Il2CppClass::FromTypeDefinitionIndex(HBJBPPJELFI_TypeDefinitionIndex)->GetStaticField(0x4BA90);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + HBJBPPJELFI__CCTOR_OFFSET))();
	}
};
