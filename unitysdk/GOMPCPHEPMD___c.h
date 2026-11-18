#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System { template <typename T1, typename T2> class Func_2; }

#define GOMPCPHEPMD___C_CFKPPCFOIEO_OFFSET UNITYSDK_OFFSET(0x13DF8A20)
#define GOMPCPHEPMD___C_HDJGFLAMCMH_OFFSET UNITYSDK_OFFSET(0x13DF8A10)
#define GOMPCPHEPMD___C__CCTOR_OFFSET UNITYSDK_OFFSET(0x13DF89C0)
#define GOMPCPHEPMD___C__CTOR_OFFSET UNITYSDK_OFFSET(0x13DF8A00)

inline static constexpr unsigned int GOMPCPHEPMD___c_TypeDefinitionIndex = 57994;

class GOMPCPHEPMD___c : public ::System::Object
{
public:
	static ::System::Func_2<::System::Int32, ::System::UInt32>** StaticGet___9__11_1()
	{
		return (::System::Func_2<::System::Int32, ::System::UInt32>**)Il2CppClass::FromTypeDefinitionIndex(GOMPCPHEPMD___c_TypeDefinitionIndex)->GetStaticField(0x3B060);
	}
	static ::System::Func_2<::System::Int32, ::System::Boolean>** StaticGet___9__11_0()
	{
		return (::System::Func_2<::System::Int32, ::System::Boolean>**)Il2CppClass::FromTypeDefinitionIndex(GOMPCPHEPMD___c_TypeDefinitionIndex)->GetStaticField(0x3B068);
	}
	static ::System::Object** StaticGet___9()
	{
		return (::System::Object**)Il2CppClass::FromTypeDefinitionIndex(GOMPCPHEPMD___c_TypeDefinitionIndex)->GetStaticField(0x3B070);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + GOMPCPHEPMD___C__CCTOR_OFFSET))();
	}

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + GOMPCPHEPMD___C__CTOR_OFFSET))(this);
	}

	::System::Boolean HDJGFLAMCMH(::System::Int32 BBOLKIABJHA)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + GOMPCPHEPMD___C_HDJGFLAMCMH_OFFSET))(this, BBOLKIABJHA);
	}

	::System::UInt32 CFKPPCFOIEO(::System::Int32 BBOLKIABJHA)
	{
		return ((::System::UInt32(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + GOMPCPHEPMD___C_CFKPPCFOIEO_OFFSET))(this, BBOLKIABJHA);
	}
};
