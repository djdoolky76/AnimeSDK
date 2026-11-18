#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace MoleMole { class ConfigUINewMap; }
namespace System { template <typename T> class Func_1; }

#define NCOIFALDOAA___C_LPCHADDECLC_OFFSET UNITYSDK_OFFSET(0x13B5A150)
#define NCOIFALDOAA___C__CCTOR_OFFSET UNITYSDK_OFFSET(0x13B5A100)
#define NCOIFALDOAA___C__CTOR_OFFSET UNITYSDK_OFFSET(0x13B5A140)

inline static constexpr unsigned int NCOIFALDOAA___c_TypeDefinitionIndex = 50204;

class NCOIFALDOAA___c : public ::System::Object
{
public:
	static ::System::Func_1<::MoleMole::ConfigUINewMap*>** StaticGet___9__2_0()
	{
		return (::System::Func_1<::MoleMole::ConfigUINewMap*>**)Il2CppClass::FromTypeDefinitionIndex(NCOIFALDOAA___c_TypeDefinitionIndex)->GetStaticField(0x3C8B0);
	}
	static ::System::Object** StaticGet___9()
	{
		return (::System::Object**)Il2CppClass::FromTypeDefinitionIndex(NCOIFALDOAA___c_TypeDefinitionIndex)->GetStaticField(0x3C8B8);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + NCOIFALDOAA___C__CCTOR_OFFSET))();
	}

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NCOIFALDOAA___C__CTOR_OFFSET))(this);
	}

	::MoleMole::ConfigUINewMap* LPCHADDECLC()
	{
		return ((::MoleMole::ConfigUINewMap*(*)(::PVOID))((::PBYTE)hIl2Cpp + NCOIFALDOAA___C_LPCHADDECLC_OFFSET))(this);
	}
};
