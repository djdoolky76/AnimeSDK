#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/Config/ShaderCustomType.h"
#include "unitysdk/System/Object.h"

namespace MoleMole::Config { class ConfigShaderCustomBase; }
namespace System { class String; }
namespace System { template <typename T> class Func_1; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define KDFJFILBDHI___C_LPCHADDECLC_OFFSET UNITYSDK_OFFSET(0x18A63670)
#define KDFJFILBDHI___C__CCTOR_OFFSET UNITYSDK_OFFSET(0x18A63620)
#define KDFJFILBDHI___C__CTOR_OFFSET UNITYSDK_OFFSET(0x18A63660)

inline static constexpr unsigned int KDFJFILBDHI___c_TypeDefinitionIndex = 85080;

class KDFJFILBDHI___c : public ::System::Object
{
public:
	static ::System::Func_1<::System::Collections::Generic::Dictionary_2<::MoleMole::Config::ShaderCustomType, ::System::Collections::Generic::Dictionary_2<::System::String*, ::MoleMole::Config::ConfigShaderCustomBase*>*>*>** StaticGet___9__2_0()
	{
		return (::System::Func_1<::System::Collections::Generic::Dictionary_2<::MoleMole::Config::ShaderCustomType, ::System::Collections::Generic::Dictionary_2<::System::String*, ::MoleMole::Config::ConfigShaderCustomBase*>*>*>**)Il2CppClass::FromTypeDefinitionIndex(KDFJFILBDHI___c_TypeDefinitionIndex)->GetStaticField(0x48290);
	}
	static ::System::Object** StaticGet___9()
	{
		return (::System::Object**)Il2CppClass::FromTypeDefinitionIndex(KDFJFILBDHI___c_TypeDefinitionIndex)->GetStaticField(0x48298);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + KDFJFILBDHI___C__CCTOR_OFFSET))();
	}

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + KDFJFILBDHI___C__CTOR_OFFSET))(this);
	}

	::System::Collections::Generic::Dictionary_2<::MoleMole::Config::ShaderCustomType, ::System::Collections::Generic::Dictionary_2<::System::String*, ::MoleMole::Config::ConfigShaderCustomBase*>*>* LPCHADDECLC()
	{
		return ((::System::Collections::Generic::Dictionary_2<::MoleMole::Config::ShaderCustomType, ::System::Collections::Generic::Dictionary_2<::System::String*, ::MoleMole::Config::ConfigShaderCustomBase*>*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + KDFJFILBDHI___C_LPCHADDECLC_OFFSET))(this);
	}
};
