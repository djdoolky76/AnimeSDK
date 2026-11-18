#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System { class String; }

#define ECALPAICMNI_FBKHCCKGCNI__CTOR_OFFSET UNITYSDK_OFFSET(0xFDD33D0)

inline static constexpr unsigned int ECALPAICMNI_FBKHCCKGCNI_TypeDefinitionIndex = 80825;

class ECALPAICMNI_FBKHCCKGCNI : public ::System::Object
{
public:
	::System::String* PCKMEIIFFDK; // 0x10
	::System::Int32 FIBNGEDMEOP; // 0x18

	::System::Void _ctor(::System::Int32 FIBNGEDMEOP, ::System::String* PCKMEIIFFDK)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::String*))((::PBYTE)hIl2Cpp + ECALPAICMNI_FBKHCCKGCNI__CTOR_OFFSET))(this, FIBNGEDMEOP, PCKMEIIFFDK);
	}
};
