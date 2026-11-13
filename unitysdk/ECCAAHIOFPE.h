#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/KEPAJLGHCKE.h"
#include "unitysdk/RPG/Client/LittleGame/FiveDim/PropMoveState.h"

#define ECCAAHIOFPE_BPMGPFLHPLC_OFFSET UNITYSDK_OFFSET(0x1C3D01B0)
#define ECCAAHIOFPE_CLJEBKODGHK_OFFSET UNITYSDK_OFFSET(0x1C3CF390)
#define ECCAAHIOFPE_CTOR_OFFSET UNITYSDK_OFFSET(0x1C3D0200)
#define ECCAAHIOFPE_ICNEKGBHIHP_OFFSET UNITYSDK_OFFSET(0x1C3CF460)
#define ECCAAHIOFPE_PAGKOAEOLKA_OFFSET UNITYSDK_OFFSET(0x1C3CF9C0)

inline static constexpr unsigned int ECCAAHIOFPE_TypeDefinitionIndex = 79391;

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
