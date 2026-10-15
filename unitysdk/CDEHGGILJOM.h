#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class DPDHMOALAFG;
class NDJHNDLKOLN;
class PIPDCBLLPDI;

#define CDEHGGILJOM_CTOR_OFFSET UNITYSDK_OFFSET(0x1C549770)
#define CDEHGGILJOM_NMMPKFCNKEN_OFFSET UNITYSDK_OFFSET(0x1C549780)

	class CDEHGGILJOM : public ::System::Object
	{
	public:
		::NDJHNDLKOLN* AHACKGAOMKB; // 0x10
		::PIPDCBLLPDI* BAOINEPGGPK; // 0x18
		::System::Void _ctor(::NDJHNDLKOLN* a1, ::PIPDCBLLPDI* a2)
		{
			return ((::System::Void(*)(::PVOID, ::NDJHNDLKOLN*, ::PIPDCBLLPDI*))((::PBYTE)hIl2Cpp + CDEHGGILJOM_CTOR_OFFSET))(this, a1, a2);
		}

		::DPDHMOALAFG* NMMPKFCNKEN(::System::UInt32 a1)
		{
			return ((::DPDHMOALAFG*(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + CDEHGGILJOM_NMMPKFCNKEN_OFFSET))(this, a1);
		}

	};
