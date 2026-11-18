#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace MoleMole { class ConfigUIFish; }
namespace System { template <typename T> class Func_1; }

#define JLCGHPIHJLF___C_LPCHADDECLC_OFFSET UNITYSDK_OFFSET(0x14FC1690)
#define JLCGHPIHJLF___C__CCTOR_OFFSET UNITYSDK_OFFSET(0x14FC1640)
#define JLCGHPIHJLF___C__CTOR_OFFSET UNITYSDK_OFFSET(0x14FC1680)

inline static constexpr unsigned int JLCGHPIHJLF___c_TypeDefinitionIndex = 81434;

class JLCGHPIHJLF___c : public ::System::Object
{
public:
	static ::System::Object** StaticGet___9()
	{
		return (::System::Object**)Il2CppClass::FromTypeDefinitionIndex(JLCGHPIHJLF___c_TypeDefinitionIndex)->GetStaticField(0x3B630);
	}
	static ::System::Func_1<::MoleMole::ConfigUIFish*>** StaticGet___9__2_0()
	{
		return (::System::Func_1<::MoleMole::ConfigUIFish*>**)Il2CppClass::FromTypeDefinitionIndex(JLCGHPIHJLF___c_TypeDefinitionIndex)->GetStaticField(0x3B638);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + JLCGHPIHJLF___C__CCTOR_OFFSET))();
	}

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + JLCGHPIHJLF___C__CTOR_OFFSET))(this);
	}

	::MoleMole::ConfigUIFish* LPCHADDECLC()
	{
		return ((::MoleMole::ConfigUIFish*(*)(::PVOID))((::PBYTE)hIl2Cpp + JLCGHPIHJLF___C_LPCHADDECLC_OFFSET))(this);
	}
};
