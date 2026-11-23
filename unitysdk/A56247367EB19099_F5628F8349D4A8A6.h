#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System { class String; }
namespace System { template <typename T> class Action_1; }

#define A56247367EB19099_F5628F8349D4A8A6_B1FFA42051E0E226_OFFSET UNITYSDK_OFFSET(0x2977DA0)
#define A56247367EB19099_F5628F8349D4A8A6_B71757E095FEE78C_OFFSET UNITYSDK_OFFSET(0x2977DF0)
#define A56247367EB19099_F5628F8349D4A8A6_F2CE96C1D632D41F_OFFSET UNITYSDK_OFFSET(0x2977E40)
#define A56247367EB19099_F5628F8349D4A8A6__CCTOR_OFFSET UNITYSDK_OFFSET(0x2978260)
#define A56247367EB19099_F5628F8349D4A8A6__CTOR_OFFSET UNITYSDK_OFFSET(0x1666CA0)

inline static constexpr unsigned int A56247367EB19099_F5628F8349D4A8A6_TypeDefinitionIndex = 15465;

class A56247367EB19099_F5628F8349D4A8A6 : public ::System::Object
{
public:
	static ::A56247367EB19099_F5628F8349D4A8A6** StaticGet_AA32F971AB02398B()
	{
		return (::A56247367EB19099_F5628F8349D4A8A6**)Il2CppClass::FromTypeDefinitionIndex(A56247367EB19099_F5628F8349D4A8A6_TypeDefinitionIndex)->GetStaticField(0x0);
	}
	static ::System::Action_1<::System::String*>** StaticGet_B61CC0AF0D30B87F()
	{
		return (::System::Action_1<::System::String*>**)Il2CppClass::FromTypeDefinitionIndex(A56247367EB19099_F5628F8349D4A8A6_TypeDefinitionIndex)->GetStaticField(0x8);
	}
	static ::System::Action_1<::System::String*>** StaticGet_FFC327E46B669B8C()
	{
		return (::System::Action_1<::System::String*>**)Il2CppClass::FromTypeDefinitionIndex(A56247367EB19099_F5628F8349D4A8A6_TypeDefinitionIndex)->GetStaticField(0x10);
	}
	static ::System::Action_1<::System::String*>** StaticGet_FC207C1831094B43()
	{
		return (::System::Action_1<::System::String*>**)Il2CppClass::FromTypeDefinitionIndex(A56247367EB19099_F5628F8349D4A8A6_TypeDefinitionIndex)->GetStaticField(0x18);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + A56247367EB19099_F5628F8349D4A8A6__CCTOR_OFFSET))();
	}

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + A56247367EB19099_F5628F8349D4A8A6__CTOR_OFFSET))(this);
	}

	::System::Void B1FFA42051E0E226(::System::String* A8D324015C7BB3AC)
	{
		return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + A56247367EB19099_F5628F8349D4A8A6_B1FFA42051E0E226_OFFSET))(this, A8D324015C7BB3AC);
	}

	::System::Void B71757E095FEE78C(::System::String* F97CCFD7E3B3543B)
	{
		return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + A56247367EB19099_F5628F8349D4A8A6_B71757E095FEE78C_OFFSET))(this, F97CCFD7E3B3543B);
	}

	::System::Void F2CE96C1D632D41F(::System::String* BC118A37A8D50285)
	{
		return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + A56247367EB19099_F5628F8349D4A8A6_F2CE96C1D632D41F_OFFSET))(this, BC118A37A8D50285);
	}
};
