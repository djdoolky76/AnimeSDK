#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/B223EC95048EAAE0/B33AF29E39DC2004.h"
#include "unitysdk/System/Object.h"

namespace System { class String; }

#define E84941B9432B974A__CTOR_1_OFFSET UNITYSDK_OFFSET(0x1F26BB0)
#define E84941B9432B974A__CTOR_OFFSET UNITYSDK_OFFSET(0x2D66A00)

inline static constexpr unsigned int E84941B9432B974A_TypeDefinitionIndex = 18790;

class E84941B9432B974A : public ::System::Object
{
public:
	::B223EC95048EAAE0::B33AF29E39DC2004 FA613A107F87B6B7; // 0x10
	::System::Byte _padding0[0x4];
	::System::String* E48286BDEF736ED5; // 0x18

	::System::Void _ctor(::B223EC95048EAAE0::B33AF29E39DC2004 FA613A107F87B6B7, ::System::String* E48286BDEF736ED5)
	{
		return ((::System::Void(*)(::PVOID, ::B223EC95048EAAE0::B33AF29E39DC2004, ::System::String*))((::PBYTE)hIl2Cpp + E84941B9432B974A__CTOR_OFFSET))(this, FA613A107F87B6B7, E48286BDEF736ED5);
	}

	::System::Void _ctor_1(::B223EC95048EAAE0::B33AF29E39DC2004 FA613A107F87B6B7)
	{
		return ((::System::Void(*)(::PVOID, ::B223EC95048EAAE0::B33AF29E39DC2004))((::PBYTE)hIl2Cpp + E84941B9432B974A__CTOR_1_OFFSET))(this, FA613A107F87B6B7);
	}
};
