#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/GKIPJBKNCNB.h"
#include "unitysdk/RPG/Client/LittleGame/FiveDim/PropMoveState.h"

#define MDHAJBBMIJC_BPMGPFLHPLC_OFFSET UNITYSDK_OFFSET(0xB89D5F0)
#define MDHAJBBMIJC_CTOR_OFFSET UNITYSDK_OFFSET(0xB89D640)
#define MDHAJBBMIJC_ICNEKGBHIHP_OFFSET UNITYSDK_OFFSET(0xB89D490)
#define MDHAJBBMIJC_PAGKOAEOLKA_OFFSET UNITYSDK_OFFSET(0xB89D500)

inline static constexpr unsigned int MDHAJBBMIJC_TypeDefinitionIndex = 77048;

	class MDHAJBBMIJC : public ::GKIPJBKNCNB
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MDHAJBBMIJC_CTOR_OFFSET))(this);
		}

		::System::Void ICNEKGBHIHP(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + MDHAJBBMIJC_ICNEKGBHIHP_OFFSET))(this, a1);
		}

		::System::Void PAGKOAEOLKA(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + MDHAJBBMIJC_PAGKOAEOLKA_OFFSET))(this, a1);
		}

		::RPG::Client::LittleGame::FiveDim::PropMoveState BPMGPFLHPLC()
		{
			return ((::RPG::Client::LittleGame::FiveDim::PropMoveState(*)(::PVOID))((::PBYTE)hIl2Cpp + MDHAJBBMIJC_BPMGPFLHPLC_OFFSET))(this);
		}

	};
