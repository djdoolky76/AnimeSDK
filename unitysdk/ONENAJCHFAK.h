#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/LHJPMDPJPEC.h"
class JMOHKKCNCMA;
namespace RPG::GameCore { class MarbleByTeamRound; }

#define ONENAJCHFAK_CTOR_OFFSET UNITYSDK_OFFSET(0x1C971200)
#define ONENAJCHFAK_KHNFOOKHOJF_OFFSET UNITYSDK_OFFSET(0x1C971220)

inline static constexpr unsigned int ONENAJCHFAK_TypeDefinitionIndex = 43156;

	class ONENAJCHFAK : public ::LHJPMDPJPEC
	{
	public:
		::RPG::GameCore::MarbleByTeamRound* IGHAHBNLIJA; // 0x30
		::System::Void _ctor(::RPG::GameCore::MarbleByTeamRound* a1, ::JMOHKKCNCMA* a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::MarbleByTeamRound*, ::JMOHKKCNCMA*))((::PBYTE)hIl2Cpp + ONENAJCHFAK_CTOR_OFFSET))(this, a1, a2);
		}

		::System::Boolean KHNFOOKHOJF()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + ONENAJCHFAK_KHNFOOKHOJF_OFFSET))(this);
		}

	};
