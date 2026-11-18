#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/DateTime.h"
#include "unitysdk/System/Object.h"

namespace MoleMole { class UIControllerContextBase; }
namespace System { template <typename T> class Action_1; }
namespace System { template <typename T> class Func_1; }

#define BFCHENGCHCA___C_DCAIJGHKGIH_OFFSET UNITYSDK_OFFSET(0x126820E0)
#define BFCHENGCHCA___C_FAGFJEIOCKP_OFFSET UNITYSDK_OFFSET(0x12682160)
#define BFCHENGCHCA___C_MJDOAOPOIEE_OFFSET UNITYSDK_OFFSET(0x12682300)
#define BFCHENGCHCA___C__CCTOR_OFFSET UNITYSDK_OFFSET(0x12682090)
#define BFCHENGCHCA___C__CTOR_OFFSET UNITYSDK_OFFSET(0x126820D0)

inline static constexpr unsigned int BFCHENGCHCA___c_TypeDefinitionIndex = 69827;

class BFCHENGCHCA___c : public ::System::Object
{
public:
	static ::System::Func_1<::MoleMole::UIControllerContextBase*>** StaticGet___9__25_11()
	{
		return (::System::Func_1<::MoleMole::UIControllerContextBase*>**)Il2CppClass::FromTypeDefinitionIndex(BFCHENGCHCA___c_TypeDefinitionIndex)->GetStaticField(0x30BA0);
	}
	static ::System::Action_1<::System::Int32>** StaticGet___9__25_13()
	{
		return (::System::Action_1<::System::Int32>**)Il2CppClass::FromTypeDefinitionIndex(BFCHENGCHCA___c_TypeDefinitionIndex)->GetStaticField(0x30BA8);
	}
	static ::System::Object** StaticGet___9()
	{
		return (::System::Object**)Il2CppClass::FromTypeDefinitionIndex(BFCHENGCHCA___c_TypeDefinitionIndex)->GetStaticField(0x30BB0);
	}
	static ::System::Func_1<::System::DateTime>** StaticGet___9__25_4()
	{
		return (::System::Func_1<::System::DateTime>**)Il2CppClass::FromTypeDefinitionIndex(BFCHENGCHCA___c_TypeDefinitionIndex)->GetStaticField(0x30BB8);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + BFCHENGCHCA___C__CCTOR_OFFSET))();
	}

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BFCHENGCHCA___C__CTOR_OFFSET))(this);
	}

	::MoleMole::UIControllerContextBase* DCAIJGHKGIH()
	{
		return ((::MoleMole::UIControllerContextBase*(*)(::PVOID))((::PBYTE)hIl2Cpp + BFCHENGCHCA___C_DCAIJGHKGIH_OFFSET))(this);
	}

	::System::DateTime FAGFJEIOCKP()
	{
		return ((::System::DateTime(*)(::PVOID))((::PBYTE)hIl2Cpp + BFCHENGCHCA___C_FAGFJEIOCKP_OFFSET))(this);
	}

	::System::Void MJDOAOPOIEE(::System::Int32 GOCLGFBDADB)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + BFCHENGCHCA___C_MJDOAOPOIEE_OFFSET))(this, GOCLGFBDADB);
	}
};
