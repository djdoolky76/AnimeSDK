#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class JOPPFHLBJNI;

#define JOPPFHLBJNI___C_FJHNNEIDODL_OFFSET UNITYSDK_OFFSET(0x1FA9ADB0)
#define JOPPFHLBJNI___C__CCTOR_OFFSET UNITYSDK_OFFSET(0x1FA9AD60)
#define JOPPFHLBJNI___C__CTOR_OFFSET UNITYSDK_OFFSET(0x1FA9ADA0)

inline static constexpr unsigned int JOPPFHLBJNI___c_TypeDefinitionIndex = 18233;

class JOPPFHLBJNI___c : public ::System::Object
{
public:
	static ::System::Object** StaticGet___9()
	{
		return (::System::Object**)Il2CppClass::FromTypeDefinitionIndex(JOPPFHLBJNI___c_TypeDefinitionIndex)->GetStaticField(0x8520);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + JOPPFHLBJNI___C__CCTOR_OFFSET))();
	}

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + JOPPFHLBJNI___C__CTOR_OFFSET))(this);
	}

	::JOPPFHLBJNI* FJHNNEIDODL()
	{
		return ((::JOPPFHLBJNI*(*)(::PVOID))((::PBYTE)hIl2Cpp + JOPPFHLBJNI___C_FJHNNEIDODL_OFFSET))(this);
	}
};
