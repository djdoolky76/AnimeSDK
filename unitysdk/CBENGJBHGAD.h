#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/HOCBJOJNLLC.h"
class NFAHODNHEKK;

#define CBENGJBHGAD_CTOR_OFFSET UNITYSDK_OFFSET(0x1D74B4B0)
#define CBENGJBHGAD_EHIEIKKCEHJ_OFFSET UNITYSDK_OFFSET(0x1D74B510)
#define CBENGJBHGAD_FCKDPOPNLIB_OFFSET UNITYSDK_OFFSET(0x1D74B4C0)
#define CBENGJBHGAD_TICK_OFFSET UNITYSDK_OFFSET(0x1D74B560)

inline static constexpr unsigned int CBENGJBHGAD_TypeDefinitionIndex = 37018;

	class CBENGJBHGAD : public ::HOCBJOJNLLC
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CBENGJBHGAD_CTOR_OFFSET))(this);
		}

		::System::Void FCKDPOPNLIB(::NFAHODNHEKK* a1)
		{
			return ((::System::Void(*)(::PVOID, ::NFAHODNHEKK*))((::PBYTE)hIl2Cpp + CBENGJBHGAD_FCKDPOPNLIB_OFFSET))(this, a1);
		}

		::System::Void EHIEIKKCEHJ(::NFAHODNHEKK* a1)
		{
			return ((::System::Void(*)(::PVOID, ::NFAHODNHEKK*))((::PBYTE)hIl2Cpp + CBENGJBHGAD_EHIEIKKCEHJ_OFFSET))(this, a1);
		}

		::System::Void Tick(::NFAHODNHEKK* a1)
		{
			return ((::System::Void(*)(::PVOID, ::NFAHODNHEKK*))((::PBYTE)hIl2Cpp + CBENGJBHGAD_TICK_OFFSET))(this, a1);
		}

	};
