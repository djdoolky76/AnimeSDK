#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/TextID.h"
#include "unitysdk/RPG/GameCore/PixAirContentRarity.h"
#include "unitysdk/RPG/GameCore/PixAirEquipTag.h"
#include "unitysdk/System/Object.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class PixAirContentConfigRow; }

#define RPG_GAMECORE_PIXAIRCONTENTCONFIGROW_CTOR_OFFSET UNITYSDK_OFFSET(0x1D919800)
#define RPG_GAMECORE_PIXAIRCONTENTCONFIGROW_FROMBINARY_OFFSET UNITYSDK_OFFSET(0x1D919510)

namespace RPG::GameCore
{
	inline static constexpr unsigned int PixAirContentConfigRow_TypeDefinitionIndex = 12139;

	class PixAirContentConfigRow : public ::System::Object
	{
	public:
		::Il2CppArray<::System::UInt32>* CoreTagIndexList; // 0x10
		::RPG::Client::TextID EventOptionDescribe; // 0x18
		::System::UInt32 ContentID; // 0x28
		::RPG::GameCore::PixAirContentRarity Rarity; // 0x2C
		::RPG::GameCore::PixAirEquipTag Tag; // 0x30
		::System::Byte _padding0[0x4];
		::RPG::Client::TextID Name; // 0x38
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_PIXAIRCONTENTCONFIGROW_CTOR_OFFSET))(this);
		}

		static ::System::Void FromBinary(::FCOEMCEDLNL* a1, ::RPG::GameCore::PixAirContentConfigRow* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::PixAirContentConfigRow*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_PIXAIRCONTENTCONFIGROW_FROMBINARY_OFFSET))(a1, a2);
		}

	};
}
