#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/BEMKNPIFMBI.h"
#include "unitysdk/RPG/GameCore/FixPoint.h"
class OONGDLIDJJJ;
namespace RPG::GameCore { class CheckSkillDependencyAxis; }

#define OEBPIMHPPPL_CTOR_OFFSET UNITYSDK_OFFSET(0xBE26020)
#define OEBPIMHPPPL_MNAKIEOGPDK_OFFSET UNITYSDK_OFFSET(0xBE26030)
#define OEBPIMHPPPL_NMGFAFGOLEA_OFFSET UNITYSDK_OFFSET(0xBE260A0)

	class OEBPIMHPPPL : public ::BEMKNPIFMBI
	{
	public:
		::RPG::GameCore::CheckSkillDependencyAxis* IGHAHBNLIJA; // 0x18
		::System::Void _ctor(::RPG::GameCore::CheckSkillDependencyAxis* a1, ::OONGDLIDJJJ* a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::CheckSkillDependencyAxis*, ::OONGDLIDJJJ*))((::PBYTE)hIl2Cpp + OEBPIMHPPPL_CTOR_OFFSET))(this, a1, a2);
		}

		::RPG::GameCore::FixPoint MNAKIEOGPDK()
		{
			return ((::RPG::GameCore::FixPoint(*)(::PVOID))((::PBYTE)hIl2Cpp + OEBPIMHPPPL_MNAKIEOGPDK_OFFSET))(this);
		}

		::System::Boolean NMGFAFGOLEA(::OONGDLIDJJJ* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::OONGDLIDJJJ*))((::PBYTE)hIl2Cpp + OEBPIMHPPPL_NMGFAFGOLEA_OFFSET))(this, a1);
		}

	};
