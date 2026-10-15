#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/TextID.h"
#include "unitysdk/RPG/GameCore/PuzzleFunc.h"
#include "unitysdk/System/Object.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class MazePuzzleConfigRow; }
namespace System { class String; }

#define RPG_GAMECORE_MAZEPUZZLECONFIGROW_CTOR_OFFSET UNITYSDK_OFFSET(0x1D83D340)
#define RPG_GAMECORE_MAZEPUZZLECONFIGROW_FROMBINARY_OFFSET UNITYSDK_OFFSET(0x1D83CC70)

namespace RPG::GameCore
{
	inline static constexpr unsigned int MazePuzzleConfigRow_TypeDefinitionIndex = 14568;

	class MazePuzzleConfigRow : public ::System::Object
	{
	public:
		::System::String* IconPath; // 0x10
		::RPG::Client::TextID ShowFuncBtnHint; // 0x18
		::RPG::GameCore::PuzzleFunc PuzzleFuncType; // 0x28
		::System::Single DefaultCDDuration; // 0x2C
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_MAZEPUZZLECONFIGROW_CTOR_OFFSET))(this);
		}

		static ::System::Void FromBinary(::FCOEMCEDLNL* a1, ::RPG::GameCore::MazePuzzleConfigRow* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::MazePuzzleConfigRow*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_MAZEPUZZLECONFIGROW_FROMBINARY_OFFSET))(a1, a2);
		}

	};
}
