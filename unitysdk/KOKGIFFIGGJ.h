#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

#define KOKGIFFIGGJ__CCTOR_OFFSET UNITYSDK_OFFSET(0x17673330)

inline static constexpr unsigned int KOKGIFFIGGJ_TypeDefinitionIndex = 59106;

class KOKGIFFIGGJ : public ::System::Object
{
public:
	static ::Il2CppArray<::System::Int32>** StaticGet_NFDGMKHNJCE()
	{
		return (::Il2CppArray<::System::Int32>**)Il2CppClass::FromTypeDefinitionIndex(KOKGIFFIGGJ_TypeDefinitionIndex)->GetStaticField(0x4D590);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + KOKGIFFIGGJ__CCTOR_OFFSET))();
	}
};
