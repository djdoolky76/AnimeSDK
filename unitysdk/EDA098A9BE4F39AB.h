#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/B8ACFA2E9BECAE13/B8F13F8E8F4B8043.h"
#include "unitysdk/System/Attribute.h"

namespace System { class String; }

#define EDA098A9BE4F39AB__CTOR_1_OFFSET UNITYSDK_OFFSET(0x4137710)
#define EDA098A9BE4F39AB__CTOR_OFFSET UNITYSDK_OFFSET(0x41376B0)

inline static constexpr unsigned int EDA098A9BE4F39AB_TypeDefinitionIndex = 17132;

class EDA098A9BE4F39AB : public ::System::Attribute
{
public:
	::B8ACFA2E9BECAE13::B8F13F8E8F4B8043 F220A2D27F7C6B6C; // 0x10

	::System::Void _ctor(::System::Boolean F1FF611CEA920AAD, ::System::String* E952B805189D73F0, ::System::String* B0CE993A27906F03, ::System::String* A2B456E9ABA9482E)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean, ::System::String*, ::System::String*, ::System::String*))((::PBYTE)hIl2Cpp + EDA098A9BE4F39AB__CTOR_OFFSET))(this, F1FF611CEA920AAD, E952B805189D73F0, B0CE993A27906F03, A2B456E9ABA9482E);
	}

	::System::Void _ctor_1(::System::String* E952B805189D73F0)
	{
		return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + EDA098A9BE4F39AB__CTOR_1_OFFSET))(this, E952B805189D73F0);
	}
};
