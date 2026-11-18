#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace MoleMole::Battle { class ColliderEventDispatcher; }
namespace System { template <typename T> class Action_1; }

#define KPACKGEBECC_PCOPMKKBHBB___C_BMAAOCAJPJC_OFFSET UNITYSDK_OFFSET(0x1996F6A0)
#define KPACKGEBECC_PCOPMKKBHBB___C_CFIHBGGNCKP_OFFSET UNITYSDK_OFFSET(0x1996F530)
#define KPACKGEBECC_PCOPMKKBHBB___C__CCTOR_OFFSET UNITYSDK_OFFSET(0x1996F4E0)
#define KPACKGEBECC_PCOPMKKBHBB___C__CTOR_OFFSET UNITYSDK_OFFSET(0x1996F520)

inline static constexpr unsigned int KPACKGEBECC_PCOPMKKBHBB___c_TypeDefinitionIndex = 51126;

class KPACKGEBECC_PCOPMKKBHBB___c : public ::System::Object
{
public:
	static ::System::Action_1<::MoleMole::Battle::ColliderEventDispatcher*>** StaticGet___9__5_0()
	{
		return (::System::Action_1<::MoleMole::Battle::ColliderEventDispatcher*>**)Il2CppClass::FromTypeDefinitionIndex(KPACKGEBECC_PCOPMKKBHBB___c_TypeDefinitionIndex)->GetStaticField(0x445F0);
	}
	static ::System::Object** StaticGet___9()
	{
		return (::System::Object**)Il2CppClass::FromTypeDefinitionIndex(KPACKGEBECC_PCOPMKKBHBB___c_TypeDefinitionIndex)->GetStaticField(0x445F8);
	}
	static ::System::Action_1<::MoleMole::Battle::ColliderEventDispatcher*>** StaticGet___9__5_1()
	{
		return (::System::Action_1<::MoleMole::Battle::ColliderEventDispatcher*>**)Il2CppClass::FromTypeDefinitionIndex(KPACKGEBECC_PCOPMKKBHBB___c_TypeDefinitionIndex)->GetStaticField(0x44600);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + KPACKGEBECC_PCOPMKKBHBB___C__CCTOR_OFFSET))();
	}

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + KPACKGEBECC_PCOPMKKBHBB___C__CTOR_OFFSET))(this);
	}

	::System::Void CFIHBGGNCKP(::MoleMole::Battle::ColliderEventDispatcher* ICILGJFKNDB)
	{
		return ((::System::Void(*)(::PVOID, ::MoleMole::Battle::ColliderEventDispatcher*))((::PBYTE)hIl2Cpp + KPACKGEBECC_PCOPMKKBHBB___C_CFIHBGGNCKP_OFFSET))(this, ICILGJFKNDB);
	}

	::System::Void BMAAOCAJPJC(::MoleMole::Battle::ColliderEventDispatcher* ICILGJFKNDB)
	{
		return ((::System::Void(*)(::PVOID, ::MoleMole::Battle::ColliderEventDispatcher*))((::PBYTE)hIl2Cpp + KPACKGEBECC_PCOPMKKBHBB___C_BMAAOCAJPJC_OFFSET))(this, ICILGJFKNDB);
	}
};
