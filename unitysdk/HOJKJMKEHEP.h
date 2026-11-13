#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/LHJPMDPJPEC.h"
class JMOHKKCNCMA;
namespace RPG::GameCore { class MarbleByCompareBuffCount; }

#define HOJKJMKEHEP_CTOR_OFFSET UNITYSDK_OFFSET(0x1EFB9E60)
#define HOJKJMKEHEP_KHNFOOKHOJF_OFFSET UNITYSDK_OFFSET(0x1EFB9E80)

inline static constexpr unsigned int HOJKJMKEHEP_TypeDefinitionIndex = 44128;

	class HOJKJMKEHEP : public ::LHJPMDPJPEC
	{
	public:
		::RPG::GameCore::MarbleByCompareBuffCount* IGHAHBNLIJA; // 0x30
		::System::Void _ctor(::RPG::GameCore::MarbleByCompareBuffCount* a1, ::JMOHKKCNCMA* a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::MarbleByCompareBuffCount*, ::JMOHKKCNCMA*))((::PBYTE)hIl2Cpp + HOJKJMKEHEP_CTOR_OFFSET))(this, a1, a2);
		}

		::System::Boolean KHNFOOKHOJF()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + HOJKJMKEHEP_KHNFOOKHOJF_OFFSET))(this);
		}

	};
