#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

#define INGDKBIGIJD__CCTOR_OFFSET UNITYSDK_OFFSET(0xF87EF80)

inline static constexpr unsigned int INGDKBIGIJD_TypeDefinitionIndex = 53083;

class INGDKBIGIJD : public ::System::Object
{
public:
	static ::Il2CppArray<::System::Int32>** StaticGet_OOKALCOHNHB()
	{
		return (::Il2CppArray<::System::Int32>**)Il2CppClass::FromTypeDefinitionIndex(INGDKBIGIJD_TypeDefinitionIndex)->GetStaticField(0x48160);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + INGDKBIGIJD__CCTOR_OFFSET))();
	}
};
