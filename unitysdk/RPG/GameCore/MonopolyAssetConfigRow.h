#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/TextID.h"
#include "unitysdk/System/Object.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class MonopolyAssetConfigRow; }
namespace System { class String; }

#define RPG_GAMECORE_MONOPOLYASSETCONFIGROW_CTOR_OFFSET UNITYSDK_OFFSET(0x1EAB6730)
#define RPG_GAMECORE_MONOPOLYASSETCONFIGROW_FROMBINARY_OFFSET UNITYSDK_OFFSET(0x1EAB6400)

namespace RPG::GameCore
{
	inline static constexpr unsigned int MonopolyAssetConfigRow_TypeDefinitionIndex = 12100;

	class MonopolyAssetConfigRow : public ::System::Object
	{
	public:
		::System::String* FigurePath; // 0x10
		::RPG::Client::TextID AssetName; // 0x18
		::RPG::Client::TextID AssetDesc; // 0x28
		::System::UInt32 BonusValue; // 0x38
		::System::UInt32 AssetID; // 0x3C
		::System::UInt32 Level; // 0x40
		::System::UInt32 TaxValue; // 0x44
		::System::UInt32 Price; // 0x48
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_MONOPOLYASSETCONFIGROW_CTOR_OFFSET))(this);
		}

		static ::System::Void FromBinary(::FCOEMCEDLNL* a1, ::RPG::GameCore::MonopolyAssetConfigRow* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::MonopolyAssetConfigRow*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_MONOPOLYASSETCONFIGROW_FROMBINARY_OFFSET))(a1, a2);
		}

	};
}
