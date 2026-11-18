#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/System/ValueTuple_2.h"

namespace System { class String; }
namespace System { template <typename T1, typename T2> class Func_2; }
namespace System { template <typename T> class Comparison_1; }

#define HCPLLLODNJG_GFEBEMLKBCM___C_ACNFKFCDHAI_OFFSET UNITYSDK_OFFSET(0x16F24210)
#define HCPLLLODNJG_GFEBEMLKBCM___C_IIPOMKCFHFN_OFFSET UNITYSDK_OFFSET(0x16F24190)
#define HCPLLLODNJG_GFEBEMLKBCM___C_KBAAMCLFJBK_OFFSET UNITYSDK_OFFSET(0x16F242B0)
#define HCPLLLODNJG_GFEBEMLKBCM___C__CCTOR_OFFSET UNITYSDK_OFFSET(0x16F24140)
#define HCPLLLODNJG_GFEBEMLKBCM___C__CTOR_OFFSET UNITYSDK_OFFSET(0x16F24180)

inline static constexpr unsigned int HCPLLLODNJG_GFEBEMLKBCM___c_TypeDefinitionIndex = 49895;

class HCPLLLODNJG_GFEBEMLKBCM___c : public ::System::Object
{
public:
	static ::System::Func_2<::System::ValueTuple_2<::System::Int32, ::System::Int32>, ::System::String*>** StaticGet___9__5_1()
	{
		return (::System::Func_2<::System::ValueTuple_2<::System::Int32, ::System::Int32>, ::System::String*>**)Il2CppClass::FromTypeDefinitionIndex(HCPLLLODNJG_GFEBEMLKBCM___c_TypeDefinitionIndex)->GetStaticField(0x3DE20);
	}
	static ::System::Func_2<::System::ValueTuple_2<::System::Int32, ::System::Int32>, ::System::String*>** StaticGet___9__5_0()
	{
		return (::System::Func_2<::System::ValueTuple_2<::System::Int32, ::System::Int32>, ::System::String*>**)Il2CppClass::FromTypeDefinitionIndex(HCPLLLODNJG_GFEBEMLKBCM___c_TypeDefinitionIndex)->GetStaticField(0x3DE28);
	}
	static ::System::Object** StaticGet___9()
	{
		return (::System::Object**)Il2CppClass::FromTypeDefinitionIndex(HCPLLLODNJG_GFEBEMLKBCM___c_TypeDefinitionIndex)->GetStaticField(0x3DE30);
	}
	static ::System::Comparison_1<::System::String*>** StaticGet___9__6_0()
	{
		return (::System::Comparison_1<::System::String*>**)Il2CppClass::FromTypeDefinitionIndex(HCPLLLODNJG_GFEBEMLKBCM___c_TypeDefinitionIndex)->GetStaticField(0x3DE38);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + HCPLLLODNJG_GFEBEMLKBCM___C__CCTOR_OFFSET))();
	}

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + HCPLLLODNJG_GFEBEMLKBCM___C__CTOR_OFFSET))(this);
	}

	::System::Int32 IIPOMKCFHFN(::System::String* DPGFPHIMDEL, ::System::String* DLJPLHKELCO)
	{
		return ((::System::Int32(*)(::PVOID, ::System::String*, ::System::String*))((::PBYTE)hIl2Cpp + HCPLLLODNJG_GFEBEMLKBCM___C_IIPOMKCFHFN_OFFSET))(this, DPGFPHIMDEL, DLJPLHKELCO);
	}

	::System::String* ACNFKFCDHAI(::System::ValueTuple_2<::System::Int32, ::System::Int32> HAAEBCOBKFF)
	{
		return ((::System::String*(*)(::PVOID, ::System::ValueTuple_2<::System::Int32, ::System::Int32>))((::PBYTE)hIl2Cpp + HCPLLLODNJG_GFEBEMLKBCM___C_ACNFKFCDHAI_OFFSET))(this, HAAEBCOBKFF);
	}

	::System::String* KBAAMCLFJBK(::System::ValueTuple_2<::System::Int32, ::System::Int32> HAAEBCOBKFF)
	{
		return ((::System::String*(*)(::PVOID, ::System::ValueTuple_2<::System::Int32, ::System::Int32>))((::PBYTE)hIl2Cpp + HCPLLLODNJG_GFEBEMLKBCM___C_KBAAMCLFJBK_OFFSET))(this, HAAEBCOBKFF);
	}
};
