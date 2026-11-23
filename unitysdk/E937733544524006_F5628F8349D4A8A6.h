#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class FBF5DC1AB751F82C;
namespace System { template <typename T1, typename T2> class Func_2; }
namespace System { template <typename T> class Action_1; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define E937733544524006_F5628F8349D4A8A6_B4644DB513077A46_OFFSET UNITYSDK_OFFSET(0x2195FA0)
#define E937733544524006_F5628F8349D4A8A6_B46E2138E2831C4E_OFFSET UNITYSDK_OFFSET(0x2195FF0)
#define E937733544524006_F5628F8349D4A8A6_B9F0BA8B8E6D3A2A_OFFSET UNITYSDK_OFFSET(0x2195F50)
#define E937733544524006_F5628F8349D4A8A6_EA6D8199E6E5D07C_OFFSET UNITYSDK_OFFSET(0x2195D80)
#define E937733544524006_F5628F8349D4A8A6__CCTOR_OFFSET UNITYSDK_OFFSET(0x2196330)
#define E937733544524006_F5628F8349D4A8A6__CTOR_OFFSET UNITYSDK_OFFSET(0x1666CA0)

inline static constexpr unsigned int E937733544524006_F5628F8349D4A8A6_TypeDefinitionIndex = 8761;

class E937733544524006_F5628F8349D4A8A6 : public ::System::Object
{
public:
	static ::E937733544524006_F5628F8349D4A8A6** StaticGet_AA32F971AB02398B()
	{
		return (::E937733544524006_F5628F8349D4A8A6**)Il2CppClass::FromTypeDefinitionIndex(E937733544524006_F5628F8349D4A8A6_TypeDefinitionIndex)->GetStaticField(0x0);
	}
	static ::System::Action_1<::FBF5DC1AB751F82C*>** StaticGet_FB5E19DD986E8C90()
	{
		return (::System::Action_1<::FBF5DC1AB751F82C*>**)Il2CppClass::FromTypeDefinitionIndex(E937733544524006_F5628F8349D4A8A6_TypeDefinitionIndex)->GetStaticField(0x8);
	}
	static ::System::Action_1<::System::Collections::Generic::List_1<::FBF5DC1AB751F82C*>*>** StaticGet_BFC2B29B610F5A11()
	{
		return (::System::Action_1<::System::Collections::Generic::List_1<::FBF5DC1AB751F82C*>*>**)Il2CppClass::FromTypeDefinitionIndex(E937733544524006_F5628F8349D4A8A6_TypeDefinitionIndex)->GetStaticField(0x10);
	}
	static ::System::Action_1<::FBF5DC1AB751F82C*>** StaticGet_B25B9042DD5F4B8E()
	{
		return (::System::Action_1<::FBF5DC1AB751F82C*>**)Il2CppClass::FromTypeDefinitionIndex(E937733544524006_F5628F8349D4A8A6_TypeDefinitionIndex)->GetStaticField(0x18);
	}
	static ::System::Func_2<::FBF5DC1AB751F82C*, ::System::Boolean>** StaticGet_EAF349EA701E54F6()
	{
		return (::System::Func_2<::FBF5DC1AB751F82C*, ::System::Boolean>**)Il2CppClass::FromTypeDefinitionIndex(E937733544524006_F5628F8349D4A8A6_TypeDefinitionIndex)->GetStaticField(0x20);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + E937733544524006_F5628F8349D4A8A6__CCTOR_OFFSET))();
	}

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + E937733544524006_F5628F8349D4A8A6__CTOR_OFFSET))(this);
	}

	::System::Void B46E2138E2831C4E(::FBF5DC1AB751F82C* FCA4B74FE834314F)
	{
		return ((::System::Void(*)(::PVOID, ::FBF5DC1AB751F82C*))((::PBYTE)hIl2Cpp + E937733544524006_F5628F8349D4A8A6_B46E2138E2831C4E_OFFSET))(this, FCA4B74FE834314F);
	}

	::System::Void EA6D8199E6E5D07C(::System::Collections::Generic::List_1<::FBF5DC1AB751F82C*>* EC35F88C87A83BEB)
	{
		return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::List_1<::FBF5DC1AB751F82C*>*))((::PBYTE)hIl2Cpp + E937733544524006_F5628F8349D4A8A6_EA6D8199E6E5D07C_OFFSET))(this, EC35F88C87A83BEB);
	}

	::System::Void B9F0BA8B8E6D3A2A(::FBF5DC1AB751F82C* FCA4B74FE834314F)
	{
		return ((::System::Void(*)(::PVOID, ::FBF5DC1AB751F82C*))((::PBYTE)hIl2Cpp + E937733544524006_F5628F8349D4A8A6_B9F0BA8B8E6D3A2A_OFFSET))(this, FCA4B74FE834314F);
	}

	::System::Boolean B4644DB513077A46(::FBF5DC1AB751F82C* FCA4B74FE834314F)
	{
		return ((::System::Boolean(*)(::PVOID, ::FBF5DC1AB751F82C*))((::PBYTE)hIl2Cpp + E937733544524006_F5628F8349D4A8A6_B4644DB513077A46_OFFSET))(this, FCA4B74FE834314F);
	}
};
