#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace MoleMole::Config { class ConfigSummerTideTreasure; }
namespace System { template <typename T> class Func_1; }

#define BANOCEJMCOI___C_LPCHADDECLC_OFFSET UNITYSDK_OFFSET(0x17010FF0)
#define BANOCEJMCOI___C__CCTOR_OFFSET UNITYSDK_OFFSET(0x17010FA0)
#define BANOCEJMCOI___C__CTOR_OFFSET UNITYSDK_OFFSET(0x17010FE0)

inline static constexpr unsigned int BANOCEJMCOI___c_TypeDefinitionIndex = 87081;

class BANOCEJMCOI___c : public ::System::Object
{
public:
	static ::System::Func_1<::MoleMole::Config::ConfigSummerTideTreasure*>** StaticGet___9__2_0()
	{
		return (::System::Func_1<::MoleMole::Config::ConfigSummerTideTreasure*>**)Il2CppClass::FromTypeDefinitionIndex(BANOCEJMCOI___c_TypeDefinitionIndex)->GetStaticField(0x36D40);
	}
	static ::System::Object** StaticGet___9()
	{
		return (::System::Object**)Il2CppClass::FromTypeDefinitionIndex(BANOCEJMCOI___c_TypeDefinitionIndex)->GetStaticField(0x36D48);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + BANOCEJMCOI___C__CCTOR_OFFSET))();
	}

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BANOCEJMCOI___C__CTOR_OFFSET))(this);
	}

	::MoleMole::Config::ConfigSummerTideTreasure* LPCHADDECLC()
	{
		return ((::MoleMole::Config::ConfigSummerTideTreasure*(*)(::PVOID))((::PBYTE)hIl2Cpp + BANOCEJMCOI___C_LPCHADDECLC_OFFSET))(this);
	}
};
