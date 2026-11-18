#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace MoleMole::Config { class ConfigExQTE; }
namespace System { template <typename T> class Func_1; }

#define DEOEILOKNAD___C_LPCHADDECLC_OFFSET UNITYSDK_OFFSET(0x193FC7B0)
#define DEOEILOKNAD___C__CCTOR_OFFSET UNITYSDK_OFFSET(0x193FC760)
#define DEOEILOKNAD___C__CTOR_OFFSET UNITYSDK_OFFSET(0x193FC7A0)

inline static constexpr unsigned int DEOEILOKNAD___c_TypeDefinitionIndex = 59104;

class DEOEILOKNAD___c : public ::System::Object
{
public:
	static ::System::Object** StaticGet___9()
	{
		return (::System::Object**)Il2CppClass::FromTypeDefinitionIndex(DEOEILOKNAD___c_TypeDefinitionIndex)->GetStaticField(0x37260);
	}
	static ::System::Func_1<::MoleMole::Config::ConfigExQTE*>** StaticGet___9__2_0()
	{
		return (::System::Func_1<::MoleMole::Config::ConfigExQTE*>**)Il2CppClass::FromTypeDefinitionIndex(DEOEILOKNAD___c_TypeDefinitionIndex)->GetStaticField(0x37268);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + DEOEILOKNAD___C__CCTOR_OFFSET))();
	}

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + DEOEILOKNAD___C__CTOR_OFFSET))(this);
	}

	::MoleMole::Config::ConfigExQTE* LPCHADDECLC()
	{
		return ((::MoleMole::Config::ConfigExQTE*(*)(::PVOID))((::PBYTE)hIl2Cpp + DEOEILOKNAD___C_LPCHADDECLC_OFFSET))(this);
	}
};
