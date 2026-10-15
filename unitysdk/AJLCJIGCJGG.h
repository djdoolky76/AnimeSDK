#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/LHJPMDPJPEC.h"
class JMOHKKCNCMA;
namespace RPG::GameCore { class MarbleByCompareSkillRound; }

#define AJLCJIGCJGG_CTOR_OFFSET UNITYSDK_OFFSET(0x1C88FF30)
#define AJLCJIGCJGG_KHNFOOKHOJF_OFFSET UNITYSDK_OFFSET(0x1C88FF50)

inline static constexpr unsigned int AJLCJIGCJGG_TypeDefinitionIndex = 43149;

	class AJLCJIGCJGG : public ::LHJPMDPJPEC
	{
	public:
		::RPG::GameCore::MarbleByCompareSkillRound* IGHAHBNLIJA; // 0x30
		::System::Void _ctor(::RPG::GameCore::MarbleByCompareSkillRound* a1, ::JMOHKKCNCMA* a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::MarbleByCompareSkillRound*, ::JMOHKKCNCMA*))((::PBYTE)hIl2Cpp + AJLCJIGCJGG_CTOR_OFFSET))(this, a1, a2);
		}

		::System::Boolean KHNFOOKHOJF()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + AJLCJIGCJGG_KHNFOOKHOJF_OFFSET))(this);
		}

	};
