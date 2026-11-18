#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

#define GMPOIIEJEOG__CCTOR_OFFSET UNITYSDK_OFFSET(0x18161E80)

inline static constexpr unsigned int GMPOIIEJEOG_TypeDefinitionIndex = 38992;

class GMPOIIEJEOG : public ::System::Object
{
public:
	static ::Il2CppArray<::System::Int32>** StaticGet_LNDNFAGDFBE()
	{
		return (::Il2CppArray<::System::Int32>**)Il2CppClass::FromTypeDefinitionIndex(GMPOIIEJEOG_TypeDefinitionIndex)->GetStaticField(0x3B050);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + GMPOIIEJEOG__CCTOR_OFFSET))();
	}
};
