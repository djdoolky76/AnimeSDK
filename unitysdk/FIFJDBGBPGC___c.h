#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace MoleMole::Config { class ConfigSkinMdb; }
namespace System { template <typename T> class Func_1; }

#define FIFJDBGBPGC___C_MEMFHNGDGIN_OFFSET UNITYSDK_OFFSET(0x11D7D540)
#define FIFJDBGBPGC___C__CCTOR_OFFSET UNITYSDK_OFFSET(0x11D7D4F0)
#define FIFJDBGBPGC___C__CTOR_OFFSET UNITYSDK_OFFSET(0x11D7D530)

inline static constexpr unsigned int FIFJDBGBPGC___c_TypeDefinitionIndex = 64504;

class FIFJDBGBPGC___c : public ::System::Object
{
public:
	static ::System::Func_1<::MoleMole::Config::ConfigSkinMdb*>** StaticGet___9__3_0()
	{
		return (::System::Func_1<::MoleMole::Config::ConfigSkinMdb*>**)Il2CppClass::FromTypeDefinitionIndex(FIFJDBGBPGC___c_TypeDefinitionIndex)->GetStaticField(0x408E0);
	}
	static ::System::Object** StaticGet___9()
	{
		return (::System::Object**)Il2CppClass::FromTypeDefinitionIndex(FIFJDBGBPGC___c_TypeDefinitionIndex)->GetStaticField(0x408E8);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + FIFJDBGBPGC___C__CCTOR_OFFSET))();
	}

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FIFJDBGBPGC___C__CTOR_OFFSET))(this);
	}

	::MoleMole::Config::ConfigSkinMdb* MEMFHNGDGIN()
	{
		return ((::MoleMole::Config::ConfigSkinMdb*(*)(::PVOID))((::PBYTE)hIl2Cpp + FIFJDBGBPGC___C_MEMFHNGDGIN_OFFSET))(this);
	}
};
