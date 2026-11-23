#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System { class String; }
namespace System { template <typename T1, typename T2> class Action_2; }

#define F3935DF63A36B6BA_F5628F8349D4A8A6_AFD8ABCFA19A4434_OFFSET UNITYSDK_OFFSET(0x1EB8060)
#define F3935DF63A36B6BA_F5628F8349D4A8A6__CCTOR_OFFSET UNITYSDK_OFFSET(0x1F26F70)
#define F3935DF63A36B6BA_F5628F8349D4A8A6__CTOR_OFFSET UNITYSDK_OFFSET(0x1666CA0)

inline static constexpr unsigned int F3935DF63A36B6BA_F5628F8349D4A8A6_TypeDefinitionIndex = 7521;

class F3935DF63A36B6BA_F5628F8349D4A8A6 : public ::System::Object
{
public:
	static ::F3935DF63A36B6BA_F5628F8349D4A8A6** StaticGet_AA32F971AB02398B()
	{
		return (::F3935DF63A36B6BA_F5628F8349D4A8A6**)Il2CppClass::FromTypeDefinitionIndex(F3935DF63A36B6BA_F5628F8349D4A8A6_TypeDefinitionIndex)->GetStaticField(0x0);
	}
	static ::System::Action_2<::System::String*, ::System::Int64>** StaticGet_B9C99C1760FBB291()
	{
		return (::System::Action_2<::System::String*, ::System::Int64>**)Il2CppClass::FromTypeDefinitionIndex(F3935DF63A36B6BA_F5628F8349D4A8A6_TypeDefinitionIndex)->GetStaticField(0x8);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + F3935DF63A36B6BA_F5628F8349D4A8A6__CCTOR_OFFSET))();
	}

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + F3935DF63A36B6BA_F5628F8349D4A8A6__CTOR_OFFSET))(this);
	}

	::System::Void AFD8ABCFA19A4434(::System::String* EF92D7BA49D05EC0, ::System::Int64 E84073D3D0C5F54B)
	{
		return ((::System::Void(*)(::PVOID, ::System::String*, ::System::Int64))((::PBYTE)hIl2Cpp + F3935DF63A36B6BA_F5628F8349D4A8A6_AFD8ABCFA19A4434_OFFSET))(this, EF92D7BA49D05EC0, E84073D3D0C5F54B);
	}
};
