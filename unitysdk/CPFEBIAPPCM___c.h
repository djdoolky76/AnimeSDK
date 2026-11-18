#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace MoleMole::Battle { class Entity; }
namespace System { template <typename T1, typename T2> class Func_2; }

#define CPFEBIAPPCM___C_GBCHAKOBJED_OFFSET UNITYSDK_OFFSET(0x123D71D0)
#define CPFEBIAPPCM___C__CCTOR_OFFSET UNITYSDK_OFFSET(0x123D7180)
#define CPFEBIAPPCM___C__CTOR_OFFSET UNITYSDK_OFFSET(0x123D71C0)

inline static constexpr unsigned int CPFEBIAPPCM___c_TypeDefinitionIndex = 76952;

class CPFEBIAPPCM___c : public ::System::Object
{
public:
	static ::System::Object** StaticGet___9()
	{
		return (::System::Object**)Il2CppClass::FromTypeDefinitionIndex(CPFEBIAPPCM___c_TypeDefinitionIndex)->GetStaticField(0x430D0);
	}
	static ::System::Func_2<::MoleMole::Battle::Entity*, ::System::Boolean>** StaticGet___9__13_0()
	{
		return (::System::Func_2<::MoleMole::Battle::Entity*, ::System::Boolean>**)Il2CppClass::FromTypeDefinitionIndex(CPFEBIAPPCM___c_TypeDefinitionIndex)->GetStaticField(0x430D8);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CPFEBIAPPCM___C__CCTOR_OFFSET))();
	}

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CPFEBIAPPCM___C__CTOR_OFFSET))(this);
	}

	::System::Boolean GBCHAKOBJED(::MoleMole::Battle::Entity* PIIPCLCCOIG)
	{
		return ((::System::Boolean(*)(::PVOID, ::MoleMole::Battle::Entity*))((::PBYTE)hIl2Cpp + CPFEBIAPPCM___C_GBCHAKOBJED_OFFSET))(this, PIIPCLCCOIG);
	}
};
