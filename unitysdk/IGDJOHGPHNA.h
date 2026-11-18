#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

#define IGDJOHGPHNA_OEDFAEAFHAP_OFFSET UNITYSDK_OFFSET(0xEBCC8F0)
#define IGDJOHGPHNA__CCTOR_OFFSET UNITYSDK_OFFSET(0xEBCC8E0)

inline static constexpr unsigned int IGDJOHGPHNA_TypeDefinitionIndex = 67065;

class IGDJOHGPHNA : public ::System::Object
{
public:
	static ::System::Int32* StaticGet_HCDAENPLJEN()
	{
		return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(IGDJOHGPHNA_TypeDefinitionIndex)->GetStaticField(0xEE90);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + IGDJOHGPHNA__CCTOR_OFFSET))();
	}

	static ::System::Int32 OEDFAEAFHAP()
	{
		return ((::System::Int32(*)())((::PBYTE)hIl2Cpp + IGDJOHGPHNA_OEDFAEAFHAP_OFFSET))();
	}
};
