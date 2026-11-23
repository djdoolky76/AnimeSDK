#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System { class Action; }

#define ABC2638F9CE965FD_F5628F8349D4A8A6_A0D8DEF4A50D8909_OFFSET UNITYSDK_OFFSET(0x38D01C0)
#define ABC2638F9CE965FD_F5628F8349D4A8A6__CCTOR_OFFSET UNITYSDK_OFFSET(0x38D8540)
#define ABC2638F9CE965FD_F5628F8349D4A8A6__CTOR_OFFSET UNITYSDK_OFFSET(0x1666CA0)

inline static constexpr unsigned int ABC2638F9CE965FD_F5628F8349D4A8A6_TypeDefinitionIndex = 11730;

class ABC2638F9CE965FD_F5628F8349D4A8A6 : public ::System::Object
{
public:
	static ::ABC2638F9CE965FD_F5628F8349D4A8A6** StaticGet_AA32F971AB02398B()
	{
		return (::ABC2638F9CE965FD_F5628F8349D4A8A6**)Il2CppClass::FromTypeDefinitionIndex(ABC2638F9CE965FD_F5628F8349D4A8A6_TypeDefinitionIndex)->GetStaticField(0x0);
	}
	static ::System::Action** StaticGet_F66507BF291AAAE8()
	{
		return (::System::Action**)Il2CppClass::FromTypeDefinitionIndex(ABC2638F9CE965FD_F5628F8349D4A8A6_TypeDefinitionIndex)->GetStaticField(0x8);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + ABC2638F9CE965FD_F5628F8349D4A8A6__CCTOR_OFFSET))();
	}

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ABC2638F9CE965FD_F5628F8349D4A8A6__CTOR_OFFSET))(this);
	}

	::System::Void A0D8DEF4A50D8909()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ABC2638F9CE965FD_F5628F8349D4A8A6_A0D8DEF4A50D8909_OFFSET))(this);
	}
};
