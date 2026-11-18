#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

#define JPMJLPACJLM__CCTOR_OFFSET UNITYSDK_OFFSET(0x18A2B710)

inline static constexpr unsigned int JPMJLPACJLM_TypeDefinitionIndex = 53503;

class JPMJLPACJLM : public ::System::Object
{
public:
	static ::Il2CppArray<::System::Int32>** StaticGet_CIOGDNMEOMO()
	{
		return (::Il2CppArray<::System::Int32>**)Il2CppClass::FromTypeDefinitionIndex(JPMJLPACJLM_TypeDefinitionIndex)->GetStaticField(0x48240);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + JPMJLPACJLM__CCTOR_OFFSET))();
	}
};
