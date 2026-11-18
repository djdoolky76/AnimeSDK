#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace MoleMole { class MarcelConfig; }
namespace System { template <typename T> class Func_1; }

#define OELFHEKNBIG___C_LPCHADDECLC_OFFSET UNITYSDK_OFFSET(0xFD68560)
#define OELFHEKNBIG___C__CCTOR_OFFSET UNITYSDK_OFFSET(0xFD68510)
#define OELFHEKNBIG___C__CTOR_OFFSET UNITYSDK_OFFSET(0xFD68550)

inline static constexpr unsigned int OELFHEKNBIG___c_TypeDefinitionIndex = 50817;

class OELFHEKNBIG___c : public ::System::Object
{
public:
	static ::System::Func_1<::MoleMole::MarcelConfig*>** StaticGet___9__2_0()
	{
		return (::System::Func_1<::MoleMole::MarcelConfig*>**)Il2CppClass::FromTypeDefinitionIndex(OELFHEKNBIG___c_TypeDefinitionIndex)->GetStaticField(0x36040);
	}
	static ::System::Object** StaticGet___9()
	{
		return (::System::Object**)Il2CppClass::FromTypeDefinitionIndex(OELFHEKNBIG___c_TypeDefinitionIndex)->GetStaticField(0x36048);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + OELFHEKNBIG___C__CCTOR_OFFSET))();
	}

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + OELFHEKNBIG___C__CTOR_OFFSET))(this);
	}

	::MoleMole::MarcelConfig* LPCHADDECLC()
	{
		return ((::MoleMole::MarcelConfig*(*)(::PVOID))((::PBYTE)hIl2Cpp + OELFHEKNBIG___C_LPCHADDECLC_OFFSET))(this);
	}
};
