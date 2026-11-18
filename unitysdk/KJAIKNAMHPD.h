#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

#define KJAIKNAMHPD__CCTOR_OFFSET UNITYSDK_OFFSET(0x13C68B40)

inline static constexpr unsigned int KJAIKNAMHPD_TypeDefinitionIndex = 54554;

class KJAIKNAMHPD : public ::System::Object
{
public:
	static ::Il2CppArray<::System::Int32>** StaticGet_EDJOOCGNJPK()
	{
		return (::Il2CppArray<::System::Int32>**)Il2CppClass::FromTypeDefinitionIndex(KJAIKNAMHPD_TypeDefinitionIndex)->GetStaticField(0x509F0);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + KJAIKNAMHPD__CCTOR_OFFSET))();
	}
};
