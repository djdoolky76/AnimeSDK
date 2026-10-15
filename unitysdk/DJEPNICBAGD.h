#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Attribute.h"
namespace System { class String; }

#define DJEPNICBAGD_CTOR_OFFSET UNITYSDK_OFFSET(0x1CCFFCB0)

inline static constexpr unsigned int DJEPNICBAGD_TypeDefinitionIndex = 24989;

	class DJEPNICBAGD : public ::System::Attribute
	{
	public:
		::System::String* GNMAAEDGDBA; // 0x10
		::System::Void _ctor(::System::String* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + DJEPNICBAGD_CTOR_OFFSET))(this, a1);
		}

	};
