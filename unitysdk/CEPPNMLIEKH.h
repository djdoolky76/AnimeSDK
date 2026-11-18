#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

#define CEPPNMLIEKH__CCTOR_OFFSET UNITYSDK_OFFSET(0x1454CC80)

inline static constexpr unsigned int CEPPNMLIEKH_TypeDefinitionIndex = 93223;

class CEPPNMLIEKH : public ::System::Object
{
public:
	static ::Il2CppArray<::System::Int32>** StaticGet_ODJBADPEIFK()
	{
		return (::Il2CppArray<::System::Int32>**)Il2CppClass::FromTypeDefinitionIndex(CEPPNMLIEKH_TypeDefinitionIndex)->GetStaticField(0x50090);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CEPPNMLIEKH__CCTOR_OFFSET))();
	}
};
