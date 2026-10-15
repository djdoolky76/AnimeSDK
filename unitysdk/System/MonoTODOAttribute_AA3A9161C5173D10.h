#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Attribute.h"
namespace System { class String; }

#define SYSTEM_MONOTODOATTRIBUTE_AA3A9161C5173D10_CTOR_OFFSET UNITYSDK_OFFSET(0x1EE36D70)

namespace System
{
	inline static constexpr unsigned int MonoTODOAttribute_AA3A9161C5173D10_TypeDefinitionIndex = 3097;

	class MonoTODOAttribute_AA3A9161C5173D10 : public ::System::Attribute
	{
	public:
		::System::String* comment; // 0x10
		::System::Void _ctor(::System::String* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + SYSTEM_MONOTODOATTRIBUTE_AA3A9161C5173D10_CTOR_OFFSET))(this, a1);
		}

	};
}
