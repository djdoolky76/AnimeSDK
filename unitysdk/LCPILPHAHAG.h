#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

#define LCPILPHAHAG__CCTOR_OFFSET UNITYSDK_OFFSET(0x17739A00)

inline static constexpr unsigned int LCPILPHAHAG_TypeDefinitionIndex = 79415;

class LCPILPHAHAG : public ::System::Object
{
public:
	static ::Il2CppArray<::System::Int32>** StaticGet_BGILMHDDLDK()
	{
		return (::Il2CppArray<::System::Int32>**)Il2CppClass::FromTypeDefinitionIndex(LCPILPHAHAG_TypeDefinitionIndex)->GetStaticField(0x383D0);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + LCPILPHAHAG__CCTOR_OFFSET))();
	}
};
