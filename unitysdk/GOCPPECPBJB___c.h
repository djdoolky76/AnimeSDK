#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace MoleMole::Config { class ConfigAttackDistanceAttenuation; }
namespace System { template <typename T> class Func_1; }

#define GOCPPECPBJB___C_LPCHADDECLC_OFFSET UNITYSDK_OFFSET(0x14D06C10)
#define GOCPPECPBJB___C__CCTOR_OFFSET UNITYSDK_OFFSET(0x14D06BC0)
#define GOCPPECPBJB___C__CTOR_OFFSET UNITYSDK_OFFSET(0x14D06C00)

inline static constexpr unsigned int GOCPPECPBJB___c_TypeDefinitionIndex = 84825;

class GOCPPECPBJB___c : public ::System::Object
{
public:
	static ::System::Object** StaticGet___9()
	{
		return (::System::Object**)Il2CppClass::FromTypeDefinitionIndex(GOCPPECPBJB___c_TypeDefinitionIndex)->GetStaticField(0x49C80);
	}
	static ::System::Func_1<::MoleMole::Config::ConfigAttackDistanceAttenuation*>** StaticGet___9__2_0()
	{
		return (::System::Func_1<::MoleMole::Config::ConfigAttackDistanceAttenuation*>**)Il2CppClass::FromTypeDefinitionIndex(GOCPPECPBJB___c_TypeDefinitionIndex)->GetStaticField(0x49C88);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + GOCPPECPBJB___C__CCTOR_OFFSET))();
	}

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + GOCPPECPBJB___C__CTOR_OFFSET))(this);
	}

	::MoleMole::Config::ConfigAttackDistanceAttenuation* LPCHADDECLC()
	{
		return ((::MoleMole::Config::ConfigAttackDistanceAttenuation*(*)(::PVOID))((::PBYTE)hIl2Cpp + GOCPPECPBJB___C_LPCHADDECLC_OFFSET))(this);
	}
};
