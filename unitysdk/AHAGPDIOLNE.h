#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/LHJPMDPJPEC.h"
class JMOHKKCNCMA;
namespace RPG::GameCore { class MarbleByHitLeft; }

#define AHAGPDIOLNE_CTOR_OFFSET UNITYSDK_OFFSET(0x1C88D6C0)
#define AHAGPDIOLNE_KHNFOOKHOJF_OFFSET UNITYSDK_OFFSET(0x1C88D6E0)

	class AHAGPDIOLNE : public ::LHJPMDPJPEC
	{
	public:
		::RPG::GameCore::MarbleByHitLeft* IGHAHBNLIJA; // 0x30
		::System::Void _ctor(::RPG::GameCore::MarbleByHitLeft* a1, ::JMOHKKCNCMA* a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::MarbleByHitLeft*, ::JMOHKKCNCMA*))((::PBYTE)hIl2Cpp + AHAGPDIOLNE_CTOR_OFFSET))(this, a1, a2);
		}

		::System::Boolean KHNFOOKHOJF()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + AHAGPDIOLNE_KHNFOOKHOJF_OFFSET))(this);
		}

	};
