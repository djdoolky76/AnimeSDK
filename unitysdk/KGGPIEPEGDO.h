#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

#define KGGPIEPEGDO__CCTOR_OFFSET UNITYSDK_OFFSET(0x17908A40)

inline static constexpr unsigned int KGGPIEPEGDO_TypeDefinitionIndex = 69977;

class KGGPIEPEGDO : public ::System::Object
{
public:
	static ::Il2CppArray<::System::Int32>** StaticGet_KOOGMIOMCMD()
	{
		return (::Il2CppArray<::System::Int32>**)Il2CppClass::FromTypeDefinitionIndex(KGGPIEPEGDO_TypeDefinitionIndex)->GetStaticField(0x4BDB0);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + KGGPIEPEGDO__CCTOR_OFFSET))();
	}
};
