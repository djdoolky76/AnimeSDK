#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/E379DE61A548837D.h"

namespace System { class String; }

#define FF08315D55A1AA31__CTOR_OFFSET UNITYSDK_OFFSET(0x16514A0)

inline static constexpr unsigned int FF08315D55A1AA31_TypeDefinitionIndex = 6889;

class FF08315D55A1AA31 : public ::E379DE61A548837D
{
public:
	::System::Boolean A16C8ED92C989C9B; // 0x38
	::System::Byte _padding0[0x3];
	::System::UInt32 E036660C7BA66F3C; // 0x3C
	::System::String* FE40A626DDE817EA; // 0x40

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FF08315D55A1AA31__CTOR_OFFSET))(this);
	}
};
