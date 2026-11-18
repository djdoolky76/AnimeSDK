#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

#define HCDKFMHJHPD__CCTOR_OFFSET UNITYSDK_OFFSET(0x14077390)

inline static constexpr unsigned int HCDKFMHJHPD_TypeDefinitionIndex = 69743;

class HCDKFMHJHPD : public ::System::Object
{
public:
	static ::Il2CppArray<::System::Int32>** StaticGet_DECECJNEGMA()
	{
		return (::Il2CppArray<::System::Int32>**)Il2CppClass::FromTypeDefinitionIndex(HCDKFMHJHPD_TypeDefinitionIndex)->GetStaticField(0x51F10);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + HCDKFMHJHPD__CCTOR_OFFSET))();
	}
};
