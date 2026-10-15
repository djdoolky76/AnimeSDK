#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/TextID.h"
#include "unitysdk/System/Object.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class CakeDialogueRow; }

#define RPG_GAMECORE_CAKEDIALOGUEROW_CTOR_OFFSET UNITYSDK_OFFSET(0x1D546B30)
#define RPG_GAMECORE_CAKEDIALOGUEROW_FROMBINARY_OFFSET UNITYSDK_OFFSET(0x1D546970)

namespace RPG::GameCore
{
	inline static constexpr unsigned int CakeDialogueRow_TypeDefinitionIndex = 12932;

	class CakeDialogueRow : public ::System::Object
	{
	public:
		::System::UInt32 CatID; // 0x10
		::System::UInt32 ID; // 0x14
		::RPG::Client::TextID RuanMadeCakeDialogue; // 0x18
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_CAKEDIALOGUEROW_CTOR_OFFSET))(this);
		}

		static ::System::Void FromBinary(::FCOEMCEDLNL* a1, ::RPG::GameCore::CakeDialogueRow* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::CakeDialogueRow*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_CAKEDIALOGUEROW_FROMBINARY_OFFSET))(a1, a2);
		}

	};
}
