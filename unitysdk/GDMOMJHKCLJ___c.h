#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace MoleMole { class MovingWallConfig; }
namespace System { template <typename T> class Func_1; }

#define GDMOMJHKCLJ___C_LPCHADDECLC_OFFSET UNITYSDK_OFFSET(0x14138010)
#define GDMOMJHKCLJ___C__CCTOR_OFFSET UNITYSDK_OFFSET(0x14137FC0)
#define GDMOMJHKCLJ___C__CTOR_OFFSET UNITYSDK_OFFSET(0x14138000)

inline static constexpr unsigned int GDMOMJHKCLJ___c_TypeDefinitionIndex = 62525;

class GDMOMJHKCLJ___c : public ::System::Object
{
public:
	static ::System::Func_1<::MoleMole::MovingWallConfig*>** StaticGet___9__2_0()
	{
		return (::System::Func_1<::MoleMole::MovingWallConfig*>**)Il2CppClass::FromTypeDefinitionIndex(GDMOMJHKCLJ___c_TypeDefinitionIndex)->GetStaticField(0x4CF50);
	}
	static ::System::Object** StaticGet___9()
	{
		return (::System::Object**)Il2CppClass::FromTypeDefinitionIndex(GDMOMJHKCLJ___c_TypeDefinitionIndex)->GetStaticField(0x4CF58);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + GDMOMJHKCLJ___C__CCTOR_OFFSET))();
	}

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + GDMOMJHKCLJ___C__CTOR_OFFSET))(this);
	}

	::MoleMole::MovingWallConfig* LPCHADDECLC()
	{
		return ((::MoleMole::MovingWallConfig*(*)(::PVOID))((::PBYTE)hIl2Cpp + GDMOMJHKCLJ___C_LPCHADDECLC_OFFSET))(this);
	}
};
