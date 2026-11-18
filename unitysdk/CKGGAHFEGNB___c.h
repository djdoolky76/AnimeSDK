#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class OLOOCNFMODP;
namespace System { template <typename T> class Comparison_1; }

#define CKGGAHFEGNB___C_HNOMAKIJCNA_OFFSET UNITYSDK_OFFSET(0x147A7510)
#define CKGGAHFEGNB___C__CCTOR_OFFSET UNITYSDK_OFFSET(0x147A74C0)
#define CKGGAHFEGNB___C__CTOR_OFFSET UNITYSDK_OFFSET(0x147A7500)

inline static constexpr unsigned int CKGGAHFEGNB___c_TypeDefinitionIndex = 82854;

class CKGGAHFEGNB___c : public ::System::Object
{
public:
	static ::System::Object** StaticGet___9()
	{
		return (::System::Object**)Il2CppClass::FromTypeDefinitionIndex(CKGGAHFEGNB___c_TypeDefinitionIndex)->GetStaticField(0x47C70);
	}
	static ::System::Comparison_1<::OLOOCNFMODP*>** StaticGet___9__25_0()
	{
		return (::System::Comparison_1<::OLOOCNFMODP*>**)Il2CppClass::FromTypeDefinitionIndex(CKGGAHFEGNB___c_TypeDefinitionIndex)->GetStaticField(0x47C78);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CKGGAHFEGNB___C__CCTOR_OFFSET))();
	}

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CKGGAHFEGNB___C__CTOR_OFFSET))(this);
	}

	::System::Int32 HNOMAKIJCNA(::OLOOCNFMODP* EJCBEJMGFAJ, ::OLOOCNFMODP* EBFCACIEKBC)
	{
		return ((::System::Int32(*)(::PVOID, ::OLOOCNFMODP*, ::OLOOCNFMODP*))((::PBYTE)hIl2Cpp + CKGGAHFEGNB___C_HNOMAKIJCNA_OFFSET))(this, EJCBEJMGFAJ, EBFCACIEKBC);
	}
};
