#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class EDLAOJHICOE;
namespace System { class Action; }
namespace System { template <typename T> class Comparison_1; }

#define GAMNBDOIIHF___C_JMODCOGNCPN_OFFSET UNITYSDK_OFFSET(0x142C4710)
#define GAMNBDOIIHF___C_MGKLGFEEFBM_OFFSET UNITYSDK_OFFSET(0x142C47E0)
#define GAMNBDOIIHF___C__CCTOR_OFFSET UNITYSDK_OFFSET(0x142C46C0)
#define GAMNBDOIIHF___C__CTOR_OFFSET UNITYSDK_OFFSET(0x142C4700)

inline static constexpr unsigned int GAMNBDOIIHF___c_TypeDefinitionIndex = 87421;

class GAMNBDOIIHF___c : public ::System::Object
{
public:
	static ::System::Action** StaticGet___9__19_0()
	{
		return (::System::Action**)Il2CppClass::FromTypeDefinitionIndex(GAMNBDOIIHF___c_TypeDefinitionIndex)->GetStaticField(0x3AE10);
	}
	static ::System::Object** StaticGet___9()
	{
		return (::System::Object**)Il2CppClass::FromTypeDefinitionIndex(GAMNBDOIIHF___c_TypeDefinitionIndex)->GetStaticField(0x3AE18);
	}
	static ::System::Comparison_1<::EDLAOJHICOE*>** StaticGet___9__16_0()
	{
		return (::System::Comparison_1<::EDLAOJHICOE*>**)Il2CppClass::FromTypeDefinitionIndex(GAMNBDOIIHF___c_TypeDefinitionIndex)->GetStaticField(0x3AE20);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + GAMNBDOIIHF___C__CCTOR_OFFSET))();
	}

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + GAMNBDOIIHF___C__CTOR_OFFSET))(this);
	}

	::System::Int32 JMODCOGNCPN(::EDLAOJHICOE* EJCBEJMGFAJ, ::EDLAOJHICOE* EBFCACIEKBC)
	{
		return ((::System::Int32(*)(::PVOID, ::EDLAOJHICOE*, ::EDLAOJHICOE*))((::PBYTE)hIl2Cpp + GAMNBDOIIHF___C_JMODCOGNCPN_OFFSET))(this, EJCBEJMGFAJ, EBFCACIEKBC);
	}

	::System::Void MGKLGFEEFBM()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + GAMNBDOIIHF___C_MGKLGFEEFBM_OFFSET))(this);
	}
};
