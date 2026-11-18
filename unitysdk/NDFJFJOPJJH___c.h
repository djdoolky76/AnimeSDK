#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace MoleMole::Config { class ConfigBuffMisc; }
namespace System { template <typename T> class Func_1; }

#define NDFJFJOPJJH___C_LPCHADDECLC_OFFSET UNITYSDK_OFFSET(0x12C56080)
#define NDFJFJOPJJH___C__CCTOR_OFFSET UNITYSDK_OFFSET(0x12C56030)
#define NDFJFJOPJJH___C__CTOR_OFFSET UNITYSDK_OFFSET(0x12C56070)

inline static constexpr unsigned int NDFJFJOPJJH___c_TypeDefinitionIndex = 40706;

class NDFJFJOPJJH___c : public ::System::Object
{
public:
	static ::System::Object** StaticGet___9()
	{
		return (::System::Object**)Il2CppClass::FromTypeDefinitionIndex(NDFJFJOPJJH___c_TypeDefinitionIndex)->GetStaticField(0x454D0);
	}
	static ::System::Func_1<::MoleMole::Config::ConfigBuffMisc*>** StaticGet___9__2_0()
	{
		return (::System::Func_1<::MoleMole::Config::ConfigBuffMisc*>**)Il2CppClass::FromTypeDefinitionIndex(NDFJFJOPJJH___c_TypeDefinitionIndex)->GetStaticField(0x454D8);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + NDFJFJOPJJH___C__CCTOR_OFFSET))();
	}

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NDFJFJOPJJH___C__CTOR_OFFSET))(this);
	}

	::MoleMole::Config::ConfigBuffMisc* LPCHADDECLC()
	{
		return ((::MoleMole::Config::ConfigBuffMisc*(*)(::PVOID))((::PBYTE)hIl2Cpp + NDFJFJOPJJH___C_LPCHADDECLC_OFFSET))(this);
	}
};
