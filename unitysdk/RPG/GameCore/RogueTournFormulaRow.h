#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/RogueFormulaCategory.h"
#include "unitysdk/RPG/GameCore/RogueTournMode.h"
#include "unitysdk/System/Object.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class RogueTournFormulaRow; }
namespace System { class String; }

#define RPG_GAMECORE_ROGUETOURNFORMULAROW_CTOR_OFFSET UNITYSDK_OFFSET(0x1EC4D9C0)
#define RPG_GAMECORE_ROGUETOURNFORMULAROW_FROMBINARY_OFFSET UNITYSDK_OFFSET(0x1EC4D0F0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int RogueTournFormulaRow_TypeDefinitionIndex = 15159;

	class RogueTournFormulaRow : public ::System::Object
	{
	public:
		::System::String* FormulaStoryJson; // 0x10
		::System::UInt32 FormulaDisplayID; // 0x18
		::RPG::GameCore::RogueFormulaCategory FormulaCategory; // 0x1C
		::System::UInt32 SubBuffTypeID; // 0x20
		::RPG::GameCore::RogueTournMode TournMode; // 0x24
		::System::UInt32 SubBuffNum; // 0x28
		::System::UInt32 FormulaID; // 0x2C
		::System::UInt32 MazeBuffID; // 0x30
		::System::UInt32 MainBuffNum; // 0x34
		::System::UInt32 MainBuffTypeID; // 0x38
		::System::Boolean IsInHandbook; // 0x3C
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUETOURNFORMULAROW_CTOR_OFFSET))(this);
		}

		static ::System::Void FromBinary(::FCOEMCEDLNL* a1, ::RPG::GameCore::RogueTournFormulaRow* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::RogueTournFormulaRow*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUETOURNFORMULAROW_FROMBINARY_OFFSET))(a1, a2);
		}

	};
}
