#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/LHJPMDPJPEC.h"
class JMOHKKCNCMA;
namespace RPG::GameCore { class MarbleByValueReach; }

#define GHBFJIHCDLD_CTOR_OFFSET UNITYSDK_OFFSET(0x1CAA1E00)
#define GHBFJIHCDLD_KHNFOOKHOJF_OFFSET UNITYSDK_OFFSET(0x1CAA1E20)

inline static constexpr unsigned int GHBFJIHCDLD_TypeDefinitionIndex = 43148;

	class GHBFJIHCDLD : public ::LHJPMDPJPEC
	{
	public:
		::RPG::GameCore::MarbleByValueReach* IGHAHBNLIJA; // 0x30
		::System::Void _ctor(::RPG::GameCore::MarbleByValueReach* a1, ::JMOHKKCNCMA* a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::MarbleByValueReach*, ::JMOHKKCNCMA*))((::PBYTE)hIl2Cpp + GHBFJIHCDLD_CTOR_OFFSET))(this, a1, a2);
		}

		::System::Boolean KHNFOOKHOJF()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + GHBFJIHCDLD_KHNFOOKHOJF_OFFSET))(this);
		}

	};
