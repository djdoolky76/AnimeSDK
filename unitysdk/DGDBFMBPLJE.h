#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/BKABEBEPPJK.h"
class JMOHKKCNCMA;
namespace RPG::GameCore { class MarbleTriggerEffect; }

#define DGDBFMBPLJE_CTOR_OFFSET UNITYSDK_OFFSET(0x1CA28D50)
#define DGDBFMBPLJE_KDNAAOHECPD_OFFSET UNITYSDK_OFFSET(0x1CA28D60)

inline static constexpr unsigned int DGDBFMBPLJE_TypeDefinitionIndex = 43102;

	class DGDBFMBPLJE : public ::BKABEBEPPJK
	{
	public:
		::RPG::GameCore::MarbleTriggerEffect* IGHAHBNLIJA; // 0x18
		::System::Void _ctor(::RPG::GameCore::MarbleTriggerEffect* a1, ::JMOHKKCNCMA* a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::MarbleTriggerEffect*, ::JMOHKKCNCMA*))((::PBYTE)hIl2Cpp + DGDBFMBPLJE_CTOR_OFFSET))(this, a1, a2);
		}

		::System::Boolean KDNAAOHECPD()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + DGDBFMBPLJE_KDNAAOHECPD_OFFSET))(this);
		}

	};
