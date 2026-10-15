#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class FCOEMCEDLNL;
class PMONKDKNIFG;
namespace System { class String; }

#define PMONKDKNIFG_CTOR_OFFSET UNITYSDK_OFFSET(0x1D30CFD0)
#define PMONKDKNIFG_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1D30CD90)

	class PMONKDKNIFG : public ::System::Object
	{
	public:
		::System::String* JHPNHNFJAJJ; // 0x10
		::System::String* ILPOIGJFLFM; // 0x18
		::System::UInt32 EOFGAIBKBNM; // 0x20
		::System::UInt32 BMAJPBPJNGD; // 0x24
		::System::UInt32 LLKBBKNBNBG; // 0x28
		::System::UInt32 PKGJBPODCOG; // 0x2C
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + PMONKDKNIFG_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::PMONKDKNIFG* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::PMONKDKNIFG*))((::PBYTE)hIl2Cpp + PMONKDKNIFG_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

	};
