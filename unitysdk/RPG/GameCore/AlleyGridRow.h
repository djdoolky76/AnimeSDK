#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/TextID.h"
#include "unitysdk/RPG/GameCore/GridTypeEnum.h"
#include "unitysdk/System/Object.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class AlleyGridRow; }
namespace System { class String; }

#define RPG_GAMECORE_ALLEYGRIDROW_CTOR_OFFSET UNITYSDK_OFFSET(0x1E605C30)
#define RPG_GAMECORE_ALLEYGRIDROW_FROMBINARY_OFFSET UNITYSDK_OFFSET(0x1E605410)

namespace RPG::GameCore
{
	inline static constexpr unsigned int AlleyGridRow_TypeDefinitionIndex = 12661;

	class AlleyGridRow : public ::System::Object
	{
	public:
		::System::String* GridIcon; // 0x10
		::System::String* ShopInfoIcon; // 0x18
		::System::UInt32 RelatedEventID; // 0x20
		::System::UInt32 GridID; // 0x24
		::System::UInt32 RelatedMainMission; // 0x28
		::RPG::GameCore::GridTypeEnum GridType; // 0x2C
		::RPG::Client::TextID GridTitle; // 0x30
		::RPG::Client::TextID GridDesc; // 0x40
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ALLEYGRIDROW_CTOR_OFFSET))(this);
		}

		static ::System::Void FromBinary(::FCOEMCEDLNL* a1, ::RPG::GameCore::AlleyGridRow* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::AlleyGridRow*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ALLEYGRIDROW_FROMBINARY_OFFSET))(a1, a2);
		}

	};
}
