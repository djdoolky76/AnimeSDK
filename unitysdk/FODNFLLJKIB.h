#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/BKABEBEPPJK.h"
class JMOHKKCNCMA;
namespace RPG::GameCore { class MarbleSetDead; }

#define FODNFLLJKIB_CTOR_OFFSET UNITYSDK_OFFSET(0x1CA71BA0)
#define FODNFLLJKIB_KDNAAOHECPD_OFFSET UNITYSDK_OFFSET(0x1CA71BB0)

inline static constexpr unsigned int FODNFLLJKIB_TypeDefinitionIndex = 43115;

	class FODNFLLJKIB : public ::BKABEBEPPJK
	{
	public:
		::RPG::GameCore::MarbleSetDead* IGHAHBNLIJA; // 0x18
		::System::Void _ctor(::RPG::GameCore::MarbleSetDead* a1, ::JMOHKKCNCMA* a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::MarbleSetDead*, ::JMOHKKCNCMA*))((::PBYTE)hIl2Cpp + FODNFLLJKIB_CTOR_OFFSET))(this, a1, a2);
		}

		::System::Boolean KDNAAOHECPD()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + FODNFLLJKIB_KDNAAOHECPD_OFFSET))(this);
		}

	};
