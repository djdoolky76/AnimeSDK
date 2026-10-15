#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/TextID.h"
#include "unitysdk/RPG/GameCore/ChimeraDuelItemType.h"
#include "unitysdk/RPG/GameCore/ChimeraDuelItemVendor.h"
#include "unitysdk/System/Object.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class ChimeraDuelItemRow; }
namespace System { class String; }

#define RPG_GAMECORE_CHIMERADUELITEMROW_CTOR_OFFSET UNITYSDK_OFFSET(0x1D575A70)
#define RPG_GAMECORE_CHIMERADUELITEMROW_FROMBINARY_OFFSET UNITYSDK_OFFSET(0x1D5756E0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int ChimeraDuelItemRow_TypeDefinitionIndex = 11128;

	class ChimeraDuelItemRow : public ::System::Object
	{
	public:
		::System::String* ShopItemIconPath; // 0x10
		::System::String* ChimeraItemIconPath; // 0x18
		::Il2CppArray<::System::UInt32>* SkillIDList; // 0x20
		::System::UInt32 Rarity; // 0x28
		::System::UInt32 ItemID; // 0x2C
		::RPG::Client::TextID ItemName; // 0x30
		::RPG::GameCore::ChimeraDuelItemVendor Vendor; // 0x40
		::System::UInt32 Price; // 0x44
		::System::UInt32 EffectID; // 0x48
		::RPG::GameCore::ChimeraDuelItemType Type; // 0x4C
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
