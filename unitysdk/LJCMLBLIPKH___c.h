#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace MoleMole::Config { class LevelGlobalCounterstrokeConfig; }
namespace System { template <typename T> class Func_1; }

#define LJCMLBLIPKH___C_LPCHADDECLC_OFFSET UNITYSDK_OFFSET(0x11F19D40)
#define LJCMLBLIPKH___C__CCTOR_OFFSET UNITYSDK_OFFSET(0x11F19CF0)
#define LJCMLBLIPKH___C__CTOR_OFFSET UNITYSDK_OFFSET(0x11F19D30)

inline static constexpr unsigned int LJCMLBLIPKH___c_TypeDefinitionIndex = 53889;

class LJCMLBLIPKH___c : public ::System::Object
{
public:
	static ::System::Func_1<::MoleMole::Config::LevelGlobalCounterstrokeConfig*>** StaticGet___9__2_0()
	{
		return (::System::Func_1<::MoleMole::Config::LevelGlobalCounterstrokeConfig*>**)Il2CppClass::FromTypeDefinitionIndex(LJCMLBLIPKH___c_TypeDefinitionIndex)->GetStaticField(0x384D0);
	}
	static ::System::Object** StaticGet___9()
	{
		return (::System::Object**)Il2CppClass::FromTypeDefinitionIndex(LJCMLBLIPKH___c_TypeDefinitionIndex)->GetStaticField(0x384D8);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + LJCMLBLIPKH___C__CCTOR_OFFSET))();
	}

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + LJCMLBLIPKH___C__CTOR_OFFSET))(this);
	}

	::MoleMole::Config::LevelGlobalCounterstrokeConfig* LPCHADDECLC()
	{
		return ((::MoleMole::Config::LevelGlobalCounterstrokeConfig*(*)(::PVOID))((::PBYTE)hIl2Cpp + LJCMLBLIPKH___C_LPCHADDECLC_OFFSET))(this);
	}
};
