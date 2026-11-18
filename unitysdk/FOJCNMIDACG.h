#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

#define FOJCNMIDACG__CCTOR_OFFSET UNITYSDK_OFFSET(0xBB764F0)

inline static constexpr unsigned int FOJCNMIDACG_TypeDefinitionIndex = 65149;

class FOJCNMIDACG : public ::System::Object
{
public:
	static ::Il2CppArray<::System::Int32>** StaticGet_DHNPCCLNOFA()
	{
		return (::Il2CppArray<::System::Int32>**)Il2CppClass::FromTypeDefinitionIndex(FOJCNMIDACG_TypeDefinitionIndex)->GetStaticField(0x47F50);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + FOJCNMIDACG__CCTOR_OFFSET))();
	}
};
