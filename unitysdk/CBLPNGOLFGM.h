#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/EntityTypeMask.h"
#include "unitysdk/RPG/GameCore/RtStackSkillTargetRedirectPhase.h"
#include "unitysdk/RPG/GameCore/TeamTypeMask.h"
#include "unitysdk/System/Object.h"
namespace RPG::GameCore { class GameEntity; }

#define CBLPNGOLFGM_CLEAR_OFFSET UNITYSDK_OFFSET(0xC4AF770)
#define CBLPNGOLFGM_CTOR_OFFSET UNITYSDK_OFFSET(0xC4AF7C0)

	class CBLPNGOLFGM : public ::System::Object
	{
	public:
		::RPG::GameCore::GameEntity* MCLLALGABAB; // 0x10
		::RPG::GameCore::EntityTypeMask PCBEIEAONIF; // 0x18
		::System::Byte _padding0[0x4];
		::RPG::GameCore::TeamTypeMask OBMPNGFPNMG; // 0x20
		::RPG::GameCore::RtStackSkillTargetRedirectPhase IFDLJDHLPJM; // 0x24
		::System::Int32 NALMBOOCCIN; // 0x28
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CBLPNGOLFGM_CTOR_OFFSET))(this);
		}

		::System::Void Clear()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CBLPNGOLFGM_CLEAR_OFFSET))(this);
		}

	};
