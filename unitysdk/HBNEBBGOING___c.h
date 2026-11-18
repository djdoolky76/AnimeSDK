#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace MoleMole { class ConfigNpcPrototype; }
namespace System { template <typename T> class Func_1; }

#define HBNEBBGOING___C_LPCHADDECLC_OFFSET UNITYSDK_OFFSET(0x149F9470)
#define HBNEBBGOING___C__CCTOR_OFFSET UNITYSDK_OFFSET(0x149F9420)
#define HBNEBBGOING___C__CTOR_OFFSET UNITYSDK_OFFSET(0x149F9460)

inline static constexpr unsigned int HBNEBBGOING___c_TypeDefinitionIndex = 89167;

class HBNEBBGOING___c : public ::System::Object
{
public:
	static ::System::Func_1<::MoleMole::ConfigNpcPrototype*>** StaticGet___9__2_0()
	{
		return (::System::Func_1<::MoleMole::ConfigNpcPrototype*>**)Il2CppClass::FromTypeDefinitionIndex(HBNEBBGOING___c_TypeDefinitionIndex)->GetStaticField(0x31D40);
	}
	static ::System::Object** StaticGet___9()
	{
		return (::System::Object**)Il2CppClass::FromTypeDefinitionIndex(HBNEBBGOING___c_TypeDefinitionIndex)->GetStaticField(0x31D48);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + HBNEBBGOING___C__CCTOR_OFFSET))();
	}

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + HBNEBBGOING___C__CTOR_OFFSET))(this);
	}

	::MoleMole::ConfigNpcPrototype* LPCHADDECLC()
	{
		return ((::MoleMole::ConfigNpcPrototype*(*)(::PVOID))((::PBYTE)hIl2Cpp + HBNEBBGOING___C_LPCHADDECLC_OFFSET))(this);
	}
};
