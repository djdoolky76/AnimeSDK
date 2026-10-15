#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/LHJPMDPJPEC.h"
class JMOHKKCNCMA;
namespace RPG::GameCore { class MarbleByIsKiller; }

#define JLJEHGHLGMC_CTOR_OFFSET UNITYSDK_OFFSET(0x1CBA3030)
#define JLJEHGHLGMC_KHNFOOKHOJF_OFFSET UNITYSDK_OFFSET(0x1CBA3040)

inline static constexpr unsigned int JLJEHGHLGMC_TypeDefinitionIndex = 43139;

	class JLJEHGHLGMC : public ::LHJPMDPJPEC
	{
	public:
		::System::Void _ctor(::RPG::GameCore::MarbleByIsKiller* a1, ::JMOHKKCNCMA* a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::MarbleByIsKiller*, ::JMOHKKCNCMA*))((::PBYTE)hIl2Cpp + JLJEHGHLGMC_CTOR_OFFSET))(this, a1, a2);
		}

		::System::Boolean KHNFOOKHOJF()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + JLJEHGHLGMC_KHNFOOKHOJF_OFFSET))(this);
		}

	};
