#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class A3CC8CFC5B07AE42;
namespace System { template <typename T> class Action_1; }

#define ABE8F129E8D01AD6_F5628F8349D4A8A6_BE692F538CB2CD74_OFFSET UNITYSDK_OFFSET(0x2099E40)
#define ABE8F129E8D01AD6_F5628F8349D4A8A6__CCTOR_OFFSET UNITYSDK_OFFSET(0x209A0B0)
#define ABE8F129E8D01AD6_F5628F8349D4A8A6__CTOR_OFFSET UNITYSDK_OFFSET(0x1666CA0)

inline static constexpr unsigned int ABE8F129E8D01AD6_F5628F8349D4A8A6_TypeDefinitionIndex = 8517;

class ABE8F129E8D01AD6_F5628F8349D4A8A6 : public ::System::Object
{
public:
	static ::ABE8F129E8D01AD6_F5628F8349D4A8A6** StaticGet_AA32F971AB02398B()
	{
		return (::ABE8F129E8D01AD6_F5628F8349D4A8A6**)Il2CppClass::FromTypeDefinitionIndex(ABE8F129E8D01AD6_F5628F8349D4A8A6_TypeDefinitionIndex)->GetStaticField(0x0);
	}
	static ::System::Action_1<::A3CC8CFC5B07AE42*>** StaticGet_F4EB4229F3368E16()
	{
		return (::System::Action_1<::A3CC8CFC5B07AE42*>**)Il2CppClass::FromTypeDefinitionIndex(ABE8F129E8D01AD6_F5628F8349D4A8A6_TypeDefinitionIndex)->GetStaticField(0x8);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + ABE8F129E8D01AD6_F5628F8349D4A8A6__CCTOR_OFFSET))();
	}

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ABE8F129E8D01AD6_F5628F8349D4A8A6__CTOR_OFFSET))(this);
	}

	::System::Void BE692F538CB2CD74(::A3CC8CFC5B07AE42* EF3059626271C3D8)
	{
		return ((::System::Void(*)(::PVOID, ::A3CC8CFC5B07AE42*))((::PBYTE)hIl2Cpp + ABE8F129E8D01AD6_F5628F8349D4A8A6_BE692F538CB2CD74_OFFSET))(this, EF3059626271C3D8);
	}
};
