#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/System/ValueTuple_3.h"
#include "unitysdk/DEDDPKGLKHI_LODLFMBCLAH.h"

namespace System { template <typename T1, typename T2> class Func_2; }

#define KMDPLHBLFJH___C_IOGIOPCNLED_OFFSET UNITYSDK_OFFSET(0x1269B070)
#define KMDPLHBLFJH___C__CCTOR_OFFSET UNITYSDK_OFFSET(0x1269B020)
#define KMDPLHBLFJH___C__CTOR_OFFSET UNITYSDK_OFFSET(0x1269B060)

inline static constexpr unsigned int KMDPLHBLFJH___c_TypeDefinitionIndex = 66764;

class KMDPLHBLFJH___c : public ::System::Object
{
public:
	static ::System::Func_2<::System::Object*, ::System::ValueTuple_3<::System::Int32, ::System::Int32, ::System::Int32>>** StaticGet___9__6_0()
	{
		return (::System::Func_2<::System::Object*, ::System::ValueTuple_3<::System::Int32, ::System::Int32, ::System::Int32>>**)Il2CppClass::FromTypeDefinitionIndex(KMDPLHBLFJH___c_TypeDefinitionIndex)->GetStaticField(0x3B890);
	}
	static ::System::Object** StaticGet___9()
	{
		return (::System::Object**)Il2CppClass::FromTypeDefinitionIndex(KMDPLHBLFJH___c_TypeDefinitionIndex)->GetStaticField(0x3B898);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + KMDPLHBLFJH___C__CCTOR_OFFSET))();
	}

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + KMDPLHBLFJH___C__CTOR_OFFSET))(this);
	}

	::System::ValueTuple_3<::System::Int32, ::System::Int32, ::System::Int32> IOGIOPCNLED(::DEDDPKGLKHI_LODLFMBCLAH IPMMCGDMODG)
	{
		return ((::System::ValueTuple_3<::System::Int32, ::System::Int32, ::System::Int32>(*)(::PVOID, ::DEDDPKGLKHI_LODLFMBCLAH))((::PBYTE)hIl2Cpp + KMDPLHBLFJH___C_IOGIOPCNLED_OFFSET))(this, IPMMCGDMODG);
	}
};
