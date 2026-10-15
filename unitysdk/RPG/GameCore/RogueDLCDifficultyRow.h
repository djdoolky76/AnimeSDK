#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class RogueDLCDifficultyRow; }

#define RPG_GAMECORE_ROGUEDLCDIFFICULTYROW_CTOR_OFFSET UNITYSDK_OFFSET(0x1D9C09E0)
#define RPG_GAMECORE_ROGUEDLCDIFFICULTYROW_FROMBINARY_OFFSET UNITYSDK_OFFSET(0x1D9C0840)

namespace RPG::GameCore
{
	inline static constexpr unsigned int RogueDLCDifficultyRow_TypeDefinitionIndex = 14766;

	class RogueDLCDifficultyRow : public ::System::Object
	{
	public:
		::Il2CppArray<::System::UInt32>* DifficultyCutList; // 0x10
		::Il2CppArray<::System::UInt32>* LevelList; // 0x18
		::System::UInt32 DifficultyID; // 0x20
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUEDLCDIFFICULTYROW_CTOR_OFFSET))(this);
		}

		static ::System::Void FromBinary(::FCOEMCEDLNL* a1, ::RPG::GameCore::RogueDLCDifficultyRow* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::RogueDLCDifficultyRow*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUEDLCDIFFICULTYROW_FROMBINARY_OFFSET))(a1, a2);
		}

	};
}
