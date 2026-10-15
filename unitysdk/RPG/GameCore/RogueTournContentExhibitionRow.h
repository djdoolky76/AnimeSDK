#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/RogueExhibitionType.h"
#include "unitysdk/System/Object.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class RogueTournContentExhibitionRow; }
namespace System { class String; }

#define RPG_GAMECORE_ROGUETOURNCONTENTEXHIBITIONROW_CTOR_OFFSET UNITYSDK_OFFSET(0x1DA09820)
#define RPG_GAMECORE_ROGUETOURNCONTENTEXHIBITIONROW_FROMBINARY_OFFSET UNITYSDK_OFFSET(0x1DA09600)

namespace RPG::GameCore
{
	inline static constexpr unsigned int RogueTournContentExhibitionRow_TypeDefinitionIndex = 15035;

	class RogueTournContentExhibitionRow : public ::System::Object
	{
	public:
		::System::String* ImagePath; // 0x10
		::System::String* IconPath; // 0x18
		::System::String* SlotIconPath; // 0x20
		::RPG::GameCore::RogueExhibitionType ExhibitionType; // 0x28
		::System::UInt32 ProgramGroupID; // 0x2C
		::System::UInt32 ExhibitionID; // 0x30
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUETOURNCONTENTEXHIBITIONROW_CTOR_OFFSET))(this);
		}

		static ::System::Void FromBinary(::FCOEMCEDLNL* a1, ::RPG::GameCore::RogueTournContentExhibitionRow* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::RogueTournContentExhibitionRow*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUETOURNCONTENTEXHIBITIONROW_FROMBINARY_OFFSET))(a1, a2);
		}

	};
}
