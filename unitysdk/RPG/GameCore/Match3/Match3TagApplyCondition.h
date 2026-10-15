#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/Match3/BombType.h"
#include "unitysdk/RPG/GameCore/Match3/GridTag.h"
#include "unitysdk/RPG/GameCore/Match3/Match3ConditionBase.h"
#include "unitysdk/RPG/GameCore/Match3/PieceTag.h"
class FCOEMCEDLNL;
namespace RPG::GameCore::Match3 { class Match3TagApplyCondition; }

#define RPG_GAMECORE_MATCH3_MATCH3TAGAPPLYCONDITION_CTOR_OFFSET UNITYSDK_OFFSET(0x1D81F830)
#define RPG_GAMECORE_MATCH3_MATCH3TAGAPPLYCONDITION_MGMEGEDLMAK_OFFSET UNITYSDK_OFFSET(0x1D81F840)
#define RPG_GAMECORE_MATCH3_MATCH3TAGAPPLYCONDITION_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1D820EE0)

namespace RPG::GameCore::Match3
{
	inline static constexpr unsigned int Match3TagApplyCondition_TypeDefinitionIndex = 24938;

	class Match3TagApplyCondition : public ::RPG::GameCore::Match3::Match3ConditionBase
	{
	public:
		::Il2CppArray<::RPG::GameCore::Match3::BombType>* AvoidBombTypes; // 0x18
		::Il2CppArray<::RPG::GameCore::Match3::PieceTag>* AvoidPieceTags; // 0x20
		::Il2CppArray<::RPG::GameCore::Match3::GridTag>* AvoidGridTags; // 0x28
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_MATCH3_MATCH3TAGAPPLYCONDITION_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::Match3::Match3TagApplyCondition* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::Match3::Match3TagApplyCondition*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_MATCH3_MATCH3TAGAPPLYCONDITION_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

		static ::System::Void MGMEGEDLMAK(::FCOEMCEDLNL* a1, ::RPG::GameCore::Match3::Match3TagApplyCondition* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::Match3::Match3TagApplyCondition*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_MATCH3_MATCH3TAGAPPLYCONDITION_MGMEGEDLMAK_OFFSET))(a1, a2);
		}

	};
}
