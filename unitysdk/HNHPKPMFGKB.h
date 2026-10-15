#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/BKABEBEPPJK.h"
class IAJLOFLABIB;
class JMOHKKCNCMA;

#define HNHPKPMFGKB_CTOR_OFFSET UNITYSDK_OFFSET(0x1CAC4D70)
#define HNHPKPMFGKB_KDNAAOHECPD_OFFSET UNITYSDK_OFFSET(0x1CAC4D80)

inline static constexpr unsigned int HNHPKPMFGKB_TypeDefinitionIndex = 43112;

	class HNHPKPMFGKB : public ::BKABEBEPPJK
	{
	public:
		::IAJLOFLABIB* IGHAHBNLIJA; // 0x18
		::System::Void _ctor(::IAJLOFLABIB* a1, ::JMOHKKCNCMA* a2)
		{
			return ((::System::Void(*)(::PVOID, ::IAJLOFLABIB*, ::JMOHKKCNCMA*))((::PBYTE)hIl2Cpp + HNHPKPMFGKB_CTOR_OFFSET))(this, a1, a2);
		}

		::System::Boolean KDNAAOHECPD()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + HNHPKPMFGKB_KDNAAOHECPD_OFFSET))(this);
		}

	};
