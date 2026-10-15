#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/BKABEBEPPJK.h"
class JMOHKKCNCMA;
namespace RPG::GameCore { class MarbleRegisterGhostFire; }

#define LFDEICBDLEN_CTOR_OFFSET UNITYSDK_OFFSET(0x1C8DF100)
#define LFDEICBDLEN_KDNAAOHECPD_OFFSET UNITYSDK_OFFSET(0x1C8DF110)

inline static constexpr unsigned int LFDEICBDLEN_TypeDefinitionIndex = 43118;

	class LFDEICBDLEN : public ::BKABEBEPPJK
	{
	public:
		::RPG::GameCore::MarbleRegisterGhostFire* IGHAHBNLIJA; // 0x18
		::System::Void _ctor(::RPG::GameCore::MarbleRegisterGhostFire* a1, ::JMOHKKCNCMA* a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::MarbleRegisterGhostFire*, ::JMOHKKCNCMA*))((::PBYTE)hIl2Cpp + LFDEICBDLEN_CTOR_OFFSET))(this, a1, a2);
		}

		::System::Boolean KDNAAOHECPD()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + LFDEICBDLEN_KDNAAOHECPD_OFFSET))(this);
		}

	};
