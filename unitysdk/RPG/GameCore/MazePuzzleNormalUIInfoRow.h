#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class MazePuzzleNormalUIInfoRow; }
namespace System { class String; }

#define RPG_GAMECORE_MAZEPUZZLENORMALUIINFOROW_CTOR_OFFSET UNITYSDK_OFFSET(0x1D83F9C0)
#define RPG_GAMECORE_MAZEPUZZLENORMALUIINFOROW_FROMBINARY_OFFSET UNITYSDK_OFFSET(0x1D83F2C0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int MazePuzzleNormalUIInfoRow_TypeDefinitionIndex = 14035;

	class MazePuzzleNormalUIInfoRow : public ::System::Object
	{
	public:
		::System::String* Desc02; // 0x10
		::System::String* Desc01; // 0x18
		::System::String* Desc03; // 0x20
		::System::String* Title; // 0x28
		::System::UInt32 NormalModeID; // 0x30
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_MAZEPUZZLENORMALUIINFOROW_CTOR_OFFSET))(this);
		}

		static ::System::Void FromBinary(::FCOEMCEDLNL* a1, ::RPG::GameCore::MazePuzzleNormalUIInfoRow* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::MazePuzzleNormalUIInfoRow*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_MAZEPUZZLENORMALUIINFOROW_FROMBINARY_OFFSET))(a1, a2);
		}

	};
}
