#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class LNFEIOIDDCE;

#define LNFEIOIDDCE___C_FDEBAEMBJJL_OFFSET UNITYSDK_OFFSET(0x1FB37490)
#define LNFEIOIDDCE___C__CCTOR_OFFSET UNITYSDK_OFFSET(0x1FB37440)
#define LNFEIOIDDCE___C__CTOR_OFFSET UNITYSDK_OFFSET(0x1FB37480)

inline static constexpr unsigned int LNFEIOIDDCE___c_TypeDefinitionIndex = 18148;

class LNFEIOIDDCE___c : public ::System::Object
{
public:
	static ::System::Object** StaticGet___9()
	{
		return (::System::Object**)Il2CppClass::FromTypeDefinitionIndex(LNFEIOIDDCE___c_TypeDefinitionIndex)->GetStaticField(0x8010);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + LNFEIOIDDCE___C__CCTOR_OFFSET))();
	}

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + LNFEIOIDDCE___C__CTOR_OFFSET))(this);
	}

	::LNFEIOIDDCE* FDEBAEMBJJL()
	{
		return ((::LNFEIOIDDCE*(*)(::PVOID))((::PBYTE)hIl2Cpp + LNFEIOIDDCE___C_FDEBAEMBJJL_OFFSET))(this);
	}
};
