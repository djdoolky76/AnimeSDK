#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class FKLMEMBPANH;
namespace System { template <typename T> class Comparison_1; }

#define DEEHIPMCGAJ___C_NCJJOJGLLLM_OFFSET UNITYSDK_OFFSET(0x15A38190)
#define DEEHIPMCGAJ___C__CCTOR_OFFSET UNITYSDK_OFFSET(0x15A38140)
#define DEEHIPMCGAJ___C__CTOR_OFFSET UNITYSDK_OFFSET(0x15A38180)

inline static constexpr unsigned int DEEHIPMCGAJ___c_TypeDefinitionIndex = 64338;

class DEEHIPMCGAJ___c : public ::System::Object
{
public:
	static ::System::Object** StaticGet___9()
	{
		return (::System::Object**)Il2CppClass::FromTypeDefinitionIndex(DEEHIPMCGAJ___c_TypeDefinitionIndex)->GetStaticField(0x4B7A0);
	}
	static ::System::Comparison_1<::FKLMEMBPANH*>** StaticGet___9__21_0()
	{
		return (::System::Comparison_1<::FKLMEMBPANH*>**)Il2CppClass::FromTypeDefinitionIndex(DEEHIPMCGAJ___c_TypeDefinitionIndex)->GetStaticField(0x4B7A8);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + DEEHIPMCGAJ___C__CCTOR_OFFSET))();
	}

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + DEEHIPMCGAJ___C__CTOR_OFFSET))(this);
	}

	::System::Int32 NCJJOJGLLLM(::FKLMEMBPANH* DPGFPHIMDEL, ::FKLMEMBPANH* DLJPLHKELCO)
	{
		return ((::System::Int32(*)(::PVOID, ::FKLMEMBPANH*, ::FKLMEMBPANH*))((::PBYTE)hIl2Cpp + DEEHIPMCGAJ___C_NCJJOJGLLLM_OFFSET))(this, DPGFPHIMDEL, DLJPLHKELCO);
	}
};
