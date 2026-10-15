#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/ChessRogueBoardAnimationType.h"
#include "unitysdk/RPG/GameCore/ModifierEffectType.h"
#include "unitysdk/RPG/GameCore/RogueSubMode.h"
#include "unitysdk/System/Object.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class RogueDLCChessBoardAnimationRow; }

#define RPG_GAMECORE_ROGUEDLCCHESSBOARDANIMATIONROW_CTOR_OFFSET UNITYSDK_OFFSET(0x1D990EF0)
#define RPG_GAMECORE_ROGUEDLCCHESSBOARDANIMATIONROW_FROMBINARY_OFFSET UNITYSDK_OFFSET(0x1D990810)

namespace RPG::GameCore
{
	inline static constexpr unsigned int RogueDLCChessBoardAnimationRow_TypeDefinitionIndex = 14774;

	class RogueDLCChessBoardAnimationRow : public ::System::Object
	{
	public:
		::RPG::GameCore::ModifierEffectType ModifierType; // 0x10
		::System::Boolean NeedCheckCoinChange; // 0x14
		::System::Byte _padding0[0x3];
		::RPG::GameCore::ChessRogueBoardAnimationType AnimationType; // 0x18
		::RPG::GameCore::RogueSubMode RogueSubMode; // 0x1C
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUEDLCCHESSBOARDANIMATIONROW_CTOR_OFFSET))(this);
		}

		static ::System::Void FromBinary(::FCOEMCEDLNL* a1, ::RPG::GameCore::RogueDLCChessBoardAnimationRow* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::RogueDLCChessBoardAnimationRow*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUEDLCCHESSBOARDANIMATIONROW_FROMBINARY_OFFSET))(a1, a2);
		}

	};
}
