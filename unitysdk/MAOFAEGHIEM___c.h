#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace MoleMole::Config { class ConfigPlayerAccessoryEffect; }
namespace System { template <typename T> class Func_1; }

#define MAOFAEGHIEM___C_LPCHADDECLC_OFFSET UNITYSDK_OFFSET(0x1A6302D0)
#define MAOFAEGHIEM___C__CCTOR_OFFSET UNITYSDK_OFFSET(0x1A630280)
#define MAOFAEGHIEM___C__CTOR_OFFSET UNITYSDK_OFFSET(0x1A6302C0)

inline static constexpr unsigned int MAOFAEGHIEM___c_TypeDefinitionIndex = 58598;

class MAOFAEGHIEM___c : public ::System::Object
{
public:
	static ::System::Object** StaticGet___9()
	{
		return (::System::Object**)Il2CppClass::FromTypeDefinitionIndex(MAOFAEGHIEM___c_TypeDefinitionIndex)->GetStaticField(0x46A10);
	}
	static ::System::Func_1<::MoleMole::Config::ConfigPlayerAccessoryEffect*>** StaticGet___9__2_0()
	{
		return (::System::Func_1<::MoleMole::Config::ConfigPlayerAccessoryEffect*>**)Il2CppClass::FromTypeDefinitionIndex(MAOFAEGHIEM___c_TypeDefinitionIndex)->GetStaticField(0x46A18);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + MAOFAEGHIEM___C__CCTOR_OFFSET))();
	}

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MAOFAEGHIEM___C__CTOR_OFFSET))(this);
	}

	::MoleMole::Config::ConfigPlayerAccessoryEffect* LPCHADDECLC()
	{
		return ((::MoleMole::Config::ConfigPlayerAccessoryEffect*(*)(::PVOID))((::PBYTE)hIl2Cpp + MAOFAEGHIEM___C_LPCHADDECLC_OFFSET))(this);
	}
};
