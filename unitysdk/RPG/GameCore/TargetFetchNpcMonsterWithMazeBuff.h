#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/TargetEvaluator.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class TargetFetchNpcMonsterWithMazeBuff; }
namespace SimpleJSON { class JSONNode; }
namespace System { class String; }

#define RPG_GAMECORE_TARGETFETCHNPCMONSTERWITHMAZEBUFF_CTOR_OFFSET UNITYSDK_OFFSET(0x1DB36700)
#define RPG_GAMECORE_TARGETFETCHNPCMONSTERWITHMAZEBUFF_EOJLPDGNHEK_OFFSET UNITYSDK_OFFSET(0x1DB36830)
#define RPG_GAMECORE_TARGETFETCHNPCMONSTERWITHMAZEBUFF_LJACLBNEEEB_OFFSET UNITYSDK_OFFSET(0x1DB36800)
#define RPG_GAMECORE_TARGETFETCHNPCMONSTERWITHMAZEBUFF_MGMEGEDLMAK_OFFSET UNITYSDK_OFFSET(0x1DB36710)
#define RPG_GAMECORE_TARGETFETCHNPCMONSTERWITHMAZEBUFF_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1DB366D0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int TargetFetchNpcMonsterWithMazeBuff_TypeDefinitionIndex = 23891;

	class TargetFetchNpcMonsterWithMazeBuff : public ::RPG::GameCore::TargetEvaluator
	{
	public:
		::System::UInt32 MazeBuffID; // 0x10
		::System::Byte _padding0[0x4];
		::System::String* ModifierName; // 0x18
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_TARGETFETCHNPCMONSTERWITHMAZEBUFF_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::TargetFetchNpcMonsterWithMazeBuff* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::TargetFetchNpcMonsterWithMazeBuff*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_TARGETFETCHNPCMONSTERWITHMAZEBUFF_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

		static ::System::Void MGMEGEDLMAK(::FCOEMCEDLNL* a1, ::RPG::GameCore::TargetFetchNpcMonsterWithMazeBuff* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::TargetFetchNpcMonsterWithMazeBuff*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_TARGETFETCHNPCMONSTERWITHMAZEBUFF_MGMEGEDLMAK_OFFSET))(a1, a2);
		}

		static ::System::Void LJACLBNEEEB(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::TargetFetchNpcMonsterWithMazeBuff* a2)
		{
			return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::TargetFetchNpcMonsterWithMazeBuff*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_TARGETFETCHNPCMONSTERWITHMAZEBUFF_LJACLBNEEEB_OFFSET))(a1, a2);
		}

		static ::System::Void EOJLPDGNHEK(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::TargetFetchNpcMonsterWithMazeBuff* a2)
		{
			return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::TargetFetchNpcMonsterWithMazeBuff*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_TARGETFETCHNPCMONSTERWITHMAZEBUFF_EOJLPDGNHEK_OFFSET))(a1, a2);
		}

	};
}
