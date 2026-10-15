#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/BKABEBEPPJK.h"
class JMOHKKCNCMA;
namespace RPG::GameCore { class PetMarbleBuffText; }

#define BMOBKFLCFLO_CTOR_OFFSET UNITYSDK_OFFSET(0x1C88EE60)
#define BMOBKFLCFLO_KDNAAOHECPD_OFFSET UNITYSDK_OFFSET(0x1C88EE70)

inline static constexpr unsigned int BMOBKFLCFLO_TypeDefinitionIndex = 43105;

	class BMOBKFLCFLO : public ::BKABEBEPPJK
	{
	public:
		::RPG::GameCore::PetMarbleBuffText* IGHAHBNLIJA; // 0x18
		::System::Void _ctor(::RPG::GameCore::PetMarbleBuffText* a1, ::JMOHKKCNCMA* a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::PetMarbleBuffText*, ::JMOHKKCNCMA*))((::PBYTE)hIl2Cpp + BMOBKFLCFLO_CTOR_OFFSET))(this, a1, a2);
		}

		::System::Boolean KDNAAOHECPD()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + BMOBKFLCFLO_KDNAAOHECPD_OFFSET))(this);
		}

	};
