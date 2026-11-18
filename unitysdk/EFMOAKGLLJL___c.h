#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace MoleMole::Config { class ConfigHollowChessboardInteract; }
namespace System { template <typename T> class Action_1; }
namespace System { template <typename T> class Func_1; }

#define EFMOAKGLLJL___C_LNHPMGCCOGL_OFFSET UNITYSDK_OFFSET(0xF9C31F0)
#define EFMOAKGLLJL___C_LPCHADDECLC_OFFSET UNITYSDK_OFFSET(0xF9C31E0)
#define EFMOAKGLLJL___C__CCTOR_OFFSET UNITYSDK_OFFSET(0xF9C3190)
#define EFMOAKGLLJL___C__CTOR_OFFSET UNITYSDK_OFFSET(0xF9C31D0)

inline static constexpr unsigned int EFMOAKGLLJL___c_TypeDefinitionIndex = 60053;

class EFMOAKGLLJL___c : public ::System::Object
{
public:
	static ::System::Func_1<::MoleMole::Config::ConfigHollowChessboardInteract*>** StaticGet___9__2_0()
	{
		return (::System::Func_1<::MoleMole::Config::ConfigHollowChessboardInteract*>**)Il2CppClass::FromTypeDefinitionIndex(EFMOAKGLLJL___c_TypeDefinitionIndex)->GetStaticField(0x43380);
	}
	static ::System::Action_1<::MoleMole::Config::ConfigHollowChessboardInteract*>** StaticGet___9__2_1()
	{
		return (::System::Action_1<::MoleMole::Config::ConfigHollowChessboardInteract*>**)Il2CppClass::FromTypeDefinitionIndex(EFMOAKGLLJL___c_TypeDefinitionIndex)->GetStaticField(0x43388);
	}
	static ::System::Object** StaticGet___9()
	{
		return (::System::Object**)Il2CppClass::FromTypeDefinitionIndex(EFMOAKGLLJL___c_TypeDefinitionIndex)->GetStaticField(0x43390);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + EFMOAKGLLJL___C__CCTOR_OFFSET))();
	}

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + EFMOAKGLLJL___C__CTOR_OFFSET))(this);
	}

	::MoleMole::Config::ConfigHollowChessboardInteract* LPCHADDECLC()
	{
		return ((::MoleMole::Config::ConfigHollowChessboardInteract*(*)(::PVOID))((::PBYTE)hIl2Cpp + EFMOAKGLLJL___C_LPCHADDECLC_OFFSET))(this);
	}

	::System::Void LNHPMGCCOGL(::MoleMole::Config::ConfigHollowChessboardInteract* DFMKILICPFB)
	{
		return ((::System::Void(*)(::PVOID, ::MoleMole::Config::ConfigHollowChessboardInteract*))((::PBYTE)hIl2Cpp + EFMOAKGLLJL___C_LNHPMGCCOGL_OFFSET))(this, DFMKILICPFB);
	}
};
