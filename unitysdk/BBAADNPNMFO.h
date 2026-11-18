#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

#define BBAADNPNMFO__CCTOR_OFFSET UNITYSDK_OFFSET(0x18222FF0)

inline static constexpr unsigned int BBAADNPNMFO_TypeDefinitionIndex = 48736;

class BBAADNPNMFO : public ::System::Object
{
public:
	static ::Il2CppArray<::System::Int32>** StaticGet_KGFOAFNFHHH()
	{
		return (::Il2CppArray<::System::Int32>**)Il2CppClass::FromTypeDefinitionIndex(BBAADNPNMFO_TypeDefinitionIndex)->GetStaticField(0x51200);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + BBAADNPNMFO__CCTOR_OFFSET))();
	}
};
