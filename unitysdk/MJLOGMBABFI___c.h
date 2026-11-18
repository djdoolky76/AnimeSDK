#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/System/ValueTuple_2.h"

namespace System { template <typename T> class Comparison_1; }

#define MJLOGMBABFI___C_FOMJFHCNNEO_OFFSET UNITYSDK_OFFSET(0x14065BE0)
#define MJLOGMBABFI___C__CCTOR_OFFSET UNITYSDK_OFFSET(0x14065B90)
#define MJLOGMBABFI___C__CTOR_OFFSET UNITYSDK_OFFSET(0x14065BD0)

inline static constexpr unsigned int MJLOGMBABFI___c_TypeDefinitionIndex = 64853;

class MJLOGMBABFI___c : public ::System::Object
{
public:
	static ::System::Comparison_1<::System::ValueTuple_2<::System::Int32, ::System::Int32>>** StaticGet___9__3_0()
	{
		return (::System::Comparison_1<::System::ValueTuple_2<::System::Int32, ::System::Int32>>**)Il2CppClass::FromTypeDefinitionIndex(MJLOGMBABFI___c_TypeDefinitionIndex)->GetStaticField(0x44860);
	}
	static ::System::Object** StaticGet___9()
	{
		return (::System::Object**)Il2CppClass::FromTypeDefinitionIndex(MJLOGMBABFI___c_TypeDefinitionIndex)->GetStaticField(0x44868);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + MJLOGMBABFI___C__CCTOR_OFFSET))();
	}

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MJLOGMBABFI___C__CTOR_OFFSET))(this);
	}

	::System::Int32 FOMJFHCNNEO(::System::ValueTuple_2<::System::Int32, ::System::Int32> DPGFPHIMDEL, ::System::ValueTuple_2<::System::Int32, ::System::Int32> DLJPLHKELCO)
	{
		return ((::System::Int32(*)(::PVOID, ::System::ValueTuple_2<::System::Int32, ::System::Int32>, ::System::ValueTuple_2<::System::Int32, ::System::Int32>))((::PBYTE)hIl2Cpp + MJLOGMBABFI___C_FOMJFHCNNEO_OFFSET))(this, DPGFPHIMDEL, DLJPLHKELCO);
	}
};
