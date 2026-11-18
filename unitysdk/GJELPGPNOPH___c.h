#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace MoleMole::Config { class GamifiedPropConfig; }
namespace System { template <typename T> class Func_1; }

#define GJELPGPNOPH___C_LPCHADDECLC_OFFSET UNITYSDK_OFFSET(0x16CCA330)
#define GJELPGPNOPH___C__CCTOR_OFFSET UNITYSDK_OFFSET(0x16CCA2E0)
#define GJELPGPNOPH___C__CTOR_OFFSET UNITYSDK_OFFSET(0x16CCA320)

inline static constexpr unsigned int GJELPGPNOPH___c_TypeDefinitionIndex = 45953;

class GJELPGPNOPH___c : public ::System::Object
{
public:
	static ::System::Object** StaticGet___9()
	{
		return (::System::Object**)Il2CppClass::FromTypeDefinitionIndex(GJELPGPNOPH___c_TypeDefinitionIndex)->GetStaticField(0x378C0);
	}
	static ::System::Func_1<::MoleMole::Config::GamifiedPropConfig*>** StaticGet___9__2_0()
	{
		return (::System::Func_1<::MoleMole::Config::GamifiedPropConfig*>**)Il2CppClass::FromTypeDefinitionIndex(GJELPGPNOPH___c_TypeDefinitionIndex)->GetStaticField(0x378C8);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + GJELPGPNOPH___C__CCTOR_OFFSET))();
	}

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + GJELPGPNOPH___C__CTOR_OFFSET))(this);
	}

	::MoleMole::Config::GamifiedPropConfig* LPCHADDECLC()
	{
		return ((::MoleMole::Config::GamifiedPropConfig*(*)(::PVOID))((::PBYTE)hIl2Cpp + GJELPGPNOPH___C_LPCHADDECLC_OFFSET))(this);
	}
};
