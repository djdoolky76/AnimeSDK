#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Attribute.h"

namespace System { class Type; }

#define B937E9F49B4DF11F__CTOR_OFFSET UNITYSDK_OFFSET(0x16514A0)

inline static constexpr unsigned int B937E9F49B4DF11F_TypeDefinitionIndex = 17615;

class B937E9F49B4DF11F : public ::System::Attribute
{
public:
	::System::Void _ctor(::System::Type* A288CB28FC2A6DA3)
	{
		return ((::System::Void(*)(::PVOID, ::System::Type*))((::PBYTE)hIl2Cpp + B937E9F49B4DF11F__CTOR_OFFSET))(this, A288CB28FC2A6DA3);
	}
};
