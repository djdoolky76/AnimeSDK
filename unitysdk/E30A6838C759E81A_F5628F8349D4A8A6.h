#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System { class Action; }

#define E30A6838C759E81A_F5628F8349D4A8A6_E96A9979CB1EFA90_OFFSET UNITYSDK_OFFSET(0x3923CB0)
#define E30A6838C759E81A_F5628F8349D4A8A6__CCTOR_OFFSET UNITYSDK_OFFSET(0x39254E0)
#define E30A6838C759E81A_F5628F8349D4A8A6__CTOR_OFFSET UNITYSDK_OFFSET(0x1666CA0)

inline static constexpr unsigned int E30A6838C759E81A_F5628F8349D4A8A6_TypeDefinitionIndex = 12317;

class E30A6838C759E81A_F5628F8349D4A8A6 : public ::System::Object
{
public:
	static ::E30A6838C759E81A_F5628F8349D4A8A6** StaticGet_AA32F971AB02398B()
	{
		return (::E30A6838C759E81A_F5628F8349D4A8A6**)Il2CppClass::FromTypeDefinitionIndex(E30A6838C759E81A_F5628F8349D4A8A6_TypeDefinitionIndex)->GetStaticField(0x0);
	}
	static ::System::Action** StaticGet_FB5E19DD986E8C90()
	{
		return (::System::Action**)Il2CppClass::FromTypeDefinitionIndex(E30A6838C759E81A_F5628F8349D4A8A6_TypeDefinitionIndex)->GetStaticField(0x8);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + E30A6838C759E81A_F5628F8349D4A8A6__CCTOR_OFFSET))();
	}

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + E30A6838C759E81A_F5628F8349D4A8A6__CTOR_OFFSET))(this);
	}

	::System::Void E96A9979CB1EFA90()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + E30A6838C759E81A_F5628F8349D4A8A6_E96A9979CB1EFA90_OFFSET))(this);
	}
};
