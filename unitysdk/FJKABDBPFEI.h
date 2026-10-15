#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/BKABEBEPPJK.h"
class JMOHKKCNCMA;
namespace RPG::GameCore { class MarbleBuffText; }

#define FJKABDBPFEI_CTOR_OFFSET UNITYSDK_OFFSET(0x1CA70EF0)
#define FJKABDBPFEI_KDNAAOHECPD_OFFSET UNITYSDK_OFFSET(0x1CA70F00)

	class FJKABDBPFEI : public ::BKABEBEPPJK
	{
	public:
		::RPG::GameCore::MarbleBuffText* IGHAHBNLIJA; // 0x18
		::System::Void _ctor(::RPG::GameCore::MarbleBuffText* a1, ::JMOHKKCNCMA* a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::MarbleBuffText*, ::JMOHKKCNCMA*))((::PBYTE)hIl2Cpp + FJKABDBPFEI_CTOR_OFFSET))(this, a1, a2);
		}

		::System::Boolean KDNAAOHECPD()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + FJKABDBPFEI_KDNAAOHECPD_OFFSET))(this);
		}

	};
