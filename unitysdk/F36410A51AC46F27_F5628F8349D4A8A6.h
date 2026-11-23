#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System { class String; }
namespace System { template <typename T> class Action_1; }

#define F36410A51AC46F27_F5628F8349D4A8A6_B8B81D75F88E0B5A_OFFSET UNITYSDK_OFFSET(0x295F630)
#define F36410A51AC46F27_F5628F8349D4A8A6_BBE6686EEDA41655_OFFSET UNITYSDK_OFFSET(0x295F6F0)
#define F36410A51AC46F27_F5628F8349D4A8A6_BC2515B3115D31E6_OFFSET UNITYSDK_OFFSET(0x295F690)
#define F36410A51AC46F27_F5628F8349D4A8A6_F108258C79C9EA35_OFFSET UNITYSDK_OFFSET(0x295F5D0)
#define F36410A51AC46F27_F5628F8349D4A8A6__CCTOR_OFFSET UNITYSDK_OFFSET(0x295FC30)
#define F36410A51AC46F27_F5628F8349D4A8A6__CTOR_OFFSET UNITYSDK_OFFSET(0x1666CA0)

inline static constexpr unsigned int F36410A51AC46F27_F5628F8349D4A8A6_TypeDefinitionIndex = 15404;

class F36410A51AC46F27_F5628F8349D4A8A6 : public ::System::Object
{
public:
	static ::F36410A51AC46F27_F5628F8349D4A8A6** StaticGet_AA32F971AB02398B()
	{
		return (::F36410A51AC46F27_F5628F8349D4A8A6**)Il2CppClass::FromTypeDefinitionIndex(F36410A51AC46F27_F5628F8349D4A8A6_TypeDefinitionIndex)->GetStaticField(0x0);
	}
	static ::System::Action_1<::System::String*>** StaticGet_B8CA52E4DE85C79A()
	{
		return (::System::Action_1<::System::String*>**)Il2CppClass::FromTypeDefinitionIndex(F36410A51AC46F27_F5628F8349D4A8A6_TypeDefinitionIndex)->GetStaticField(0x8);
	}
	static ::System::Action_1<::System::String*>** StaticGet_AE9C5ABBADFAED14()
	{
		return (::System::Action_1<::System::String*>**)Il2CppClass::FromTypeDefinitionIndex(F36410A51AC46F27_F5628F8349D4A8A6_TypeDefinitionIndex)->GetStaticField(0x10);
	}
	static ::System::Action_1<::System::String*>** StaticGet_ED33558639C36859()
	{
		return (::System::Action_1<::System::String*>**)Il2CppClass::FromTypeDefinitionIndex(F36410A51AC46F27_F5628F8349D4A8A6_TypeDefinitionIndex)->GetStaticField(0x18);
	}
	static ::System::Action_1<::System::String*>** StaticGet_A2F68321F343ECCE()
	{
		return (::System::Action_1<::System::String*>**)Il2CppClass::FromTypeDefinitionIndex(F36410A51AC46F27_F5628F8349D4A8A6_TypeDefinitionIndex)->GetStaticField(0x20);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + F36410A51AC46F27_F5628F8349D4A8A6__CCTOR_OFFSET))();
	}

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + F36410A51AC46F27_F5628F8349D4A8A6__CTOR_OFFSET))(this);
	}

	::System::Void F108258C79C9EA35(::System::String* F97CCFD7E3B3543B)
	{
		return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + F36410A51AC46F27_F5628F8349D4A8A6_F108258C79C9EA35_OFFSET))(this, F97CCFD7E3B3543B);
	}

	::System::Void B8B81D75F88E0B5A(::System::String* F97CCFD7E3B3543B)
	{
		return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + F36410A51AC46F27_F5628F8349D4A8A6_B8B81D75F88E0B5A_OFFSET))(this, F97CCFD7E3B3543B);
	}

	::System::Void BC2515B3115D31E6(::System::String* F97CCFD7E3B3543B)
	{
		return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + F36410A51AC46F27_F5628F8349D4A8A6_BC2515B3115D31E6_OFFSET))(this, F97CCFD7E3B3543B);
	}

	::System::Void BBE6686EEDA41655(::System::String* F97CCFD7E3B3543B)
	{
		return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + F36410A51AC46F27_F5628F8349D4A8A6_BBE6686EEDA41655_OFFSET))(this, F97CCFD7E3B3543B);
	}
};
