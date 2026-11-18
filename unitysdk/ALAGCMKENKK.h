#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

#define ALAGCMKENKK__CCTOR_OFFSET UNITYSDK_OFFSET(0x1820C100)

inline static constexpr unsigned int ALAGCMKENKK_TypeDefinitionIndex = 54535;

class ALAGCMKENKK : public ::System::Object
{
public:
	static ::Il2CppArray<::System::Int32>** StaticGet_GDAHKNCKIPD()
	{
		return (::Il2CppArray<::System::Int32>**)Il2CppClass::FromTypeDefinitionIndex(ALAGCMKENKK_TypeDefinitionIndex)->GetStaticField(0x511C0);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + ALAGCMKENKK__CCTOR_OFFSET))();
	}
};
