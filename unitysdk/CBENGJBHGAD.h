#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/HOCBJOJNLLC.h"
class NFAHODNHEKK;

#define CBENGJBHGAD_CTOR_OFFSET UNITYSDK_OFFSET(0x170378C0)
#define CBENGJBHGAD_EHIEIKKCEHJ_OFFSET UNITYSDK_OFFSET(0x17037920)
#define CBENGJBHGAD_FCKDPOPNLIB_OFFSET UNITYSDK_OFFSET(0x170378D0)
#define CBENGJBHGAD_TICK_OFFSET UNITYSDK_OFFSET(0x17037970)

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
