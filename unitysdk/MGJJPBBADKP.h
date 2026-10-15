#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/LHJPMDPJPEC.h"
class JMOHKKCNCMA;
namespace RPG::GameCore { class MarbleByHadKillThisAction; }

#define MGJJPBBADKP_CTOR_OFFSET UNITYSDK_OFFSET(0x1C92A9D0)
#define MGJJPBBADKP_KHNFOOKHOJF_OFFSET UNITYSDK_OFFSET(0x1C92A9E0)

	class MGJJPBBADKP : public ::LHJPMDPJPEC
	{
	public:
		::System::Void _ctor(::RPG::GameCore::MarbleByHadKillThisAction* a1, ::JMOHKKCNCMA* a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::MarbleByHadKillThisAction*, ::JMOHKKCNCMA*))((::PBYTE)hIl2Cpp + MGJJPBBADKP_CTOR_OFFSET))(this, a1, a2);
		}

		::System::Boolean KHNFOOKHOJF()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MGJJPBBADKP_KHNFOOKHOJF_OFFSET))(this);
		}

	};
