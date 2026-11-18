#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace MoleMole::Config { class ConfigGachaPerformanceLights; }
namespace System { template <typename T> class Func_1; }

#define HGKMDGJKAAB___C_LPCHADDECLC_OFFSET UNITYSDK_OFFSET(0x146FAF50)
#define HGKMDGJKAAB___C__CCTOR_OFFSET UNITYSDK_OFFSET(0x146FAF00)
#define HGKMDGJKAAB___C__CTOR_OFFSET UNITYSDK_OFFSET(0x146FAF40)

inline static constexpr unsigned int HGKMDGJKAAB___c_TypeDefinitionIndex = 85844;

class HGKMDGJKAAB___c : public ::System::Object
{
public:
	static ::System::Func_1<::MoleMole::Config::ConfigGachaPerformanceLights*>** StaticGet___9__2_0()
	{
		return (::System::Func_1<::MoleMole::Config::ConfigGachaPerformanceLights*>**)Il2CppClass::FromTypeDefinitionIndex(HGKMDGJKAAB___c_TypeDefinitionIndex)->GetStaticField(0x40B80);
	}
	static ::System::Object** StaticGet___9()
	{
		return (::System::Object**)Il2CppClass::FromTypeDefinitionIndex(HGKMDGJKAAB___c_TypeDefinitionIndex)->GetStaticField(0x40B88);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + HGKMDGJKAAB___C__CCTOR_OFFSET))();
	}

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + HGKMDGJKAAB___C__CTOR_OFFSET))(this);
	}

	::MoleMole::Config::ConfigGachaPerformanceLights* LPCHADDECLC()
	{
		return ((::MoleMole::Config::ConfigGachaPerformanceLights*(*)(::PVOID))((::PBYTE)hIl2Cpp + HGKMDGJKAAB___C_LPCHADDECLC_OFFSET))(this);
	}
};
