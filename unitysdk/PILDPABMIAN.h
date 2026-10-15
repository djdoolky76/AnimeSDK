#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/LHJPMDPJPEC.h"
class JMOHKKCNCMA;
namespace RPG::GameCore { class MarbleByTeamOnFieldCount; }

#define PILDPABMIAN_CTOR_OFFSET UNITYSDK_OFFSET(0x1C9BB290)
#define PILDPABMIAN_KHNFOOKHOJF_OFFSET UNITYSDK_OFFSET(0x1C9BB2B0)

inline static constexpr unsigned int PILDPABMIAN_TypeDefinitionIndex = 43155;

	class PILDPABMIAN : public ::LHJPMDPJPEC
	{
	public:
		::RPG::GameCore::MarbleByTeamOnFieldCount* IGHAHBNLIJA; // 0x30
		::System::Void _ctor(::RPG::GameCore::MarbleByTeamOnFieldCount* a1, ::JMOHKKCNCMA* a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::MarbleByTeamOnFieldCount*, ::JMOHKKCNCMA*))((::PBYTE)hIl2Cpp + PILDPABMIAN_CTOR_OFFSET))(this, a1, a2);
		}

		::System::Boolean KHNFOOKHOJF()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + PILDPABMIAN_KHNFOOKHOJF_OFFSET))(this);
		}

	};
