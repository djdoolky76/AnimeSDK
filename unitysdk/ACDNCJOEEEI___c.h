#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace MoleMole::Config { class ConfigHollowPlayer; }
namespace System { template <typename T> class Action_1; }
namespace System { template <typename T> class Func_1; }

#define ACDNCJOEEEI___C_LNHPMGCCOGL_OFFSET UNITYSDK_OFFSET(0x134A6BD0)
#define ACDNCJOEEEI___C_LPCHADDECLC_OFFSET UNITYSDK_OFFSET(0x134A6BC0)
#define ACDNCJOEEEI___C__CCTOR_OFFSET UNITYSDK_OFFSET(0x134A6B70)
#define ACDNCJOEEEI___C__CTOR_OFFSET UNITYSDK_OFFSET(0x134A6BB0)

inline static constexpr unsigned int ACDNCJOEEEI___c_TypeDefinitionIndex = 61817;

class ACDNCJOEEEI___c : public ::System::Object
{
public:
	static ::System::Func_1<::MoleMole::Config::ConfigHollowPlayer*>** StaticGet___9__2_0()
	{
		return (::System::Func_1<::MoleMole::Config::ConfigHollowPlayer*>**)Il2CppClass::FromTypeDefinitionIndex(ACDNCJOEEEI___c_TypeDefinitionIndex)->GetStaticField(0x4B3D0);
	}
	static ::System::Action_1<::MoleMole::Config::ConfigHollowPlayer*>** StaticGet___9__2_1()
	{
		return (::System::Action_1<::MoleMole::Config::ConfigHollowPlayer*>**)Il2CppClass::FromTypeDefinitionIndex(ACDNCJOEEEI___c_TypeDefinitionIndex)->GetStaticField(0x4B3D8);
	}
	static ::System::Object** StaticGet___9()
	{
		return (::System::Object**)Il2CppClass::FromTypeDefinitionIndex(ACDNCJOEEEI___c_TypeDefinitionIndex)->GetStaticField(0x4B3E0);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + ACDNCJOEEEI___C__CCTOR_OFFSET))();
	}

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ACDNCJOEEEI___C__CTOR_OFFSET))(this);
	}

	::MoleMole::Config::ConfigHollowPlayer* LPCHADDECLC()
	{
		return ((::MoleMole::Config::ConfigHollowPlayer*(*)(::PVOID))((::PBYTE)hIl2Cpp + ACDNCJOEEEI___C_LPCHADDECLC_OFFSET))(this);
	}

	::System::Void LNHPMGCCOGL(::MoleMole::Config::ConfigHollowPlayer* DFMKILICPFB)
	{
		return ((::System::Void(*)(::PVOID, ::MoleMole::Config::ConfigHollowPlayer*))((::PBYTE)hIl2Cpp + ACDNCJOEEEI___C_LNHPMGCCOGL_OFFSET))(this, DFMKILICPFB);
	}
};
