#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/TaskConfig.h"
class FCOEMCEDLNL;
class FHDGGEBJGCO;
namespace RPG::GameCore { class FiveDimRandomBubbleTalkInfoGroup; }

#define FHDGGEBJGCO_CTOR_OFFSET UNITYSDK_OFFSET(0x1CDF0DB0)
#define FHDGGEBJGCO_MGMEGEDLMAK_OFFSET UNITYSDK_OFFSET(0x1CDF0DC0)
#define FHDGGEBJGCO_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1CDF0D70)

	class FHDGGEBJGCO : public ::RPG::GameCore::TaskConfig
	{
	public:
		::Il2CppArray<::RPG::GameCore::FiveDimRandomBubbleTalkInfoGroup*>* JDJDBKFDIPB; // 0x18
		::System::UInt32 AHGIENEMKFI; // 0x20
		::System::Boolean LHPMNOHBIMI; // 0x24
		::System::Boolean BNIMJJNOLAI; // 0x25
		::System::Byte _padding0[0x2];
		::System::Single OKILLMNGPGB; // 0x28
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FHDGGEBJGCO_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::FHDGGEBJGCO* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::FHDGGEBJGCO*))((::PBYTE)hIl2Cpp + FHDGGEBJGCO_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

		static ::System::Void MGMEGEDLMAK(::FCOEMCEDLNL* a1, ::FHDGGEBJGCO* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::FHDGGEBJGCO*))((::PBYTE)hIl2Cpp + FHDGGEBJGCO_MGMEGEDLMAK_OFFSET))(a1, a2);
		}

	};
