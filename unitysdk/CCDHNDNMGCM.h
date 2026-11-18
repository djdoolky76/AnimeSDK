#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

#define CCDHNDNMGCM__CCTOR_OFFSET UNITYSDK_OFFSET(0x15314F40)

inline static constexpr unsigned int CCDHNDNMGCM_TypeDefinitionIndex = 68677;

class CCDHNDNMGCM : public ::System::Object
{
public:
	static ::Il2CppArray<::System::Int32>** StaticGet_LBCGAOIKCBD()
	{
		return (::Il2CppArray<::System::Int32>**)Il2CppClass::FromTypeDefinitionIndex(CCDHNDNMGCM_TypeDefinitionIndex)->GetStaticField(0x3A4F0);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CCDHNDNMGCM__CCTOR_OFFSET))();
	}
};
