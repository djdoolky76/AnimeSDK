#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System { class String; }

#define IGKNBMEBOLN_NHJNJOJKBDJ__CTOR_OFFSET UNITYSDK_OFFSET(0x15C0CB60)

inline static constexpr unsigned int IGKNBMEBOLN_NHJNJOJKBDJ_TypeDefinitionIndex = 43399;

class IGKNBMEBOLN_NHJNJOJKBDJ : public ::System::Object
{
public:
	::System::String* HPNPIAENAMN; // 0x10
	::System::String* GBNADCIPIEP; // 0x18
	::System::UInt64 FALJABIBPNH; // 0x20
	::System::Int32 DIPDOBODGEP; // 0x28
	::System::Boolean IMLIEMDOCHK; // 0x2C
	::System::Byte _padding0[0x1];
	::System::UInt16 IHEICNBHAMM; // 0x2E

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + IGKNBMEBOLN_NHJNJOJKBDJ__CTOR_OFFSET))(this);
	}
};
