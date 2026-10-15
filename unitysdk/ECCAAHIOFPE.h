#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/KEPAJLGHCKE.h"
#include "unitysdk/RPG/Client/LittleGame/FiveDim/PropMoveState.h"

#define ECCAAHIOFPE_BPMGPFLHPLC_OFFSET UNITYSDK_OFFSET(0x12D06E50)
#define ECCAAHIOFPE_CLJEBKODGHK_OFFSET UNITYSDK_OFFSET(0x12D06020)
#define ECCAAHIOFPE_CTOR_OFFSET UNITYSDK_OFFSET(0x12D06EA0)
#define ECCAAHIOFPE_ICNEKGBHIHP_OFFSET UNITYSDK_OFFSET(0x12D060F0)
#define ECCAAHIOFPE_PAGKOAEOLKA_OFFSET UNITYSDK_OFFSET(0x12D06650)

inline static constexpr unsigned int ECCAAHIOFPE_TypeDefinitionIndex = 77058;

	class ECCAAHIOFPE : public ::KEPAJLGHCKE
	{
	public:
		::System::Boolean KMJDOBGMBAF; // 0x78
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ECCAAHIOFPE_CTOR_OFFSET))(this);
		}

		::System::Void CLJEBKODGHK(::RPG::Client::LittleGame::FiveDim::PropMoveState a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::LittleGame::FiveDim::PropMoveState))((::PBYTE)hIl2Cpp + ECCAAHIOFPE_CLJEBKODGHK_OFFSET))(this, a1);
		}

		::System::Void ICNEKGBHIHP(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + ECCAAHIOFPE_ICNEKGBHIHP_OFFSET))(this, a1);
		}

		::System::Void PAGKOAEOLKA(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + ECCAAHIOFPE_PAGKOAEOLKA_OFFSET))(this, a1);
		}

		::RPG::Client::LittleGame::FiveDim::PropMoveState BPMGPFLHPLC()
		{
			return ((::RPG::Client::LittleGame::FiveDim::PropMoveState(*)(::PVOID))((::PBYTE)hIl2Cpp + ECCAAHIOFPE_BPMGPFLHPLC_OFFSET))(this);
		}

	};
