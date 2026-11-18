#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

#define FKMELBFIGKO__CCTOR_OFFSET UNITYSDK_OFFSET(0x10EBE9B0)

inline static constexpr unsigned int FKMELBFIGKO_TypeDefinitionIndex = 49734;

class FKMELBFIGKO : public ::System::Object
{
public:
	static ::Il2CppArray<::System::Int32>** StaticGet_IEAPEKJHFAD()
	{
		return (::Il2CppArray<::System::Int32>**)Il2CppClass::FromTypeDefinitionIndex(FKMELBFIGKO_TypeDefinitionIndex)->GetStaticField(0x4B910);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + FKMELBFIGKO__CCTOR_OFFSET))();
	}
};
