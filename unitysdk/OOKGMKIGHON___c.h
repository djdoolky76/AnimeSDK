#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace MoleMole::Config { class FootPrintConfigs; }
namespace System { template <typename T> class Func_1; }

#define OOKGMKIGHON___C_LPCHADDECLC_OFFSET UNITYSDK_OFFSET(0x16F90490)
#define OOKGMKIGHON___C__CCTOR_OFFSET UNITYSDK_OFFSET(0x16F90440)
#define OOKGMKIGHON___C__CTOR_OFFSET UNITYSDK_OFFSET(0x16F90480)

inline static constexpr unsigned int OOKGMKIGHON___c_TypeDefinitionIndex = 70008;

class OOKGMKIGHON___c : public ::System::Object
{
public:
	static ::System::Func_1<::MoleMole::Config::FootPrintConfigs*>** StaticGet___9__2_0()
	{
		return (::System::Func_1<::MoleMole::Config::FootPrintConfigs*>**)Il2CppClass::FromTypeDefinitionIndex(OOKGMKIGHON___c_TypeDefinitionIndex)->GetStaticField(0x4B230);
	}
	static ::System::Object** StaticGet___9()
	{
		return (::System::Object**)Il2CppClass::FromTypeDefinitionIndex(OOKGMKIGHON___c_TypeDefinitionIndex)->GetStaticField(0x4B238);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + OOKGMKIGHON___C__CCTOR_OFFSET))();
	}

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + OOKGMKIGHON___C__CTOR_OFFSET))(this);
	}

	::MoleMole::Config::FootPrintConfigs* LPCHADDECLC()
	{
		return ((::MoleMole::Config::FootPrintConfigs*(*)(::PVOID))((::PBYTE)hIl2Cpp + OOKGMKIGHON___C_LPCHADDECLC_OFFSET))(this);
	}
};
