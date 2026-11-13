#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class FHNIKPHKIOH;
class MINAKLCBJMO;
namespace RPG::Client { class BattleGamePhase; }
namespace RPG::Client::ActivityRealityShow { class RealityShowBattlePauseViewModel; }

#define LBFNBKOAOHA_CTOR_OFFSET UNITYSDK_OFFSET(0x1B297B40)
#define LBFNBKOAOHA_IBMABKBNMGB_OFFSET UNITYSDK_OFFSET(0x1B297EA0)
#define LBFNBKOAOHA_KCKGIPDMOAI_OFFSET UNITYSDK_OFFSET(0x1B297BF0)

inline static constexpr unsigned int LBFNBKOAOHA_TypeDefinitionIndex = 84892;

	class LBFNBKOAOHA : public ::System::Object
	{
	public:
		::MINAKLCBJMO* JDGBDKHIEGG; // 0x10
		::FHNIKPHKIOH* FPNMIGDJBIE; // 0x18
		::System::Void _ctor(::MINAKLCBJMO* a1, ::FHNIKPHKIOH* a2)
		{
			return ((::System::Void(*)(::PVOID, ::MINAKLCBJMO*, ::FHNIKPHKIOH*))((::PBYTE)hIl2Cpp + LBFNBKOAOHA_CTOR_OFFSET))(this, a1, a2);
		}

		::RPG::Client::ActivityRealityShow::RealityShowBattlePauseViewModel* KCKGIPDMOAI()
		{
			return ((::RPG::Client::ActivityRealityShow::RealityShowBattlePauseViewModel*(*)(::PVOID))((::PBYTE)hIl2Cpp + LBFNBKOAOHA_KCKGIPDMOAI_OFFSET))(this);
		}

		static ::System::UInt32 IBMABKBNMGB(::RPG::Client::BattleGamePhase* a1)
		{
			return ((::System::UInt32(*)(::RPG::Client::BattleGamePhase*))((::PBYTE)hIl2Cpp + LBFNBKOAOHA_IBMABKBNMGB_OFFSET))(a1);
		}

	};
