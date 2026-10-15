#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/BKABEBEPPJK.h"
class JMOHKKCNCMA;
namespace RPG::GameCore { class MarbleSwallow; }

#define NDDCCIPGCFH_CTOR_OFFSET UNITYSDK_OFFSET(0x1C901AF0)
#define NDDCCIPGCFH_KDNAAOHECPD_OFFSET UNITYSDK_OFFSET(0x1C915F20)

inline static constexpr unsigned int NDDCCIPGCFH_TypeDefinitionIndex = 43121;

	class NDDCCIPGCFH : public ::BKABEBEPPJK
	{
	public:
		::RPG::GameCore::MarbleSwallow* IGHAHBNLIJA; // 0x18
		::System::Void _ctor(::RPG::GameCore::MarbleSwallow* a1, ::JMOHKKCNCMA* a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::MarbleSwallow*, ::JMOHKKCNCMA*))((::PBYTE)hIl2Cpp + NDDCCIPGCFH_CTOR_OFFSET))(this, a1, a2);
		}

		::System::Boolean KDNAAOHECPD()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + NDDCCIPGCFH_KDNAAOHECPD_OFFSET))(this);
		}

	};
