#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

#define IINADOIKOAP__CCTOR_OFFSET UNITYSDK_OFFSET(0x197CB3C0)

inline static constexpr unsigned int IINADOIKOAP_TypeDefinitionIndex = 80452;

class IINADOIKOAP : public ::System::Object
{
public:
	static ::Il2CppArray<::System::Int32>** StaticGet_HCNKCHGKPPP()
	{
		return (::Il2CppArray<::System::Int32>**)Il2CppClass::FromTypeDefinitionIndex(IINADOIKOAP_TypeDefinitionIndex)->GetStaticField(0x4BBE0);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + IINADOIKOAP__CCTOR_OFFSET))();
	}
};
