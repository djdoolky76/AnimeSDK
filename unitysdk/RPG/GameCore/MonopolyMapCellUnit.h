#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/JsonConfig.h"
#include "unitysdk/RPG/GameCore/MonopolyMapMoveType.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class MonopolyMapCellUnit; }
namespace System { class String; }

#define RPG_GAMECORE_MONOPOLYMAPCELLUNIT_CTOR_OFFSET UNITYSDK_OFFSET(0x1D8A37F0)
#define RPG_GAMECORE_MONOPOLYMAPCELLUNIT_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1D8A3590)

namespace RPG::GameCore
{
	inline static constexpr unsigned int MonopolyMapCellUnit_TypeDefinitionIndex = 16242;

	class MonopolyMapCellUnit : public ::RPG::GameCore::JsonConfig
	{
	public:
		::System::UInt32 MapID; // 0x10
		::System::UInt32 CellID; // 0x14
		::System::Boolean CanJump; // 0x18
		::System::Byte _padding0[0x3];
		::RPG::GameCore::MonopolyMapMoveType MoveType; // 0x1C
		::System::String* MoveAnimName; // 0x20
		::System::Single NextCellRotateAngle; // 0x28
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_MONOPOLYMAPCELLUNIT_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::MonopolyMapCellUnit* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::MonopolyMapCellUnit*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_MONOPOLYMAPCELLUNIT_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

	};
}
