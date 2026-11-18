#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class HLFPOHLJFKO;
namespace System { template <typename T> class Comparison_1; }

#define PMDMIAPNCEK___C_LIJMCLLJHAK_OFFSET UNITYSDK_OFFSET(0x150DA480)
#define PMDMIAPNCEK___C__CCTOR_OFFSET UNITYSDK_OFFSET(0x150DA430)
#define PMDMIAPNCEK___C__CTOR_OFFSET UNITYSDK_OFFSET(0x150DA470)

inline static constexpr unsigned int PMDMIAPNCEK___c_TypeDefinitionIndex = 82683;

class PMDMIAPNCEK___c : public ::System::Object
{
public:
	static ::System::Comparison_1<::HLFPOHLJFKO*>** StaticGet___9__34_0()
	{
		return (::System::Comparison_1<::HLFPOHLJFKO*>**)Il2CppClass::FromTypeDefinitionIndex(PMDMIAPNCEK___c_TypeDefinitionIndex)->GetStaticField(0x3CFF0);
	}
	static ::System::Object** StaticGet___9()
	{
		return (::System::Object**)Il2CppClass::FromTypeDefinitionIndex(PMDMIAPNCEK___c_TypeDefinitionIndex)->GetStaticField(0x3CFF8);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + PMDMIAPNCEK___C__CCTOR_OFFSET))();
	}

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + PMDMIAPNCEK___C__CTOR_OFFSET))(this);
	}

	::System::Int32 LIJMCLLJHAK(::HLFPOHLJFKO* DPGFPHIMDEL, ::HLFPOHLJFKO* DLJPLHKELCO)
	{
		return ((::System::Int32(*)(::PVOID, ::HLFPOHLJFKO*, ::HLFPOHLJFKO*))((::PBYTE)hIl2Cpp + PMDMIAPNCEK___C_LIJMCLLJHAK_OFFSET))(this, DPGFPHIMDEL, DLJPLHKELCO);
	}
};
