#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class GPCEGPPIACB;
namespace System { template <typename T> class Comparison_1; }

#define GHNNKMBPDMB___C_FFOCCOHIMMN_OFFSET UNITYSDK_OFFSET(0x1B116DF0)
#define GHNNKMBPDMB___C__CCTOR_OFFSET UNITYSDK_OFFSET(0x1B116DA0)
#define GHNNKMBPDMB___C__CTOR_OFFSET UNITYSDK_OFFSET(0x1B116DE0)

inline static constexpr unsigned int GHNNKMBPDMB___c_TypeDefinitionIndex = 13707;

class GHNNKMBPDMB___c : public ::System::Object
{
public:
	static ::System::Comparison_1<::GPCEGPPIACB*>** StaticGet___9__13_0()
	{
		return (::System::Comparison_1<::GPCEGPPIACB*>**)Il2CppClass::FromTypeDefinitionIndex(GHNNKMBPDMB___c_TypeDefinitionIndex)->GetStaticField(0x7740);
	}
	static ::System::Object** StaticGet___9()
	{
		return (::System::Object**)Il2CppClass::FromTypeDefinitionIndex(GHNNKMBPDMB___c_TypeDefinitionIndex)->GetStaticField(0x7748);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + GHNNKMBPDMB___C__CCTOR_OFFSET))();
	}

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + GHNNKMBPDMB___C__CTOR_OFFSET))(this);
	}

	::System::Int32 FFOCCOHIMMN(::GPCEGPPIACB* DPGFPHIMDEL, ::GPCEGPPIACB* DLJPLHKELCO)
	{
		return ((::System::Int32(*)(::PVOID, ::GPCEGPPIACB*, ::GPCEGPPIACB*))((::PBYTE)hIl2Cpp + GHNNKMBPDMB___C_FFOCCOHIMMN_OFFSET))(this, DPGFPHIMDEL, DLJPLHKELCO);
	}
};
