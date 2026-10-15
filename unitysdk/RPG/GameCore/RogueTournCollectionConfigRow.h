#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/RogueTournCollectionExhibitionPropFloor.h"
#include "unitysdk/System/Object.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class RogueTournCollectionConfigRow; }

#define RPG_GAMECORE_ROGUETOURNCOLLECTIONCONFIGROW_CTOR_OFFSET UNITYSDK_OFFSET(0x1DA08010)
#define RPG_GAMECORE_ROGUETOURNCOLLECTIONCONFIGROW_FROMBINARY_OFFSET UNITYSDK_OFFSET(0x1DA07F00)

namespace RPG::GameCore
{
	inline static constexpr unsigned int RogueTournCollectionConfigRow_TypeDefinitionIndex = 14993;

	class RogueTournCollectionConfigRow : public ::System::Object
	{
	public:
		::System::UInt32 PillarID; // 0x10
		::RPG::GameCore::RogueTournCollectionExhibitionPropFloor Floor; // 0x14
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUETOURNCOLLECTIONCONFIGROW_CTOR_OFFSET))(this);
		}

		static ::System::Void FromBinary(::FCOEMCEDLNL* a1, ::RPG::GameCore::RogueTournCollectionConfigRow* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::RogueTournCollectionConfigRow*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUETOURNCOLLECTIONCONFIGROW_FROMBINARY_OFFSET))(a1, a2);
		}

	};
}
