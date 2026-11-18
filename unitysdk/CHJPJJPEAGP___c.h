#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class MAEGCCMKDCA;
namespace System { template <typename T1, typename T2> class Func_2; }

#define CHJPJJPEAGP___C_HLOOGMIAIDG_OFFSET UNITYSDK_OFFSET(0x18DD0BE0)
#define CHJPJJPEAGP___C__CCTOR_OFFSET UNITYSDK_OFFSET(0x18DD0B90)
#define CHJPJJPEAGP___C__CTOR_OFFSET UNITYSDK_OFFSET(0x18DD0BD0)

inline static constexpr unsigned int CHJPJJPEAGP___c_TypeDefinitionIndex = 73811;

class CHJPJJPEAGP___c : public ::System::Object
{
public:
	static ::System::Object** StaticGet___9()
	{
		return (::System::Object**)Il2CppClass::FromTypeDefinitionIndex(CHJPJJPEAGP___c_TypeDefinitionIndex)->GetStaticField(0x4B5D0);
	}
	static ::System::Func_2<::MAEGCCMKDCA*, ::MAEGCCMKDCA*>** StaticGet___9__0_0()
	{
		return (::System::Func_2<::MAEGCCMKDCA*, ::MAEGCCMKDCA*>**)Il2CppClass::FromTypeDefinitionIndex(CHJPJJPEAGP___c_TypeDefinitionIndex)->GetStaticField(0x4B5D8);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CHJPJJPEAGP___C__CCTOR_OFFSET))();
	}

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CHJPJJPEAGP___C__CTOR_OFFSET))(this);
	}

	::MAEGCCMKDCA* HLOOGMIAIDG(::MAEGCCMKDCA* NIHEFJBLPKH)
	{
		return ((::MAEGCCMKDCA*(*)(::PVOID, ::MAEGCCMKDCA*))((::PBYTE)hIl2Cpp + CHJPJJPEAGP___C_HLOOGMIAIDG_OFFSET))(this, NIHEFJBLPKH);
	}
};
