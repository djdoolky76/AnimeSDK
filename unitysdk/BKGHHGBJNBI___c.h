#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace MoleMole::Battle { class Entity; }
namespace System { template <typename T1, typename T2> class Func_2; }

#define BKGHHGBJNBI___C_LBKMOBOFGLL_OFFSET UNITYSDK_OFFSET(0x185729E0)
#define BKGHHGBJNBI___C__CCTOR_OFFSET UNITYSDK_OFFSET(0x18572990)
#define BKGHHGBJNBI___C__CTOR_OFFSET UNITYSDK_OFFSET(0x185729D0)

inline static constexpr unsigned int BKGHHGBJNBI___c_TypeDefinitionIndex = 84732;

class BKGHHGBJNBI___c : public ::System::Object
{
public:
	static ::System::Func_2<::MoleMole::Battle::Entity*, ::System::Boolean>** StaticGet___9__7_0()
	{
		return (::System::Func_2<::MoleMole::Battle::Entity*, ::System::Boolean>**)Il2CppClass::FromTypeDefinitionIndex(BKGHHGBJNBI___c_TypeDefinitionIndex)->GetStaticField(0x36F00);
	}
	static ::System::Object** StaticGet___9()
	{
		return (::System::Object**)Il2CppClass::FromTypeDefinitionIndex(BKGHHGBJNBI___c_TypeDefinitionIndex)->GetStaticField(0x36F08);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + BKGHHGBJNBI___C__CCTOR_OFFSET))();
	}

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BKGHHGBJNBI___C__CTOR_OFFSET))(this);
	}

	::System::Boolean LBKMOBOFGLL(::MoleMole::Battle::Entity* HAAEBCOBKFF)
	{
		return ((::System::Boolean(*)(::PVOID, ::MoleMole::Battle::Entity*))((::PBYTE)hIl2Cpp + BKGHHGBJNBI___C_LBKMOBOFGLL_OFFSET))(this, HAAEBCOBKFF);
	}
};
