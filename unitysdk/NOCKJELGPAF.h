#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/PKNMDKNGDNH.h"
#include "unitysdk/RPG/Client/LittleGame/FiveDim/PropMoveState.h"
class POHNBOACDHB;

#define NOCKJELGPAF_AHEEAFKFALM_OFFSET UNITYSDK_OFFSET(0xBCE7DC0)
#define NOCKJELGPAF_BPMGPFLHPLC_OFFSET UNITYSDK_OFFSET(0xBCE80A0)
#define NOCKJELGPAF_CLJEBKODGHK_OFFSET UNITYSDK_OFFSET(0xBCE7C00)
#define NOCKJELGPAF_CTOR_OFFSET UNITYSDK_OFFSET(0xBCE80F0)
#define NOCKJELGPAF_ICNEKGBHIHP_OFFSET UNITYSDK_OFFSET(0xBCE7E80)
#define NOCKJELGPAF_KFKCMNKIGDL_OFFSET UNITYSDK_OFFSET(0xBCE7EF0)
#define NOCKJELGPAF_KPJGDHLENIP_OFFSET UNITYSDK_OFFSET(0xBCE7B10)
#define NOCKJELGPAF_PAGKOAEOLKA_OFFSET UNITYSDK_OFFSET(0xBCE7F90)

	class NOCKJELGPAF : public ::PKNMDKNGDNH
	{
	public:
		::System::Single MLKDOFKEMHP; // 0x48
		::System::Single JLLAGLHOAOA; // 0x4C
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NOCKJELGPAF_CTOR_OFFSET))(this);
		}

		::System::Void KPJGDHLENIP(::POHNBOACDHB* a1)
		{
			return ((::System::Void(*)(::PVOID, ::POHNBOACDHB*))((::PBYTE)hIl2Cpp + NOCKJELGPAF_KPJGDHLENIP_OFFSET))(this, a1);
		}

		::System::Void CLJEBKODGHK(::RPG::Client::LittleGame::FiveDim::PropMoveState a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::LittleGame::FiveDim::PropMoveState))((::PBYTE)hIl2Cpp + NOCKJELGPAF_CLJEBKODGHK_OFFSET))(this, a1);
		}

		::System::Void AHEEAFKFALM(::RPG::Client::LittleGame::FiveDim::PropMoveState a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::LittleGame::FiveDim::PropMoveState))((::PBYTE)hIl2Cpp + NOCKJELGPAF_AHEEAFKFALM_OFFSET))(this, a1);
		}

		::System::Void ICNEKGBHIHP(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + NOCKJELGPAF_ICNEKGBHIHP_OFFSET))(this, a1);
		}

		::System::Void PAGKOAEOLKA(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + NOCKJELGPAF_PAGKOAEOLKA_OFFSET))(this, a1);
		}

		::System::Void KFKCMNKIGDL()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NOCKJELGPAF_KFKCMNKIGDL_OFFSET))(this);
		}

		::RPG::Client::LittleGame::FiveDim::PropMoveState BPMGPFLHPLC()
		{
			return ((::RPG::Client::LittleGame::FiveDim::PropMoveState(*)(::PVOID))((::PBYTE)hIl2Cpp + NOCKJELGPAF_BPMGPFLHPLC_OFFSET))(this);
		}

	};
