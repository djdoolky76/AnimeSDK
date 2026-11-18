#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

#define GKGCHBALIHP__CCTOR_OFFSET UNITYSDK_OFFSET(0x179F5430)

inline static constexpr unsigned int GKGCHBALIHP_TypeDefinitionIndex = 66862;

class GKGCHBALIHP : public ::System::Object
{
public:
	static ::Il2CppArray<::System::Int32>** StaticGet_PJGFFPNDEMM()
	{
		return (::Il2CppArray<::System::Int32>**)Il2CppClass::FromTypeDefinitionIndex(GKGCHBALIHP_TypeDefinitionIndex)->GetStaticField(0x3DD60);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + GKGCHBALIHP__CCTOR_OFFSET))();
	}
};
