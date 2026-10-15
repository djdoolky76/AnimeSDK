#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Attribute.h"
namespace System { class String; }

#define JGLPONENAKN_CTOR_OFFSET UNITYSDK_OFFSET(0x1CC93050)
#define JGLPONENAKN_GET_CONSTKEY_OFFSET UNITYSDK_OFFSET(0x1CC930D0)

inline static constexpr unsigned int JGLPONENAKN_TypeDefinitionIndex = 43872;

	class JGLPONENAKN : public ::System::Attribute
	{
	public:
		::System::String* _ConstKey_k__BackingField; // 0x10
		::System::Void _ctor(::System::String* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + JGLPONENAKN_CTOR_OFFSET))(this, a1);
		}

		::System::String* get_ConstKey()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + JGLPONENAKN_GET_CONSTKEY_OFFSET))(this);
		}

	};
