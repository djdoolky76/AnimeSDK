#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/LHJPMDPJPEC.h"
class JMOHKKCNCMA;
namespace RPG::GameCore { class MarbleBySpineDamage; }

#define KNGBOACMDOP_CTOR_OFFSET UNITYSDK_OFFSET(0x1C909850)
#define KNGBOACMDOP_KHNFOOKHOJF_OFFSET UNITYSDK_OFFSET(0x1C909920)

	class KNGBOACMDOP : public ::LHJPMDPJPEC
	{
	public:
		::RPG::GameCore::MarbleBySpineDamage* IGHAHBNLIJA; // 0x30
		::System::Void _ctor(::RPG::GameCore::MarbleBySpineDamage* a1, ::JMOHKKCNCMA* a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::MarbleBySpineDamage*, ::JMOHKKCNCMA*))((::PBYTE)hIl2Cpp + KNGBOACMDOP_CTOR_OFFSET))(this, a1, a2);
		}

		::System::Boolean KHNFOOKHOJF()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + KNGBOACMDOP_KHNFOOKHOJF_OFFSET))(this);
		}

	};
