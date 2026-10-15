#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Attribute.h"
namespace System { class String; }

#define LEOMNDJDEEE_CTOR_OFFSET UNITYSDK_OFFSET(0xB657170)

inline static constexpr unsigned int LEOMNDJDEEE_TypeDefinitionIndex = 52050;

	class LEOMNDJDEEE : public ::System::Attribute
	{
	public:
		::System::String* ENIHPMIFCFP; // 0x10
		::System::Void _ctor(::System::String* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + LEOMNDJDEEE_CTOR_OFFSET))(this, a1);
		}

	};
