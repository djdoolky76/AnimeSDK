#pragma once
#include "unitysdk/unitysdk.h"

namespace System { class String; }

#define FAKLLHLJKIH_ANEOCOIFDDJ_OFFSET UNITYSDK_OFFSET(0x11CCD930)
#define FAKLLHLJKIH_ONRECYCLE_OFFSET UNITYSDK_OFFSET(0x11CCD890)
#define FAKLLHLJKIH__CTOR_OFFSET UNITYSDK_OFFSET(0x11CCD8F0)

inline static constexpr unsigned int FAKLLHLJKIH_TypeDefinitionIndex = 38449;

class FAKLLHLJKIH
{
public:
	::System::String* IGMLLFPCOGE; // 0x28
	::System::Int32 MOGNHPJKAKK; // 0x30
	::System::Boolean EMEBHOBJJCA; // 0x34

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FAKLLHLJKIH__CTOR_OFFSET))(this);
	}

	::System::Void OnRecycle()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FAKLLHLJKIH_ONRECYCLE_OFFSET))(this);
	}

	::System::Void ANEOCOIFDDJ()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FAKLLHLJKIH_ANEOCOIFDDJ_OFFSET))(this);
	}
};
