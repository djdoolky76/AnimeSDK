#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System { class String; }
namespace System { template <typename T> class Action_1; }

#define A2F7A64747EDBBB0_F5628F8349D4A8A6_BD1C186B012740F7_OFFSET UNITYSDK_OFFSET(0x2108230)
#define A2F7A64747EDBBB0_F5628F8349D4A8A6__CCTOR_OFFSET UNITYSDK_OFFSET(0x2108750)
#define A2F7A64747EDBBB0_F5628F8349D4A8A6__CTOR_OFFSET UNITYSDK_OFFSET(0x1666CA0)

inline static constexpr unsigned int A2F7A64747EDBBB0_F5628F8349D4A8A6_TypeDefinitionIndex = 8647;

class A2F7A64747EDBBB0_F5628F8349D4A8A6 : public ::System::Object
{
public:
	static ::A2F7A64747EDBBB0_F5628F8349D4A8A6** StaticGet_AA32F971AB02398B()
	{
		return (::A2F7A64747EDBBB0_F5628F8349D4A8A6**)Il2CppClass::FromTypeDefinitionIndex(A2F7A64747EDBBB0_F5628F8349D4A8A6_TypeDefinitionIndex)->GetStaticField(0x0);
	}
	static ::System::Action_1<::System::String*>** StaticGet_EB0986F4A705A2F5()
	{
		return (::System::Action_1<::System::String*>**)Il2CppClass::FromTypeDefinitionIndex(A2F7A64747EDBBB0_F5628F8349D4A8A6_TypeDefinitionIndex)->GetStaticField(0x8);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + A2F7A64747EDBBB0_F5628F8349D4A8A6__CCTOR_OFFSET))();
	}

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + A2F7A64747EDBBB0_F5628F8349D4A8A6__CTOR_OFFSET))(this);
	}

	::System::Void BD1C186B012740F7(::System::String* A8A64C573D7FC99A)
	{
		return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + A2F7A64747EDBBB0_F5628F8349D4A8A6_BD1C186B012740F7_OFFSET))(this, A8A64C573D7FC99A);
	}
};
