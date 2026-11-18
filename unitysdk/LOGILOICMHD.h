#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

#define LOGILOICMHD__CCTOR_OFFSET UNITYSDK_OFFSET(0x14037490)

inline static constexpr unsigned int LOGILOICMHD_TypeDefinitionIndex = 92533;

class LOGILOICMHD : public ::System::Object
{
public:
	static ::Il2CppArray<::System::Int32>** StaticGet_BODFGJLLJKK()
	{
		return (::Il2CppArray<::System::Int32>**)Il2CppClass::FromTypeDefinitionIndex(LOGILOICMHD_TypeDefinitionIndex)->GetStaticField(0x447D0);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + LOGILOICMHD__CCTOR_OFFSET))();
	}
};
