#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/BKABEBEPPJK.h"
class JMOHKKCNCMA;
namespace RPG::GameCore { class MarbleImmuneAttackBack; }

#define OMJLIPKGEKA_CTOR_OFFSET UNITYSDK_OFFSET(0x1C99DDD0)
#define OMJLIPKGEKA_KDNAAOHECPD_OFFSET UNITYSDK_OFFSET(0x1C99DDE0)

	class OMJLIPKGEKA : public ::BKABEBEPPJK
	{
	public:
		::RPG::GameCore::MarbleImmuneAttackBack* IGHAHBNLIJA; // 0x18
		::System::Void _ctor(::RPG::GameCore::MarbleImmuneAttackBack* a1, ::JMOHKKCNCMA* a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::MarbleImmuneAttackBack*, ::JMOHKKCNCMA*))((::PBYTE)hIl2Cpp + OMJLIPKGEKA_CTOR_OFFSET))(this, a1, a2);
		}

		::System::Boolean KDNAAOHECPD()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + OMJLIPKGEKA_KDNAAOHECPD_OFFSET))(this);
		}

	};
