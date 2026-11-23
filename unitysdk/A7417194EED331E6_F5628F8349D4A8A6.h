#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System { class String; }
namespace System { template <typename T1, typename T2> class Func_2; }

#define A7417194EED331E6_F5628F8349D4A8A6_E3FEE42F76FF9378_OFFSET UNITYSDK_OFFSET(0x3A973C0)
#define A7417194EED331E6_F5628F8349D4A8A6_F0A96EEFAB0E08F0_OFFSET UNITYSDK_OFFSET(0x3A973B0)
#define A7417194EED331E6_F5628F8349D4A8A6__CCTOR_OFFSET UNITYSDK_OFFSET(0x3A99B00)
#define A7417194EED331E6_F5628F8349D4A8A6__CTOR_OFFSET UNITYSDK_OFFSET(0x1666CA0)

inline static constexpr unsigned int A7417194EED331E6_F5628F8349D4A8A6_TypeDefinitionIndex = 12010;

class A7417194EED331E6_F5628F8349D4A8A6 : public ::System::Object
{
public:
	static ::A7417194EED331E6_F5628F8349D4A8A6** StaticGet_AA32F971AB02398B()
	{
		return (::A7417194EED331E6_F5628F8349D4A8A6**)Il2CppClass::FromTypeDefinitionIndex(A7417194EED331E6_F5628F8349D4A8A6_TypeDefinitionIndex)->GetStaticField(0x0);
	}
	static ::System::Func_2<::System::Int32, ::System::Boolean>** StaticGet_FDAFF8B28C4951C2()
	{
		return (::System::Func_2<::System::Int32, ::System::Boolean>**)Il2CppClass::FromTypeDefinitionIndex(A7417194EED331E6_F5628F8349D4A8A6_TypeDefinitionIndex)->GetStaticField(0x8);
	}
	static ::System::Func_2<::System::Int32, ::System::String*>** StaticGet_F632F93CC8DEA2A0()
	{
		return (::System::Func_2<::System::Int32, ::System::String*>**)Il2CppClass::FromTypeDefinitionIndex(A7417194EED331E6_F5628F8349D4A8A6_TypeDefinitionIndex)->GetStaticField(0x10);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + A7417194EED331E6_F5628F8349D4A8A6__CCTOR_OFFSET))();
	}

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + A7417194EED331E6_F5628F8349D4A8A6__CTOR_OFFSET))(this);
	}

	::System::Boolean F0A96EEFAB0E08F0(::System::Int32 BB8C609F76620E45)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + A7417194EED331E6_F5628F8349D4A8A6_F0A96EEFAB0E08F0_OFFSET))(this, BB8C609F76620E45);
	}

	::System::String* E3FEE42F76FF9378(::System::Int32 BB8C609F76620E45)
	{
		return ((::System::String*(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + A7417194EED331E6_F5628F8349D4A8A6_E3FEE42F76FF9378_OFFSET))(this, BB8C609F76620E45);
	}
};
