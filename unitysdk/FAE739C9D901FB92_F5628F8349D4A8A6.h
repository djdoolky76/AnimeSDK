#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class A17FBCB2168BAF13;
namespace System { template <typename T1, typename T2> class Func_2; }

#define FAE739C9D901FB92_F5628F8349D4A8A6_A2839902D5D8A4F5_OFFSET UNITYSDK_OFFSET(0x1C50FD0)
#define FAE739C9D901FB92_F5628F8349D4A8A6__CCTOR_OFFSET UNITYSDK_OFFSET(0x1DE0170)
#define FAE739C9D901FB92_F5628F8349D4A8A6__CTOR_OFFSET UNITYSDK_OFFSET(0x1666CA0)

inline static constexpr unsigned int FAE739C9D901FB92_F5628F8349D4A8A6_TypeDefinitionIndex = 9368;

class FAE739C9D901FB92_F5628F8349D4A8A6 : public ::System::Object
{
public:
	static ::FAE739C9D901FB92_F5628F8349D4A8A6** StaticGet_AA32F971AB02398B()
	{
		return (::FAE739C9D901FB92_F5628F8349D4A8A6**)Il2CppClass::FromTypeDefinitionIndex(FAE739C9D901FB92_F5628F8349D4A8A6_TypeDefinitionIndex)->GetStaticField(0x0);
	}
	static ::System::Func_2<::A17FBCB2168BAF13*, ::System::Boolean>** StaticGet_F4EB4229F3368E16()
	{
		return (::System::Func_2<::A17FBCB2168BAF13*, ::System::Boolean>**)Il2CppClass::FromTypeDefinitionIndex(FAE739C9D901FB92_F5628F8349D4A8A6_TypeDefinitionIndex)->GetStaticField(0x8);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + FAE739C9D901FB92_F5628F8349D4A8A6__CCTOR_OFFSET))();
	}

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FAE739C9D901FB92_F5628F8349D4A8A6__CTOR_OFFSET))(this);
	}

	::System::Boolean A2839902D5D8A4F5(::A17FBCB2168BAF13* ACDE58E97E37D13C)
	{
		return ((::System::Boolean(*)(::PVOID, ::A17FBCB2168BAF13*))((::PBYTE)hIl2Cpp + FAE739C9D901FB92_F5628F8349D4A8A6_A2839902D5D8A4F5_OFFSET))(this, ACDE58E97E37D13C);
	}
};
