#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace MoleMole::Config { class ConfigVentCrawl; }
namespace System { template <typename T> class Func_1; }

#define FFDPJPBDFOP___C_LPCHADDECLC_OFFSET UNITYSDK_OFFSET(0x169CD4F0)
#define FFDPJPBDFOP___C__CCTOR_OFFSET UNITYSDK_OFFSET(0x169CD4A0)
#define FFDPJPBDFOP___C__CTOR_OFFSET UNITYSDK_OFFSET(0x169CD4E0)

inline static constexpr unsigned int FFDPJPBDFOP___c_TypeDefinitionIndex = 79344;

class FFDPJPBDFOP___c : public ::System::Object
{
public:
	static ::System::Func_1<::MoleMole::Config::ConfigVentCrawl*>** StaticGet___9__2_0()
	{
		return (::System::Func_1<::MoleMole::Config::ConfigVentCrawl*>**)Il2CppClass::FromTypeDefinitionIndex(FFDPJPBDFOP___c_TypeDefinitionIndex)->GetStaticField(0x4B8F0);
	}
	static ::System::Object** StaticGet___9()
	{
		return (::System::Object**)Il2CppClass::FromTypeDefinitionIndex(FFDPJPBDFOP___c_TypeDefinitionIndex)->GetStaticField(0x4B8F8);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + FFDPJPBDFOP___C__CCTOR_OFFSET))();
	}

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FFDPJPBDFOP___C__CTOR_OFFSET))(this);
	}

	::MoleMole::Config::ConfigVentCrawl* LPCHADDECLC()
	{
		return ((::MoleMole::Config::ConfigVentCrawl*(*)(::PVOID))((::PBYTE)hIl2Cpp + FFDPJPBDFOP___C_LPCHADDECLC_OFFSET))(this);
	}
};
