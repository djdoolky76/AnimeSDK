#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

#define CDIICIIIGCG__CCTOR_OFFSET UNITYSDK_OFFSET(0x13254BB0)

inline static constexpr unsigned int CDIICIIIGCG_TypeDefinitionIndex = 63052;

class CDIICIIIGCG : public ::System::Object
{
public:
	static ::Il2CppArray<::System::Int32>** StaticGet_HCFCPPKDBBE()
	{
		return (::Il2CppArray<::System::Int32>**)Il2CppClass::FromTypeDefinitionIndex(CDIICIIIGCG_TypeDefinitionIndex)->GetStaticField(0x49810);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CDIICIIIGCG__CCTOR_OFFSET))();
	}
};
