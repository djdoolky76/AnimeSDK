#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace MoleMole::Config { class ConfigHollowChessboard; }
namespace System { template <typename T> class Action_1; }
namespace System { template <typename T> class Func_1; }

#define ONMGFKJGJBI___C_LNHPMGCCOGL_OFFSET UNITYSDK_OFFSET(0xE167940)
#define ONMGFKJGJBI___C_LPCHADDECLC_OFFSET UNITYSDK_OFFSET(0xE167950)
#define ONMGFKJGJBI___C__CCTOR_OFFSET UNITYSDK_OFFSET(0xE1678F0)
#define ONMGFKJGJBI___C__CTOR_OFFSET UNITYSDK_OFFSET(0xE167930)

inline static constexpr unsigned int ONMGFKJGJBI___c_TypeDefinitionIndex = 75501;

class ONMGFKJGJBI___c : public ::System::Object
{
public:
	static ::System::Object** StaticGet___9()
	{
		return (::System::Object**)Il2CppClass::FromTypeDefinitionIndex(ONMGFKJGJBI___c_TypeDefinitionIndex)->GetStaticField(0x42910);
	}
	static ::System::Func_1<::MoleMole::Config::ConfigHollowChessboard*>** StaticGet___9__2_0()
	{
		return (::System::Func_1<::MoleMole::Config::ConfigHollowChessboard*>**)Il2CppClass::FromTypeDefinitionIndex(ONMGFKJGJBI___c_TypeDefinitionIndex)->GetStaticField(0x42918);
	}
	static ::System::Action_1<::MoleMole::Config::ConfigHollowChessboard*>** StaticGet___9__2_1()
	{
		return (::System::Action_1<::MoleMole::Config::ConfigHollowChessboard*>**)Il2CppClass::FromTypeDefinitionIndex(ONMGFKJGJBI___c_TypeDefinitionIndex)->GetStaticField(0x42920);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + ONMGFKJGJBI___C__CCTOR_OFFSET))();
	}

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ONMGFKJGJBI___C__CTOR_OFFSET))(this);
	}

	::System::Void LNHPMGCCOGL(::MoleMole::Config::ConfigHollowChessboard* DFMKILICPFB)
	{
		return ((::System::Void(*)(::PVOID, ::MoleMole::Config::ConfigHollowChessboard*))((::PBYTE)hIl2Cpp + ONMGFKJGJBI___C_LNHPMGCCOGL_OFFSET))(this, DFMKILICPFB);
	}

	::MoleMole::Config::ConfigHollowChessboard* LPCHADDECLC()
	{
		return ((::MoleMole::Config::ConfigHollowChessboard*(*)(::PVOID))((::PBYTE)hIl2Cpp + ONMGFKJGJBI___C_LPCHADDECLC_OFFSET))(this);
	}
};
