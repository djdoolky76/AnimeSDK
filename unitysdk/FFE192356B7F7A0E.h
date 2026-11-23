#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System { class String; }

#define FFE192356B7F7A0E__CTOR_OFFSET UNITYSDK_OFFSET(0x1778980)

inline static constexpr unsigned int FFE192356B7F7A0E_TypeDefinitionIndex = 11690;

class FFE192356B7F7A0E : public ::System::Object
{
public:
	::System::String* E6964F335332568D; // 0x10

	::System::Void _ctor(::System::String* EC2038339CE86133)
	{
		return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + FFE192356B7F7A0E__CTOR_OFFSET))(this, EC2038339CE86133);
	}
};
