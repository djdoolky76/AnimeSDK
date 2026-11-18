#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace MoleMole { class ConfigHollowChessboardEntityBehavior; }
namespace System { template <typename T> class Action_1; }
namespace System { template <typename T> class Func_1; }

#define NHIJOAAFNBL___C_LNHPMGCCOGL_OFFSET UNITYSDK_OFFSET(0x1AE20A80)
#define NHIJOAAFNBL___C_LPCHADDECLC_OFFSET UNITYSDK_OFFSET(0x1AE20A90)
#define NHIJOAAFNBL___C__CCTOR_OFFSET UNITYSDK_OFFSET(0x1AE20A30)
#define NHIJOAAFNBL___C__CTOR_OFFSET UNITYSDK_OFFSET(0x1AE20A70)

inline static constexpr unsigned int NHIJOAAFNBL___c_TypeDefinitionIndex = 79790;

class NHIJOAAFNBL___c : public ::System::Object
{
public:
	static ::System::Func_1<::MoleMole::ConfigHollowChessboardEntityBehavior*>** StaticGet___9__2_0()
	{
		return (::System::Func_1<::MoleMole::ConfigHollowChessboardEntityBehavior*>**)Il2CppClass::FromTypeDefinitionIndex(NHIJOAAFNBL___c_TypeDefinitionIndex)->GetStaticField(0x35B70);
	}
	static ::System::Action_1<::MoleMole::ConfigHollowChessboardEntityBehavior*>** StaticGet___9__2_1()
	{
		return (::System::Action_1<::MoleMole::ConfigHollowChessboardEntityBehavior*>**)Il2CppClass::FromTypeDefinitionIndex(NHIJOAAFNBL___c_TypeDefinitionIndex)->GetStaticField(0x35B78);
	}
	static ::System::Object** StaticGet___9()
	{
		return (::System::Object**)Il2CppClass::FromTypeDefinitionIndex(NHIJOAAFNBL___c_TypeDefinitionIndex)->GetStaticField(0x35B80);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + NHIJOAAFNBL___C__CCTOR_OFFSET))();
	}

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NHIJOAAFNBL___C__CTOR_OFFSET))(this);
	}

	::System::Void LNHPMGCCOGL(::MoleMole::ConfigHollowChessboardEntityBehavior* DFMKILICPFB)
	{
		return ((::System::Void(*)(::PVOID, ::MoleMole::ConfigHollowChessboardEntityBehavior*))((::PBYTE)hIl2Cpp + NHIJOAAFNBL___C_LNHPMGCCOGL_OFFSET))(this, DFMKILICPFB);
	}

	::MoleMole::ConfigHollowChessboardEntityBehavior* LPCHADDECLC()
	{
		return ((::MoleMole::ConfigHollowChessboardEntityBehavior*(*)(::PVOID))((::PBYTE)hIl2Cpp + NHIJOAAFNBL___C_LPCHADDECLC_OFFSET))(this);
	}
};
