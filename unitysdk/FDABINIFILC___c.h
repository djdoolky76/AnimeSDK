#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class FDABINIFILC;

#define FDABINIFILC___C_JJEOKLPGANB_OFFSET UNITYSDK_OFFSET(0x1B3A2EA0)
#define FDABINIFILC___C__CCTOR_OFFSET UNITYSDK_OFFSET(0x1B3A2E50)
#define FDABINIFILC___C__CTOR_OFFSET UNITYSDK_OFFSET(0x1B3A2E90)

inline static constexpr unsigned int FDABINIFILC___c_TypeDefinitionIndex = 24765;

class FDABINIFILC___c : public ::System::Object
{
public:
	static ::System::Object** StaticGet___9()
	{
		return (::System::Object**)Il2CppClass::FromTypeDefinitionIndex(FDABINIFILC___c_TypeDefinitionIndex)->GetStaticField(0x17720);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + FDABINIFILC___C__CCTOR_OFFSET))();
	}

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FDABINIFILC___C__CTOR_OFFSET))(this);
	}

	::FDABINIFILC* JJEOKLPGANB()
	{
		return ((::FDABINIFILC*(*)(::PVOID))((::PBYTE)hIl2Cpp + FDABINIFILC___C_JJEOKLPGANB_OFFSET))(this);
	}
};
