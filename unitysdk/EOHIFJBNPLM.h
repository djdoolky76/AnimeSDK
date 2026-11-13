#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/HOCBJOJNLLC.h"
class NFAHODNHEKK;

#define EOHIFJBNPLM_CTOR_OFFSET UNITYSDK_OFFSET(0x1BA8D710)
#define EOHIFJBNPLM_EHIEIKKCEHJ_OFFSET UNITYSDK_OFFSET(0x1BA8D9B0)
#define EOHIFJBNPLM_FCKDPOPNLIB_OFFSET UNITYSDK_OFFSET(0x1BA8D720)
#define EOHIFJBNPLM_IBJBGBFELJD_OFFSET UNITYSDK_OFFSET(0x1BA8E0B0)
#define EOHIFJBNPLM_IGMCAEEKIMA_OFFSET UNITYSDK_OFFSET(0x1BA8E110)
#define EOHIFJBNPLM_OKBCEOELLCE_OFFSET UNITYSDK_OFFSET(0x1BA8E220)
#define EOHIFJBNPLM_PDLDBMAAGFA_OFFSET UNITYSDK_OFFSET(0x1BA8E170)
#define EOHIFJBNPLM_TICK_OFFSET UNITYSDK_OFFSET(0x1BA8DEA0)

inline static constexpr unsigned int EOHIFJBNPLM_TypeDefinitionIndex = 38279;

	class EOHIFJBNPLM : public ::HOCBJOJNLLC
	{
	public:
		::System::UInt32 EONJGNKIIJI; // 0x28
		::System::UInt32 APDBEMLKDEG; // 0x2C
		::System::UInt32 GCCGFAMEJEP; // 0x30
		::System::Boolean EGKJOBJOLIH; // 0x34
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + EOHIFJBNPLM_CTOR_OFFSET))(this);
		}

		::System::Void FCKDPOPNLIB(::NFAHODNHEKK* a1)
		{
			return ((::System::Void(*)(::PVOID, ::NFAHODNHEKK*))((::PBYTE)hIl2Cpp + EOHIFJBNPLM_FCKDPOPNLIB_OFFSET))(this, a1);
		}

		::System::Void EHIEIKKCEHJ(::NFAHODNHEKK* a1)
		{
			return ((::System::Void(*)(::PVOID, ::NFAHODNHEKK*))((::PBYTE)hIl2Cpp + EOHIFJBNPLM_EHIEIKKCEHJ_OFFSET))(this, a1);
		}

		::System::Void Tick(::NFAHODNHEKK* a1)
		{
			return ((::System::Void(*)(::PVOID, ::NFAHODNHEKK*))((::PBYTE)hIl2Cpp + EOHIFJBNPLM_TICK_OFFSET))(this, a1);
		}

		::System::Boolean IBJBGBFELJD(::System::UInt64 a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::UInt64))((::PBYTE)hIl2Cpp + EOHIFJBNPLM_IBJBGBFELJD_OFFSET))(this, a1);
		}

		::System::Boolean IGMCAEEKIMA(::System::UInt64 a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::UInt64))((::PBYTE)hIl2Cpp + EOHIFJBNPLM_IGMCAEEKIMA_OFFSET))(this, a1);
		}

		::System::Boolean PDLDBMAAGFA(::NFAHODNHEKK* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::NFAHODNHEKK*))((::PBYTE)hIl2Cpp + EOHIFJBNPLM_PDLDBMAAGFA_OFFSET))(this, a1);
		}

		::System::Void OKBCEOELLCE(::NFAHODNHEKK* a1)
		{
			return ((::System::Void(*)(::PVOID, ::NFAHODNHEKK*))((::PBYTE)hIl2Cpp + EOHIFJBNPLM_OKBCEOELLCE_OFFSET))(this, a1);
		}

	};
