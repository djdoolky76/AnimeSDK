#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace MoleMole { class ConfigUICoopTeam3D; }
namespace System { template <typename T> class Func_1; }

#define NABMOCCBKCL___C_LPCHADDECLC_OFFSET UNITYSDK_OFFSET(0x1726A620)
#define NABMOCCBKCL___C__CCTOR_OFFSET UNITYSDK_OFFSET(0x1726A5D0)
#define NABMOCCBKCL___C__CTOR_OFFSET UNITYSDK_OFFSET(0x1726A610)

inline static constexpr unsigned int NABMOCCBKCL___c_TypeDefinitionIndex = 54921;

class NABMOCCBKCL___c : public ::System::Object
{
public:
	static ::System::Object** StaticGet___9()
	{
		return (::System::Object**)Il2CppClass::FromTypeDefinitionIndex(NABMOCCBKCL___c_TypeDefinitionIndex)->GetStaticField(0x39460);
	}
	static ::System::Func_1<::MoleMole::ConfigUICoopTeam3D*>** StaticGet___9__2_0()
	{
		return (::System::Func_1<::MoleMole::ConfigUICoopTeam3D*>**)Il2CppClass::FromTypeDefinitionIndex(NABMOCCBKCL___c_TypeDefinitionIndex)->GetStaticField(0x39468);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + NABMOCCBKCL___C__CCTOR_OFFSET))();
	}

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NABMOCCBKCL___C__CTOR_OFFSET))(this);
	}

	::MoleMole::ConfigUICoopTeam3D* LPCHADDECLC()
	{
		return ((::MoleMole::ConfigUICoopTeam3D*(*)(::PVOID))((::PBYTE)hIl2Cpp + NABMOCCBKCL___C_LPCHADDECLC_OFFSET))(this);
	}
};
