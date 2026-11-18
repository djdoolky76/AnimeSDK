#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace MoleMole::Config { class AvatarScriptAndAnimOverrideConfig; }
namespace System { template <typename T> class Func_1; }

#define LPNINEOMPIM___C_LPCHADDECLC_OFFSET UNITYSDK_OFFSET(0x11F2AD70)
#define LPNINEOMPIM___C__CCTOR_OFFSET UNITYSDK_OFFSET(0x11F2AD20)
#define LPNINEOMPIM___C__CTOR_OFFSET UNITYSDK_OFFSET(0x11F2AD60)

inline static constexpr unsigned int LPNINEOMPIM___c_TypeDefinitionIndex = 53832;

class LPNINEOMPIM___c : public ::System::Object
{
public:
	static ::System::Func_1<::MoleMole::Config::AvatarScriptAndAnimOverrideConfig*>** StaticGet___9__2_0()
	{
		return (::System::Func_1<::MoleMole::Config::AvatarScriptAndAnimOverrideConfig*>**)Il2CppClass::FromTypeDefinitionIndex(LPNINEOMPIM___c_TypeDefinitionIndex)->GetStaticField(0x3E760);
	}
	static ::System::Object** StaticGet___9()
	{
		return (::System::Object**)Il2CppClass::FromTypeDefinitionIndex(LPNINEOMPIM___c_TypeDefinitionIndex)->GetStaticField(0x3E768);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + LPNINEOMPIM___C__CCTOR_OFFSET))();
	}

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + LPNINEOMPIM___C__CTOR_OFFSET))(this);
	}

	::MoleMole::Config::AvatarScriptAndAnimOverrideConfig* LPCHADDECLC()
	{
		return ((::MoleMole::Config::AvatarScriptAndAnimOverrideConfig*(*)(::PVOID))((::PBYTE)hIl2Cpp + LPNINEOMPIM___C_LPCHADDECLC_OFFSET))(this);
	}
};
