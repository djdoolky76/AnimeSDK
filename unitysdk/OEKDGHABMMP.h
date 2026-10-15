#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/BKABEBEPPJK.h"
class JMOHKKCNCMA;
namespace RPG::GameCore { class MarbleMakeItemDie; }

#define OEKDGHABMMP_CTOR_OFFSET UNITYSDK_OFFSET(0x1C98C670)
#define OEKDGHABMMP_KDNAAOHECPD_OFFSET UNITYSDK_OFFSET(0x1C98C680)

	class OEKDGHABMMP : public ::BKABEBEPPJK
	{
	public:
		::RPG::GameCore::MarbleMakeItemDie* IGHAHBNLIJA; // 0x18
		::System::Void _ctor(::RPG::GameCore::MarbleMakeItemDie* a1, ::JMOHKKCNCMA* a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::MarbleMakeItemDie*, ::JMOHKKCNCMA*))((::PBYTE)hIl2Cpp + OEKDGHABMMP_CTOR_OFFSET))(this, a1, a2);
		}

		::System::Boolean KDNAAOHECPD()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + OEKDGHABMMP_KDNAAOHECPD_OFFSET))(this);
		}

	};
