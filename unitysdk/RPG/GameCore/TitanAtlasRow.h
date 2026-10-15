#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/TextID.h"
#include "unitysdk/System/Object.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class TitanAtlasRow; }

#define RPG_GAMECORE_TITANATLASROW_CTOR_OFFSET UNITYSDK_OFFSET(0x1DB5CD00)
#define RPG_GAMECORE_TITANATLASROW_FROMBINARY_OFFSET UNITYSDK_OFFSET(0x1DB5CA50)

namespace RPG::GameCore
{
	inline static constexpr unsigned int TitanAtlasRow_TypeDefinitionIndex = 15298;

	class TitanAtlasRow : public ::System::Object
	{
	public:
		::System::UInt32 TitanVoicePoolID; // 0x10
		::System::UInt32 TitanID; // 0x14
		::RPG::Client::TextID TitanDesc; // 0x18
		::System::UInt32 TitanGroupID; // 0x28
		::System::UInt32 ChangeUnlockID; // 0x2C
		::RPG::Client::TextID TitanName; // 0x30
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_TITANATLASROW_CTOR_OFFSET))(this);
		}

		static ::System::Void FromBinary(::FCOEMCEDLNL* a1, ::RPG::GameCore::TitanAtlasRow* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::TitanAtlasRow*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_TITANATLASROW_FROMBINARY_OFFSET))(a1, a2);
		}

	};
}
