#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/BKABEBEPPJK.h"
class JMOHKKCNCMA;
namespace RPG::GameCore { class MarbleSetFinish; }

#define NPKKNAIHIJP_CTOR_OFFSET UNITYSDK_OFFSET(0x1C977150)
#define NPKKNAIHIJP_KDNAAOHECPD_OFFSET UNITYSDK_OFFSET(0x1C977160)

	class NPKKNAIHIJP : public ::BKABEBEPPJK
	{
	public:
		::System::Void _ctor(::RPG::GameCore::MarbleSetFinish* a1, ::JMOHKKCNCMA* a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::MarbleSetFinish*, ::JMOHKKCNCMA*))((::PBYTE)hIl2Cpp + NPKKNAIHIJP_CTOR_OFFSET))(this, a1, a2);
		}

		::System::Boolean KDNAAOHECPD()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + NPKKNAIHIJP_KDNAAOHECPD_OFFSET))(this);
		}

	};
