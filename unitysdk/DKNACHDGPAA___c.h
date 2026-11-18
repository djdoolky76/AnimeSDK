#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace MoleMole::Config { class ConfigLinkZone; }
namespace System { template <typename T> class Func_1; }

#define DKNACHDGPAA___C_LPCHADDECLC_OFFSET UNITYSDK_OFFSET(0x1A1F5A30)
#define DKNACHDGPAA___C__CCTOR_OFFSET UNITYSDK_OFFSET(0x1A1F59E0)
#define DKNACHDGPAA___C__CTOR_OFFSET UNITYSDK_OFFSET(0x1A1F5A20)

inline static constexpr unsigned int DKNACHDGPAA___c_TypeDefinitionIndex = 59741;

class DKNACHDGPAA___c : public ::System::Object
{
public:
	static ::System::Func_1<::MoleMole::Config::ConfigLinkZone*>** StaticGet___9__2_0()
	{
		return (::System::Func_1<::MoleMole::Config::ConfigLinkZone*>**)Il2CppClass::FromTypeDefinitionIndex(DKNACHDGPAA___c_TypeDefinitionIndex)->GetStaticField(0x3D8D0);
	}
	static ::System::Object** StaticGet___9()
	{
		return (::System::Object**)Il2CppClass::FromTypeDefinitionIndex(DKNACHDGPAA___c_TypeDefinitionIndex)->GetStaticField(0x3D8D8);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + DKNACHDGPAA___C__CCTOR_OFFSET))();
	}

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + DKNACHDGPAA___C__CTOR_OFFSET))(this);
	}

	::MoleMole::Config::ConfigLinkZone* LPCHADDECLC()
	{
		return ((::MoleMole::Config::ConfigLinkZone*(*)(::PVOID))((::PBYTE)hIl2Cpp + DKNACHDGPAA___C_LPCHADDECLC_OFFSET))(this);
	}
};
