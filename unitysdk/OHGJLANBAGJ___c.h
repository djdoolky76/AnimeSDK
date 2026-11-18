#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace MoleMole::Config { class ConfigGhostEffects; }
namespace System { template <typename T> class Func_1; }

#define OHGJLANBAGJ___C_LPCHADDECLC_OFFSET UNITYSDK_OFFSET(0x15FE23F0)
#define OHGJLANBAGJ___C__CCTOR_OFFSET UNITYSDK_OFFSET(0x15FE23A0)
#define OHGJLANBAGJ___C__CTOR_OFFSET UNITYSDK_OFFSET(0x15FE23E0)

inline static constexpr unsigned int OHGJLANBAGJ___c_TypeDefinitionIndex = 38362;

class OHGJLANBAGJ___c : public ::System::Object
{
public:
	static ::System::Object** StaticGet___9()
	{
		return (::System::Object**)Il2CppClass::FromTypeDefinitionIndex(OHGJLANBAGJ___c_TypeDefinitionIndex)->GetStaticField(0x3CDD0);
	}
	static ::System::Func_1<::MoleMole::Config::ConfigGhostEffects*>** StaticGet___9__2_0()
	{
		return (::System::Func_1<::MoleMole::Config::ConfigGhostEffects*>**)Il2CppClass::FromTypeDefinitionIndex(OHGJLANBAGJ___c_TypeDefinitionIndex)->GetStaticField(0x3CDD8);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + OHGJLANBAGJ___C__CCTOR_OFFSET))();
	}

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + OHGJLANBAGJ___C__CTOR_OFFSET))(this);
	}

	::MoleMole::Config::ConfigGhostEffects* LPCHADDECLC()
	{
		return ((::MoleMole::Config::ConfigGhostEffects*(*)(::PVOID))((::PBYTE)hIl2Cpp + OHGJLANBAGJ___C_LPCHADDECLC_OFFSET))(this);
	}
};
