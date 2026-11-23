#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Attribute.h"

namespace System { class String; }

#define FCD9A3E3A0DA3DA5_B08585E1E45D2DE7_OFFSET UNITYSDK_OFFSET(0x17D6400)
#define FCD9A3E3A0DA3DA5__CTOR_OFFSET UNITYSDK_OFFSET(0x2759260)

inline static constexpr unsigned int FCD9A3E3A0DA3DA5_TypeDefinitionIndex = 21584;

class FCD9A3E3A0DA3DA5 : public ::System::Attribute
{
public:
	::System::String* EDDAFDC8AC6EE758; // 0x10

	::System::Void _ctor(::System::String* A199AA242A0C2998)
	{
		return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + FCD9A3E3A0DA3DA5__CTOR_OFFSET))(this, A199AA242A0C2998);
	}

	::System::Void B08585E1E45D2DE7(::System::String* E937D4885DAA1AE8)
	{
		return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + FCD9A3E3A0DA3DA5_B08585E1E45D2DE7_OFFSET))(this, E937D4885DAA1AE8);
	}
};
