#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/TargetGenderType.h"
#include "unitysdk/System/Object.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class PlayerOutfitDetailRow; }
namespace System { class String; }

#define RPG_GAMECORE_PLAYEROUTFITDETAILROW_CTOR_OFFSET UNITYSDK_OFFSET(0x1D9367A0)
#define RPG_GAMECORE_PLAYEROUTFITDETAILROW_FROMBINARY_OFFSET UNITYSDK_OFFSET(0x1D936650)

namespace RPG::GameCore
{
	inline static constexpr unsigned int PlayerOutfitDetailRow_TypeDefinitionIndex = 14511;

	class PlayerOutfitDetailRow : public ::System::Object
	{
	public:
		::System::String* JsonPath; // 0x10
		::System::UInt32 OutfitID; // 0x18
		::RPG::GameCore::TargetGenderType TargetGenderType; // 0x1C
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_PLAYEROUTFITDETAILROW_CTOR_OFFSET))(this);
		}

		static ::System::Void FromBinary(::FCOEMCEDLNL* a1, ::RPG::GameCore::PlayerOutfitDetailRow* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::PlayerOutfitDetailRow*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_PLAYEROUTFITDETAILROW_FROMBINARY_OFFSET))(a1, a2);
		}

	};
}
