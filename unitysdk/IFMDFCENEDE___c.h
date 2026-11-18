#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class AOJKLCGGPAK;
namespace System { template <typename T1, typename T2> class Func_2; }

#define IFMDFCENEDE___C_CHJCOINICNI_OFFSET UNITYSDK_OFFSET(0x15C0A420)
#define IFMDFCENEDE___C__CCTOR_OFFSET UNITYSDK_OFFSET(0x15C0A3D0)
#define IFMDFCENEDE___C__CTOR_OFFSET UNITYSDK_OFFSET(0x15C0A410)

inline static constexpr unsigned int IFMDFCENEDE___c_TypeDefinitionIndex = 50757;

class IFMDFCENEDE___c : public ::System::Object
{
public:
	static ::System::Func_2<::AOJKLCGGPAK*, ::System::Boolean>** StaticGet___9__0_0()
	{
		return (::System::Func_2<::AOJKLCGGPAK*, ::System::Boolean>**)Il2CppClass::FromTypeDefinitionIndex(IFMDFCENEDE___c_TypeDefinitionIndex)->GetStaticField(0x32450);
	}
	static ::System::Object** StaticGet___9()
	{
		return (::System::Object**)Il2CppClass::FromTypeDefinitionIndex(IFMDFCENEDE___c_TypeDefinitionIndex)->GetStaticField(0x32458);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + IFMDFCENEDE___C__CCTOR_OFFSET))();
	}

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + IFMDFCENEDE___C__CTOR_OFFSET))(this);
	}

	::System::Boolean CHJCOINICNI(::AOJKLCGGPAK* IMLLDOHDCNC)
	{
		return ((::System::Boolean(*)(::PVOID, ::AOJKLCGGPAK*))((::PBYTE)hIl2Cpp + IFMDFCENEDE___C_CHJCOINICNI_OFFSET))(this, IMLLDOHDCNC);
	}
};
