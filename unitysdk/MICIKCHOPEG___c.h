#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace MoleMole { class MonsterMappingConfig; }
namespace System { template <typename T> class Func_1; }

#define MICIKCHOPEG___C_LPCHADDECLC_OFFSET UNITYSDK_OFFSET(0x14DE73C0)
#define MICIKCHOPEG___C__CCTOR_OFFSET UNITYSDK_OFFSET(0x14DE7370)
#define MICIKCHOPEG___C__CTOR_OFFSET UNITYSDK_OFFSET(0x14DE73B0)

inline static constexpr unsigned int MICIKCHOPEG___c_TypeDefinitionIndex = 60632;

class MICIKCHOPEG___c : public ::System::Object
{
public:
	static ::System::Func_1<::MoleMole::MonsterMappingConfig*>** StaticGet___9__2_0()
	{
		return (::System::Func_1<::MoleMole::MonsterMappingConfig*>**)Il2CppClass::FromTypeDefinitionIndex(MICIKCHOPEG___c_TypeDefinitionIndex)->GetStaticField(0x4A340);
	}
	static ::System::Object** StaticGet___9()
	{
		return (::System::Object**)Il2CppClass::FromTypeDefinitionIndex(MICIKCHOPEG___c_TypeDefinitionIndex)->GetStaticField(0x4A348);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + MICIKCHOPEG___C__CCTOR_OFFSET))();
	}

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MICIKCHOPEG___C__CTOR_OFFSET))(this);
	}

	::MoleMole::MonsterMappingConfig* LPCHADDECLC()
	{
		return ((::MoleMole::MonsterMappingConfig*(*)(::PVOID))((::PBYTE)hIl2Cpp + MICIKCHOPEG___C_LPCHADDECLC_OFFSET))(this);
	}
};
