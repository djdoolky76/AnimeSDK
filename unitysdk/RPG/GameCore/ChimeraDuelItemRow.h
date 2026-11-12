#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/TextID.h"
#include "unitysdk/RPG/GameCore/ChimeraDuelItemType.h"
#include "unitysdk/RPG/GameCore/ChimeraDuelItemVendor.h"
#include "unitysdk/System/Object.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class ChimeraDuelItemRow; }
namespace System { class String; }

#define RPG_GAMECORE_CHIMERADUELITEMROW_CTOR_OFFSET UNITYSDK_OFFSET(0x1E7B4180)
#define RPG_GAMECORE_CHIMERADUELITEMROW_FROMBINARY_OFFSET UNITYSDK_OFFSET(0x1E7B3DF0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int ChimeraDuelItemRow_TypeDefinitionIndex = 11144;

	class ChimeraDuelItemRow : public ::System::Object
	{
	public:
		::System::String* ShopItemIconPath; // 0x10
		::Il2CppArray<::System::UInt32>* SkillIDList; // 0x18
		::System::String* ChimeraItemIconPath; // 0x20
		::System::UInt32 Price; // 0x28
		::System::UInt32 EffectID; // 0x2C
		::RPG::GameCore::ChimeraDuelItemVendor Vendor; // 0x30
		::System::UInt32 Rarity; // 0x34
		::RPG::GameCore::ChimeraDuelItemType Type; // 0x38
		::System::UInt32 ItemID; // 0x3C
		::RPG::Client::TextID ItemName; // 0x40
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_CHIMERADUELITEMROW_CTOR_OFFSET))(this);
		}

		static ::System::Void FromBinary(::FCOEMCEDLNL* a1, ::RPG::GameCore::ChimeraDuelItemRow* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::ChimeraDuelItemRow*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_CHIMERADUELITEMROW_FROMBINARY_OFFSET))(a1, a2);
		}

	};
}
