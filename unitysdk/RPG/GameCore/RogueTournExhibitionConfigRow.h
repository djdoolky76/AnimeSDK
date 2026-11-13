#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/RogueExhibitionType.h"
#include "unitysdk/RPG/GameCore/RogueTournCollectionExhibitionPropFloor.h"
#include "unitysdk/System/Object.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class RogueTournExhibitionConfigRow; }

#define RPG_GAMECORE_ROGUETOURNEXHIBITIONCONFIGROW_CTOR_OFFSET UNITYSDK_OFFSET(0x1EF2BDA0)
#define RPG_GAMECORE_ROGUETOURNEXHIBITIONCONFIGROW_FROMBINARY_OFFSET UNITYSDK_OFFSET(0x1EF2BC40)

namespace RPG::GameCore
{
	inline static constexpr unsigned int RogueTournExhibitionConfigRow_TypeDefinitionIndex = 15151;

	class RogueTournExhibitionConfigRow : public ::System::Object
	{
	public:
		::System::UInt32 PaintingID; // 0x10
		::RPG::GameCore::RogueExhibitionType Type; // 0x14
		::RPG::GameCore::RogueTournCollectionExhibitionPropFloor Floor; // 0x18
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUETOURNEXHIBITIONCONFIGROW_CTOR_OFFSET))(this);
		}

		static ::System::Void FromBinary(::FCOEMCEDLNL* a1, ::RPG::GameCore::RogueTournExhibitionConfigRow* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::RogueTournExhibitionConfigRow*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUETOURNEXHIBITIONCONFIGROW_FROMBINARY_OFFSET))(a1, a2);
		}

	};
}
