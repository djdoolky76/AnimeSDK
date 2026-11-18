#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

#define PPOENDGCIBP__CCTOR_OFFSET UNITYSDK_OFFSET(0x1C67C7B0)

inline static constexpr unsigned int PPOENDGCIBP_TypeDefinitionIndex = 66062;

class PPOENDGCIBP : public ::System::Object
{
public:
	static ::Il2CppArray<::System::Int32>** StaticGet_CGMHFMAOGIA()
	{
		return (::Il2CppArray<::System::Int32>**)Il2CppClass::FromTypeDefinitionIndex(PPOENDGCIBP_TypeDefinitionIndex)->GetStaticField(0x36410);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + PPOENDGCIBP__CCTOR_OFFSET))();
	}
};
