#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace MoleMole::Config { class ConfigUIVirtualJoystick; }
namespace System { template <typename T> class Func_1; }

#define BDOLOPLGKHB___C_LPCHADDECLC_OFFSET UNITYSDK_OFFSET(0x14384900)
#define BDOLOPLGKHB___C__CCTOR_OFFSET UNITYSDK_OFFSET(0x143848B0)
#define BDOLOPLGKHB___C__CTOR_OFFSET UNITYSDK_OFFSET(0x143848F0)

inline static constexpr unsigned int BDOLOPLGKHB___c_TypeDefinitionIndex = 81631;

class BDOLOPLGKHB___c : public ::System::Object
{
public:
	static ::System::Object** StaticGet___9()
	{
		return (::System::Object**)Il2CppClass::FromTypeDefinitionIndex(BDOLOPLGKHB___c_TypeDefinitionIndex)->GetStaticField(0x3D480);
	}
	static ::System::Func_1<::MoleMole::Config::ConfigUIVirtualJoystick*>** StaticGet___9__2_0()
	{
		return (::System::Func_1<::MoleMole::Config::ConfigUIVirtualJoystick*>**)Il2CppClass::FromTypeDefinitionIndex(BDOLOPLGKHB___c_TypeDefinitionIndex)->GetStaticField(0x3D488);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + BDOLOPLGKHB___C__CCTOR_OFFSET))();
	}

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BDOLOPLGKHB___C__CTOR_OFFSET))(this);
	}

	::MoleMole::Config::ConfigUIVirtualJoystick* LPCHADDECLC()
	{
		return ((::MoleMole::Config::ConfigUIVirtualJoystick*(*)(::PVOID))((::PBYTE)hIl2Cpp + BDOLOPLGKHB___C_LPCHADDECLC_OFFSET))(this);
	}
};
