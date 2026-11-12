#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/ChimeraAbilityProgressBase.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class ChimeraBattleShowDither; }
namespace RPG::GameCore { class ChimeraBattleTargetEvaluator; }
namespace System { class String; }

#define RPG_GAMECORE_CHIMERABATTLESHOWDITHER_CTOR_OFFSET UNITYSDK_OFFSET(0x1E7A8AA0)
#define RPG_GAMECORE_CHIMERABATTLESHOWDITHER_MGMEGEDLMAK_OFFSET UNITYSDK_OFFSET(0x1E7A8AB0)
#define RPG_GAMECORE_CHIMERABATTLESHOWDITHER_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1E7AA2F0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int ChimeraBattleShowDither_TypeDefinitionIndex = 16034;

	class ChimeraBattleShowDither : public ::RPG::GameCore::ChimeraAbilityProgressBase
	{
	public:
		::RPG::GameCore::ChimeraBattleTargetEvaluator* Target; // 0x18
		::System::String* DitherAttachPoint; // 0x20
		::System::Single DitherTime; // 0x28
		::System::Single DitherTargetAlpha; // 0x2C
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_CHIMERABATTLESHOWDITHER_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::ChimeraBattleShowDither* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::ChimeraBattleShowDither*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_CHIMERABATTLESHOWDITHER_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

		static ::System::Void MGMEGEDLMAK(::FCOEMCEDLNL* a1, ::RPG::GameCore::ChimeraBattleShowDither* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::ChimeraBattleShowDither*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_CHIMERABATTLESHOWDITHER_MGMEGEDLMAK_OFFSET))(a1, a2);
		}

	};
}
