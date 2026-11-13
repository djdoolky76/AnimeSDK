#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/AvatarSkillTreePointTriggerKey.h"
#include "unitysdk/RPG/GameCore/BattleExtraPropertyAddition.h"
#include "unitysdk/RPG/GameCore/FixPoint.h"
#include "unitysdk/System/Object.h"
namespace System { class String; }

#define GNEBNHLMFAF_CTOR_OFFSET UNITYSDK_OFFSET(0x16CAC320)

inline static constexpr unsigned int GNEBNHLMFAF_TypeDefinitionIndex = 57544;

	class GNEBNHLMFAF : public ::System::Object
	{
	public:
		::Il2CppArray<::RPG::GameCore::AvatarSkillTreePointTriggerKey>* CDCGIMHKOMG; // 0x10
		::Il2CppArray<::System::String*>* BMJNCOENJAL; // 0x18
		::Il2CppArray<::System::UInt32>* BMFBKECOBOH; // 0x20
		::RPG::GameCore::BattleExtraPropertyAddition FODBMMCKAEN; // 0x28
		::System::Byte _padding0[0x4];
		::RPG::GameCore::FixPoint MNDFOPKBHKP; // 0x30
		::System::Void _ctor(::RPG::GameCore::BattleExtraPropertyAddition a1, ::RPG::GameCore::FixPoint a2, ::Il2CppArray<::System::UInt32>* a3)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::BattleExtraPropertyAddition, ::RPG::GameCore::FixPoint, ::Il2CppArray<::System::UInt32>*))((::PBYTE)hIl2Cpp + GNEBNHLMFAF_CTOR_OFFSET))(this, a1, a2, a3);
		}

	};
