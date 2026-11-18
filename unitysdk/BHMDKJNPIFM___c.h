#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace MoleMole::Config { class ConfigHollowChessboardParticle; }
namespace System { template <typename T> class Action_1; }
namespace System { template <typename T> class Func_1; }

#define BHMDKJNPIFM___C_LNHPMGCCOGL_OFFSET UNITYSDK_OFFSET(0x14C457C0)
#define BHMDKJNPIFM___C_LPCHADDECLC_OFFSET UNITYSDK_OFFSET(0x14C457B0)
#define BHMDKJNPIFM___C__CCTOR_OFFSET UNITYSDK_OFFSET(0x14C45760)
#define BHMDKJNPIFM___C__CTOR_OFFSET UNITYSDK_OFFSET(0x14C457A0)

inline static constexpr unsigned int BHMDKJNPIFM___c_TypeDefinitionIndex = 61862;

class BHMDKJNPIFM___c : public ::System::Object
{
public:
	static ::System::Action_1<::MoleMole::Config::ConfigHollowChessboardParticle*>** StaticGet___9__2_1()
	{
		return (::System::Action_1<::MoleMole::Config::ConfigHollowChessboardParticle*>**)Il2CppClass::FromTypeDefinitionIndex(BHMDKJNPIFM___c_TypeDefinitionIndex)->GetStaticField(0x49730);
	}
	static ::System::Func_1<::MoleMole::Config::ConfigHollowChessboardParticle*>** StaticGet___9__2_0()
	{
		return (::System::Func_1<::MoleMole::Config::ConfigHollowChessboardParticle*>**)Il2CppClass::FromTypeDefinitionIndex(BHMDKJNPIFM___c_TypeDefinitionIndex)->GetStaticField(0x49738);
	}
	static ::System::Object** StaticGet___9()
	{
		return (::System::Object**)Il2CppClass::FromTypeDefinitionIndex(BHMDKJNPIFM___c_TypeDefinitionIndex)->GetStaticField(0x49740);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + BHMDKJNPIFM___C__CCTOR_OFFSET))();
	}

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BHMDKJNPIFM___C__CTOR_OFFSET))(this);
	}

	::MoleMole::Config::ConfigHollowChessboardParticle* LPCHADDECLC()
	{
		return ((::MoleMole::Config::ConfigHollowChessboardParticle*(*)(::PVOID))((::PBYTE)hIl2Cpp + BHMDKJNPIFM___C_LPCHADDECLC_OFFSET))(this);
	}

	::System::Void LNHPMGCCOGL(::MoleMole::Config::ConfigHollowChessboardParticle* DFMKILICPFB)
	{
		return ((::System::Void(*)(::PVOID, ::MoleMole::Config::ConfigHollowChessboardParticle*))((::PBYTE)hIl2Cpp + BHMDKJNPIFM___C_LNHPMGCCOGL_OFFSET))(this, DFMKILICPFB);
	}
};
