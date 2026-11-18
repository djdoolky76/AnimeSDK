#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace MoleMole::Config { class ConfigGamepadTriggerEffect; }
namespace System { template <typename T> class Func_1; }

#define IAOMONAPMLF___C_LPCHADDECLC_OFFSET UNITYSDK_OFFSET(0x140D7770)
#define IAOMONAPMLF___C__CCTOR_OFFSET UNITYSDK_OFFSET(0x140D7720)
#define IAOMONAPMLF___C__CTOR_OFFSET UNITYSDK_OFFSET(0x140D7760)

inline static constexpr unsigned int IAOMONAPMLF___c_TypeDefinitionIndex = 92842;

class IAOMONAPMLF___c : public ::System::Object
{
public:
	static ::System::Object** StaticGet___9()
	{
		return (::System::Object**)Il2CppClass::FromTypeDefinitionIndex(IAOMONAPMLF___c_TypeDefinitionIndex)->GetStaticField(0x322C0);
	}
	static ::System::Func_1<::MoleMole::Config::ConfigGamepadTriggerEffect*>** StaticGet___9__2_0()
	{
		return (::System::Func_1<::MoleMole::Config::ConfigGamepadTriggerEffect*>**)Il2CppClass::FromTypeDefinitionIndex(IAOMONAPMLF___c_TypeDefinitionIndex)->GetStaticField(0x322C8);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + IAOMONAPMLF___C__CCTOR_OFFSET))();
	}

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + IAOMONAPMLF___C__CTOR_OFFSET))(this);
	}

	::MoleMole::Config::ConfigGamepadTriggerEffect* LPCHADDECLC()
	{
		return ((::MoleMole::Config::ConfigGamepadTriggerEffect*(*)(::PVOID))((::PBYTE)hIl2Cpp + IAOMONAPMLF___C_LPCHADDECLC_OFFSET))(this);
	}
};
