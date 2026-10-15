#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/BKABEBEPPJK.h"
class JMOHKKCNCMA;
namespace RPG::GameCore { class MarbleRandomRevive; }

#define PLHFOADCAFB_CTOR_OFFSET UNITYSDK_OFFSET(0x1C9F6400)
#define PLHFOADCAFB_KDNAAOHECPD_OFFSET UNITYSDK_OFFSET(0x1C9F6410)

	class PLHFOADCAFB : public ::BKABEBEPPJK
	{
	public:
		::RPG::GameCore::MarbleRandomRevive* IGHAHBNLIJA; // 0x18
		::System::Void _ctor(::RPG::GameCore::MarbleRandomRevive* a1, ::JMOHKKCNCMA* a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::MarbleRandomRevive*, ::JMOHKKCNCMA*))((::PBYTE)hIl2Cpp + PLHFOADCAFB_CTOR_OFFSET))(this, a1, a2);
		}

		::System::Boolean KDNAAOHECPD()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + PLHFOADCAFB_KDNAAOHECPD_OFFSET))(this);
		}

	};
