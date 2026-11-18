#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

#define FBOFFDLOOND_LGHMPNHJNCB__CCTOR_OFFSET UNITYSDK_OFFSET(0x15E45B80)

inline static constexpr unsigned int FBOFFDLOOND_LGHMPNHJNCB_TypeDefinitionIndex = 80778;

class FBOFFDLOOND_LGHMPNHJNCB : public ::System::Object
{
public:
	static ::System::UInt32* StaticGet_DHAPDIHOOGN()
	{
		return (::System::UInt32*)Il2CppClass::FromTypeDefinitionIndex(FBOFFDLOOND_LGHMPNHJNCB_TypeDefinitionIndex)->GetStaticField(0xDF10);
	}
	static ::System::UInt32* StaticGet_PINBACHFAIO()
	{
		return (::System::UInt32*)Il2CppClass::FromTypeDefinitionIndex(FBOFFDLOOND_LGHMPNHJNCB_TypeDefinitionIndex)->GetStaticField(0xDF14);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + FBOFFDLOOND_LGHMPNHJNCB__CCTOR_OFFSET))();
	}
};
