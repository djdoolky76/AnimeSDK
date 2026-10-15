#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/BKABEBEPPJK.h"
class JMOHKKCNCMA;
namespace RPG::GameCore { class MarbleAddShield; }

#define FMJHPHHKLHJ_CTOR_OFFSET UNITYSDK_OFFSET(0x1CA71300)
#define FMJHPHHKLHJ_KDNAAOHECPD_OFFSET UNITYSDK_OFFSET(0x1CA71310)

	class FMJHPHHKLHJ : public ::BKABEBEPPJK
	{
	public:
		::RPG::GameCore::MarbleAddShield* IGHAHBNLIJA; // 0x18
		::System::Void _ctor(::RPG::GameCore::MarbleAddShield* a1, ::JMOHKKCNCMA* a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::MarbleAddShield*, ::JMOHKKCNCMA*))((::PBYTE)hIl2Cpp + FMJHPHHKLHJ_CTOR_OFFSET))(this, a1, a2);
		}

		::System::Boolean KDNAAOHECPD()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + FMJHPHHKLHJ_KDNAAOHECPD_OFFSET))(this);
		}

	};
