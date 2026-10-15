#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/CHMCAGBDPJH.h"
#include "unitysdk/RPG/Client/TextID.h"
#include "unitysdk/RPG/Client/UIFloatingTextType.h"
#include "unitysdk/RPG/GameCore/DamateTextFontStyle.h"
#include "unitysdk/RPG/GameCore/FixPoint.h"
#include "unitysdk/RPG/GameCore/TeamType.h"
#include "unitysdk/RPG/GameCore/UIDamageTextType.h"
#include "unitysdk/UnityEngine/Vector3.h"
#include "unitysdk/BGABPOKKOGD.h"
namespace RPG::GameCore { class GameEntity; }

#define NCCLPHOILBE_IOKFIOPLKDH_BHBHABIGGDI_OFFSET UNITYSDK_OFFSET(0x1F1E0)
#define NCCLPHOILBE_IOKFIOPLKDH_IBAMHNHGNCB_OFFSET UNITYSDK_OFFSET(0x1F240)

inline static constexpr unsigned int NCCLPHOILBE_IOKFIOPLKDH_TypeDefinitionIndex = 71592;

	struct alignas(8) NCCLPHOILBE_IOKFIOPLKDH
	{
		::RPG::GameCore::UIDamageTextType GMPGDEINODK; // 0x10
		::System::Single GAFENHHEBPG; // 0x14
		::System::Single HKGPLKJOCDH; // 0x18
		::System::Byte _padding0[0x4];
		::RPG::GameCore::GameEntity* MCLLALGABAB; // 0x20
		::RPG::GameCore::FixPoint IMKHIDEBGEB; // 0x28
		::RPG::Client::UIFloatingTextType JMNJKGNBNJN; // 0x30
		::System::Byte _padding1[0x4];
		::CHMCAGBDPJH MCAFCOEAPAB; // 0x38
		::UnityEngine::Vector3 CLABKMPLKGB; // 0x148
		::System::Byte _padding2[0x4];
		::RPG::Client::TextID BFLJGKBPMGE; // 0x158
		::RPG::GameCore::DamateTextFontStyle JFMKCFHNFDF; // 0x168
		::RPG::GameCore::TeamType BHBHABIGGDI()
		{
			return ((::RPG::GameCore::TeamType(*)(::PVOID))((::PBYTE)hIl2Cpp + NCCLPHOILBE_IOKFIOPLKDH_BHBHABIGGDI_OFFSET))(this);
		}

		::BGABPOKKOGD IBAMHNHGNCB()
		{
			return ((::BGABPOKKOGD(*)(::PVOID))((::PBYTE)hIl2Cpp + NCCLPHOILBE_IOKFIOPLKDH_IBAMHNHGNCB_OFFSET))(this);
		}

	};
