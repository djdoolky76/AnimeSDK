#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

#define FKMDJONNHGO__CCTOR_OFFSET UNITYSDK_OFFSET(0x116BA0B0)

inline static constexpr unsigned int FKMDJONNHGO_TypeDefinitionIndex = 85716;

class FKMDJONNHGO : public ::System::Object
{
public:
	static ::Il2CppArray<::System::Int32>** StaticGet_EPDFPELDOBE()
	{
		return (::Il2CppArray<::System::Int32>**)Il2CppClass::FromTypeDefinitionIndex(FKMDJONNHGO_TypeDefinitionIndex)->GetStaticField(0x40900);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + FKMDJONNHGO__CCTOR_OFFSET))();
	}
};
