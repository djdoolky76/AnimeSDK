#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace MoleMole::Config { class ConfigEtherEyes; }
namespace System { template <typename T> class Func_1; }

#define IFCNMBMIJOA___C_LPCHADDECLC_OFFSET UNITYSDK_OFFSET(0x15EB1FF0)
#define IFCNMBMIJOA___C__CCTOR_OFFSET UNITYSDK_OFFSET(0x15EB1FA0)
#define IFCNMBMIJOA___C__CTOR_OFFSET UNITYSDK_OFFSET(0x15EB1FE0)

inline static constexpr unsigned int IFCNMBMIJOA___c_TypeDefinitionIndex = 79065;

class IFCNMBMIJOA___c : public ::System::Object
{
public:
	static ::System::Object** StaticGet___9()
	{
		return (::System::Object**)Il2CppClass::FromTypeDefinitionIndex(IFCNMBMIJOA___c_TypeDefinitionIndex)->GetStaticField(0x37CD0);
	}
	static ::System::Func_1<::MoleMole::Config::ConfigEtherEyes*>** StaticGet___9__2_0()
	{
		return (::System::Func_1<::MoleMole::Config::ConfigEtherEyes*>**)Il2CppClass::FromTypeDefinitionIndex(IFCNMBMIJOA___c_TypeDefinitionIndex)->GetStaticField(0x37CD8);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + IFCNMBMIJOA___C__CCTOR_OFFSET))();
	}

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + IFCNMBMIJOA___C__CTOR_OFFSET))(this);
	}

	::MoleMole::Config::ConfigEtherEyes* LPCHADDECLC()
	{
		return ((::MoleMole::Config::ConfigEtherEyes*(*)(::PVOID))((::PBYTE)hIl2Cpp + IFCNMBMIJOA___C_LPCHADDECLC_OFFSET))(this);
	}
};
