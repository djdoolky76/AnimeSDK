#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Attribute.h"
namespace System { class String; }

#define LNGFNDMFLOI_CTOR_OFFSET UNITYSDK_OFFSET(0xB7DD350)

inline static constexpr unsigned int LNGFNDMFLOI_TypeDefinitionIndex = 52051;

	class LNGFNDMFLOI : public ::System::Attribute
	{
	public:
		::System::String* DFNEHKOKAFD; // 0x10
		::System::Void _ctor(::System::String* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + LNGFNDMFLOI_CTOR_OFFSET))(this, a1);
		}

	};
