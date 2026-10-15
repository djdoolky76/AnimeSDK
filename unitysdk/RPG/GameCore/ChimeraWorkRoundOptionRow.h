#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/ChimeraWorkRoundOptionType.h"
#include "unitysdk/System/Object.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class ChimeraWorkRoundOptionRow; }

#define RPG_GAMECORE_CHIMERAWORKROUNDOPTIONROW_CTOR_OFFSET UNITYSDK_OFFSET(0x1D583F30)
#define RPG_GAMECORE_CHIMERAWORKROUNDOPTIONROW_FROMBINARY_OFFSET UNITYSDK_OFFSET(0x1D583DD0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int ChimeraWorkRoundOptionRow_TypeDefinitionIndex = 13025;

	class ChimeraWorkRoundOptionRow : public ::System::Object
	{
	public:
		::Il2CppArray<::System::UInt32>* ParamList; // 0x10
		::System::UInt32 OptionID; // 0x18
		::RPG::GameCore::ChimeraWorkRoundOptionType Type; // 0x1C
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_CHIMERAWORKROUNDOPTIONROW_CTOR_OFFSET))(this);
		}

		static ::System::Void FromBinary(::FCOEMCEDLNL* a1, ::RPG::GameCore::ChimeraWorkRoundOptionRow* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::ChimeraWorkRoundOptionRow*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_CHIMERAWORKROUNDOPTIONROW_FROMBINARY_OFFSET))(a1, a2);
		}

	};
}
