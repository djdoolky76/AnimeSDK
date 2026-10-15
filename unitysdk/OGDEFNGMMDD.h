#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/BKABEBEPPJK.h"
class JMOHKKCNCMA;
namespace RPG::GameCore { class MarbleAddBuff; }

#define OGDEFNGMMDD_CTOR_OFFSET UNITYSDK_OFFSET(0x1C98CEE0)
#define OGDEFNGMMDD_KDNAAOHECPD_OFFSET UNITYSDK_OFFSET(0x1C98CEF0)

	class OGDEFNGMMDD : public ::BKABEBEPPJK
	{
	public:
		::RPG::GameCore::MarbleAddBuff* IGHAHBNLIJA; // 0x18
		::System::Void _ctor(::RPG::GameCore::MarbleAddBuff* a1, ::JMOHKKCNCMA* a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::MarbleAddBuff*, ::JMOHKKCNCMA*))((::PBYTE)hIl2Cpp + OGDEFNGMMDD_CTOR_OFFSET))(this, a1, a2);
		}

		::System::Boolean KDNAAOHECPD()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + OGDEFNGMMDD_KDNAAOHECPD_OFFSET))(this);
		}

	};
