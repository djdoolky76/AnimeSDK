#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace MoleMole::Battle { class Entity; }
namespace System { template <typename T1, typename T2> class Func_2; }

#define CFMOINOHINK___C_BKBLJLODEAH_OFFSET UNITYSDK_OFFSET(0x16A23130)
#define CFMOINOHINK___C__CCTOR_OFFSET UNITYSDK_OFFSET(0x16A230E0)
#define CFMOINOHINK___C__CTOR_OFFSET UNITYSDK_OFFSET(0x16A23120)

inline static constexpr unsigned int CFMOINOHINK___c_TypeDefinitionIndex = 39608;

class CFMOINOHINK___c : public ::System::Object
{
public:
	static ::System::Func_2<::MoleMole::Battle::Entity*, ::System::Single>** StaticGet___9__8_0()
	{
		return (::System::Func_2<::MoleMole::Battle::Entity*, ::System::Single>**)Il2CppClass::FromTypeDefinitionIndex(CFMOINOHINK___c_TypeDefinitionIndex)->GetStaticField(0x4CCC0);
	}
	static ::System::Object** StaticGet___9()
	{
		return (::System::Object**)Il2CppClass::FromTypeDefinitionIndex(CFMOINOHINK___c_TypeDefinitionIndex)->GetStaticField(0x4CCC8);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CFMOINOHINK___C__CCTOR_OFFSET))();
	}

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CFMOINOHINK___C__CTOR_OFFSET))(this);
	}

	::System::Single BKBLJLODEAH(::MoleMole::Battle::Entity* PIIPCLCCOIG)
	{
		return ((::System::Single(*)(::PVOID, ::MoleMole::Battle::Entity*))((::PBYTE)hIl2Cpp + CFMOINOHINK___C_BKBLJLODEAH_OFFSET))(this, PIIPCLCCOIG);
	}
};
