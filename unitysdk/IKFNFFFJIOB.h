#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/BKABEBEPPJK.h"
class JMOHKKCNCMA;
namespace RPG::GameCore { class MarbleRemoveSkill; }

#define IKFNFFFJIOB_CTOR_OFFSET UNITYSDK_OFFSET(0x1DD3E4C0)
#define IKFNFFFJIOB_KDNAAOHECPD_OFFSET UNITYSDK_OFFSET(0x1DD3E4D0)

inline static constexpr unsigned int IKFNFFFJIOB_TypeDefinitionIndex = 44108;

	class IKFNFFFJIOB : public ::BKABEBEPPJK
	{
	public:
		::RPG::GameCore::MarbleRemoveSkill* IGHAHBNLIJA; // 0x18
		::System::Void _ctor(::RPG::GameCore::MarbleRemoveSkill* a1, ::JMOHKKCNCMA* a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::MarbleRemoveSkill*, ::JMOHKKCNCMA*))((::PBYTE)hIl2Cpp + IKFNFFFJIOB_CTOR_OFFSET))(this, a1, a2);
		}

		::System::Boolean KDNAAOHECPD()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + IKFNFFFJIOB_KDNAAOHECPD_OFFSET))(this);
		}

	};
