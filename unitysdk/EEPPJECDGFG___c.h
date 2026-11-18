#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class EEPPJECDGFG_DICNIGGPJAB;
namespace System { template <typename T> class Comparison_1; }

#define EEPPJECDGFG___C_PKILIBGONJK_OFFSET UNITYSDK_OFFSET(0x10F28120)
#define EEPPJECDGFG___C__CCTOR_OFFSET UNITYSDK_OFFSET(0x10F280D0)
#define EEPPJECDGFG___C__CTOR_OFFSET UNITYSDK_OFFSET(0x10F28110)

inline static constexpr unsigned int EEPPJECDGFG___c_TypeDefinitionIndex = 81055;

class EEPPJECDGFG___c : public ::System::Object
{
public:
	static ::System::Comparison_1<::System::Object*>** StaticGet___9__19_0()
	{
		return (::System::Comparison_1<::System::Object*>**)Il2CppClass::FromTypeDefinitionIndex(EEPPJECDGFG___c_TypeDefinitionIndex)->GetStaticField(0x3DA40);
	}
	static ::System::Object** StaticGet___9()
	{
		return (::System::Object**)Il2CppClass::FromTypeDefinitionIndex(EEPPJECDGFG___c_TypeDefinitionIndex)->GetStaticField(0x3DA48);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + EEPPJECDGFG___C__CCTOR_OFFSET))();
	}

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + EEPPJECDGFG___C__CTOR_OFFSET))(this);
	}

	::System::Int32 PKILIBGONJK(::EEPPJECDGFG_DICNIGGPJAB* EJCBEJMGFAJ, ::EEPPJECDGFG_DICNIGGPJAB* EBFCACIEKBC)
	{
		return ((::System::Int32(*)(::PVOID, ::EEPPJECDGFG_DICNIGGPJAB*, ::EEPPJECDGFG_DICNIGGPJAB*))((::PBYTE)hIl2Cpp + EEPPJECDGFG___C_PKILIBGONJK_OFFSET))(this, EJCBEJMGFAJ, EBFCACIEKBC);
	}
};
