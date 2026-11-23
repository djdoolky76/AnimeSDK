#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System { class String; }
namespace System::Reflection { class BB51823F6EB09532; }

#define FB8AA62B8170478B__CTOR_OFFSET UNITYSDK_OFFSET(0x1666CA0)

inline static constexpr unsigned int FB8AA62B8170478B_TypeDefinitionIndex = 11140;

class FB8AA62B8170478B : public ::System::Object
{
public:
	::System::String* E4C58C41C1E86DBB; // 0x10
	::System::Reflection::BB51823F6EB09532* EF6CF8D4D8267BE2; // 0x18

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FB8AA62B8170478B__CTOR_OFFSET))(this);
	}
};
