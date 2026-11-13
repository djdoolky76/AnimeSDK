#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/BKABEBEPPJK.h"
class JMOHKKCNCMA;
namespace RPG::GameCore { class MarbleAddSkillLog; }

#define AFENONOJBME_CTOR_OFFSET UNITYSDK_OFFSET(0x1D84F8B0)
#define AFENONOJBME_KDNAAOHECPD_OFFSET UNITYSDK_OFFSET(0x1D84F8C0)

inline static constexpr unsigned int AFENONOJBME_TypeDefinitionIndex = 44112;

	class AFENONOJBME : public ::BKABEBEPPJK
	{
	public:
		::RPG::GameCore::MarbleAddSkillLog* IGHAHBNLIJA; // 0x18
		::System::Void _ctor(::RPG::GameCore::MarbleAddSkillLog* a1, ::JMOHKKCNCMA* a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::MarbleAddSkillLog*, ::JMOHKKCNCMA*))((::PBYTE)hIl2Cpp + AFENONOJBME_CTOR_OFFSET))(this, a1, a2);
		}

		::System::Boolean KDNAAOHECPD()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + AFENONOJBME_KDNAAOHECPD_OFFSET))(this);
		}

	};
