#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace MoleMole::Config { class ConfigDamageStaggerLevel; }
namespace System { template <typename T> class Func_1; }

#define CPOBIHJJNAP___C_LPCHADDECLC_OFFSET UNITYSDK_OFFSET(0x193EF060)
#define CPOBIHJJNAP___C__CCTOR_OFFSET UNITYSDK_OFFSET(0x193EF010)
#define CPOBIHJJNAP___C__CTOR_OFFSET UNITYSDK_OFFSET(0x193EF050)

inline static constexpr unsigned int CPOBIHJJNAP___c_TypeDefinitionIndex = 85098;

class CPOBIHJJNAP___c : public ::System::Object
{
public:
	static ::System::Func_1<::MoleMole::Config::ConfigDamageStaggerLevel*>** StaticGet___9__2_0()
	{
		return (::System::Func_1<::MoleMole::Config::ConfigDamageStaggerLevel*>**)Il2CppClass::FromTypeDefinitionIndex(CPOBIHJJNAP___c_TypeDefinitionIndex)->GetStaticField(0x4F320);
	}
	static ::System::Object** StaticGet___9()
	{
		return (::System::Object**)Il2CppClass::FromTypeDefinitionIndex(CPOBIHJJNAP___c_TypeDefinitionIndex)->GetStaticField(0x4F328);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CPOBIHJJNAP___C__CCTOR_OFFSET))();
	}

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CPOBIHJJNAP___C__CTOR_OFFSET))(this);
	}

	::MoleMole::Config::ConfigDamageStaggerLevel* LPCHADDECLC()
	{
		return ((::MoleMole::Config::ConfigDamageStaggerLevel*(*)(::PVOID))((::PBYTE)hIl2Cpp + CPOBIHJJNAP___C_LPCHADDECLC_OFFSET))(this);
	}
};
