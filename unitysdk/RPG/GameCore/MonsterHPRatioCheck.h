#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/CompareType.h"
#include "unitysdk/RPG/GameCore/FixPoint.h"
#include "unitysdk/RPG/GameCore/TaskConfig.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class MonsterHPRatioCheck; }
namespace System { class String; }

#define RPG_GAMECORE_MONSTERHPRATIOCHECK_CTOR_OFFSET UNITYSDK_OFFSET(0x1D8B69C0)
#define RPG_GAMECORE_MONSTERHPRATIOCHECK_MGMEGEDLMAK_OFFSET UNITYSDK_OFFSET(0x1D8B69D0)
#define RPG_GAMECORE_MONSTERHPRATIOCHECK_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1D8B6990)

namespace RPG::GameCore
{
	inline static constexpr unsigned int MonsterHPRatioCheck_TypeDefinitionIndex = 22960;

	class MonsterHPRatioCheck : public ::RPG::GameCore::TaskConfig
	{
	public:
		::Il2CppArray<::System::String*>* MonsterTagList; // 0x18
		::RPG::GameCore::CompareType CompareType; // 0x20
		::System::Byte _padding0[0x4];
		::Il2CppArray<::RPG::GameCore::FixPoint>* TargetHPRatioList; // 0x28
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_MONSTERHPRATIOCHECK_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::MonsterHPRatioCheck* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::MonsterHPRatioCheck*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_MONSTERHPRATIOCHECK_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

		static ::System::Void MGMEGEDLMAK(::FCOEMCEDLNL* a1, ::RPG::GameCore::MonsterHPRatioCheck* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::MonsterHPRatioCheck*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_MONSTERHPRATIOCHECK_MGMEGEDLMAK_OFFSET))(a1, a2);
		}

	};
}
