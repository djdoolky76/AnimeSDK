#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Attribute.h"
namespace System { class Type; }

#define JPNACMMAEDC_CTOR_OFFSET UNITYSDK_OFFSET(0xB2CB280)

inline static constexpr unsigned int JPNACMMAEDC_TypeDefinitionIndex = 57583;

	class JPNACMMAEDC : public ::System::Attribute
	{
	public:
		::System::Void _ctor(::System::Type* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Type*))((::PBYTE)hIl2Cpp + JPNACMMAEDC_CTOR_OFFSET))(this, a1);
		}

	};
