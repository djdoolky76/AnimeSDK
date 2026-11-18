#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace MoleMole::Config { class HollowCampTypeConfig; }
namespace System { template <typename T> class Action_1; }
namespace System { template <typename T> class Func_1; }

#define KBDJHHLAKGC___C_MEMFHNGDGIN_OFFSET UNITYSDK_OFFSET(0x18A313E0)
#define KBDJHHLAKGC___C_NNENLNPCIKD_OFFSET UNITYSDK_OFFSET(0x18A313D0)
#define KBDJHHLAKGC___C__CCTOR_OFFSET UNITYSDK_OFFSET(0x18A31380)
#define KBDJHHLAKGC___C__CTOR_OFFSET UNITYSDK_OFFSET(0x18A313C0)

inline static constexpr unsigned int KBDJHHLAKGC___c_TypeDefinitionIndex = 85215;

class KBDJHHLAKGC___c : public ::System::Object
{
public:
	static ::System::Func_1<::MoleMole::Config::HollowCampTypeConfig*>** StaticGet___9__3_0()
	{
		return (::System::Func_1<::MoleMole::Config::HollowCampTypeConfig*>**)Il2CppClass::FromTypeDefinitionIndex(KBDJHHLAKGC___c_TypeDefinitionIndex)->GetStaticField(0x444C0);
	}
	static ::System::Object** StaticGet___9()
	{
		return (::System::Object**)Il2CppClass::FromTypeDefinitionIndex(KBDJHHLAKGC___c_TypeDefinitionIndex)->GetStaticField(0x444C8);
	}
	static ::System::Action_1<::MoleMole::Config::HollowCampTypeConfig*>** StaticGet___9__3_1()
	{
		return (::System::Action_1<::MoleMole::Config::HollowCampTypeConfig*>**)Il2CppClass::FromTypeDefinitionIndex(KBDJHHLAKGC___c_TypeDefinitionIndex)->GetStaticField(0x444D0);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + KBDJHHLAKGC___C__CCTOR_OFFSET))();
	}

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + KBDJHHLAKGC___C__CTOR_OFFSET))(this);
	}

	::System::Void NNENLNPCIKD(::MoleMole::Config::HollowCampTypeConfig* DFMKILICPFB)
	{
		return ((::System::Void(*)(::PVOID, ::MoleMole::Config::HollowCampTypeConfig*))((::PBYTE)hIl2Cpp + KBDJHHLAKGC___C_NNENLNPCIKD_OFFSET))(this, DFMKILICPFB);
	}

	::MoleMole::Config::HollowCampTypeConfig* MEMFHNGDGIN()
	{
		return ((::MoleMole::Config::HollowCampTypeConfig*(*)(::PVOID))((::PBYTE)hIl2Cpp + KBDJHHLAKGC___C_MEMFHNGDGIN_OFFSET))(this);
	}
};
