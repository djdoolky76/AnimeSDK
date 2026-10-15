#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/LHJPMDPJPEC.h"
class JMOHKKCNCMA;
namespace RPG::GameCore { class MarbleByIsDefender; }

#define AKHCLHMNIGJ_CTOR_OFFSET UNITYSDK_OFFSET(0x1C8900F0)
#define AKHCLHMNIGJ_KHNFOOKHOJF_OFFSET UNITYSDK_OFFSET(0x1C890100)

	class AKHCLHMNIGJ : public ::LHJPMDPJPEC
	{
	public:
		::System::Void _ctor(::RPG::GameCore::MarbleByIsDefender* a1, ::JMOHKKCNCMA* a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::MarbleByIsDefender*, ::JMOHKKCNCMA*))((::PBYTE)hIl2Cpp + AKHCLHMNIGJ_CTOR_OFFSET))(this, a1, a2);
		}

		::System::Boolean KHNFOOKHOJF()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + AKHCLHMNIGJ_KHNFOOKHOJF_OFFSET))(this);
		}

	};
