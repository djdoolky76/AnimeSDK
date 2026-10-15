#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/Match3/GridTag.h"
#include "unitysdk/RPG/GameCore/Match3/Match3ActionBase.h"
#include "unitysdk/RPG/GameCore/Match3/PieceTag.h"
class FCOEMCEDLNL;
namespace RPG::GameCore::Match3 { class Match3TagApplyPostAction; }

#define RPG_GAMECORE_MATCH3_MATCH3TAGAPPLYPOSTACTION_CTOR_OFFSET UNITYSDK_OFFSET(0x1D821140)
#define RPG_GAMECORE_MATCH3_MATCH3TAGAPPLYPOSTACTION_MGMEGEDLMAK_OFFSET UNITYSDK_OFFSET(0x1D821150)
#define RPG_GAMECORE_MATCH3_MATCH3TAGAPPLYPOSTACTION_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1D820F30)

namespace RPG::GameCore::Match3
{
	inline static constexpr unsigned int Match3TagApplyPostAction_TypeDefinitionIndex = 24939;

	class Match3TagApplyPostAction : public ::RPG::GameCore::Match3::Match3ActionBase
	{
	public:
		::Il2CppArray<::RPG::GameCore::Match3::PieceTag>* RemovePieceTags; // 0x18
		::Il2CppArray<::RPG::GameCore::Match3::GridTag>* RemoveGridTags; // 0x20
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_MATCH3_MATCH3TAGAPPLYPOSTACTION_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::Match3::Match3TagApplyPostAction* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::Match3::Match3TagApplyPostAction*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_MATCH3_MATCH3TAGAPPLYPOSTACTION_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

		static ::System::Void MGMEGEDLMAK(::FCOEMCEDLNL* a1, ::RPG::GameCore::Match3::Match3TagApplyPostAction* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::Match3::Match3TagApplyPostAction*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_MATCH3_MATCH3TAGAPPLYPOSTACTION_MGMEGEDLMAK_OFFSET))(a1, a2);
		}

	};
}
