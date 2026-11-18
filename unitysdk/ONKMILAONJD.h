#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

#define ONKMILAONJD__CCTOR_OFFSET UNITYSDK_OFFSET(0x172DF490)

inline static constexpr unsigned int ONKMILAONJD_TypeDefinitionIndex = 74624;

class ONKMILAONJD : public ::System::Object
{
public:
	static ::Il2CppArray<::System::Int32>** StaticGet_AGAJALLFLHN()
	{
		return (::Il2CppArray<::System::Int32>**)Il2CppClass::FromTypeDefinitionIndex(ONKMILAONJD_TypeDefinitionIndex)->GetStaticField(0x4FDE0);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + ONKMILAONJD__CCTOR_OFFSET))();
	}
};
