#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace MoleMole::Config { class TagLibraryConfig; }
namespace System { template <typename T> class Func_1; }

#define BJHKKPLGEMJ___C_LPCHADDECLC_OFFSET UNITYSDK_OFFSET(0xFF7FA20)
#define BJHKKPLGEMJ___C__CCTOR_OFFSET UNITYSDK_OFFSET(0xFF7F9D0)
#define BJHKKPLGEMJ___C__CTOR_OFFSET UNITYSDK_OFFSET(0xFF7FA10)

inline static constexpr unsigned int BJHKKPLGEMJ___c_TypeDefinitionIndex = 53563;

class BJHKKPLGEMJ___c : public ::System::Object
{
public:
	static ::System::Func_1<::MoleMole::Config::TagLibraryConfig*>** StaticGet___9__2_0()
	{
		return (::System::Func_1<::MoleMole::Config::TagLibraryConfig*>**)Il2CppClass::FromTypeDefinitionIndex(BJHKKPLGEMJ___c_TypeDefinitionIndex)->GetStaticField(0x40180);
	}
	static ::System::Object** StaticGet___9()
	{
		return (::System::Object**)Il2CppClass::FromTypeDefinitionIndex(BJHKKPLGEMJ___c_TypeDefinitionIndex)->GetStaticField(0x40188);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + BJHKKPLGEMJ___C__CCTOR_OFFSET))();
	}

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BJHKKPLGEMJ___C__CTOR_OFFSET))(this);
	}

	::MoleMole::Config::TagLibraryConfig* LPCHADDECLC()
	{
		return ((::MoleMole::Config::TagLibraryConfig*(*)(::PVOID))((::PBYTE)hIl2Cpp + BJHKKPLGEMJ___C_LPCHADDECLC_OFFSET))(this);
	}
};
