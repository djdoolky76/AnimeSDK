#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/EGFGCOMABKB.h"
#include "unitysdk/RPG/Client/LittleGame/FiveDim/PropMoveState.h"
class POHNBOACDHB;

#define JAFIPCMMFEK_AHEEAFKFALM_OFFSET UNITYSDK_OFFSET(0x16544470)
#define JAFIPCMMFEK_BDFCGNBMJKI_OFFSET UNITYSDK_OFFSET(0x165445B0)
#define JAFIPCMMFEK_BPMGPFLHPLC_OFFSET UNITYSDK_OFFSET(0x16544130)
#define JAFIPCMMFEK_CLJEBKODGHK_OFFSET UNITYSDK_OFFSET(0x16544250)
#define JAFIPCMMFEK_CTOR_OFFSET UNITYSDK_OFFSET(0x16544720)
#define JAFIPCMMFEK_ICNEKGBHIHP_OFFSET UNITYSDK_OFFSET(0x165444F0)
#define JAFIPCMMFEK_KPJGDHLENIP_OFFSET UNITYSDK_OFFSET(0x16544180)
#define JAFIPCMMFEK_PAGKOAEOLKA_OFFSET UNITYSDK_OFFSET(0x16544690)

inline static constexpr unsigned int JAFIPCMMFEK_TypeDefinitionIndex = 77037;

	class JAFIPCMMFEK : public ::EGFGCOMABKB
	{
	public:
		::System::Single MFPPNCEAGAO; // 0x30
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + JAFIPCMMFEK_CTOR_OFFSET))(this);
		}

		::RPG::Client::LittleGame::FiveDim::PropMoveState BPMGPFLHPLC()
		{
			return ((::RPG::Client::LittleGame::FiveDim::PropMoveState(*)(::PVOID))((::PBYTE)hIl2Cpp + JAFIPCMMFEK_BPMGPFLHPLC_OFFSET))(this);
		}

		::System::Void KPJGDHLENIP(::POHNBOACDHB* a1)
		{
			return ((::System::Void(*)(::PVOID, ::POHNBOACDHB*))((::PBYTE)hIl2Cpp + JAFIPCMMFEK_KPJGDHLENIP_OFFSET))(this, a1);
		}

		::System::Void CLJEBKODGHK(::RPG::Client::LittleGame::FiveDim::PropMoveState a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::LittleGame::FiveDim::PropMoveState))((::PBYTE)hIl2Cpp + JAFIPCMMFEK_CLJEBKODGHK_OFFSET))(this, a1);
		}

		::System::Void AHEEAFKFALM(::RPG::Client::LittleGame::FiveDim::PropMoveState a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::LittleGame::FiveDim::PropMoveState))((::PBYTE)hIl2Cpp + JAFIPCMMFEK_AHEEAFKFALM_OFFSET))(this, a1);
		}

		::System::Void ICNEKGBHIHP(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + JAFIPCMMFEK_ICNEKGBHIHP_OFFSET))(this, a1);
		}

		::System::Void PAGKOAEOLKA(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + JAFIPCMMFEK_PAGKOAEOLKA_OFFSET))(this, a1);
		}

		::System::Void BDFCGNBMJKI(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + JAFIPCMMFEK_BDFCGNBMJKI_OFFSET))(this, a1);
		}

	};
