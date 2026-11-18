#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

#define GAKJDPNOPIM__CCTOR_OFFSET UNITYSDK_OFFSET(0x156E8F40)

inline static constexpr unsigned int GAKJDPNOPIM_TypeDefinitionIndex = 81343;

class GAKJDPNOPIM : public ::System::Object
{
public:
	static ::Il2CppArray<::System::Int32>** StaticGet_IFAFEPOPCBL()
	{
		return (::Il2CppArray<::System::Int32>**)Il2CppClass::FromTypeDefinitionIndex(GAKJDPNOPIM_TypeDefinitionIndex)->GetStaticField(0x435B0);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + GAKJDPNOPIM__CCTOR_OFFSET))();
	}
};
