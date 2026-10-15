#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/GNEBNHLMFAF.h"
#include "unitysdk/RPG/GameCore/AvatarSkillTreePointTriggerKey.h"
#include "unitysdk/RPG/GameCore/BattleExtraPropertyAddition.h"
#include "unitysdk/RPG/GameCore/FixPoint.h"

#define DCDFGKMIOOM_CTOR_OFFSET UNITYSDK_OFFSET(0xE2409B0)

inline static constexpr unsigned int DCDFGKMIOOM_TypeDefinitionIndex = 56330;

	class DCDFGKMIOOM : public ::GNEBNHLMFAF
	{
	public:
		::Il2CppArray<::RPG::GameCore::AvatarSkillTreePointTriggerKey>* BJOKOIFLDCF; // 0x28
		::System::Void _ctor(::RPG::GameCore::BattleExtraPropertyAddition a1, ::RPG::GameCore::FixPoint a2, ::Il2CppArray<::System::UInt32>* a3)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::BattleExtraPropertyAddition, ::RPG::GameCore::FixPoint, ::Il2CppArray<::System::UInt32>*))((::PBYTE)hIl2Cpp + DCDFGKMIOOM_CTOR_OFFSET))(this, a1, a2, a3);
		}

	};
