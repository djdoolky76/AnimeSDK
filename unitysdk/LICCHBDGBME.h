#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/BKABEBEPPJK.h"
class JMOHKKCNCMA;
namespace RPG::GameCore { class MarbleActionAgain; }

#define LICCHBDGBME_CTOR_OFFSET UNITYSDK_OFFSET(0x1C8E0B20)
#define LICCHBDGBME_KDNAAOHECPD_OFFSET UNITYSDK_OFFSET(0x1C8E0B30)

inline static constexpr unsigned int LICCHBDGBME_TypeDefinitionIndex = 43099;

	class LICCHBDGBME : public ::BKABEBEPPJK
	{
	public:
		::RPG::GameCore::MarbleActionAgain* IGHAHBNLIJA; // 0x18
		::System::Void _ctor(::RPG::GameCore::MarbleActionAgain* a1, ::JMOHKKCNCMA* a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::MarbleActionAgain*, ::JMOHKKCNCMA*))((::PBYTE)hIl2Cpp + LICCHBDGBME_CTOR_OFFSET))(this, a1, a2);
		}

		::System::Boolean KDNAAOHECPD()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + LICCHBDGBME_KDNAAOHECPD_OFFSET))(this);
		}

	};
