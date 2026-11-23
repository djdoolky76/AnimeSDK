#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/EF9914625B6F8A9E.h"
#include "unitysdk/System/Object.h"

namespace System { template <typename T1, typename T2, typename T3, typename T4> class Action_4; }

#define A0A9BB469AF9A11E_F5628F8349D4A8A6_FCE4FC6BD2E97FA9_OFFSET UNITYSDK_OFFSET(0x1EB8060)
#define A0A9BB469AF9A11E_F5628F8349D4A8A6__CCTOR_OFFSET UNITYSDK_OFFSET(0x3925400)
#define A0A9BB469AF9A11E_F5628F8349D4A8A6__CTOR_OFFSET UNITYSDK_OFFSET(0x1666CA0)

inline static constexpr unsigned int A0A9BB469AF9A11E_F5628F8349D4A8A6_TypeDefinitionIndex = 12320;

class A0A9BB469AF9A11E_F5628F8349D4A8A6 : public ::System::Object
{
public:
	static ::A0A9BB469AF9A11E_F5628F8349D4A8A6** StaticGet_AA32F971AB02398B()
	{
		return (::A0A9BB469AF9A11E_F5628F8349D4A8A6**)Il2CppClass::FromTypeDefinitionIndex(A0A9BB469AF9A11E_F5628F8349D4A8A6_TypeDefinitionIndex)->GetStaticField(0x0);
	}
	static ::System::Action_4<::Il2CppArray<::EF9914625B6F8A9E>*, ::System::Boolean, ::System::Int32, ::System::Int64>** StaticGet_F6459B7CA2224D03()
	{
		return (::System::Action_4<::Il2CppArray<::EF9914625B6F8A9E>*, ::System::Boolean, ::System::Int32, ::System::Int64>**)Il2CppClass::FromTypeDefinitionIndex(A0A9BB469AF9A11E_F5628F8349D4A8A6_TypeDefinitionIndex)->GetStaticField(0x8);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + A0A9BB469AF9A11E_F5628F8349D4A8A6__CCTOR_OFFSET))();
	}

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + A0A9BB469AF9A11E_F5628F8349D4A8A6__CTOR_OFFSET))(this);
	}

	::System::Void FCE4FC6BD2E97FA9(::Il2CppArray<::EF9914625B6F8A9E>* A32ED10FB0DD6D42, ::System::Boolean BC84591423F8B271, ::System::Int32 B3F53603F39CD6A9, ::System::Int64 FF0A37159A523E06)
	{
		return ((::System::Void(*)(::PVOID, ::Il2CppArray<::EF9914625B6F8A9E>*, ::System::Boolean, ::System::Int32, ::System::Int64))((::PBYTE)hIl2Cpp + A0A9BB469AF9A11E_F5628F8349D4A8A6_FCE4FC6BD2E97FA9_OFFSET))(this, A32ED10FB0DD6D42, BC84591423F8B271, B3F53603F39CD6A9, FF0A37159A523E06);
	}
};
