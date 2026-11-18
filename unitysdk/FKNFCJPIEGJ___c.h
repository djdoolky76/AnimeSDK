#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace MoleMole { class ConfigUIScripts; }
namespace System { template <typename T> class Func_1; }

#define FKNFCJPIEGJ___C_LPCHADDECLC_OFFSET UNITYSDK_OFFSET(0x11D81080)
#define FKNFCJPIEGJ___C__CCTOR_OFFSET UNITYSDK_OFFSET(0x11D81030)
#define FKNFCJPIEGJ___C__CTOR_OFFSET UNITYSDK_OFFSET(0x11D81070)

inline static constexpr unsigned int FKNFCJPIEGJ___c_TypeDefinitionIndex = 63088;

class FKNFCJPIEGJ___c : public ::System::Object
{
public:
	static ::System::Object** StaticGet___9()
	{
		return (::System::Object**)Il2CppClass::FromTypeDefinitionIndex(FKNFCJPIEGJ___c_TypeDefinitionIndex)->GetStaticField(0x507E0);
	}
	static ::System::Func_1<::MoleMole::ConfigUIScripts*>** StaticGet___9__2_0()
	{
		return (::System::Func_1<::MoleMole::ConfigUIScripts*>**)Il2CppClass::FromTypeDefinitionIndex(FKNFCJPIEGJ___c_TypeDefinitionIndex)->GetStaticField(0x507E8);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + FKNFCJPIEGJ___C__CCTOR_OFFSET))();
	}

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FKNFCJPIEGJ___C__CTOR_OFFSET))(this);
	}

	::MoleMole::ConfigUIScripts* LPCHADDECLC()
	{
		return ((::MoleMole::ConfigUIScripts*(*)(::PVOID))((::PBYTE)hIl2Cpp + FKNFCJPIEGJ___C_LPCHADDECLC_OFFSET))(this);
	}
};
