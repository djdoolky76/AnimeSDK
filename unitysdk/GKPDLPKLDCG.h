#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

#define GKPDLPKLDCG__CCTOR_OFFSET UNITYSDK_OFFSET(0x149DCE00)

inline static constexpr unsigned int GKPDLPKLDCG_TypeDefinitionIndex = 43988;

class GKPDLPKLDCG : public ::System::Object
{
public:
	static ::Il2CppArray<::System::Int32>** StaticGet_KHMEOAGBCBN()
	{
		return (::Il2CppArray<::System::Int32>**)Il2CppClass::FromTypeDefinitionIndex(GKPDLPKLDCG_TypeDefinitionIndex)->GetStaticField(0x31CC0);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + GKPDLPKLDCG__CCTOR_OFFSET))();
	}
};
