#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/LHJPMDPJPEC.h"
class JMOHKKCNCMA;
namespace RPG::GameCore { class MarbleByDefenderFaction; }

#define DIGONHKAIIA_CTOR_OFFSET UNITYSDK_OFFSET(0x1C9FC1E0)
#define DIGONHKAIIA_KHNFOOKHOJF_OFFSET UNITYSDK_OFFSET(0x1C9FC200)

inline static constexpr unsigned int DIGONHKAIIA_TypeDefinitionIndex = 43141;

	class DIGONHKAIIA : public ::LHJPMDPJPEC
	{
	public:
		::RPG::GameCore::MarbleByDefenderFaction* IGHAHBNLIJA; // 0x30
		::System::Void _ctor(::RPG::GameCore::MarbleByDefenderFaction* a1, ::JMOHKKCNCMA* a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::MarbleByDefenderFaction*, ::JMOHKKCNCMA*))((::PBYTE)hIl2Cpp + DIGONHKAIIA_CTOR_OFFSET))(this, a1, a2);
		}

		::System::Boolean KHNFOOKHOJF()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + DIGONHKAIIA_KHNFOOKHOJF_OFFSET))(this);
		}

	};
