#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/EntityTypeMask.h"
#include "unitysdk/RPG/GameCore/RtStackSkillTargetRedirectPhase.h"
#include "unitysdk/RPG/GameCore/TeamTypeMask.h"
#include "unitysdk/System/Object.h"
namespace RPG::GameCore { class GameEntity; }

#define CBLPNGOLFGM_CLEAR_OFFSET UNITYSDK_OFFSET(0xC4A82E0)
#define CBLPNGOLFGM_CTOR_OFFSET UNITYSDK_OFFSET(0xC4A8330)

inline static constexpr unsigned int CBLPNGOLFGM_TypeDefinitionIndex = 53737;

	class CBLPNGOLFGM : public ::System::Object
	{
	public:
		::RPG::GameCore::GameEntity* MCLLALGABAB; // 0x10
		::RPG::GameCore::TeamTypeMask OBMPNGFPNMG; // 0x18
		::RPG::GameCore::RtStackSkillTargetRedirectPhase IFDLJDHLPJM; // 0x1C
		::System::Int32 NALMBOOCCIN; // 0x20
		::System::Byte _padding0[0x4];
		::RPG::GameCore::EntityTypeMask PCBEIEAONIF; // 0x28
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CBLPNGOLFGM_CTOR_OFFSET))(this);
		}

		::System::Void Clear()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CBLPNGOLFGM_CLEAR_OFFSET))(this);
		}

	};
