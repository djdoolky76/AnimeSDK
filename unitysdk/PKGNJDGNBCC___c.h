#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class ILLMDEJOPKA;
namespace System { template <typename T> class Action_1; }

#define PKGNJDGNBCC___C_DHIPFOHDMOE_OFFSET UNITYSDK_OFFSET(0x1B9EA9B0)
#define PKGNJDGNBCC___C__CCTOR_OFFSET UNITYSDK_OFFSET(0x1B9EA960)
#define PKGNJDGNBCC___C__CTOR_OFFSET UNITYSDK_OFFSET(0x1B9EA9A0)

inline static constexpr unsigned int PKGNJDGNBCC___c_TypeDefinitionIndex = 77645;

class PKGNJDGNBCC___c : public ::System::Object
{
public:
	static ::System::Action_1<::ILLMDEJOPKA*>** StaticGet___9__5_0()
	{
		return (::System::Action_1<::ILLMDEJOPKA*>**)Il2CppClass::FromTypeDefinitionIndex(PKGNJDGNBCC___c_TypeDefinitionIndex)->GetStaticField(0x459C0);
	}
	static ::System::Object** StaticGet___9()
	{
		return (::System::Object**)Il2CppClass::FromTypeDefinitionIndex(PKGNJDGNBCC___c_TypeDefinitionIndex)->GetStaticField(0x459C8);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + PKGNJDGNBCC___C__CCTOR_OFFSET))();
	}

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + PKGNJDGNBCC___C__CTOR_OFFSET))(this);
	}

	::System::Void DHIPFOHDMOE(::ILLMDEJOPKA* BOMEJEDEGGH)
	{
		return ((::System::Void(*)(::PVOID, ::ILLMDEJOPKA*))((::PBYTE)hIl2Cpp + PKGNJDGNBCC___C_DHIPFOHDMOE_OFFSET))(this, BOMEJEDEGGH);
	}
};
