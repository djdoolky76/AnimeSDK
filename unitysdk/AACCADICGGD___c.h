#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class AACCADICGGD;

#define AACCADICGGD___C_LMMMAAOKDAP_OFFSET UNITYSDK_OFFSET(0x1F850560)
#define AACCADICGGD___C__CCTOR_OFFSET UNITYSDK_OFFSET(0x1F850510)
#define AACCADICGGD___C__CTOR_OFFSET UNITYSDK_OFFSET(0x1F850550)

inline static constexpr unsigned int AACCADICGGD___c_TypeDefinitionIndex = 18270;

class AACCADICGGD___c : public ::System::Object
{
public:
	static ::System::Object** StaticGet___9()
	{
		return (::System::Object**)Il2CppClass::FromTypeDefinitionIndex(AACCADICGGD___c_TypeDefinitionIndex)->GetStaticField(0x7CE0);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + AACCADICGGD___C__CCTOR_OFFSET))();
	}

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + AACCADICGGD___C__CTOR_OFFSET))(this);
	}

	::AACCADICGGD* LMMMAAOKDAP()
	{
		return ((::AACCADICGGD*(*)(::PVOID))((::PBYTE)hIl2Cpp + AACCADICGGD___C_LMMMAAOKDAP_OFFSET))(this);
	}
};
