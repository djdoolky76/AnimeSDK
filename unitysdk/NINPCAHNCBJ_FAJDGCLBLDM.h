#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/JDMNPLMAKGE.h"
#include "unitysdk/RPG/Client/TextID.h"
#include "unitysdk/RPG/Client/UIFloatingTextType.h"
#include "unitysdk/RPG/GameCore/FixPoint.h"
#include "unitysdk/RPG/GameCore/TeamType.h"
#include "unitysdk/RPG/GameCore/UIDamageTextType.h"
#include "unitysdk/UnityEngine/Vector3.h"
#include "unitysdk/BGABPOKKOGD.h"
namespace RPG::GameCore { class GameEntity; }

#define NINPCAHNCBJ_FAJDGCLBLDM_BHBHABIGGDI_OFFSET UNITYSDK_OFFSET(0x216D0)
#define NINPCAHNCBJ_FAJDGCLBLDM_IBAMHNHGNCB_OFFSET UNITYSDK_OFFSET(0x21730)

	struct alignas(8) NINPCAHNCBJ_FAJDGCLBLDM
	{
		::RPG::GameCore::UIDamageTextType GMPGDEINODK; // 0x10
		::System::Single GAFENHHEBPG; // 0x14
		::System::Single HKGPLKJOCDH; // 0x18
		::System::Byte _padding0[0x4];
		::RPG::GameCore::GameEntity* MIAJNJNECOG; // 0x20
		::RPG::GameCore::GameEntity* MCLLALGABAB; // 0x28
		::RPG::GameCore::FixPoint IMKHIDEBGEB; // 0x30
		::RPG::Client::UIFloatingTextType JMNJKGNBNJN; // 0x38
		::System::Byte _padding1[0x4];
		::JDMNPLMAKGE EFFFBJBAFDM; // 0x40
		::UnityEngine::Vector3 CLABKMPLKGB; // 0xF8
		::System::Byte _padding2[0x4];
		::RPG::Client::TextID BFLJGKBPMGE; // 0x108
		::RPG::GameCore::TeamType BHBHABIGGDI()
		{
			return ((::RPG::GameCore::TeamType(*)(::PVOID))((::PBYTE)hIl2Cpp + NINPCAHNCBJ_FAJDGCLBLDM_BHBHABIGGDI_OFFSET))(this);
		}

		::BGABPOKKOGD IBAMHNHGNCB()
		{
			return ((::BGABPOKKOGD(*)(::PVOID))((::PBYTE)hIl2Cpp + NINPCAHNCBJ_FAJDGCLBLDM_IBAMHNHGNCB_OFFSET))(this);
		}

	};
