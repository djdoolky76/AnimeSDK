#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

#define MGLFKBHIDDP__CCTOR_OFFSET UNITYSDK_OFFSET(0x156A9450)

inline static constexpr unsigned int MGLFKBHIDDP_TypeDefinitionIndex = 91841;

class MGLFKBHIDDP : public ::System::Object
{
public:
	static ::Il2CppArray<::System::Int32>** StaticGet_CINCAENPACD()
	{
		return (::Il2CppArray<::System::Int32>**)Il2CppClass::FromTypeDefinitionIndex(MGLFKBHIDDP_TypeDefinitionIndex)->GetStaticField(0x52040);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + MGLFKBHIDDP__CCTOR_OFFSET))();
	}
};
