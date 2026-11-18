#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace MoleMole::Config { class ConfigUIGachaPortrait; }
namespace System { template <typename T> class Func_1; }

#define BDPGMLENOON___C_LPCHADDECLC_OFFSET UNITYSDK_OFFSET(0x17020C40)
#define BDPGMLENOON___C__CCTOR_OFFSET UNITYSDK_OFFSET(0x17020BF0)
#define BDPGMLENOON___C__CTOR_OFFSET UNITYSDK_OFFSET(0x17020C30)

inline static constexpr unsigned int BDPGMLENOON___c_TypeDefinitionIndex = 87097;

class BDPGMLENOON___c : public ::System::Object
{
public:
	static ::System::Func_1<::MoleMole::Config::ConfigUIGachaPortrait*>** StaticGet___9__2_0()
	{
		return (::System::Func_1<::MoleMole::Config::ConfigUIGachaPortrait*>**)Il2CppClass::FromTypeDefinitionIndex(BDPGMLENOON___c_TypeDefinitionIndex)->GetStaticField(0x42D60);
	}
	static ::System::Object** StaticGet___9()
	{
		return (::System::Object**)Il2CppClass::FromTypeDefinitionIndex(BDPGMLENOON___c_TypeDefinitionIndex)->GetStaticField(0x42D68);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + BDPGMLENOON___C__CCTOR_OFFSET))();
	}

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BDPGMLENOON___C__CTOR_OFFSET))(this);
	}

	::MoleMole::Config::ConfigUIGachaPortrait* LPCHADDECLC()
	{
		return ((::MoleMole::Config::ConfigUIGachaPortrait*(*)(::PVOID))((::PBYTE)hIl2Cpp + BDPGMLENOON___C_LPCHADDECLC_OFFSET))(this);
	}
};
