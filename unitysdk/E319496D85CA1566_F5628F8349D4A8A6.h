#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System { class Action; }

#define E319496D85CA1566_F5628F8349D4A8A6_F8887AB7CEE0C896_OFFSET UNITYSDK_OFFSET(0x39B5E40)
#define E319496D85CA1566_F5628F8349D4A8A6__CCTOR_OFFSET UNITYSDK_OFFSET(0x39B8450)
#define E319496D85CA1566_F5628F8349D4A8A6__CTOR_OFFSET UNITYSDK_OFFSET(0x1666CA0)

inline static constexpr unsigned int E319496D85CA1566_F5628F8349D4A8A6_TypeDefinitionIndex = 12575;

class E319496D85CA1566_F5628F8349D4A8A6 : public ::System::Object
{
public:
	static ::E319496D85CA1566_F5628F8349D4A8A6** StaticGet_AA32F971AB02398B()
	{
		return (::E319496D85CA1566_F5628F8349D4A8A6**)Il2CppClass::FromTypeDefinitionIndex(E319496D85CA1566_F5628F8349D4A8A6_TypeDefinitionIndex)->GetStaticField(0x0);
	}
	static ::System::Action** StaticGet_AF311A9CD59B0BEF()
	{
		return (::System::Action**)Il2CppClass::FromTypeDefinitionIndex(E319496D85CA1566_F5628F8349D4A8A6_TypeDefinitionIndex)->GetStaticField(0x8);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + E319496D85CA1566_F5628F8349D4A8A6__CCTOR_OFFSET))();
	}

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + E319496D85CA1566_F5628F8349D4A8A6__CTOR_OFFSET))(this);
	}

	::System::Void F8887AB7CEE0C896()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + E319496D85CA1566_F5628F8349D4A8A6_F8887AB7CEE0C896_OFFSET))(this);
	}
};
