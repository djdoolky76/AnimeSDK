#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/BKABEBEPPJK.h"
class JMOHKKCNCMA;
namespace RPG::GameCore { class MarbleSetTechActive; }

#define CMDHADFNKJB_CTOR_OFFSET UNITYSDK_OFFSET(0x1CA13070)
#define CMDHADFNKJB_KDNAAOHECPD_OFFSET UNITYSDK_OFFSET(0x1CA13080)

	class CMDHADFNKJB : public ::BKABEBEPPJK
	{
	public:
		::RPG::GameCore::MarbleSetTechActive* IGHAHBNLIJA; // 0x18
		::System::Void _ctor(::RPG::GameCore::MarbleSetTechActive* a1, ::JMOHKKCNCMA* a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::MarbleSetTechActive*, ::JMOHKKCNCMA*))((::PBYTE)hIl2Cpp + CMDHADFNKJB_CTOR_OFFSET))(this, a1, a2);
		}

		::System::Boolean KDNAAOHECPD()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CMDHADFNKJB_KDNAAOHECPD_OFFSET))(this);
		}

	};
