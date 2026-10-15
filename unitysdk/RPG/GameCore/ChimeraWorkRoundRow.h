#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/TextID.h"
#include "unitysdk/System/Object.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class ChimeraWorkRoundRow; }
namespace System { class String; }

#define RPG_GAMECORE_CHIMERAWORKROUNDROW_CTOR_OFFSET UNITYSDK_OFFSET(0x1D5B1D50)
#define RPG_GAMECORE_CHIMERAWORKROUNDROW_FROMBINARY_OFFSET UNITYSDK_OFFSET(0x1D5B19D0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int ChimeraWorkRoundRow_TypeDefinitionIndex = 13023;

	class ChimeraWorkRoundRow : public ::System::Object
	{
	public:
		::System::String* ArrangeHintImage; // 0x10
		::Il2CppArray<::System::UInt32>* OptionList; // 0x18
		::Il2CppArray<::System::UInt32>* WorkList; // 0x20
		::Il2CppArray<::System::UInt32>* RecommendedArrangementPresets; // 0x28
		::Il2CppArray<::System::UInt32>* NewChimeraList; // 0x30
		::RPG::Client::TextID WarningText; // 0x38
		::System::Boolean IsSSR; // 0x48
		::System::Byte _padding0[0x3];
		::System::UInt32 RoundID; // 0x4C
		::System::UInt32 DisplayTeamID; // 0x50
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_CHIMERAWORKROUNDROW_CTOR_OFFSET))(this);
		}

		static ::System::Void FromBinary(::FCOEMCEDLNL* a1, ::RPG::GameCore::ChimeraWorkRoundRow* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::ChimeraWorkRoundRow*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_CHIMERAWORKROUNDROW_FROMBINARY_OFFSET))(a1, a2);
		}

	};
}
