#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/OBIHLELOFCO.h"
#include "unitysdk/RPG/Client/LittleGame/FiveDim/PropMoveState.h"
class POHNBOACDHB;

#define EHBFGKBBEGL_BPMGPFLHPLC_OFFSET UNITYSDK_OFFSET(0x1549DB80)
#define EHBFGKBBEGL_CLJEBKODGHK_OFFSET UNITYSDK_OFFSET(0x1549D6B0)
#define EHBFGKBBEGL_CTOR_OFFSET UNITYSDK_OFFSET(0x1549DBD0)
#define EHBFGKBBEGL_ICNEKGBHIHP_OFFSET UNITYSDK_OFFSET(0x1549D980)
#define EHBFGKBBEGL_KPJGDHLENIP_OFFSET UNITYSDK_OFFSET(0x1549D610)
#define EHBFGKBBEGL_OBHDOEKFBAO_OFFSET UNITYSDK_OFFSET(0x1549D9F0)
#define EHBFGKBBEGL_PAGKOAEOLKA_OFFSET UNITYSDK_OFFSET(0x1549DAC0)

	class EHBFGKBBEGL : public ::OBIHLELOFCO
	{
	public:
		::System::Single JIFNJODLFBG; // 0x58
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + EHBFGKBBEGL_CTOR_OFFSET))(this);
		}

		::System::Void KPJGDHLENIP(::POHNBOACDHB* a1)
		{
			return ((::System::Void(*)(::PVOID, ::POHNBOACDHB*))((::PBYTE)hIl2Cpp + EHBFGKBBEGL_KPJGDHLENIP_OFFSET))(this, a1);
		}

		::System::Void CLJEBKODGHK(::RPG::Client::LittleGame::FiveDim::PropMoveState a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::LittleGame::FiveDim::PropMoveState))((::PBYTE)hIl2Cpp + EHBFGKBBEGL_CLJEBKODGHK_OFFSET))(this, a1);
		}

		::System::Void ICNEKGBHIHP(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + EHBFGKBBEGL_ICNEKGBHIHP_OFFSET))(this, a1);
		}

		::System::Void PAGKOAEOLKA(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + EHBFGKBBEGL_PAGKOAEOLKA_OFFSET))(this, a1);
		}

		::System::Void OBHDOEKFBAO(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + EHBFGKBBEGL_OBHDOEKFBAO_OFFSET))(this, a1);
		}

		::RPG::Client::LittleGame::FiveDim::PropMoveState BPMGPFLHPLC()
		{
			return ((::RPG::Client::LittleGame::FiveDim::PropMoveState(*)(::PVOID))((::PBYTE)hIl2Cpp + EHBFGKBBEGL_BPMGPFLHPLC_OFFSET))(this);
		}

	};
