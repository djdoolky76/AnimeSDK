#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System { template <typename T1, typename T2> class Func_2; }

#define EHKICIAMKLH___C_ONJMOEKHOFJ_OFFSET UNITYSDK_OFFSET(0xFE0C520)
#define EHKICIAMKLH___C__CCTOR_OFFSET UNITYSDK_OFFSET(0xFE0C4D0)
#define EHKICIAMKLH___C__CTOR_OFFSET UNITYSDK_OFFSET(0xFE0C510)

inline static constexpr unsigned int EHKICIAMKLH___c_TypeDefinitionIndex = 72728;

class EHKICIAMKLH___c : public ::System::Object
{
public:
	static ::System::Object** StaticGet___9()
	{
		return (::System::Object**)Il2CppClass::FromTypeDefinitionIndex(EHKICIAMKLH___c_TypeDefinitionIndex)->GetStaticField(0x47E90);
	}
	static ::System::Func_2<::System::UInt32, ::System::Int32>** StaticGet___9__2_0()
	{
		return (::System::Func_2<::System::UInt32, ::System::Int32>**)Il2CppClass::FromTypeDefinitionIndex(EHKICIAMKLH___c_TypeDefinitionIndex)->GetStaticField(0x47E98);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + EHKICIAMKLH___C__CCTOR_OFFSET))();
	}

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + EHKICIAMKLH___C__CTOR_OFFSET))(this);
	}

	::System::Int32 ONJMOEKHOFJ(::System::UInt32 EGEGIMGMJHN)
	{
		return ((::System::Int32(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + EHKICIAMKLH___C_ONJMOEKHOFJ_OFFSET))(this, EGEGIMGMJHN);
	}
};
