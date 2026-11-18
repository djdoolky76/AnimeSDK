#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace MoleMole::Config { class ConfigHollowTimeRewind; }
namespace System { template <typename T> class Action_1; }
namespace System { template <typename T> class Func_1; }

#define NBPKPFGKPAH___C_LNHPMGCCOGL_OFFSET UNITYSDK_OFFSET(0x120F2FF0)
#define NBPKPFGKPAH___C_LPCHADDECLC_OFFSET UNITYSDK_OFFSET(0x120F3000)
#define NBPKPFGKPAH___C__CCTOR_OFFSET UNITYSDK_OFFSET(0x120F2FA0)
#define NBPKPFGKPAH___C__CTOR_OFFSET UNITYSDK_OFFSET(0x120F2FE0)

inline static constexpr unsigned int NBPKPFGKPAH___c_TypeDefinitionIndex = 55066;

class NBPKPFGKPAH___c : public ::System::Object
{
public:
	static ::System::Object** StaticGet___9()
	{
		return (::System::Object**)Il2CppClass::FromTypeDefinitionIndex(NBPKPFGKPAH___c_TypeDefinitionIndex)->GetStaticField(0x3C880);
	}
	static ::System::Func_1<::MoleMole::Config::ConfigHollowTimeRewind*>** StaticGet___9__2_0()
	{
		return (::System::Func_1<::MoleMole::Config::ConfigHollowTimeRewind*>**)Il2CppClass::FromTypeDefinitionIndex(NBPKPFGKPAH___c_TypeDefinitionIndex)->GetStaticField(0x3C888);
	}
	static ::System::Action_1<::MoleMole::Config::ConfigHollowTimeRewind*>** StaticGet___9__2_1()
	{
		return (::System::Action_1<::MoleMole::Config::ConfigHollowTimeRewind*>**)Il2CppClass::FromTypeDefinitionIndex(NBPKPFGKPAH___c_TypeDefinitionIndex)->GetStaticField(0x3C890);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + NBPKPFGKPAH___C__CCTOR_OFFSET))();
	}

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NBPKPFGKPAH___C__CTOR_OFFSET))(this);
	}

	::System::Void LNHPMGCCOGL(::MoleMole::Config::ConfigHollowTimeRewind* DFMKILICPFB)
	{
		return ((::System::Void(*)(::PVOID, ::MoleMole::Config::ConfigHollowTimeRewind*))((::PBYTE)hIl2Cpp + NBPKPFGKPAH___C_LNHPMGCCOGL_OFFSET))(this, DFMKILICPFB);
	}

	::MoleMole::Config::ConfigHollowTimeRewind* LPCHADDECLC()
	{
		return ((::MoleMole::Config::ConfigHollowTimeRewind*(*)(::PVOID))((::PBYTE)hIl2Cpp + NBPKPFGKPAH___C_LPCHADDECLC_OFFSET))(this);
	}
};
