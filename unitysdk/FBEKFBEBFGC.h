#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/BKABEBEPPJK.h"
class FENHNPHBIBA;
class JMOHKKCNCMA;

#define FBEKFBEBFGC_CTOR_OFFSET UNITYSDK_OFFSET(0x1CA66050)
#define FBEKFBEBFGC_KDNAAOHECPD_OFFSET UNITYSDK_OFFSET(0x1CA66060)

inline static constexpr unsigned int FBEKFBEBFGC_TypeDefinitionIndex = 43098;

	class FBEKFBEBFGC : public ::BKABEBEPPJK
	{
	public:
		::FENHNPHBIBA* IGHAHBNLIJA; // 0x18
		::System::Void _ctor(::FENHNPHBIBA* a1, ::JMOHKKCNCMA* a2)
		{
			return ((::System::Void(*)(::PVOID, ::FENHNPHBIBA*, ::JMOHKKCNCMA*))((::PBYTE)hIl2Cpp + FBEKFBEBFGC_CTOR_OFFSET))(this, a1, a2);
		}

		::System::Boolean KDNAAOHECPD()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + FBEKFBEBFGC_KDNAAOHECPD_OFFSET))(this);
		}

	};
