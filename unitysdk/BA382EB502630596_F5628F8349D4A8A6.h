#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System { class Attribute; }
namespace System { template <typename T1, typename T2> class Func_2; }

#define BA382EB502630596_F5628F8349D4A8A6_A07219204C663440_OFFSET UNITYSDK_OFFSET(0x3F3E200)
#define BA382EB502630596_F5628F8349D4A8A6__CCTOR_OFFSET UNITYSDK_OFFSET(0x3F3E270)
#define BA382EB502630596_F5628F8349D4A8A6__CTOR_OFFSET UNITYSDK_OFFSET(0x1666CA0)

inline static constexpr unsigned int BA382EB502630596_F5628F8349D4A8A6_TypeDefinitionIndex = 20984;

class BA382EB502630596_F5628F8349D4A8A6 : public ::System::Object
{
public:
	static ::BA382EB502630596_F5628F8349D4A8A6** StaticGet_AA32F971AB02398B()
	{
		return (::BA382EB502630596_F5628F8349D4A8A6**)Il2CppClass::FromTypeDefinitionIndex(BA382EB502630596_F5628F8349D4A8A6_TypeDefinitionIndex)->GetStaticField(0x0);
	}
	static ::System::Func_2<::System::Attribute*, ::System::Boolean>** StaticGet_E176852753E7ADDB()
	{
		return (::System::Func_2<::System::Attribute*, ::System::Boolean>**)Il2CppClass::FromTypeDefinitionIndex(BA382EB502630596_F5628F8349D4A8A6_TypeDefinitionIndex)->GetStaticField(0x8);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + BA382EB502630596_F5628F8349D4A8A6__CCTOR_OFFSET))();
	}

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BA382EB502630596_F5628F8349D4A8A6__CTOR_OFFSET))(this);
	}

	::System::Boolean A07219204C663440(::System::Attribute* B9AEC57275825552)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Attribute*))((::PBYTE)hIl2Cpp + BA382EB502630596_F5628F8349D4A8A6_A07219204C663440_OFFSET))(this, B9AEC57275825552);
	}
};
