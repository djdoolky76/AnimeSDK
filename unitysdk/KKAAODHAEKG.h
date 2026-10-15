#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/BKABEBEPPJK.h"
class JMOHKKCNCMA;
namespace RPG::GameCore { class MarbleAddSkill; }

#define KKAAODHAEKG_CTOR_OFFSET UNITYSDK_OFFSET(0x1C905520)
#define KKAAODHAEKG_KDNAAOHECPD_OFFSET UNITYSDK_OFFSET(0x1C905530)

inline static constexpr unsigned int KKAAODHAEKG_TypeDefinitionIndex = 43126;

	class KKAAODHAEKG : public ::BKABEBEPPJK
	{
	public:
		::RPG::GameCore::MarbleAddSkill* IGHAHBNLIJA; // 0x18
		::System::Void _ctor(::RPG::GameCore::MarbleAddSkill* a1, ::JMOHKKCNCMA* a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::MarbleAddSkill*, ::JMOHKKCNCMA*))((::PBYTE)hIl2Cpp + KKAAODHAEKG_CTOR_OFFSET))(this, a1, a2);
		}

		::System::Boolean KDNAAOHECPD()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + KKAAODHAEKG_KDNAAOHECPD_OFFSET))(this);
		}

	};
