#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/PKNMDKNGDNH.h"
#include "unitysdk/RPG/Client/LittleGame/FiveDim/PropMoveState.h"
class POHNBOACDHB;

#define NOCKJELGPAF_AHEEAFKFALM_OFFSET UNITYSDK_OFFSET(0xC5D3D90)
#define NOCKJELGPAF_BPMGPFLHPLC_OFFSET UNITYSDK_OFFSET(0xC5D4070)
#define NOCKJELGPAF_CLJEBKODGHK_OFFSET UNITYSDK_OFFSET(0xC5D3BD0)
#define NOCKJELGPAF_CTOR_OFFSET UNITYSDK_OFFSET(0xC5D40C0)
#define NOCKJELGPAF_ICNEKGBHIHP_OFFSET UNITYSDK_OFFSET(0xC5D3E50)
#define NOCKJELGPAF_KFKCMNKIGDL_OFFSET UNITYSDK_OFFSET(0xC5D3EC0)
#define NOCKJELGPAF_KPJGDHLENIP_OFFSET UNITYSDK_OFFSET(0xC5D3A20)
#define NOCKJELGPAF_PAGKOAEOLKA_OFFSET UNITYSDK_OFFSET(0xC5D3F60)

inline static constexpr unsigned int NOCKJELGPAF_TypeDefinitionIndex = 79389;

	class NOCKJELGPAF : public ::PKNMDKNGDNH
	{
	public:
		::System::Single JLLAGLHOAOA; // 0x48
		::System::Single MLKDOFKEMHP; // 0x4C
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
