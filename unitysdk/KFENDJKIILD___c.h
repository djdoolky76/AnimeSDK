#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace MoleMole { class ConfigPinball; }
namespace System { template <typename T> class Action_1; }
namespace System { template <typename T> class Func_1; }

#define KFENDJKIILD___C_LNHPMGCCOGL_OFFSET UNITYSDK_OFFSET(0x12983E20)
#define KFENDJKIILD___C_LPCHADDECLC_OFFSET UNITYSDK_OFFSET(0x12983F10)
#define KFENDJKIILD___C__CCTOR_OFFSET UNITYSDK_OFFSET(0x12983DD0)
#define KFENDJKIILD___C__CTOR_OFFSET UNITYSDK_OFFSET(0x12983E10)

inline static constexpr unsigned int KFENDJKIILD___c_TypeDefinitionIndex = 50960;

class KFENDJKIILD___c : public ::System::Object
{
public:
	static ::System::Func_1<::MoleMole::ConfigPinball*>** StaticGet___9__2_0()
	{
		return (::System::Func_1<::MoleMole::ConfigPinball*>**)Il2CppClass::FromTypeDefinitionIndex(KFENDJKIILD___c_TypeDefinitionIndex)->GetStaticField(0x410B0);
	}
	static ::System::Action_1<::MoleMole::ConfigPinball*>** StaticGet___9__2_1()
	{
		return (::System::Action_1<::MoleMole::ConfigPinball*>**)Il2CppClass::FromTypeDefinitionIndex(KFENDJKIILD___c_TypeDefinitionIndex)->GetStaticField(0x410B8);
	}
	static ::System::Object** StaticGet___9()
	{
		return (::System::Object**)Il2CppClass::FromTypeDefinitionIndex(KFENDJKIILD___c_TypeDefinitionIndex)->GetStaticField(0x410C0);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + KFENDJKIILD___C__CCTOR_OFFSET))();
	}

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + KFENDJKIILD___C__CTOR_OFFSET))(this);
	}

	::System::Void LNHPMGCCOGL(::MoleMole::ConfigPinball* DFMKILICPFB)
	{
		return ((::System::Void(*)(::PVOID, ::MoleMole::ConfigPinball*))((::PBYTE)hIl2Cpp + KFENDJKIILD___C_LNHPMGCCOGL_OFFSET))(this, DFMKILICPFB);
	}

	::MoleMole::ConfigPinball* LPCHADDECLC()
	{
		return ((::MoleMole::ConfigPinball*(*)(::PVOID))((::PBYTE)hIl2Cpp + KFENDJKIILD___C_LPCHADDECLC_OFFSET))(this);
	}
};
