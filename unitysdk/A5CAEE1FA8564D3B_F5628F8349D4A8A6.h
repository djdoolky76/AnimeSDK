#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System { template <typename T> class Action_1; }

#define A5CAEE1FA8564D3B_F5628F8349D4A8A6_F2339C0640C55316_OFFSET UNITYSDK_OFFSET(0x3AC6010)
#define A5CAEE1FA8564D3B_F5628F8349D4A8A6__CCTOR_OFFSET UNITYSDK_OFFSET(0x3AC9DF0)
#define A5CAEE1FA8564D3B_F5628F8349D4A8A6__CTOR_OFFSET UNITYSDK_OFFSET(0x1666CA0)

inline static constexpr unsigned int A5CAEE1FA8564D3B_F5628F8349D4A8A6_TypeDefinitionIndex = 12117;

class A5CAEE1FA8564D3B_F5628F8349D4A8A6 : public ::System::Object
{
public:
	static ::A5CAEE1FA8564D3B_F5628F8349D4A8A6** StaticGet_AA32F971AB02398B()
	{
		return (::A5CAEE1FA8564D3B_F5628F8349D4A8A6**)Il2CppClass::FromTypeDefinitionIndex(A5CAEE1FA8564D3B_F5628F8349D4A8A6_TypeDefinitionIndex)->GetStaticField(0x0);
	}
	static ::System::Action_1<::System::Boolean>** StaticGet_B3269A315D7EF375()
	{
		return (::System::Action_1<::System::Boolean>**)Il2CppClass::FromTypeDefinitionIndex(A5CAEE1FA8564D3B_F5628F8349D4A8A6_TypeDefinitionIndex)->GetStaticField(0x8);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + A5CAEE1FA8564D3B_F5628F8349D4A8A6__CCTOR_OFFSET))();
	}

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + A5CAEE1FA8564D3B_F5628F8349D4A8A6__CTOR_OFFSET))(this);
	}

	::System::Void F2339C0640C55316(::System::Boolean E937D4885DAA1AE8)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + A5CAEE1FA8564D3B_F5628F8349D4A8A6_F2339C0640C55316_OFFSET))(this, E937D4885DAA1AE8);
	}
};
