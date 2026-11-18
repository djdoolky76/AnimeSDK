#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

#define DELGDHCEIIP__CCTOR_OFFSET UNITYSDK_OFFSET(0x19D5ADB0)

inline static constexpr unsigned int DELGDHCEIIP_TypeDefinitionIndex = 57222;

class DELGDHCEIIP : public ::System::Object
{
public:
	static ::Il2CppArray<::System::Int32>** StaticGet_ACEIFNLILCA()
	{
		return (::Il2CppArray<::System::Int32>**)Il2CppClass::FromTypeDefinitionIndex(DELGDHCEIIP_TypeDefinitionIndex)->GetStaticField(0x40460);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + DELGDHCEIIP__CCTOR_OFFSET))();
	}
};
