#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace MoleMole::Config { class ConfigFlowerShopActivityScriptableObject; }
namespace System { template <typename T> class Func_1; }

#define OBPCIBOKHGC___C_LPCHADDECLC_OFFSET UNITYSDK_OFFSET(0x1B7730D0)
#define OBPCIBOKHGC___C__CCTOR_OFFSET UNITYSDK_OFFSET(0x1B773080)
#define OBPCIBOKHGC___C__CTOR_OFFSET UNITYSDK_OFFSET(0x1B7730C0)

inline static constexpr unsigned int OBPCIBOKHGC___c_TypeDefinitionIndex = 66489;

class OBPCIBOKHGC___c : public ::System::Object
{
public:
	static ::System::Object** StaticGet___9()
	{
		return (::System::Object**)Il2CppClass::FromTypeDefinitionIndex(OBPCIBOKHGC___c_TypeDefinitionIndex)->GetStaticField(0x39CA0);
	}
	static ::System::Func_1<::MoleMole::Config::ConfigFlowerShopActivityScriptableObject*>** StaticGet___9__2_0()
	{
		return (::System::Func_1<::MoleMole::Config::ConfigFlowerShopActivityScriptableObject*>**)Il2CppClass::FromTypeDefinitionIndex(OBPCIBOKHGC___c_TypeDefinitionIndex)->GetStaticField(0x39CA8);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + OBPCIBOKHGC___C__CCTOR_OFFSET))();
	}

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + OBPCIBOKHGC___C__CTOR_OFFSET))(this);
	}

	::MoleMole::Config::ConfigFlowerShopActivityScriptableObject* LPCHADDECLC()
	{
		return ((::MoleMole::Config::ConfigFlowerShopActivityScriptableObject*(*)(::PVOID))((::PBYTE)hIl2Cpp + OBPCIBOKHGC___C_LPCHADDECLC_OFFSET))(this);
	}
};
