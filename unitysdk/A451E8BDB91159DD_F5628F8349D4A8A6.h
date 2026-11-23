#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System { class String; }
namespace System { template <typename T1, typename T2> class Action_2; }

#define A451E8BDB91159DD_F5628F8349D4A8A6_E2D94AA177D3D961_OFFSET UNITYSDK_OFFSET(0x22BFFB0)
#define A451E8BDB91159DD_F5628F8349D4A8A6__CCTOR_OFFSET UNITYSDK_OFFSET(0x22C0550)
#define A451E8BDB91159DD_F5628F8349D4A8A6__CTOR_OFFSET UNITYSDK_OFFSET(0x1666CA0)

inline static constexpr unsigned int A451E8BDB91159DD_F5628F8349D4A8A6_TypeDefinitionIndex = 7142;

class A451E8BDB91159DD_F5628F8349D4A8A6 : public ::System::Object
{
public:
	static ::A451E8BDB91159DD_F5628F8349D4A8A6** StaticGet_AA32F971AB02398B()
	{
		return (::A451E8BDB91159DD_F5628F8349D4A8A6**)Il2CppClass::FromTypeDefinitionIndex(A451E8BDB91159DD_F5628F8349D4A8A6_TypeDefinitionIndex)->GetStaticField(0x0);
	}
	static ::System::Action_2<::System::String*, ::System::Int64>** StaticGet_E81099CA95C50CE8()
	{
		return (::System::Action_2<::System::String*, ::System::Int64>**)Il2CppClass::FromTypeDefinitionIndex(A451E8BDB91159DD_F5628F8349D4A8A6_TypeDefinitionIndex)->GetStaticField(0x8);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + A451E8BDB91159DD_F5628F8349D4A8A6__CCTOR_OFFSET))();
	}

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + A451E8BDB91159DD_F5628F8349D4A8A6__CTOR_OFFSET))(this);
	}

	::System::Void E2D94AA177D3D961(::System::String* BE16F0D38CD1638E, ::System::Int64 E84073D3D0C5F54B)
	{
		return ((::System::Void(*)(::PVOID, ::System::String*, ::System::Int64))((::PBYTE)hIl2Cpp + A451E8BDB91159DD_F5628F8349D4A8A6_E2D94AA177D3D961_OFFSET))(this, BE16F0D38CD1638E, E84073D3D0C5F54B);
	}
};
