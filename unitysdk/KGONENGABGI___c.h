#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace MoleMole::Config { class ConfigHollowChessboardCamera; }
namespace System { template <typename T> class Action_1; }
namespace System { template <typename T> class Func_1; }

#define KGONENGABGI___C_LNHPMGCCOGL_OFFSET UNITYSDK_OFFSET(0x12999F00)
#define KGONENGABGI___C_LPCHADDECLC_OFFSET UNITYSDK_OFFSET(0x12999EF0)
#define KGONENGABGI___C__CCTOR_OFFSET UNITYSDK_OFFSET(0x12999EA0)
#define KGONENGABGI___C__CTOR_OFFSET UNITYSDK_OFFSET(0x12999EE0)

inline static constexpr unsigned int KGONENGABGI___c_TypeDefinitionIndex = 44822;

class KGONENGABGI___c : public ::System::Object
{
public:
	static ::System::Func_1<::MoleMole::Config::ConfigHollowChessboardCamera*>** StaticGet___9__2_0()
	{
		return (::System::Func_1<::MoleMole::Config::ConfigHollowChessboardCamera*>**)Il2CppClass::FromTypeDefinitionIndex(KGONENGABGI___c_TypeDefinitionIndex)->GetStaticField(0x3B790);
	}
	static ::System::Object** StaticGet___9()
	{
		return (::System::Object**)Il2CppClass::FromTypeDefinitionIndex(KGONENGABGI___c_TypeDefinitionIndex)->GetStaticField(0x3B798);
	}
	static ::System::Action_1<::MoleMole::Config::ConfigHollowChessboardCamera*>** StaticGet___9__2_1()
	{
		return (::System::Action_1<::MoleMole::Config::ConfigHollowChessboardCamera*>**)Il2CppClass::FromTypeDefinitionIndex(KGONENGABGI___c_TypeDefinitionIndex)->GetStaticField(0x3B7A0);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + KGONENGABGI___C__CCTOR_OFFSET))();
	}

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + KGONENGABGI___C__CTOR_OFFSET))(this);
	}

	::MoleMole::Config::ConfigHollowChessboardCamera* LPCHADDECLC()
	{
		return ((::MoleMole::Config::ConfigHollowChessboardCamera*(*)(::PVOID))((::PBYTE)hIl2Cpp + KGONENGABGI___C_LPCHADDECLC_OFFSET))(this);
	}

	::System::Void LNHPMGCCOGL(::MoleMole::Config::ConfigHollowChessboardCamera* DFMKILICPFB)
	{
		return ((::System::Void(*)(::PVOID, ::MoleMole::Config::ConfigHollowChessboardCamera*))((::PBYTE)hIl2Cpp + KGONENGABGI___C_LNHPMGCCOGL_OFFSET))(this, DFMKILICPFB);
	}
};
