#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class FHNIKPHKIOH;
class MINAKLCBJMO;
namespace RPG::Client { class BattleGamePhase; }
namespace RPG::Client::ActivityRealityShow { class RealityShowBattlePauseViewModel; }

#define LBFNBKOAOHA_CTOR_OFFSET UNITYSDK_OFFSET(0xBE8C150)
#define LBFNBKOAOHA_IBMABKBNMGB_OFFSET UNITYSDK_OFFSET(0xBE8C4B0)
#define LBFNBKOAOHA_KCKGIPDMOAI_OFFSET UNITYSDK_OFFSET(0xBE8C200)

inline static constexpr unsigned int LBFNBKOAOHA_TypeDefinitionIndex = 84893;

	class LBFNBKOAOHA : public ::System::Object
	{
	public:
		::FHNIKPHKIOH* FPNMIGDJBIE; // 0x10
		::MINAKLCBJMO* JDGBDKHIEGG; // 0x18
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
