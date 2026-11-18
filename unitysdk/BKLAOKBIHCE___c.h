#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace MoleMole::Config { class ConfigUIPortrait; }
namespace System { template <typename T> class Func_1; }

#define BKLAOKBIHCE___C_LPCHADDECLC_OFFSET UNITYSDK_OFFSET(0x14C4DD50)
#define BKLAOKBIHCE___C__CCTOR_OFFSET UNITYSDK_OFFSET(0x14C4DD00)
#define BKLAOKBIHCE___C__CTOR_OFFSET UNITYSDK_OFFSET(0x14C4DD40)

inline static constexpr unsigned int BKLAOKBIHCE___c_TypeDefinitionIndex = 87503;

class BKLAOKBIHCE___c : public ::System::Object
{
public:
	static ::System::Object** StaticGet___9()
	{
		return (::System::Object**)Il2CppClass::FromTypeDefinitionIndex(BKLAOKBIHCE___c_TypeDefinitionIndex)->GetStaticField(0x3D4E0);
	}
	static ::System::Func_1<::MoleMole::Config::ConfigUIPortrait*>** StaticGet___9__2_0()
	{
		return (::System::Func_1<::MoleMole::Config::ConfigUIPortrait*>**)Il2CppClass::FromTypeDefinitionIndex(BKLAOKBIHCE___c_TypeDefinitionIndex)->GetStaticField(0x3D4E8);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + BKLAOKBIHCE___C__CCTOR_OFFSET))();
	}

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BKLAOKBIHCE___C__CTOR_OFFSET))(this);
	}

	::MoleMole::Config::ConfigUIPortrait* LPCHADDECLC()
	{
		return ((::MoleMole::Config::ConfigUIPortrait*(*)(::PVOID))((::PBYTE)hIl2Cpp + BKLAOKBIHCE___C_LPCHADDECLC_OFFSET))(this);
	}
};
