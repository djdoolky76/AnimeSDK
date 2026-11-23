#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System { class Action; }

#define B0C5B9544F91AA42_F5628F8349D4A8A6_F467448E52784C8B_OFFSET UNITYSDK_OFFSET(0x16DAC00)
#define B0C5B9544F91AA42_F5628F8349D4A8A6__CCTOR_OFFSET UNITYSDK_OFFSET(0x2053500)
#define B0C5B9544F91AA42_F5628F8349D4A8A6__CTOR_OFFSET UNITYSDK_OFFSET(0x1666CA0)

inline static constexpr unsigned int B0C5B9544F91AA42_F5628F8349D4A8A6_TypeDefinitionIndex = 8346;

class B0C5B9544F91AA42_F5628F8349D4A8A6 : public ::System::Object
{
public:
	static ::B0C5B9544F91AA42_F5628F8349D4A8A6** StaticGet_AA32F971AB02398B()
	{
		return (::B0C5B9544F91AA42_F5628F8349D4A8A6**)Il2CppClass::FromTypeDefinitionIndex(B0C5B9544F91AA42_F5628F8349D4A8A6_TypeDefinitionIndex)->GetStaticField(0x0);
	}
	static ::System::Action** StaticGet_BCB5776C6392BCE4()
	{
		return (::System::Action**)Il2CppClass::FromTypeDefinitionIndex(B0C5B9544F91AA42_F5628F8349D4A8A6_TypeDefinitionIndex)->GetStaticField(0x8);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + B0C5B9544F91AA42_F5628F8349D4A8A6__CCTOR_OFFSET))();
	}

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + B0C5B9544F91AA42_F5628F8349D4A8A6__CTOR_OFFSET))(this);
	}

	::System::Void F467448E52784C8B()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + B0C5B9544F91AA42_F5628F8349D4A8A6_F467448E52784C8B_OFFSET))(this);
	}
};
