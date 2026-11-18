#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

#define PLCNALDAFMB__CCTOR_OFFSET UNITYSDK_OFFSET(0x11992550)

inline static constexpr unsigned int PLCNALDAFMB_TypeDefinitionIndex = 67038;

class PLCNALDAFMB : public ::System::Object
{
public:
	static ::Il2CppArray<::System::Int32>** StaticGet_OBGAELFDGDE()
	{
		return (::Il2CppArray<::System::Int32>**)Il2CppClass::FromTypeDefinitionIndex(PLCNALDAFMB_TypeDefinitionIndex)->GetStaticField(0x42A20);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + PLCNALDAFMB__CCTOR_OFFSET))();
	}
};
