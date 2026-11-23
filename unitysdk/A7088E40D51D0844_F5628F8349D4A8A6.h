#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System { class String; }
namespace System { template <typename T1, typename T2> class Func_2; }

#define A7088E40D51D0844_F5628F8349D4A8A6_AEE782E6BA82F7AC_OFFSET UNITYSDK_OFFSET(0x399F220)
#define A7088E40D51D0844_F5628F8349D4A8A6__CCTOR_OFFSET UNITYSDK_OFFSET(0x39A1CD0)
#define A7088E40D51D0844_F5628F8349D4A8A6__CTOR_OFFSET UNITYSDK_OFFSET(0x1666CA0)

inline static constexpr unsigned int A7088E40D51D0844_F5628F8349D4A8A6_TypeDefinitionIndex = 12525;

class A7088E40D51D0844_F5628F8349D4A8A6 : public ::System::Object
{
public:
	static ::A7088E40D51D0844_F5628F8349D4A8A6** StaticGet_AA32F971AB02398B()
	{
		return (::A7088E40D51D0844_F5628F8349D4A8A6**)Il2CppClass::FromTypeDefinitionIndex(A7088E40D51D0844_F5628F8349D4A8A6_TypeDefinitionIndex)->GetStaticField(0x0);
	}
	static ::System::Func_2<::System::Int32, ::System::String*>** StaticGet_B2B462D767EFBA79()
	{
		return (::System::Func_2<::System::Int32, ::System::String*>**)Il2CppClass::FromTypeDefinitionIndex(A7088E40D51D0844_F5628F8349D4A8A6_TypeDefinitionIndex)->GetStaticField(0x8);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + A7088E40D51D0844_F5628F8349D4A8A6__CCTOR_OFFSET))();
	}

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + A7088E40D51D0844_F5628F8349D4A8A6__CTOR_OFFSET))(this);
	}

	::System::String* AEE782E6BA82F7AC(::System::Int32 A6DBC46F25A92CBF)
	{
		return ((::System::String*(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + A7088E40D51D0844_F5628F8349D4A8A6_AEE782E6BA82F7AC_OFFSET))(this, A6DBC46F25A92CBF);
	}
};
