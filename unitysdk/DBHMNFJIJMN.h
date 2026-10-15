#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/LHJPMDPJPEC.h"
class JMOHKKCNCMA;
namespace RPG::GameCore { class MarbleByImmuneAttackBack; }

#define DBHMNFJIJMN_CTOR_OFFSET UNITYSDK_OFFSET(0x1CA14120)
#define DBHMNFJIJMN_KHNFOOKHOJF_OFFSET UNITYSDK_OFFSET(0x1CA14140)

inline static constexpr unsigned int DBHMNFJIJMN_TypeDefinitionIndex = 43160;

	class DBHMNFJIJMN : public ::LHJPMDPJPEC
	{
	public:
		::RPG::GameCore::MarbleByImmuneAttackBack* IGHAHBNLIJA; // 0x30
		::System::Void _ctor(::RPG::GameCore::MarbleByImmuneAttackBack* a1, ::JMOHKKCNCMA* a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::MarbleByImmuneAttackBack*, ::JMOHKKCNCMA*))((::PBYTE)hIl2Cpp + DBHMNFJIJMN_CTOR_OFFSET))(this, a1, a2);
		}

		::System::Boolean KHNFOOKHOJF()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + DBHMNFJIJMN_KHNFOOKHOJF_OFFSET))(this);
		}

	};
