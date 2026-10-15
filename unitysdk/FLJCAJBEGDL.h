#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/LHJPMDPJPEC.h"
class JMOHKKCNCMA;
namespace RPG::GameCore { class MarbleByExtraRound; }

#define FLJCAJBEGDL_CTOR_OFFSET UNITYSDK_OFFSET(0x1CA71160)
#define FLJCAJBEGDL_KHNFOOKHOJF_OFFSET UNITYSDK_OFFSET(0x1CA71180)

inline static constexpr unsigned int FLJCAJBEGDL_TypeDefinitionIndex = 43157;

	class FLJCAJBEGDL : public ::LHJPMDPJPEC
	{
	public:
		::RPG::GameCore::MarbleByExtraRound* IGHAHBNLIJA; // 0x30
		::System::Void _ctor(::RPG::GameCore::MarbleByExtraRound* a1, ::JMOHKKCNCMA* a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::MarbleByExtraRound*, ::JMOHKKCNCMA*))((::PBYTE)hIl2Cpp + FLJCAJBEGDL_CTOR_OFFSET))(this, a1, a2);
		}

		::System::Boolean KHNFOOKHOJF()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + FLJCAJBEGDL_KHNFOOKHOJF_OFFSET))(this);
		}

	};
