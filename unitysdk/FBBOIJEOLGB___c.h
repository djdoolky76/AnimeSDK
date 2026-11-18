#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace MoleMole { class SummerEventShootingGamePlayConfig; }
namespace System { template <typename T> class Func_1; }

#define FBBOIJEOLGB___C_LPCHADDECLC_OFFSET UNITYSDK_OFFSET(0x11AB4AC0)
#define FBBOIJEOLGB___C__CCTOR_OFFSET UNITYSDK_OFFSET(0x11AB4A70)
#define FBBOIJEOLGB___C__CTOR_OFFSET UNITYSDK_OFFSET(0x11AB4AB0)

inline static constexpr unsigned int FBBOIJEOLGB___c_TypeDefinitionIndex = 46457;

class FBBOIJEOLGB___c : public ::System::Object
{
public:
	static ::System::Object** StaticGet___9()
	{
		return (::System::Object**)Il2CppClass::FromTypeDefinitionIndex(FBBOIJEOLGB___c_TypeDefinitionIndex)->GetStaticField(0x4CE90);
	}
	static ::System::Func_1<::MoleMole::SummerEventShootingGamePlayConfig*>** StaticGet___9__2_0()
	{
		return (::System::Func_1<::MoleMole::SummerEventShootingGamePlayConfig*>**)Il2CppClass::FromTypeDefinitionIndex(FBBOIJEOLGB___c_TypeDefinitionIndex)->GetStaticField(0x4CE98);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + FBBOIJEOLGB___C__CCTOR_OFFSET))();
	}

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FBBOIJEOLGB___C__CTOR_OFFSET))(this);
	}

	::MoleMole::SummerEventShootingGamePlayConfig* LPCHADDECLC()
	{
		return ((::MoleMole::SummerEventShootingGamePlayConfig*(*)(::PVOID))((::PBYTE)hIl2Cpp + FBBOIJEOLGB___C_LPCHADDECLC_OFFSET))(this);
	}
};
