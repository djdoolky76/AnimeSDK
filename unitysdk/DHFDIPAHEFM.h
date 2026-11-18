#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

#define DHFDIPAHEFM__CCTOR_OFFSET UNITYSDK_OFFSET(0x12BB25A0)

inline static constexpr unsigned int DHFDIPAHEFM_TypeDefinitionIndex = 58581;

class DHFDIPAHEFM : public ::System::Object
{
public:
	static ::Il2CppArray<::System::Int32>** StaticGet_LBLKCHJGEHF()
	{
		return (::Il2CppArray<::System::Int32>**)Il2CppClass::FromTypeDefinitionIndex(DHFDIPAHEFM_TypeDefinitionIndex)->GetStaticField(0x45E70);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + DHFDIPAHEFM__CCTOR_OFFSET))();
	}
};
