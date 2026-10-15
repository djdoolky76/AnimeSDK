#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/BKABEBEPPJK.h"
class JMOHKKCNCMA;
namespace RPG::GameCore { class MarbleRemoveBuff; }

#define LOIKPPMHNPJ_CTOR_OFFSET UNITYSDK_OFFSET(0x1C91ED70)
#define LOIKPPMHNPJ_KDNAAOHECPD_OFFSET UNITYSDK_OFFSET(0x1C91ED80)

	class LOIKPPMHNPJ : public ::BKABEBEPPJK
	{
	public:
		::RPG::GameCore::MarbleRemoveBuff* IGHAHBNLIJA; // 0x18
		::System::Void _ctor(::RPG::GameCore::MarbleRemoveBuff* a1, ::JMOHKKCNCMA* a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::MarbleRemoveBuff*, ::JMOHKKCNCMA*))((::PBYTE)hIl2Cpp + LOIKPPMHNPJ_CTOR_OFFSET))(this, a1, a2);
		}

		::System::Boolean KDNAAOHECPD()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + LOIKPPMHNPJ_KDNAAOHECPD_OFFSET))(this);
		}

	};
