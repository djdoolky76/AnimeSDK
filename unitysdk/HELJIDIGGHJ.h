#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

#define HELJIDIGGHJ__CCTOR_OFFSET UNITYSDK_OFFSET(0x17AF1B70)

inline static constexpr unsigned int HELJIDIGGHJ_TypeDefinitionIndex = 59928;

class HELJIDIGGHJ : public ::System::Object
{
public:
	static ::Il2CppArray<::System::Int32>** StaticGet_MNCEBPMOPIJ()
	{
		return (::Il2CppArray<::System::Int32>**)Il2CppClass::FromTypeDefinitionIndex(HELJIDIGGHJ_TypeDefinitionIndex)->GetStaticField(0x51440);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + HELJIDIGGHJ__CCTOR_OFFSET))();
	}
};
