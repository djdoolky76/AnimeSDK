#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class RogueDLCChessBoardRow; }
namespace System { class String; }

#define RPG_GAMECORE_ROGUEDLCCHESSBOARDROW_CTOR_OFFSET UNITYSDK_OFFSET(0x1D992010)
#define RPG_GAMECORE_ROGUEDLCCHESSBOARDROW_FROMBINARY_OFFSET UNITYSDK_OFFSET(0x1D991E50)

namespace RPG::GameCore
{
	inline static constexpr unsigned int RogueDLCChessBoardRow_TypeDefinitionIndex = 14770;

	class RogueDLCChessBoardRow : public ::System::Object
	{
	public:
		::Il2CppArray<::System::UInt32>* ChessBoardEventList; // 0x10
		::System::String* ChessBoardConfiguration; // 0x18
		::System::UInt32 BlockCreatGroupID; // 0x20
		::System::UInt32 ChessBoardID; // 0x24
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUEDLCCHESSBOARDROW_CTOR_OFFSET))(this);
		}

		static ::System::Void FromBinary(::FCOEMCEDLNL* a1, ::RPG::GameCore::RogueDLCChessBoardRow* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::RogueDLCChessBoardRow*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUEDLCCHESSBOARDROW_FROMBINARY_OFFSET))(a1, a2);
		}

	};
}
