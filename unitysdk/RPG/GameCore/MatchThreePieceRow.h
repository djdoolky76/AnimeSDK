#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class MatchThreePieceRow; }
namespace System { class String; }

#define RPG_GAMECORE_MATCHTHREEPIECEROW_CTOR_OFFSET UNITYSDK_OFFSET(0x1D8597F0)
#define RPG_GAMECORE_MATCHTHREEPIECEROW_FROMBINARY_OFFSET UNITYSDK_OFFSET(0x1D859170)

namespace RPG::GameCore
{
	class MatchThreePieceRow : public ::System::Object
	{
	public:
		::System::String* ImagePath; // 0x10
		::System::String* RowBombPath; // 0x18
		::System::String* SquareBombPath; // 0x20
		::System::UInt32 PieceID; // 0x28
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_MATCHTHREEPIECEROW_CTOR_OFFSET))(this);
		}

		static ::System::Void FromBinary(::FCOEMCEDLNL* a1, ::RPG::GameCore::MatchThreePieceRow* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::MatchThreePieceRow*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_MATCHTHREEPIECEROW_FROMBINARY_OFFSET))(a1, a2);
		}

	};
}
