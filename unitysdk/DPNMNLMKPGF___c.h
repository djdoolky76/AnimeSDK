#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class FANBKJPNEDB;
namespace System { class Action; }
namespace System { class String; }
namespace System { template <typename T1, typename T2> class Func_2; }
namespace System { template <typename T> class Func_1; }

#define DPNMNLMKPGF___C_AAGMLGOFFGE_OFFSET UNITYSDK_OFFSET(0x7FE10F0)
#define DPNMNLMKPGF___C_MFKLKFGPCCJ_OFFSET UNITYSDK_OFFSET(0x7FE1110)
#define DPNMNLMKPGF___C_MOHGHCLLCIM_OFFSET UNITYSDK_OFFSET(0x7FE0FD0)
#define DPNMNLMKPGF___C__CCTOR_OFFSET UNITYSDK_OFFSET(0x7FE0F80)
#define DPNMNLMKPGF___C__CTOR_OFFSET UNITYSDK_OFFSET(0x7FE0FC0)

inline static constexpr unsigned int DPNMNLMKPGF___c_TypeDefinitionIndex = 41497;

class DPNMNLMKPGF___c : public ::System::Object
{
public:
	static ::System::Func_2<::FANBKJPNEDB*, ::System::UInt32>** StaticGet___9__15_0()
	{
		return (::System::Func_2<::FANBKJPNEDB*, ::System::UInt32>**)Il2CppClass::FromTypeDefinitionIndex(DPNMNLMKPGF___c_TypeDefinitionIndex)->GetStaticField(0x43290);
	}
	static ::System::Action** StaticGet___9__29_0()
	{
		return (::System::Action**)Il2CppClass::FromTypeDefinitionIndex(DPNMNLMKPGF___c_TypeDefinitionIndex)->GetStaticField(0x43298);
	}
	static ::System::Func_1<::System::String*>** StaticGet___9__10_16()
	{
		return (::System::Func_1<::System::String*>**)Il2CppClass::FromTypeDefinitionIndex(DPNMNLMKPGF___c_TypeDefinitionIndex)->GetStaticField(0x432A0);
	}
	static ::System::Object** StaticGet___9()
	{
		return (::System::Object**)Il2CppClass::FromTypeDefinitionIndex(DPNMNLMKPGF___c_TypeDefinitionIndex)->GetStaticField(0x432A8);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + DPNMNLMKPGF___C__CCTOR_OFFSET))();
	}

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + DPNMNLMKPGF___C__CTOR_OFFSET))(this);
	}

	::System::String* MOHGHCLLCIM()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + DPNMNLMKPGF___C_MOHGHCLLCIM_OFFSET))(this);
	}

	::System::UInt32 AAGMLGOFFGE(::FANBKJPNEDB* HAAEBCOBKFF)
	{
		return ((::System::UInt32(*)(::PVOID, ::FANBKJPNEDB*))((::PBYTE)hIl2Cpp + DPNMNLMKPGF___C_AAGMLGOFFGE_OFFSET))(this, HAAEBCOBKFF);
	}

	::System::Void MFKLKFGPCCJ()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + DPNMNLMKPGF___C_MFKLKFGPCCJ_OFFSET))(this);
	}
};
