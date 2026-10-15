#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/LHJPMDPJPEC.h"
class JMOHKKCNCMA;
namespace RPG::GameCore { class MarbleByOtherFaction; }

#define NEOEDLCINPN_CTOR_OFFSET UNITYSDK_OFFSET(0x1C902B10)
#define NEOEDLCINPN_KHNFOOKHOJF_OFFSET UNITYSDK_OFFSET(0x1C928100)

inline static constexpr unsigned int NEOEDLCINPN_TypeDefinitionIndex = 43142;

	class NEOEDLCINPN : public ::LHJPMDPJPEC
	{
	public:
		::RPG::GameCore::MarbleByOtherFaction* IGHAHBNLIJA; // 0x30
		::System::Void _ctor(::RPG::GameCore::MarbleByOtherFaction* a1, ::JMOHKKCNCMA* a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::MarbleByOtherFaction*, ::JMOHKKCNCMA*))((::PBYTE)hIl2Cpp + NEOEDLCINPN_CTOR_OFFSET))(this, a1, a2);
		}

		::System::Boolean KHNFOOKHOJF()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + NEOEDLCINPN_KHNFOOKHOJF_OFFSET))(this);
		}

	};
